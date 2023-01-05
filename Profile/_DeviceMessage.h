/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 12.00
* Profile  : Profile
* Platform : Windows.Software.RGBA8888
*
*******************************************************************************/

#ifndef _DeviceMessage_H
#define _DeviceMessage_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if ( EW_RTE_VERSION >> 16 ) != 12
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if ( EW_GFX_VERSION >> 16 ) != 12
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

/* Forward declaration of the class Core::Time */
#ifndef _CoreTime_
  EW_DECLARE_CLASS( CoreTime )
#define _CoreTime_
#endif

/* Forward declaration of the class Device::Contact */
#ifndef _DeviceContact_
  EW_DECLARE_CLASS( DeviceContact )
#define _DeviceContact_
#endif

/* Forward declaration of the class Device::Message */
#ifndef _DeviceMessage_
  EW_DECLARE_CLASS( DeviceMessage )
#define _DeviceMessage_
#endif


/* Deklaration of class : 'Device::Message' */
EW_DEFINE_FIELDS( DeviceMessage, XObject )
  EW_VARIABLE( next,            DeviceMessage )
  EW_PROPERTY( Sender,          DeviceContact )
  EW_PROPERTY( Receiver,        DeviceContact )
  EW_PROPERTY( TimeSent,        CoreTime )
  EW_PROPERTY( MessageContent,  XString )
  EW_PROPERTY( IsSeen,          XBool )
EW_END_OF_FIELDS( DeviceMessage )

/* Virtual Method Table (VMT) for the class : 'Device::Message' */
EW_DEFINE_METHODS( DeviceMessage, XObject )
EW_END_OF_METHODS( DeviceMessage )

/* 'C' function for method : 'Device::Message.OnSetMessageContent()' */
void DeviceMessage_OnSetMessageContent( DeviceMessage _this, XString value );

/* 'C' function for method : 'Device::Message.OnSetSender()' */
void DeviceMessage_OnSetSender( DeviceMessage _this, DeviceContact value );

/* 'C' function for method : 'Device::Message.OnSetReceiver()' */
void DeviceMessage_OnSetReceiver( DeviceMessage _this, DeviceContact value );

/* 'C' function for method : 'Device::Message.OnSetTimeSent()' */
void DeviceMessage_OnSetTimeSent( DeviceMessage _this, CoreTime value );

/* 'C' function for method : 'Device::Message.GetTimeOfCall()' */
XString DeviceMessage_GetTimeOfCall( DeviceMessage _this );

/* 'C' function for method : 'Device::Message.TraceMessage()' */
void DeviceMessage_TraceMessage( DeviceMessage _this );

/* 'C' function for method : 'Device::Message.OnSetIsSeen()' */
void DeviceMessage_OnSetIsSeen( DeviceMessage _this, XBool value );

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceMessage_H */

/* Embedded Wizard */
