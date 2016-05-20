//
//  SSMDataFetcher.cpp
//  MoleculisOpusApp
//
//  Created by Nuno on 20/05/16.
//
//

#include "SSMDataFetcher.hpp"

//-------------------------------------------------------
SSMDataFetcher::SSMDataFetcher(const char *soap_endpoint,
                               const char *username,
                               const char *password) {
// We are just a decorator, let's create the underlying class
  ssmClient = new SSMClient( soap_endpoint, username, password);
};

//-------------------------------------------------------
SSMDataFetcher::~SSMDataFetcher() {
  free(ssmClient);
};

//-------------------------------------------------------
TheData *SSMDataFetcher::fetch(struct tm *ptm) {
  // Fetch listMessages and convert it to internal format
  return convert2TheData( ssmClient->fetch(ptm) );
};

//-------------------------------------------------------
TheData *SSMDataFetcher::convert2TheData(_ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse *response) {
  
  // Create data object
  TheData *theData = new TheData();

  // Convert
  // ...
};
