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

#ifndef _DeviceHistoryMessagesList_H
#define _DeviceHistoryMessagesList_H

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

/* Forward declaration of the class Device::ContactListElement */
#ifndef _DeviceContactListElement_
  EW_DECLARE_CLASS( DeviceContactListElement )
#define _DeviceContactListElement_
#endif

/* Forward declaration of the class Device::HistoryMessagesList */
#ifndef _DeviceHistoryMessagesList_
  EW_DECLARE_CLASS( DeviceHistoryMessagesList )
#define _DeviceHistoryMessagesList_
#endif


/* Deklaration of class : 'Device::HistoryMessagesList' */
EW_DEFINE_FIELDS( DeviceHistoryMessagesList, DeviceContactsList )
  EW_PROPERTY( UnreadMessagesNr, XInt32 )
EW_END_OF_FIELDS( DeviceHistoryMessagesList )

/* Virtual Method Table (VMT) for the class : 'Device::HistoryMessagesList' */
EW_DEFINE_METHODS( DeviceHistoryMessagesList, DeviceContactsList )
EW_END_OF_METHODS( DeviceHistoryMessagesList )

/* 'C' function for method : 'Device::HistoryMessagesList.OnSetUnreadMessagesNr()' */
void DeviceHistoryMessagesList_OnSetUnreadMessagesNr( DeviceHistoryMessagesList _this, 
  XInt32 value );

/* 'C' function for method : 'Device::HistoryMessagesList.FindUnreadMessagesNr()' */
void DeviceHistoryMessagesList_FindUnreadMessagesNr( DeviceHistoryMessagesList _this );

/* Default onget method for the property 'UnreadMessagesNr' */
XInt32 DeviceHistoryMessagesList_OnGetUnreadMessagesNr( DeviceHistoryMessagesList _this );

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceHistoryMessagesList_H */

/* Embedded Wizard */
