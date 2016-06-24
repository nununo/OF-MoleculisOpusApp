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
public:
  Ink(){}
  virtual ~Ink(){}
  virtual ofColor getColor(ofPoint position)=0;
};

#endif /* Ink_hpp */
