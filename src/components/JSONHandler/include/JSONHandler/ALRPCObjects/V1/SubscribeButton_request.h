#ifndef NSAPPLINKRPC_SUBSCRIBEBUTTON_REQUEST_INCLUDE
#define NSAPPLINKRPC_SUBSCRIBEBUTTON_REQUEST_INCLUDE


#include "ButtonName.h"
#include "JSONHandler/ALRPCRequest.h"


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

/**
     Subscribes to built-in HMI buttons.
     The application will be notified by the OnButtonEvent and OnButtonPress.
     To unsubscribe the notifications, use unsubscribeButton.
*/

  class SubscribeButton_request : public ALRPCRequest
  {
  public:
  
    SubscribeButton_request(const SubscribeButton_request& c);
    SubscribeButton_request(void);
    
    virtual ~SubscribeButton_request(void);
  
    bool checkIntegrity(void);

    const ButtonName& get_buttonName(void) const;

    bool set_buttonName(const ButtonName& buttonName_);

  private:
  
    friend class SubscribeButton_requestMarshaller;


///  Name of the button to subscribe.
      ButtonName buttonName;
  };

}

#endif
