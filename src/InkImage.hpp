//
//  InkImage.hpp
//  MoleculisOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#ifndef InkImage_hpp
#define InkImage_hpp

#include "Ink.hpp"

class InkImage : Ink {

  unsigned char *pixels;
  uint xy2offset(uint x, uint y);
  
public:
  InkImage(unsigned char *pixels) {this->pixels = pixels;}

private:
  ofColor getColor(ofPoint position);
};

#endif /* InkImage_hpp */
