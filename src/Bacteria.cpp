//
//  Bacteria.cpp
//  MoleculisOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#include "Bacteria.hpp"
#include "Constants.h"

//--------------------------------------------------------------
Bacteria::Bacteria(Ink *ink, Configurator *_configurator, int numParticles) {
  this->configurator = _configurator;
  this->init();
  if (numParticles > BACTERIA_SIZE_MAX)
    numParticles = BACTERIA_SIZE_MAX;
  for (int j=0; j<numParticles; j++) {
    mParticles.push_back( Particle(ink,configurator,position) );
  }
}

//--------------------------------------------------------------
void Bacteria::init() {
  position.x = ofRandom(0, configurator->getImageSize().x);
  position.y = ofRandom(0, configurator->getImageSize().y);
  bDead = false;
}

//--------------------------------------------------------------
void Bacteria::update() {
  for( list<Particle>::iterator p = mParticles.begin(); p != mParticles.end(); ++p ){
    if (p->isDead()) {
      p = mParticles.erase(p);
      if (mParticles.size() == 0) {
        bDead = true;
      }
    } else {
      p->update();
    }
  }
}

//--------------------------------------------------------------
void Bacteria::draw() {
  for( list<Particle>::iterator p = mParticles.begin(); p != mParticles.end(); ++p ){
    p->draw();
  }
}

