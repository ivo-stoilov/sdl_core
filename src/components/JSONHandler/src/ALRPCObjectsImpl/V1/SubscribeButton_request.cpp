#include "../include/JSONHandler/ALRPCObjects/V1/SubscribeButton_request.h"
#include "SubscribeButton_requestMarshaller.h"
#include "../include/JSONHandler/ALRPCObjects/V1/Marshaller.h"
#include "ButtonNameMarshaller.h"

#define PROTOCOL_VERSION	1


/*
  interface	Ford Sync RAPI
  version	1.2
  date		2011-05-17
  generated at	Fri Dec 14 08:11:37 2012
  source stamp	Fri Dec 14 08:11:34 2012
  author	robok0der
*/

using namespace NsAppLinkRPC;

SubscribeButton_request::~SubscribeButton_request(void)
{
}


SubscribeButton_request::SubscribeButton_request(const SubscribeButton_request& c)
{
  *this=c;
}


bool SubscribeButton_request::checkIntegrity(void)
{
  return SubscribeButton_requestMarshaller::checkIntegrity(*this);
}


SubscribeButton_request::SubscribeButton_request(void) : ALRPCRequest(PROTOCOL_VERSION,Marshaller::METHOD_SUBSCRIBEBUTTON_REQUEST)
{
}



bool SubscribeButton_request::set_buttonName(const ButtonName& buttonName_)
{
  if(!ButtonNameMarshaller::checkIntegrityConst(buttonName_))   return false;
  buttonName=buttonName_;
  return true;
}




const ButtonName& SubscribeButton_request::get_buttonName(void) const 
{
  return buttonName;
}

