#include "../src/../include/JSONHandler/RPC2Objects/NsRPC2Communication/Buttons/GetCapabilitiesResponse.h"
#include "../src/../include/JSONHandler/RPC2Objects/Marshaller.h"

/*
  interface	NsRPC2Communication::Buttons
  version	1.2
  generated at	Fri Dec 14 06:14:25 2012
  source stamp	Fri Dec 14 06:14:23 2012
  author	robok0der
*/

using namespace NsRPC2Communication::Buttons;


GetCapabilitiesResponse& GetCapabilitiesResponse::operator =(const GetCapabilitiesResponse& c)
{
  capabilities=c.capabilities;
  if(presetBankCapabilities)  delete presetBankCapabilities;
  presetBankCapabilities= c.presetBankCapabilities ? new NsAppLinkRPCV2::PresetBankCapabilities(c.presetBankCapabilities[0]) : 0;
  return *this;
}


GetCapabilitiesResponse::~GetCapabilitiesResponse(void)
{
  if(presetBankCapabilities)  delete presetBankCapabilities;
}


GetCapabilitiesResponse::GetCapabilitiesResponse(void) : 
  RPC2Response(Marshaller::METHOD_NSRPC2COMMUNICATION_BUTTONS__GETCAPABILITIESRESPONSE),
  presetBankCapabilities(0)
{
}


GetCapabilitiesResponse::GetCapabilitiesResponse(const GetCapabilitiesResponse& c) : RPC2Response(Marshaller::METHOD_NSRPC2COMMUNICATION_BUTTONS__GETCAPABILITIESRESPONSE,c.getId(),c.getResult())
{
  *this=c;
}


const std::vector< NsAppLinkRPC::ButtonCapabilities>& GetCapabilitiesResponse::get_capabilities(void)
{
  return capabilities;
}

bool GetCapabilitiesResponse::set_capabilities(const std::vector< NsAppLinkRPC::ButtonCapabilities>& capabilities_)
{
  capabilities=capabilities_;
  return true;
}

const NsAppLinkRPCV2::PresetBankCapabilities* GetCapabilitiesResponse::get_presetBankCapabilities(void)
{
  return presetBankCapabilities;
}

bool GetCapabilitiesResponse::set_presetBankCapabilities(const NsAppLinkRPCV2::PresetBankCapabilities& presetBankCapabilities_)
{
  if(presetBankCapabilities)  delete presetBankCapabilities;
  presetBankCapabilities=new NsAppLinkRPCV2::PresetBankCapabilities(presetBankCapabilities_);
  return true;
}

void GetCapabilitiesResponse::reset_presetBankCapabilities(void)
{
  if(presetBankCapabilities)  delete presetBankCapabilities;
  presetBankCapabilities=0;
}

bool GetCapabilitiesResponse::checkIntegrity(void)
{
  return GetCapabilitiesResponseMarshaller::checkIntegrity(*this);
}
