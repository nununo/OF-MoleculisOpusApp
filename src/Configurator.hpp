//
//  Configurator.hpp
//  BacteriaeOpusApp
//
//  Created by Nuno on 24/06/16.
//
//

#ifndef Configurator_hpp
#define Configurator_hpp

#include <stdio.h>
#include "ofxXmlSettings.h"

class Configurator {
  string imageFolder;
  ofVec2f imageSize;
  int transparency;
  
public:
  Configurator(string path);
  string getImageFolder() {return imageFolder;}
  ofVec2f getImageSize() {return imageSize;}
  int getTransparency() {return transparency;}
};

#endif /* Configurator_hpp */
