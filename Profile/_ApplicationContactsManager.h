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

#ifndef _ApplicationContactsManager_H
#define _ApplicationContactsManager_H

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

/* Forward declaration of the class Application::ContactsManager */
#ifndef _ApplicationContactsManager_
  EW_DECLARE_CLASS( ApplicationContactsManager )
#define _ApplicationContactsManager_
#endif


/* Deklaration of class : 'Application::ContactsManager' */
EW_DEFINE_FIELDS( ApplicationContactsManager, XObject )
  EW_VTHISPTR()
  EW_OBJECT  ( Contacts,        ApplicationContacts )
  EW_OBJECT  ( History,         ApplicationContacts )
  EW_OBJECT  ( Favorites,       ApplicationContacts )
  EW_OBJECT  ( Search,          ApplicationContacts )
EW_END_OF_FIELDS( ApplicationContactsManager )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsManager' */
EW_DEFINE_METHODS( ApplicationContactsManager, XObject )
EW_END_OF_METHODS( ApplicationContactsManager )

/* Variant Dispatch Method Table for the class : 'Application::ContactsManager' */
EW_DEFINE_DISPATCHER( ApplicationContactsManager, XObject )
EW_END_OF_DISPATCHER( ApplicationContactsManager )

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationContactsManager_H */

/* Embedded Wizard */
