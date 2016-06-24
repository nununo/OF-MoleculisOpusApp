//
//  particle.cpp
//  MoleculisOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#include "Particle.hpp"
#include "Constants.h"

/*--------------------------------------------------------------*/
Particle::Particle(Ink *ink, ofPoint position) {
  this->ink =ink;
  this->init(position);
}

/*--------------------------------------------------------------*/
void Particle::init(ofPoint position) {
  this->position = position;
  this->lifeSpan = ofRandom(MINIMUM_LIFE_EXPECTANCY, MAXIMUM_LIFE_EXPECTANCY);
  this->age = 0;
  this->bDead = false;
}

/*--------------------------------------------------------------*/
void Particle::update() {
  age++;
  
  if (age>lifeSpan)
    bDead = true;
  
  if (!bDead) {
    position.x += ofRandom(-1, 1);
    position.y += ofRandom(-1, 1);
  }
}



/*--------------------------------------------------------------*/
void Particle::draw() {
  if (!bDead) {
    ofColor color = ink->getColor(this->position);
    ofEnableAlphaBlending();
    ofSetColor(color.r, color.g, color.b, PIXEL_TRANSPARENCY);
    ofDrawRectangle(position.x+OFFSET_WIDTH, position.y+OFFSET_HEIGHT, 1,1);
    ofDisableAlphaBlending();
  }
}
