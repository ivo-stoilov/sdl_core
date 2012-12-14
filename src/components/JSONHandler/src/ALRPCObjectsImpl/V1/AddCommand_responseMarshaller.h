#ifndef NSAPPLINKRPC_ADDCOMMAND_RESPONSEMARSHALLER_INCLUDE
#define NSAPPLINKRPC_ADDCOMMAND_RESPONSEMARSHALLER_INCLUDE

#include <string>
#include <json/json.h>

#include "../include/JSONHandler/ALRPCObjects/V1/AddCommand_response.h"


/*
  interface	Ford Sync RAPI
  version	1.2
  date		2011-05-17
  generated at	Fri Dec 14 08:11:37 2012
  source stamp	Fri Dec 14 08:11:34 2012
  author	robok0der
*/

namespace NsAppLinkRPC
{

  struct AddCommand_responseMarshaller
  {
    static bool checkIntegrity(AddCommand_response& e);
    static bool checkIntegrityConst(const AddCommand_response& e);
  
    static bool fromString(const std::string& s,AddCommand_response& e);
    static const std::string toString(const AddCommand_response& e);
  
    static bool fromJSON(const Json::Value& s,AddCommand_response& e);
    static Json::Value toJSON(const AddCommand_response& e);
  };
}

#endif
