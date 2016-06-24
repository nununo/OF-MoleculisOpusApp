#pragma once

#include "ofMain.h"
#include "DataFetcher.hpp"
#include "PetriDish.hpp"
#include "ImageManager.hpp"

class ofApp : public ofBaseApp{

private:
  DataFetcher *dataFetcher;
  PetriDish petriDish;
  ImageManager *imageManager;
  
  TheData *fetchTheData();

public:
  void setup();
  void update();
  void draw();

  void keyPressed(int key);
  void windowResized(int w, int h);
};
