#pragma once

#include "ofMain.h"
#include "DataFetcher.hpp"
#include "PetriDish.hpp"
#include "ImageManager.hpp"
#include "Configurator.hpp"

class ofApp : public ofBaseApp{
  
private:
  DataFetcher *dataFetcher;
  PetriDish *petriDish;
  ImageManager *imageManager;
  Configurator *configurator;
  vector<string> arguments;
  
  TheData *fetchTheData();
  string getConfiguratorPath() {return arguments.at(0);}
  
public:
  ofApp() {};
  void setup();
  void update();
  void draw();
  
  void keyPressed(int key);
  void windowResized(int w, int h);
  
  void setArguments(vector<string> args) {arguments = args;}
};
