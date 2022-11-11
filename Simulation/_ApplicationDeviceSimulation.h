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

#ifndef _ApplicationDeviceSimulation_H
#define _ApplicationDeviceSimulation_H

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

#include "_ApplicationContactList.h"
#include "_ApplicationDeviceClass.h"


/* Deklaration of class variant : 'Application::DeviceSimulation' */
EW_DEFINE_VFIELDS( ApplicationDeviceSimulation, XObject, ApplicationDeviceClass )
EW_END_OF_VFIELDS( ApplicationDeviceSimulation )

/* Virtual Method Table (VMT) for the class variant : 'Application::DeviceSimulation' */
EW_DEFINE_VMETHODS( ApplicationDeviceSimulation, XObject, ApplicationDeviceClass )
EW_END_OF_VMETHODS( ApplicationDeviceSimulation )

/* 'C' function for method : 'Application::DeviceSimulation.Init()' */
void ApplicationDeviceSimulation_Init( ApplicationDeviceClass _this, XHandle aArg );

/* 'C' function for method : 'Application::DeviceSimulation.CreateContact()' */
void ApplicationDeviceSimulation_CreateContact( ApplicationDeviceClass _this, XString 
  aLastName, XString aFirstName, XString aPhoneNumber );

/* 'C' function for method : 'Application::DeviceSimulation.CreateContact1()' */
void ApplicationDeviceSimulation_CreateContact1( ApplicationDeviceClass _this, XString 
  aLastName, XString aFirstName, XString aPhoneNumber );

/* 'C' function for method : 'Application::DeviceSimulation.CreateContactData()' */
void ApplicationDeviceSimulation_CreateContactData( ApplicationDeviceClass _this, 
  XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationDeviceSimulation_H */

/* Embedded Wizard */
