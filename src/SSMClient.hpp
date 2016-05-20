//
//  SSMClient.hpp
//  MoleculisOpusApp
//
//  Created by Nuno on 18/03/16.
//
//

#ifndef SSMClient_hpp
#define SSMClient_hpp

#include <stdio.h>
#include <string>

#include "gSOAP/soapzssm_USCORElistmessagesProxy.h"

class SSMClient {
  zssm_USCORElistmessagesProxy ssmProxy;

  
private:
  std::string getDateAsString(struct tm *ptm);
public:
  SSMClient(const char *soap_endpoint,
            const char *username,
            const char *password);
  _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse *fetch(struct tm *ptm);
  
};

#endif /* SSMClient_hpp */
