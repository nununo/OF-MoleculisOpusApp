#include "ofApp.h"

//#include "gSOAP/soapzssm_USCORElistmessagesProxy.h"
//#include "gSOAP/zssm_USCORElistmessages.nsmap"

//--------------------------------------------------------------
void ofApp::setup(){
  // PRD http://servicedesk.roff.pt/sap/bc/srt/wsdl/flv_10002A111AD1/srvc_url/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages?sap-client=100
  // DEV http://servicedesk.roff.pt:3262/sap/bc/srt/wsdl/flv_10002A111AD1/bndg_url/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages?sap-client=100
  ssmClient = new SSMClient("http://servicedesk.roff.pt:3262/sap/bc/srt/wsdl/flv_10002A111AD1/bndg_url/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages?sap-client=100",
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
