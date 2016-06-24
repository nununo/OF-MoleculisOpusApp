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

class InkColor : public Ink {
private:
  ofColor *color;

public:
  InkColor(ofColor *color) {this->color = color;}
  ofColor getColor(ofPoint position) {return *this->color;}
};

#endif /* InkColor_hpp */
