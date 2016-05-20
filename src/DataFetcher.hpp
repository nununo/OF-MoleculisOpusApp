//
//  DataFetcher.hpp
//  MoleculisOpusApp
//
//  Created by Nuno on 20/05/16.
//
//

#ifndef DataFetcher_hpp
#define DataFetcher_hpp

#include "TheData.hpp"

class DataFetcher
{
public:
  DataFetcher(){}
  virtual ~DataFetcher(){}
  virtual TheData *fetch(struct tm *ptm)=0;
  virtual TheData *get()=0;
};

#endif /* DataFetcher_hpp */
