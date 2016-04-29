#include "ofApp.h"

#include "gSOAP/soapzssm_USCORElistmessagesProxy.h"
#include "gSOAP/zssm_USCORElistmessages.nsmap"


//--------------------------------------------------------------
void ofApp::setup(){
  
}

//--------------------------------------------------------------
void ofApp::update(){
<<<<<<< HEAD
 zssm_USCORElistmessagesProxy ssmProxy;

=======
  zssm_USCORElistmessagesProxy ssmProxy;
    _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES *listMessages = new _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES();
  _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse response;

  // Request timeout
>>>>>>> parent of f994d2f... Mysterious linking error
  ssmProxy.soap->connect_timeout = 15; // connect within 10s
  ssmProxy.soap->send_timeout = 5;     // send timeout is 5s
  ssmProxy.soap->recv_timeout = 10;     // receive timeout is 5s

<<<<<<< HEAD
//  ssmProxy.soap->user = @"OUTSYSTEMS";
//  ssmProxy.soap->password = @"systemout";
  
//  char myCharString[10] = "mystring";
//  ssmProxy.soap->user = [[NSString alloc] initWithUTF8String:myCharString]; http://www.dreamincode.net/forums/topic/223434-convert-charstring-to-nsstring/

  _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES *listMessages = new _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES();
  _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse response;
  
=======
  // HTTP Authentication
  ssmProxy.soap->userid = "OUTSYSTEMS";
  ssmProxy.soap->passwd = "systemsout";
  
  // Input parameters
  listMessages->ALL = "0";

  // SOAP call
>>>>>>> parent of f994d2f... Mysterious linking error
  if ( ssmProxy.Z_USCORESSM_USCORELIST_USCOREMESSAGES(listMessages, response) == SOAP_OK )
    std::cout << "OK" << std::endl;
  else
    ssmProxy.soap_stream_fault(std::cerr);
  ssmProxy.destroy();
<<<<<<< HEAD
=======

>>>>>>> parent of f994d2f... Mysterious linking error
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
