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

class InkImage : Ink {

  ofImage *image;
  
public:
  InkImage(ofImage *image) {this->image = image;}

private:
  ofColor getColor(ofPoint position) {return image->getColor(position.x, position.y);}
};

#endif /* InkImage_hpp */
