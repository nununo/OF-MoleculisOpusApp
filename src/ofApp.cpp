#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ssmClient = new SSMClient("OUTSYSTEMS", "systemsout");
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
