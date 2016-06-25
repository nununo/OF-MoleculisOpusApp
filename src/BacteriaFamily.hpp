//
//  BacteriaFamily.hpp
//  MoleculisOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#ifndef BacteriaFamily_hpp
#define BacteriaFamily_hpp

#include "Bacteria.hpp"

class BacteriaFamily {
  
  std::list<Bacteria> mBacterias;
  bool bDead;
  Ink *ink;
  Configurator *configurator;
  
public:
  int familyTargetSize;
  int maxBacteriaSize;
  
  BacteriaFamily(Ink *ink, Configurator *configurator, int familyTargetSize, int maxBacteriaSize);
  void update();
  void draw();
  int particleCount();
  int bacteriaCount() {return mBacterias.size();}
  bool isDead() {return bDead;}
  void kill() {bDead = true;}
  void reset();
  
private:
  void init(int familyTargetSize, int maxBacteriaSize);
  void addBacterias();
};

#endif /* BacteriaFamily_hpp */
