#include "ofApp.h"

//#include "gSOAP/soapzssm_USCORElistmessagesProxy.h"
//#include "gSOAP/zssm_USCORElistmessages.nsmap"

//--------------------------------------------------------------
void ofApp::setup(){
  const char prdSoapEndpoint[] = "http://servicedesk.roff.pt/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages";
  const char devSoapEndpoint[] = "http://servicedesk.roff.pt:3262/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages";
  
  ssmClient = new SSMClient(devSoapEndpoint,
                            "OUTSYSTEMS",
                            "systemsout");
}

//--------------------------------------------------------------
void ofApp::update(){
  ssmClient->fetch();
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
