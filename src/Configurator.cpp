//
//  Configurator.cpp
//  BacteriaeOpusApp
//
//  Created by Nuno on 24/06/16.
//
//

#include "Configurator.hpp"

Configurator::Configurator(string path) {
  ofxXmlSettings XML;
  
  if (!XML.loadFile(path)) {
    // Abort
  } else {
    imageFolder = XML.getValue("config:imageFolder", "");
    imageSize.x = XML.getValue("config:imageWidth", 0);
    imageSize.y = XML.getValue("config:imageHeight", 0);
    transparency = XML.getValue("config:transparency", 0);
  }
}
