//
//  SSMDataFetcher.hpp
//  MoleculisOpusApp
//
//  Created by Nuno on 20/05/16.
//
//

#ifndef SSMDataFetcher_hpp
#define SSMDataFetcher_hpp

#include "DataFetcher.hpp"
#include "SSMClient.hpp"

#include <stdio.h>

/// Decorator of SSMClient
class SSMDataFetcher : public DataFetcher
{
private:
  SSMClient *ssmClient;
  TheData *theData;

  TheData *convert2TheData(_ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse *listMessages);
  
public:
  SSMDataFetcher(const char *soap_endpoint,
            const char *username,
            const char *password);
  ~SSMDataFetcher();
  TheData *fetch(struct tm *ptm);
  TheData *get() {return theData;}
};

#endif /* SSMDataFetcher_hpp */
