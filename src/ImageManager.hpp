//
//  ImageManager.hpp
//  BacteriaeOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#ifndef ImageManager_hpp
#define ImageManager_hpp

#include <vector>
#include "ofMain.h"
#include "Configurator.hpp"

class ImageManager {

private:
  int imageCount;
  ofImage  *myImages; // We must keep them or else the pixels vanish from memory
  Configurator *configurator;
  
  int getFilesFromFolder (string dir, vector<string> &files);
  void loadImages();
  
public:
  ImageManager(Configurator *_configurator) {this->configurator = _configurator; loadImages();}
  int getImageCount() {return imageCount;}
  ofImage *getImage(int index) {return &myImages[index];}
};

#endif /* ImageManager_hpp */
