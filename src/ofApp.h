#pragma once

#include "ofMain.h"
#include "SSMClient.hpp"

class ofApp : public ofBaseApp{

  SSMClient *ssmClient;
  
	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void windowResized(int w, int h);
		
};
