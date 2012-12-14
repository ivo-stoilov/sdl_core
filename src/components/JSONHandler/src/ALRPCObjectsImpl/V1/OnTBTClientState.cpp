#include "../include/JSONHandler/ALRPCObjects/V1/OnTBTClientState.h"
#include "OnTBTClientStateMarshaller.h"
#include "../include/JSONHandler/ALRPCObjects/V1/Marshaller.h"
#include "TBTStateMarshaller.h"

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

OnTBTClientState::~OnTBTClientState(void)
{
}


OnTBTClientState::OnTBTClientState(const OnTBTClientState& c)
{
  *this=c;
}


bool OnTBTClientState::checkIntegrity(void)
{
  return OnTBTClientStateMarshaller::checkIntegrity(*this);
}


OnTBTClientState::OnTBTClientState(void) : ALRPCNotification(PROTOCOL_VERSION,Marshaller::METHOD_ONTBTCLIENTSTATE)
{
}



bool OnTBTClientState::set_state(const TBTState& state_)
{
  if(!TBTStateMarshaller::checkIntegrityConst(state_))   return false;
  state=state_;
  return true;
}




const TBTState& OnTBTClientState::get_state(void) const 
{
  return state;
}

