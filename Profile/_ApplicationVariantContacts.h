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

#ifndef _ApplicationVariantContacts_H
#define _ApplicationVariantContacts_H

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

/* Forward declaration of the class Application::Contact */
#ifndef _ApplicationContact_
  EW_DECLARE_CLASS( ApplicationContact )
#define _ApplicationContact_
#endif


/* Deklaration of class variant : 'Application::VariantContacts' */
EW_DEFINE_VFIELDS( ApplicationVariantContacts, XObject, ApplicationContacts )
EW_END_OF_VFIELDS( ApplicationVariantContacts )

/* Virtual Method Table (VMT) for the class variant : 'Application::VariantContacts' */
EW_DEFINE_VMETHODS( ApplicationVariantContacts, XObject, ApplicationContacts )
EW_END_OF_VMETHODS( ApplicationVariantContacts )

/* 'C' function for method : 'Application::VariantContacts.Init()' */
void ApplicationVariantContacts_Init( ApplicationContacts _this, XHandle aArg );

/* 'C' function for method : 'Application::VariantContacts.CreateContact()' */
void ApplicationVariantContacts_CreateContact( ApplicationContacts _this, XString 
  aLastName, XString aFirstName, XString aPhoneNumber );

/* 'C' function for method : 'Application::VariantContacts.CreateContactData()' */
void ApplicationVariantContacts_CreateContactData( ApplicationContacts _this );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationVariantContacts_H */

/* Embedded Wizard */
