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

#ifndef _ApplicationContactList_H
#define _ApplicationContactList_H

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

/* Forward declaration of the class Application::ContactList */
#ifndef _ApplicationContactList_
  EW_DECLARE_CLASS( ApplicationContactList )
#define _ApplicationContactList_
#endif

/* Forward declaration of the class Application::ContactListElement */
#ifndef _ApplicationContactListElement_
  EW_DECLARE_CLASS( ApplicationContactListElement )
#define _ApplicationContactListElement_
#endif


/* Deklaration of class : 'Application::ContactList' */
EW_DEFINE_FIELDS( ApplicationContactList, XObject )
  EW_VARIABLE( head,            ApplicationContactListElement )
  EW_VARIABLE( sorted,          ApplicationContactListElement )
  EW_PROPERTY( NoOfItems,       XInt32 )
  EW_PROPERTY( Sorting,         XEnum )
EW_END_OF_FIELDS( ApplicationContactList )

/* Virtual Method Table (VMT) for the class : 'Application::ContactList' */
EW_DEFINE_METHODS( ApplicationContactList, XObject )
EW_END_OF_METHODS( ApplicationContactList )

/* 'C' function for method : 'Application::ContactList.Add()' */
void ApplicationContactList_Add( ApplicationContactList _this, ApplicationContact 
  aContact );

/* 'C' function for method : 'Application::ContactList.Remove()' */
void ApplicationContactList_Remove( ApplicationContactList _this, ApplicationContact 
  aContact );

/* 'C' function for method : 'Application::ContactList.OnSetNoOfItems()' */
void ApplicationContactList_OnSetNoOfItems( ApplicationContactList _this, XInt32 
  value );

/* 'C' function for method : 'Application::ContactList.GetContact()' */
ApplicationContact ApplicationContactList_GetContact( ApplicationContactList _this, 
  XInt32 aIndex );

/* 'C' function for method : 'Application::ContactList.GetInitials()' */
XString ApplicationContactList_GetInitials( ApplicationContactList _this, XString 
  aLastname, XString aFirstname );

/* 'C' function for method : 'Application::ContactList.insertionSort()' */
void ApplicationContactList_insertionSort( ApplicationContactList _this );

/* 'C' function for method : 'Application::ContactList.sortedInsert()' */
void ApplicationContactList_sortedInsert( ApplicationContactList _this, ApplicationContactListElement 
  aElement );

/* 'C' function for method : 'Application::ContactList.OnSetSorting()' */
void ApplicationContactList_OnSetSorting( ApplicationContactList _this, XEnum value );

/* 'C' function for method : 'Application::ContactList.FindByPhoneNumber()' */
ApplicationContact ApplicationContactList_FindByPhoneNumber( ApplicationContactList _this, 
  XString aNumber );

/* 'C' function for method : 'Application::ContactList.FindByID()' */
ApplicationContact ApplicationContactList_FindByID( ApplicationContactList _this, 
  ApplicationContact aContact );

/* Default onget method for the property 'NoOfItems' */
XInt32 ApplicationContactList_OnGetNoOfItems( ApplicationContactList _this );

/* Default onget method for the property 'Sorting' */
XEnum ApplicationContactList_OnGetSorting( ApplicationContactList _this );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationContactList_H */

/* Embedded Wizard */
