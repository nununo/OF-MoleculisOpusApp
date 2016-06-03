//
//  particle.hpp
//  MoleculisOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#ifndef particle_hpp
#define particle_hpp

#include "ofMain.h"
#include "Ink.hpp"

class Particle {

private:
  Ink *ink;
  ofPoint position;
  uint lifeSpan;
  uint age;
  bool bDead;
  void init(ofPoint position);

public:
  Particle(Ink *ink, ofPoint initialPosition);
  void update();
  int x() {return position.x;}
  int y() {return position.y;}
  bool isDead() {return bDead;}
  virtual void draw();

};

#endif /* particle_hpp */
