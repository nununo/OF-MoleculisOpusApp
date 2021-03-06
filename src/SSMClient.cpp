//
//  SSMClient.cpp
//  MoleculisOpusApp
//
//  Created by Nuno on 18/03/16.
//
//

#include "SSMClient.hpp"
#include "gSOAP/zssm_USCORElistmessages.nsmap"

//--------------------------------------------------------------
SSMClient::SSMClient(const char *soap_endpoint,
                     const char *username,
                     const char *password) {
  
  // Request timeout
  ssmProxy.soap->connect_timeout = 15; // connect within 10s
  ssmProxy.soap->send_timeout = 50;     // send timeout is 5s
  ssmProxy.soap->recv_timeout = 50;     // receive timeout is 5s
  
  // SOAP endpoint url
  ssmProxy.soap_endpoint = soap_endpoint;
  
  // HTTP Authentication
  ssmProxy.soap->userid = username; // "OUTSYSTEMS"
  ssmProxy.soap->passwd = password; // "systemsout"
}

//--------------------------------------------------------------
_ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse *SSMClient::fetch(struct tm *ptm) {
  
  _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES *listMessages = new _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES();
  
  _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse *response;
  
  // Input parameters
  //listMessages->DATA = getDateAsString(ptm);
  listMessages->DATA = "2016-04-01";
  
  response = new _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse;
  
  // SOAP call
  if ( ssmProxy.Z_USCORESSM_USCORELIST_USCOREMESSAGES(listMessages, *response) == SOAP_OK )
    std::cout << "OK" << std::endl;
  else
    // XXX I still need to handle this error
    ssmProxy.soap_stream_fault(std::cerr);
  ssmProxy.destroy();

  return response;
}

//--------------------------------------------------------------
std::string SSMClient::getDateAsString(struct tm *ptm) {
  
  time_t rawtime;
  
  time (&rawtime);
  ptm = gmtime ( &rawtime );
  
  std::string year = std::to_string(1900 + ptm->tm_year);
  std::string month = std::to_string(1 + ptm->tm_mon);
  std::string day = std::to_string(ptm->tm_mday);
  
  return year + "-" + std::string(2 - month.length(), '0') + month + "-" + std::string(2 - day.length(), '0') + day;
}
