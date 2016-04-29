#include "ofApp.h"

#include "gSOAP/soapzssm_USCORElistmessagesProxy.h"
#include "gSOAP/zssm_USCORElistmessages.nsmap"

//--------------------------------------------------------------
void ofApp::setup(){
  
}

//--------------------------------------------------------------
void ofApp::update(){
  zssm_USCORElistmessagesProxy ssmProxy;
  
  _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES *listMessages = new _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES();
  _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse response;
  
  // Request timeout
  ssmProxy.soap->connect_timeout = 15; // connect within 10s
  ssmProxy.soap->send_timeout = 5;     // send timeout is 5s
  ssmProxy.soap->recv_timeout = 10;     // receive timeout is 5s
  
  // HTTP Authentication
  ssmProxy.soap->userid = "OUTSYSTEMS";
  ssmProxy.soap->passwd = "systemsout";
  
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
void ofApp::draw(){
  
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
  
}
