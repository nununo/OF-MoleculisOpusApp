//
//  Bacteria.hpp
//  MoleculisOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#ifndef Bacteria_hpp
#define Bacteria_hpp

#include "Particle.hpp"
#include "Configurator.hpp"
#include <list>

using namespace std;

class Bacteria {
  
  std::list<Particle> mParticles;
  ofPoint position;
  Configurator *configurator;
  bool bDead;
  
public:
  Bacteria(Ink *ink, Configurator *_configurator, int numParticles);
  void update();
  void draw();
  bool isDead() {return bDead;}
  void kill() {bDead = true;}
  int size() {return mParticles.size();}
  
private:
  void init();
};

#endif /* Bacteria_hpp */
