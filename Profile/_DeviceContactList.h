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

#ifndef _DeviceContactList_H
#define _DeviceContactList_H

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

/* Forward declaration of the class Device::Contact */
#ifndef _DeviceContact_
  EW_DECLARE_CLASS( DeviceContact )
#define _DeviceContact_
#endif

/* Forward declaration of the class Device::ContactList */
#ifndef _DeviceContactList_
  EW_DECLARE_CLASS( DeviceContactList )
#define _DeviceContactList_
#endif

/* Forward declaration of the class Device::ContactListElement */
#ifndef _DeviceContactListElement_
  EW_DECLARE_CLASS( DeviceContactListElement )
#define _DeviceContactListElement_
#endif


/* Deklaration of class : 'Device::ContactList' */
EW_DEFINE_FIELDS( DeviceContactList, XObject )
  EW_VARIABLE( head,            DeviceContactListElement )
  EW_VARIABLE( sorted,          DeviceContactListElement )
  EW_PROPERTY( NoOfItems,       XInt32 )
  EW_PROPERTY( Sorting,         XEnum )
EW_END_OF_FIELDS( DeviceContactList )

/* Virtual Method Table (VMT) for the class : 'Device::ContactList' */
EW_DEFINE_METHODS( DeviceContactList, XObject )
EW_END_OF_METHODS( DeviceContactList )

/* 'C' function for method : 'Device::ContactList.AddLast()' */
void DeviceContactList_AddLast( DeviceContactList _this, DeviceContact aContact );

/* 'C' function for method : 'Device::ContactList.Remove()' */
void DeviceContactList_Remove( DeviceContactList _this, DeviceContact aContact );

/* 'C' function for method : 'Device::ContactList.OnSetNoOfItems()' */
void DeviceContactList_OnSetNoOfItems( DeviceContactList _this, XInt32 value );

/* 'C' function for method : 'Device::ContactList.GetContact()' */
DeviceContact DeviceContactList_GetContact( DeviceContactList _this, XInt32 aIndex );

/* 'C' function for method : 'Device::ContactList.GetInitials()' */
XString DeviceContactList_GetInitials( DeviceContactList _this, XString aLastname, 
  XString aFirstname );

/* 'C' function for method : 'Device::ContactList.insertionSort()' */
void DeviceContactList_insertionSort( DeviceContactList _this );

/* 'C' function for method : 'Device::ContactList.sortedInsert()' */
void DeviceContactList_sortedInsert( DeviceContactList _this, DeviceContactListElement 
  aElement );

/* 'C' function for method : 'Device::ContactList.OnSetSorting()' */
void DeviceContactList_OnSetSorting( DeviceContactList _this, XEnum value );

/* 'C' function for method : 'Device::ContactList.FindByPhoneNumber()' */
DeviceContact DeviceContactList_FindByPhoneNumber( DeviceContactList _this, XString 
  aNumber );

/* 'C' function for method : 'Device::ContactList.FindByID()' */
DeviceContact DeviceContactList_FindByID( DeviceContactList _this, DeviceContact 
  aContact );

/* 'C' function for method : 'Device::ContactList.AddFirst()' */
void DeviceContactList_AddFirst( DeviceContactList _this, DeviceContact aContact );

/* Default onget method for the property 'NoOfItems' */
XInt32 DeviceContactList_OnGetNoOfItems( DeviceContactList _this );

/* Default onget method for the property 'Sorting' */
XEnum DeviceContactList_OnGetSorting( DeviceContactList _this );

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceContactList_H */

/* Embedded Wizard */
