#pragma once

#include "ofMain.h"
#include "DataFetcher.hpp"

class ofApp : public ofBaseApp{

  private:
    DataFetcher *dataFetcher;
	
  public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void windowResized(int w, int h);
		
};
