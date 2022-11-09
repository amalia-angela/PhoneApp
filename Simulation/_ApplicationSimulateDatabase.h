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

#ifndef _ApplicationSimulateDatabase_H
#define _ApplicationSimulateDatabase_H

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

#include "_ApplicationContacts.h"
#include "_ApplicationContactsManager.h"


/* Deklaration of class variant : 'Application::SimulateDatabase' */
EW_DEFINE_VFIELDS( ApplicationSimulateDatabase, XObject, ApplicationContactsManager )
EW_END_OF_VFIELDS( ApplicationSimulateDatabase )

/* Virtual Method Table (VMT) for the class variant : 'Application::SimulateDatabase' */
EW_DEFINE_VMETHODS( ApplicationSimulateDatabase, XObject, ApplicationContactsManager )
EW_END_OF_VMETHODS( ApplicationSimulateDatabase )

/* 'C' function for method : 'Application::SimulateDatabase.Init()' */
void ApplicationSimulateDatabase_Init( ApplicationContactsManager _this, XHandle 
  aArg );

/* 'C' function for method : 'Application::SimulateDatabase.CreateContact()' */
void ApplicationSimulateDatabase_CreateContact( ApplicationContactsManager _this, 
  XInt32 aID, XString aLastName, XString aFirstName, XString aPhoneNumber );

/* 'C' function for method : 'Application::SimulateDatabase.CreateContactData()' */
void ApplicationSimulateDatabase_CreateContactData( ApplicationContactsManager _this );

/* 'C' function for method : 'Application::SimulateDatabase.CreateContact1()' */
void ApplicationSimulateDatabase_CreateContact1( ApplicationContactsManager _this, 
  XString aLastName, XString aFirstName, XString aPhoneNumber );

/* 'C' function for method : 'Application::SimulateDatabase.CreateContact2()' */
void ApplicationSimulateDatabase_CreateContact2( ApplicationContactsManager _this, 
  XString aLastName, XString aFirstName, XString aPhoneNumber );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationSimulateDatabase_H */

/* Embedded Wizard */
