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

#ifndef _DevicePhoneServerClass_H
#define _DevicePhoneServerClass_H

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

#include "_CoreTimer.h"
#include "_TemplatesDeviceClass.h"

/* Forward declaration of the class Device::PhoneServerClass */
#ifndef _DevicePhoneServerClass_
  EW_DECLARE_CLASS( DevicePhoneServerClass )
#define _DevicePhoneServerClass_
#endif


/* Deklaration of class : 'Device::PhoneServerClass' */
EW_DEFINE_FIELDS( DevicePhoneServerClass, TemplatesDeviceClass )
  EW_OBJECT  ( PollServerData,  CoreTimer )
EW_END_OF_FIELDS( DevicePhoneServerClass )

/* Virtual Method Table (VMT) for the class : 'Device::PhoneServerClass' */
EW_DEFINE_METHODS( DevicePhoneServerClass, TemplatesDeviceClass )
EW_END_OF_METHODS( DevicePhoneServerClass )

/* 'C' function for method : 'Device::PhoneServerClass.askServerData()' */
void DevicePhoneServerClass_askServerData( DevicePhoneServerClass _this, XObject 
  sender );

/* 'C' function for method : 'Device::PhoneServerClass.Done()' */
void DevicePhoneServerClass_Done( DevicePhoneServerClass _this );

/* 'C' function for method : 'Device::PhoneServerClass.Init()' */
void DevicePhoneServerClass_Init( DevicePhoneServerClass _this, XHandle aArg );

/* 'C' function for method : 'Device::PhoneServerClass.StartCall()' */
XBool DevicePhoneServerClass_StartCall( DevicePhoneServerClass _this, XString aReceiverNumber );

/* 'C' function for method : 'Device::PhoneServerClass.EndCall()' */
XBool DevicePhoneServerClass_EndCall( DevicePhoneServerClass _this, XString aReceiverNumber );

/* 'C' function for method : 'Device::PhoneServerClass.AnswerCall()' */
XBool DevicePhoneServerClass_AnswerCall( DevicePhoneServerClass _this, XString aReceiverNumber );

/* 'C' function for method : 'Device::PhoneServerClass.CancelledCall()' */
XBool DevicePhoneServerClass_CancelledCall( DevicePhoneServerClass _this, XString 
  aReceiverNumber );

/* 'C' function for method : 'Device::PhoneServerClass.SendMessage()' */
XBool DevicePhoneServerClass_SendMessage( DevicePhoneServerClass _this, XString 
  aReceiverNumber, XString aMessage );

#ifdef __cplusplus
  }
#endif

#endif /* _DevicePhoneServerClass_H */

/* Embedded Wizard */
