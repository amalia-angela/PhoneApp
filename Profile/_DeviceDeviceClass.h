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

#ifndef _DeviceDeviceClass_H
#define _DeviceDeviceClass_H

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

#include "_DeviceContactsList.h"
#include "_DeviceHistoryMessagesList.h"
#include "_TemplatesDeviceClass.h"

/* Forward declaration of the class Device::Contact */
#ifndef _DeviceContact_
  EW_DECLARE_CLASS( DeviceContact )
#define _DeviceContact_
#endif

/* Forward declaration of the class Device::DeviceClass */
#ifndef _DeviceDeviceClass_
  EW_DECLARE_CLASS( DeviceDeviceClass )
#define _DeviceDeviceClass_
#endif

/* Forward declaration of the class Device::HistoryContact */
#ifndef _DeviceHistoryContact_
  EW_DECLARE_CLASS( DeviceHistoryContact )
#define _DeviceHistoryContact_
#endif

/* Forward declaration of the class Device::PhoneServerClass */
#ifndef _DevicePhoneServerClass_
  EW_DECLARE_CLASS( DevicePhoneServerClass )
#define _DevicePhoneServerClass_
#endif


/* Deklaration of class : 'Device::DeviceClass' */
EW_DEFINE_FIELDS( DeviceDeviceClass, TemplatesDeviceClass )
  EW_VTHISPTR()
  EW_OBJECT  ( Contacts,        DeviceContactsList )
  EW_OBJECT  ( History,         DeviceContactsList )
  EW_OBJECT  ( Favorites,       DeviceContactsList )
  EW_OBJECT  ( OngoingCalls,    DeviceContactsList )
  EW_OBJECT  ( MessageHistory,  DeviceHistoryMessagesList )
  EW_OBJECT  ( FilteredContacts, DeviceContactsList )
  EW_VARIABLE( server,          DevicePhoneServerClass )
  EW_PROPERTY( MyContact,       DeviceContact )
  EW_VARIABLE( LastID,          XInt32 )
  EW_PROPERTY( Microphone,      XBool )
  EW_PROPERTY( Speaker,         XBool )
EW_END_OF_FIELDS( DeviceDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Device::DeviceClass' */
EW_DEFINE_METHODS( DeviceDeviceClass, TemplatesDeviceClass )
EW_END_OF_METHODS( DeviceDeviceClass )

/* Variant Dispatch Method Table for the class : 'Device::DeviceClass' */
EW_DEFINE_DISPATCHER( DeviceDeviceClass, TemplatesDeviceClass )
EW_END_OF_DISPATCHER( DeviceDeviceClass )

/* 'C' function for method : 'Device::DeviceClass.Done()' */
void DeviceDeviceClass_Done( DeviceDeviceClass _this );

/* 'C' function for method : 'Device::DeviceClass.Init()' */
void DeviceDeviceClass_Init( DeviceDeviceClass _this, XHandle aArg );

/* 'C' function for method : 'Device::DeviceClass.OnGetMicrophone()' */
XBool DeviceDeviceClass_OnGetMicrophone( DeviceDeviceClass _this );

/* 'C' function for method : 'Device::DeviceClass.OnSetMicrophone()' */
void DeviceDeviceClass_OnSetMicrophone( DeviceDeviceClass _this, XBool value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void DeviceDeviceClass_UpdateMicrophone( DeviceDeviceClass _this, XBool aNewValue );

/* Wrapper function for the non virtual method : 'Device::DeviceClass.UpdateMicrophone()' */
void DeviceDeviceClass__UpdateMicrophone( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Device::DeviceClass.UpdateMicrophone(). */
#define _DeviceDeviceClass__UpdateMicrophone_

/* 'C' function for method : 'Device::DeviceClass.OnGetSpeaker()' */
XBool DeviceDeviceClass_OnGetSpeaker( DeviceDeviceClass _this );

/* 'C' function for method : 'Device::DeviceClass.OnSetSpeaker()' */
void DeviceDeviceClass_OnSetSpeaker( DeviceDeviceClass _this, XBool value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void DeviceDeviceClass_UpdateSpeaker( DeviceDeviceClass _this, XBool aNewValue );

/* Wrapper function for the non virtual method : 'Device::DeviceClass.UpdateSpeaker()' */
void DeviceDeviceClass__UpdateSpeaker( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Device::DeviceClass.UpdateSpeaker(). */
#define _DeviceDeviceClass__UpdateSpeaker_

/* 'C' function for method : 'Device::DeviceClass.SendCallFromContact()' */
void DeviceDeviceClass_SendCallFromContact( DeviceDeviceClass _this, DeviceContact 
  aContact );

/* 'C' function for method : 'Device::DeviceClass.ReceiveCall()' */
void DeviceDeviceClass_ReceiveCall( DeviceDeviceClass _this, XString aPhoneNumber );

/* 'C' function for method : 'Device::DeviceClass.SendCallFromNumber()' */
void DeviceDeviceClass_SendCallFromNumber( DeviceDeviceClass _this, XString aPhoneNumber );

/* 'C' function for method : 'Device::DeviceClass.GetNewID()' */
XInt32 DeviceDeviceClass_GetNewID( DeviceDeviceClass _this );

/* 'C' function for method : 'Device::DeviceClass.SendEndCall()' */
void DeviceDeviceClass_SendEndCall( DeviceDeviceClass _this, XString aPhoneNumber );

/* 'C' function for method : 'Device::DeviceClass.SendCallAnswer()' */
void DeviceDeviceClass_SendCallAnswer( DeviceDeviceClass _this, DeviceHistoryContact 
  aContact );

/* 'C' function for method : 'Device::DeviceClass.ReceiveCallAnswered()' */
void DeviceDeviceClass_ReceiveCallAnswered( DeviceDeviceClass _this, XString aPhoneNumber );

/* 'C' function for method : 'Device::DeviceClass.ReceiveCallRejected()' */
void DeviceDeviceClass_ReceiveCallRejected( DeviceDeviceClass _this, XString aPhoneNumber );

/* 'C' function for method : 'Device::DeviceClass.ReceiveEndCall()' */
void DeviceDeviceClass_ReceiveEndCall( DeviceDeviceClass _this, XString aPhoneNumber );

/* 'C' function for method : 'Device::DeviceClass.OnSetMyContact()' */
void DeviceDeviceClass_OnSetMyContact( DeviceDeviceClass _this, DeviceContact value );

/* 'C' function for method : 'Device::DeviceClass.ReceiveMessage()' */
void DeviceDeviceClass_ReceiveMessage( DeviceDeviceClass _this, XString aSenderNumber, 
  XString aMessageContent );

/* 'C' function for method : 'Device::DeviceClass.SendMessage()' */
void DeviceDeviceClass_SendMessage( DeviceDeviceClass _this, DeviceContact aContact, 
  XString aMessageContent );

/* 'C' function for method : 'Device::DeviceClass.ReceiveMissedCall()' */
void DeviceDeviceClass_ReceiveMissedCall( DeviceDeviceClass _this, XString aPhoneNumber );

/* Default onget method for the property 'MyContact' */
DeviceContact DeviceDeviceClass_OnGetMyContact( DeviceDeviceClass _this );

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceDeviceClass_H */

/* Embedded Wizard */
