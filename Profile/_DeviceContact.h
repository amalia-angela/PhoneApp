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

#ifndef _DeviceContact_H
#define _DeviceContact_H

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

#include "_DeviceMessagesList.h"

/* Forward declaration of the class Device::Contact */
#ifndef _DeviceContact_
  EW_DECLARE_CLASS( DeviceContact )
#define _DeviceContact_
#endif


/* Deklaration of class : 'Device::Contact' */
EW_DEFINE_FIELDS( DeviceContact, XObject )
  EW_OBJECT  ( MessagesList,    DeviceMessagesList )
  EW_PROPERTY( FirstName,       XString )
  EW_PROPERTY( LastName,        XString )
  EW_PROPERTY( PhoneNumber,     XString )
  EW_PROPERTY( NameInitials,    XString )
  EW_PROPERTY( ID,              XInt32 )
  EW_PROPERTY( UnreadMessagesNr, XInt32 )
  EW_PROPERTY( IsFavorite,      XBool )
EW_END_OF_FIELDS( DeviceContact )

/* Virtual Method Table (VMT) for the class : 'Device::Contact' */
EW_DEFINE_METHODS( DeviceContact, XObject )
EW_END_OF_METHODS( DeviceContact )

/* 'C' function for method : 'Device::Contact.Init()' */
void DeviceContact_Init( DeviceContact _this, XHandle aArg );

/* 'C' function for method : 'Device::Contact.OnSetFirstName()' */
void DeviceContact_OnSetFirstName( DeviceContact _this, XString value );

/* 'C' function for method : 'Device::Contact.OnSetLastName()' */
void DeviceContact_OnSetLastName( DeviceContact _this, XString value );

/* 'C' function for method : 'Device::Contact.OnSetPhoneNumber()' */
void DeviceContact_OnSetPhoneNumber( DeviceContact _this, XString value );

/* 'C' function for method : 'Device::Contact.OnSetNameInitials()' */
void DeviceContact_OnSetNameInitials( DeviceContact _this, XString value );

/* 'C' function for method : 'Device::Contact.OnSetID()' */
void DeviceContact_OnSetID( DeviceContact _this, XInt32 value );

/* 'C' function for method : 'Device::Contact.CopyDataTo()' */
DeviceContact DeviceContact_CopyDataTo( DeviceContact _this, DeviceContact aContact );

/* 'C' function for method : 'Device::Contact.OnSetIsFavorite()' */
void DeviceContact_OnSetIsFavorite( DeviceContact _this, XBool value );

/* 'C' function for method : 'Device::Contact.OnSetUnreadMessagesNr()' */
void DeviceContact_OnSetUnreadMessagesNr( DeviceContact _this, XInt32 value );

/* 'C' function for method : 'Device::Contact.notifyThis()' */
void DeviceContact_notifyThis( DeviceContact _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceContact_H */

/* Embedded Wizard */
