#ifndef NSAPPLINKRPC_AUDIOCAPTUREQUALITYMARSHALLER_INCLUDE
#define NSAPPLINKRPC_AUDIOCAPTUREQUALITYMARSHALLER_INCLUDE

#include <string>
#include <json/json.h>

#include "PerfectHashTable.h"

#include "../include/JSONHandler/ALRPCObjects/V1/AudioCaptureQuality.h"


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

//! marshalling class for AudioCaptureQuality

  class AudioCaptureQualityMarshaller
  {
  public:
  
    static std::string toName(const AudioCaptureQuality& e) 	{ return getName(e.mInternal) ?: ""; }
  
    static bool fromName(AudioCaptureQuality& e,const std::string& s)
    { 
      return (e.mInternal=getIndex(s.c_str()))!=AudioCaptureQuality::INVALID_ENUM;
    }
  
    static bool checkIntegrity(AudioCaptureQuality& e)		{ return e.mInternal!=AudioCaptureQuality::INVALID_ENUM; } 
    static bool checkIntegrityConst(const AudioCaptureQuality& e)	{ return e.mInternal!=AudioCaptureQuality::INVALID_ENUM; } 
  
    static bool fromString(const std::string& s,AudioCaptureQuality& e);
    static const std::string toString(const AudioCaptureQuality& e);
  
    static bool fromJSON(const Json::Value& s,AudioCaptureQuality& e);
    static Json::Value toJSON(const AudioCaptureQuality& e);
  
    static const char* getName(AudioCaptureQuality::AudioCaptureQualityInternal e)
    {
       return (e>=0 && e<2) ? mHashTable[e].name : NULL;
    }
  
    static const AudioCaptureQuality::AudioCaptureQualityInternal getIndex(const char* s);
  
    static const PerfectHashTable mHashTable[2];
  };
  
}

#endif
