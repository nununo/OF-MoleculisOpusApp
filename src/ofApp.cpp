#include "ofApp.h"

#include "TheData.hpp"
#include "SSMDataFetcher.hpp"
#include "InkImage.hpp"

//--------------------------------------------------------------
void ofApp::setup(){
  const char prdSoapEndpoint[] = "http://servicedesk.roff.pt/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages";
  const char devSoapEndpoint[] = "http://servicedesk.roff.pt:3262/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages";
  
  dataFetcher = new SSMDataFetcher(devSoapEndpoint,
                            "OUTSYSTEMS",
                            "systemsout");

  imageManager = new ImageManager();
  
  petriDish.addFamily("1", 100, 100, new InkImage(imageManager->getImage(0)));
}

//--------------------------------------------------------------
void ofApp::update(){
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

//--------------------------------------------------------------
TheData *ofApp::fetchTheData() {
  time_t rawtime;
  struct tm *ptm;
  
  time (&rawtime);
  ptm = gmtime ( &rawtime );
  
  return dataFetcher->fetch(ptm);
}

