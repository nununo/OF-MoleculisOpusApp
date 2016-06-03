//
//  InkImage.cpp
//  MoleculisOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#include "InkImage.hpp"
#include "Constants.h"

/*--------------------------------------------------------------*/
ofColor InkImage::getColor(ofPoint position) {

  ofColor color;
  
    // get the color for this pixel's position
  uint offset = xy2offset(uint(position.x), uint(position.y));
      
  if (offset > (IMAGE_WIDTH * IMAGE_HEIGHT * 3))
    offset = IMAGE_WIDTH * IMAGE_HEIGHT * 3;
  
  color.r = this->pixels[offset];
  color.g = this->pixels[offset+1];
  color.b = this->pixels[offset+2];
  
  return color;
  
}

/*--------------------------------------------------------------*/
uint InkImage::xy2offset(uint x, uint y) {
  return (int(x) + (int(y) * IMAGE_WIDTH)) * 3;
}
