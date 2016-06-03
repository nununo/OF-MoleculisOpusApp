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
  
public:
  int familyTargetSize;
  int maxBacteriaSize;
  
  BacteriaFamily(int familyTargetSize, int maxBacteriaSize, Ink *ink);
  void update();
  void draw();
  int particleCount();
  int bacteriaCount() {return mBacterias.size();}
  bool isDead() {return bDead;}
  void kill() {bDead = true;}
  void reset();
  //	void setMaxBacteriaSize(int maxBacteriaSize) {this->maxBacteriaSize = maxBacteriaSize;}
  //	int getMaxBacteriaSize() {return this->maxBacteriaSize;}
  //	void setFamilyTargetSize(int familyTargetSize) {this->familyTargetSize = familyTargetSize;}
  //	int getFamilyTargetSize() {return this->familyTargetSize;}
  
private:
  void init(int familyTargetSize, int maxBacteriaSize);
  void addBacterias();
};

#endif /* BacteriaFamily_hpp */
