//
//  InkColor.hpp
//  MoleculisOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#ifndef InkColor_hpp
#define InkColor_hpp

#include "Ink.hpp"

class InkColor : Ink {
  
  ofColor color;

protected:
  ofColor getColor(ofPoint position) {return color;}

public:
  InkColor(ofColor color) {this->color = color;}
};

#endif /* InkColor_hpp */
