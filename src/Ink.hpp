//
//  Ink.h
//  BateriaeOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#ifndef Ink_hpp
#define Ink_hpp

#include "ofMain.h"

class Ink
{
  int transparency;
  
public:
  Ink(int _transparency){ transparency = _transparency;}
  virtual ~Ink(){}
  virtual ofColor getColor(ofPoint position)=0;
  virtual int getTransparency() {return transparency;}
};

#endif /* Ink_hpp */
