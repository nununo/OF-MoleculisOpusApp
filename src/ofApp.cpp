#include "ofApp.h"

#include "TheData.hpp"
#include "SSMDataFetcher.hpp"

//--------------------------------------------------------------
void ofApp::setup(){
  const char prdSoapEndpoint[] = "http://servicedesk.roff.pt/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages";
  const char devSoapEndpoint[] = "http://servicedesk.roff.pt:3262/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages";
  
  dataFetcher = new SSMDataFetcher(devSoapEndpoint,
                            "OUTSYSTEMS",
                            "systemsout");
}

//--------------------------------------------------------------
void ofApp::update(){
  time_t rawtime;
  struct tm *ptm;
  
  time (&rawtime);
  ptm = gmtime ( &rawtime );
  
  TheData *theData = dataFetcher->fetch(ptm);
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
