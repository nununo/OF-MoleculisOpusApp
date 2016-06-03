//
//  Molecule.hpp
//  MoleculisOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#ifndef Molecule_hpp
#define Molecule_hpp

#include "Particle.hpp"
#include <list>

using namespace std;

class Bacteria {
  
  std::list<Particle> mParticles;
  ofPoint position;
  bool bDead;
  
public:
  Bacteria(Ink *ink, int numParticles);
  void update();
  void draw();
  bool isDead() {return bDead;}
  void kill() {bDead = true;}
  int size() {return mParticles.size();}
  
private:
  void init();
};

#endif /* Molecule_hpp */
