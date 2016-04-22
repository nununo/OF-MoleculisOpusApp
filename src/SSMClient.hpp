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
#include "gSOAP/zssm_USCORElistmessages.nsmap"

class SSMClient {
  //zssm_USCORElistmessagesProxy ssmProxy;
  _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES *listMessages = new _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES();
  _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse response;

private:
  std::string getDate();
public:
  SSMClient(std::string username, std::string password);
  void fetch();

};

#endif /* SSMClient_hpp */
