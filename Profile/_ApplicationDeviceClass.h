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
* Profile  : Profile
* Platform : Tara.Win32.RGBA8888
*
*******************************************************************************/

#ifndef _ApplicationDeviceClass_H
#define _ApplicationDeviceClass_H

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

#include "_TemplatesDeviceClass.h"

/* Forward declaration of the class Application::DeviceClass */
#ifndef _ApplicationDeviceClass_
  EW_DECLARE_CLASS( ApplicationDeviceClass )
#define _ApplicationDeviceClass_
#endif


/* Deklaration of class : 'Application::DeviceClass' */
EW_DEFINE_FIELDS( ApplicationDeviceClass, TemplatesDeviceClass )
  EW_PROPERTY( Speaker,         XBool )
  EW_PROPERTY( Microphone,      XBool )
EW_END_OF_FIELDS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_METHODS( ApplicationDeviceClass, TemplatesDeviceClass )
EW_END_OF_METHODS( ApplicationDeviceClass )

/* 'C' function for method : 'Application::DeviceClass.Done()' */
void ApplicationDeviceClass_Done( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.Init()' */
void ApplicationDeviceClass_Init( ApplicationDeviceClass _this, XHandle aArg );

/* 'C' function for method : 'Application::DeviceClass.OnGetMicrophone()' */
XBool ApplicationDeviceClass_OnGetMicrophone( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetMicrophone()' */
void ApplicationDeviceClass_OnSetMicrophone( ApplicationDeviceClass _this, XBool 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateMicrophone( ApplicationDeviceClass _this, XBool 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateMicrophone()' */
void ApplicationDeviceClass__UpdateMicrophone( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateMicrophone(). */
#define _ApplicationDeviceClass__UpdateMicrophone_

/* 'C' function for method : 'Application::DeviceClass.OnGetSpeaker()' */
XBool ApplicationDeviceClass_OnGetSpeaker( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetSpeaker()' */
void ApplicationDeviceClass_OnSetSpeaker( ApplicationDeviceClass _this, XBool value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateSpeaker( ApplicationDeviceClass _this, XBool aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateSpeaker()' */
void ApplicationDeviceClass__UpdateSpeaker( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateSpeaker(). */
#define _ApplicationDeviceClass__UpdateSpeaker_

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationDeviceClass_H */

/* Embedded Wizard */
