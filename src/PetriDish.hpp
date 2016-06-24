//
//  PetriDish.hpp
//  BacteriaeOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#ifndef PetriDish_hpp
#define PetriDish_hpp

#include "BacteriaFamily.hpp"
#include "Ink.hpp"
#include <map>

class PetriDish {
  std::map<string, BacteriaFamily> mFamilies;
  
public:
  PetriDish() {};
  void update();
  void draw();
  void addFamily(string familyName, int familyTargetSize, int maxBacteriaSize, Ink *ink);
  int familyCount() {return mFamilies.size();}
  int bacteriaCount();
  int particleCount();
  void writeStatus();
  void reset();
  BacteriaFamily *getFamily(string familyName) {return &mFamilies.find(familyName)->second;}
};


#endif /* PetriDish_hpp */
