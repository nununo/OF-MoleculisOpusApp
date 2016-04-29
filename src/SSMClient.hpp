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
  std::string getDate();
public:
  SSMClient(std::string username, std::string password);
  void fetch();
  
};

#endif /* SSMClient_hpp */
