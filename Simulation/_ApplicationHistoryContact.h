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
* Version  : 11.00
* Profile  : Simulation
* Platform : Tara.Win32.RGBA8888
*
*******************************************************************************/

#ifndef _ApplicationHistoryContact_H
#define _ApplicationHistoryContact_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x000B0000
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x000B0000
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_ApplicationContact.h"

/* Forward declaration of the class Application::HistoryContact */
#ifndef _ApplicationHistoryContact_
  EW_DECLARE_CLASS( ApplicationHistoryContact )
#define _ApplicationHistoryContact_
#endif

/* Forward declaration of the class Core::Time */
#ifndef _CoreTime_
  EW_DECLARE_CLASS( CoreTime )
#define _CoreTime_
#endif


/* Deklaration of class : 'Application::HistoryContact' */
EW_DEFINE_FIELDS( ApplicationHistoryContact, ApplicationContact )
  EW_PROPERTY( TimeOfCall,      CoreTime )
  EW_PROPERTY( StartTime,       CoreTime )
  EW_PROPERTY( EndTime,         CoreTime )
  EW_PROPERTY( CallDirection,   XEnum )
  EW_PROPERTY( CallState,       XEnum )
EW_END_OF_FIELDS( ApplicationHistoryContact )

/* Virtual Method Table (VMT) for the class : 'Application::HistoryContact' */
EW_DEFINE_METHODS( ApplicationHistoryContact, ApplicationContact )
EW_END_OF_METHODS( ApplicationHistoryContact )

/* 'C' function for method : 'Application::HistoryContact.OnSetCallState()' */
void ApplicationHistoryContact_OnSetCallState( ApplicationHistoryContact _this, 
  XEnum value );

/* 'C' function for method : 'Application::HistoryContact.OnSetTimeOfCall()' */
void ApplicationHistoryContact_OnSetTimeOfCall( ApplicationHistoryContact _this, 
  CoreTime value );

/* 'C' function for method : 'Application::HistoryContact.OnSetStartTime()' */
void ApplicationHistoryContact_OnSetStartTime( ApplicationHistoryContact _this, 
  CoreTime value );

/* 'C' function for method : 'Application::HistoryContact.OnSetCallDirection()' */
void ApplicationHistoryContact_OnSetCallDirection( ApplicationHistoryContact _this, 
  XEnum value );

/* 'C' function for method : 'Application::HistoryContact.OnSetEndTime()' */
void ApplicationHistoryContact_OnSetEndTime( ApplicationHistoryContact _this, CoreTime 
  value );

/* 'C' function for method : 'Application::HistoryContact.GetDuration()' */
XString ApplicationHistoryContact_GetDuration( ApplicationHistoryContact _this );

/* 'C' function for method : 'Application::HistoryContact.GetCallState()' */
XString ApplicationHistoryContact_GetCallState( ApplicationHistoryContact _this );

/* 'C' function for method : 'Application::HistoryContact.GetCallDirection()' */
XString ApplicationHistoryContact_GetCallDirection( ApplicationHistoryContact _this );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationHistoryContact_H */

/* Embedded Wizard */
