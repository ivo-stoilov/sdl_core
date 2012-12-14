#ifndef NSAPPLINKRPC_ADDSUBMENU_REQUESTMARSHALLER_INCLUDE
#define NSAPPLINKRPC_ADDSUBMENU_REQUESTMARSHALLER_INCLUDE

#include <string>
#include <json/json.h>

#include "../include/JSONHandler/ALRPCObjects/V1/AddSubMenu_request.h"


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

  struct AddSubMenu_requestMarshaller
  {
    static bool checkIntegrity(AddSubMenu_request& e);
    static bool checkIntegrityConst(const AddSubMenu_request& e);
  
    static bool fromString(const std::string& s,AddSubMenu_request& e);
    static const std::string toString(const AddSubMenu_request& e);
  
    static bool fromJSON(const Json::Value& s,AddSubMenu_request& e);
    static Json::Value toJSON(const AddSubMenu_request& e);
  };
}

#endif
