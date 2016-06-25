//
//  InkImage.hpp
//  MoleculisOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#ifndef InkImage_hpp
#define InkImage_hpp

#include "ofMain.h"
#include "Ink.hpp"

class InkImage : public Ink {

  ofImage *image;
  
public:
  InkImage(ofImage *image, int _transparency) : Ink(_transparency) {this->image = image;}
  ofColor getColor(ofPoint position) {return image->getColor(position.x, position.y);}
};

#endif /* InkImage_hpp */
