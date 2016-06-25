//
//  BacteriaFamily.cpp
//  MoleculisOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#include "BacteriaFamily.hpp"
#include "Constants.h"

//--------------------------------------------------------------
BacteriaFamily::BacteriaFamily(Ink *_ink, Configurator *_configurator, int maxBacteriaSize, int familyTargetSize) {
  this->ink = _ink;
  this->configurator = _configurator;
  this->init(familyTargetSize, maxBacteriaSize);
}

//--------------------------------------------------------------
void BacteriaFamily::init(int familyTargetSize, int maxBacteriaSize) {
  this->bDead = false;
  this->familyTargetSize = familyTargetSize;
  this->maxBacteriaSize = maxBacteriaSize;
  this->addBacterias();
}

//--------------------------------------------------------------
void BacteriaFamily::reset() {
  bDead = false;
  for( list<Bacteria>::iterator b = mBacterias.begin(); b != mBacterias.end(); ++b ){
    b = mBacterias.erase(b);
  }
  this->addBacterias();
}

//--------------------------------------------------------------
void BacteriaFamily::addBacterias() {
  
  if (this->familyTargetSize > FAMILY_TARGET_SIZE_MAX)
    this->familyTargetSize = FAMILY_TARGET_SIZE_MAX;
  
  while (mBacterias.size() < this->familyTargetSize) {
    mBacterias.push_back( Bacteria(this->ink, this->configurator, ofRandom(BACTERIA_SIZE_MIN, maxBacteriaSize)) );
  }
}

//--------------------------------------------------------------
int BacteriaFamily::particleCount() {
  int count = 0;
  for( list<Bacteria>::iterator b = mBacterias.begin(); b != mBacterias.end(); ++b ){
    count += b->size();
  }
  return count;
}

//--------------------------------------------------------------
void BacteriaFamily::update() {
  if (!bDead) {
    for( list<Bacteria>::iterator b = mBacterias.begin(); b != mBacterias.end(); ++b ){
      if (b->isDead()) {
        b = mBacterias.erase(b);
        if (mBacterias.size() == 0) {
          bDead = true;
        }
      } else {
        b->update();
      }
    }
    this->addBacterias();
  }
}

//--------------------------------------------------------------
void BacteriaFamily::draw() {
  if (!bDead) {
    for( list<Bacteria>::iterator b = mBacterias.begin(); b != mBacterias.end(); ++b ) {
      b->draw();
    }
  }
  
}
