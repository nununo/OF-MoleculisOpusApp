//
//  PetriDish.cpp
//  BacteriaeOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#include "PetriDish.hpp"

//--------------------------------------------------------------
void PetriDish::reset() {
  for( map<string, BacteriaFamily>::iterator f = mFamilies.begin(); f != mFamilies.end(); ++f ) {
    f->second.reset();
  }
}

//--------------------------------------------------------------
void PetriDish::update() {
  for( map<string, BacteriaFamily>::iterator f = mFamilies.begin(); f != mFamilies.end(); ++f ) {
    if (f->second.isDead()) {
      mFamilies.erase(f);
    } else {
      f->second.update();
    }
  }
}

//--------------------------------------------------------------
void PetriDish::draw() {
  for( map<string, BacteriaFamily>::iterator f = mFamilies.begin(); f != mFamilies.end(); ++f ){
    f->second.draw();
  }
}

//--------------------------------------------------------------
void PetriDish::addFamily(string familyName, int familyTargetSize, int maxBacteriaSize, Ink *ink) {
  mFamilies.insert(make_pair(familyName, BacteriaFamily(ink, configurator, familyTargetSize, maxBacteriaSize)));
  //mFamilies[familyName] = ;
}

//--------------------------------------------------------------
int PetriDish::bacteriaCount() {
  int count = 0;
  for( map<string, BacteriaFamily>::iterator f = mFamilies.begin(); f != mFamilies.end(); ++f ){
    count += f->second.bacteriaCount();
  }
  return count;
}

//--------------------------------------------------------------
int PetriDish::particleCount() {
  int count = 0;
  for( map<string, BacteriaFamily>::iterator f = mFamilies.begin(); f != mFamilies.end(); ++f ){
    count += f->second.particleCount();
  }
  return count;
}

//--------------------------------------------------------------
void PetriDish::writeStatus() {
  for( map<string, BacteriaFamily>::iterator f = mFamilies.begin(); f != mFamilies.end(); ++f ){
    cout << "f:" << f->first << " bacterias:" << f->second.bacteriaCount() << " particles:" << f->second.particleCount() << "\n";
  }
}
