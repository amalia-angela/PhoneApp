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

#ifndef _ApplicationContacts_H
#define _ApplicationContacts_H

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

/* Forward declaration of the class Application::Contact */
#ifndef _ApplicationContact_
  EW_DECLARE_CLASS( ApplicationContact )
#define _ApplicationContact_
#endif

/* Forward declaration of the class Application::Contacts */
#ifndef _ApplicationContacts_
  EW_DECLARE_CLASS( ApplicationContacts )
#define _ApplicationContacts_
#endif


/* Deklaration of class : 'Application::Contacts' */
EW_DEFINE_FIELDS( ApplicationContacts, XObject )
  EW_VTHISPTR()
  EW_VARIABLE( head,            ApplicationContact )
  EW_VARIABLE( sorted,          ApplicationContact )
  EW_PROPERTY( NoOfItems,       XInt32 )
  EW_PROPERTY( Sorting,         XEnum )
EW_END_OF_FIELDS( ApplicationContacts )

/* Virtual Method Table (VMT) for the class : 'Application::Contacts' */
EW_DEFINE_METHODS( ApplicationContacts, XObject )
EW_END_OF_METHODS( ApplicationContacts )

/* Variant Dispatch Method Table for the class : 'Application::Contacts' */
EW_DEFINE_DISPATCHER( ApplicationContacts, XObject )
EW_END_OF_DISPATCHER( ApplicationContacts )

/* 'C' function for method : 'Application::Contacts.Add()' */
void ApplicationContacts_Add( ApplicationContacts _this, ApplicationContact aContact );

/* 'C' function for method : 'Application::Contacts.Remove()' */
void ApplicationContacts_Remove( ApplicationContacts _this, ApplicationContact aContact );

/* 'C' function for method : 'Application::Contacts.OnSetNoOfItems()' */
void ApplicationContacts_OnSetNoOfItems( ApplicationContacts _this, XInt32 value );

/* 'C' function for method : 'Application::Contacts.GetContact()' */
ApplicationContact ApplicationContacts_GetContact( ApplicationContacts _this, XInt32 
  aNo );

/* 'C' function for method : 'Application::Contacts.GetInitials()' */
XString ApplicationContacts_GetInitials( ApplicationContacts _this, XString aLastName, 
  XString aFirstName );

/* 'C' function for method : 'Application::Contacts.insertionSort()' */
void ApplicationContacts_insertionSort( ApplicationContacts _this );

/* 'C' function for method : 'Application::Contacts.sortedInsert()' */
void ApplicationContacts_sortedInsert( ApplicationContacts _this, ApplicationContact 
  aContact );

/* 'C' function for method : 'Application::Contacts.OnSetSorting()' */
void ApplicationContacts_OnSetSorting( ApplicationContacts _this, XEnum value );

/* Default onget method for the property 'NoOfItems' */
XInt32 ApplicationContacts_OnGetNoOfItems( ApplicationContacts _this );

/* Default onget method for the property 'Sorting' */
XEnum ApplicationContacts_OnGetSorting( ApplicationContacts _this );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationContacts_H */

/* Embedded Wizard */
