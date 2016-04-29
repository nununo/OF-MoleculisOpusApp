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
SSMClient::SSMClient(std::string username, std::string password) {
  // Request timeout
  ssmProxy.soap->connect_timeout = 15; // connect within 10s
    ssmProxy.soap->send_timeout = 50;     // send timeout is 5s
    ssmProxy.soap->recv_timeout = 50;     // receive timeout is 5s
  
  //ssmProxy.soap_endpoint = "http://roffcloud4.roff.pt:8001/sap/bc/srt/wsdl/flv_10002A111AD1/bndg_url/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages?sap-client=100";
  
  // HTTP Authentication
  //ssmProxy.soap->userid = "OUTSYSTEMS";
  //ssmProxy.soap->passwd = "systemsout";
  ssmProxy.soap->userid = username.c_str();
  ssmProxy.soap->passwd = password.c_str();
}

//--------------------------------------------------------------
void SSMClient::fetch() {
  _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES *listMessages = new _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES();
  _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse response;
  
    // Input parameters
    //listMessages->ALL = "0";
    listMessages->DATA = "2016-04-21";
  
    // SOAP call
    if ( ssmProxy.Z_USCORESSM_USCORELIST_USCOREMESSAGES(listMessages, response) == SOAP_OK )
      std::cout << "OK" << std::endl;
    else
      ssmProxy.soap_stream_fault(std::cerr);
    ssmProxy.destroy();
  
}

//--------------------------------------------------------------
std::string SSMClient::getDate() {
  
  time_t rawtime;
  struct tm *ptm;
  
  time (&rawtime);
  ptm = gmtime ( &rawtime );
  
  std::string year = std::to_string(ptm->tm_year);
  std::string month = std::to_string(ptm->tm_mon);
  std::string day = std::to_string(ptm->tm_mday);
  
  return year + "-" + std::string(2 - month.length(), '0') + month + "-" + std::string(2 - day.length(), '0') + day;
}
