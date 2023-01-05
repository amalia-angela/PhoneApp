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

#ifndef _DeviceHistoryContact_H
#define _DeviceHistoryContact_H

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

#include "_DeviceContact.h"
#include "_DeviceMessagesList.h"

/* Forward declaration of the class Core::Time */
#ifndef _CoreTime_
  EW_DECLARE_CLASS( CoreTime )
#define _CoreTime_
#endif

/* Forward declaration of the class Device::HistoryContact */
#ifndef _DeviceHistoryContact_
  EW_DECLARE_CLASS( DeviceHistoryContact )
#define _DeviceHistoryContact_
#endif


/* Deklaration of class : 'Device::HistoryContact' */
EW_DEFINE_FIELDS( DeviceHistoryContact, DeviceContact )
  EW_PROPERTY( TimeOfCall,      CoreTime )
  EW_PROPERTY( StartTime,       CoreTime )
  EW_PROPERTY( EndTime,         CoreTime )
  EW_PROPERTY( CallState,       XEnum )
  EW_PROPERTY( CallDirection,   XEnum )
EW_END_OF_FIELDS( DeviceHistoryContact )

/* Virtual Method Table (VMT) for the class : 'Device::HistoryContact' */
EW_DEFINE_METHODS( DeviceHistoryContact, DeviceContact )
EW_END_OF_METHODS( DeviceHistoryContact )

/* 'C' function for method : 'Device::HistoryContact.OnSetCallState()' */
void DeviceHistoryContact_OnSetCallState( DeviceHistoryContact _this, XEnum value );

/* 'C' function for method : 'Device::HistoryContact.OnSetTimeOfCall()' */
void DeviceHistoryContact_OnSetTimeOfCall( DeviceHistoryContact _this, CoreTime 
  value );

/* 'C' function for method : 'Device::HistoryContact.OnSetStartTime()' */
void DeviceHistoryContact_OnSetStartTime( DeviceHistoryContact _this, CoreTime value );

/* 'C' function for method : 'Device::HistoryContact.OnSetCallDirection()' */
void DeviceHistoryContact_OnSetCallDirection( DeviceHistoryContact _this, XEnum 
  value );

/* 'C' function for method : 'Device::HistoryContact.OnSetEndTime()' */
void DeviceHistoryContact_OnSetEndTime( DeviceHistoryContact _this, CoreTime value );

/* 'C' function for method : 'Device::HistoryContact.GetDuration()' */
XString DeviceHistoryContact_GetDuration( DeviceHistoryContact _this );

/* 'C' function for method : 'Device::HistoryContact.GetCallState()' */
XString DeviceHistoryContact_GetCallState( DeviceHistoryContact _this );

/* 'C' function for method : 'Device::HistoryContact.GetCallDirection()' */
XString DeviceHistoryContact_GetCallDirection( DeviceHistoryContact _this );

/* 'C' function for method : 'Device::HistoryContact.GetTimeOfCall()' */
XString DeviceHistoryContact_GetTimeOfCall( DeviceHistoryContact _this );

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceHistoryContact_H */

/* Embedded Wizard */
