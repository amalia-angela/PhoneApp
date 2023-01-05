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

#ifndef _DeviceContactsList_H
#define _DeviceContactsList_H

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

/* Forward declaration of the class Device::Contact */
#ifndef _DeviceContact_
  EW_DECLARE_CLASS( DeviceContact )
#define _DeviceContact_
#endif

/* Forward declaration of the class Device::ContactListElement */
#ifndef _DeviceContactListElement_
  EW_DECLARE_CLASS( DeviceContactListElement )
#define _DeviceContactListElement_
#endif

/* Forward declaration of the class Device::ContactsList */
#ifndef _DeviceContactsList_
  EW_DECLARE_CLASS( DeviceContactsList )
#define _DeviceContactsList_
#endif


/* Deklaration of class : 'Device::ContactsList' */
EW_DEFINE_FIELDS( DeviceContactsList, XObject )
  EW_VARIABLE( head,            DeviceContactListElement )
  EW_VARIABLE( sorted,          DeviceContactListElement )
  EW_PROPERTY( NoOfItems,       XInt32 )
  EW_PROPERTY( Sorting,         XEnum )
EW_END_OF_FIELDS( DeviceContactsList )

/* Virtual Method Table (VMT) for the class : 'Device::ContactsList' */
EW_DEFINE_METHODS( DeviceContactsList, XObject )
EW_END_OF_METHODS( DeviceContactsList )

/* 'C' function for method : 'Device::ContactsList.AddLast()' */
void DeviceContactsList_AddLast( DeviceContactsList _this, DeviceContact aContact );

/* 'C' function for method : 'Device::ContactsList.Remove()' */
void DeviceContactsList_Remove( DeviceContactsList _this, DeviceContact aContact );

/* 'C' function for method : 'Device::ContactsList.OnSetNoOfItems()' */
void DeviceContactsList_OnSetNoOfItems( DeviceContactsList _this, XInt32 value );

/* 'C' function for method : 'Device::ContactsList.GetContact()' */
DeviceContact DeviceContactsList_GetContact( DeviceContactsList _this, XInt32 aIndex );

/* 'C' function for method : 'Device::ContactsList.GetInitials()' */
XString DeviceContactsList_GetInitials( DeviceContactsList _this, XString aLastname, 
  XString aFirstname );

/* 'C' function for method : 'Device::ContactsList.insertionSort()' */
void DeviceContactsList_insertionSort( DeviceContactsList _this );

/* 'C' function for method : 'Device::ContactsList.sortedInsert()' */
void DeviceContactsList_sortedInsert( DeviceContactsList _this, DeviceContactListElement 
  aElement );

/* 'C' function for method : 'Device::ContactsList.OnSetSorting()' */
void DeviceContactsList_OnSetSorting( DeviceContactsList _this, XEnum value );

/* 'C' function for method : 'Device::ContactsList.FindByPhoneNumber()' */
DeviceContact DeviceContactsList_FindByPhoneNumber( DeviceContactsList _this, XString 
  aNumber );

/* 'C' function for method : 'Device::ContactsList.FindByID()' */
DeviceContact DeviceContactsList_FindByID( DeviceContactsList _this, DeviceContact 
  aContact );

/* 'C' function for method : 'Device::ContactsList.AddFirst()' */
void DeviceContactsList_AddFirst( DeviceContactsList _this, DeviceContact aContact );

/* 'C' function for method : 'Device::ContactsList.RemoveAll()' */
void DeviceContactsList_RemoveAll( DeviceContactsList _this );

/* 'C' function for method : 'Device::ContactsList.FindByID1()' */
DeviceContact DeviceContactsList_FindByID1( DeviceContactsList _this, XInt32 aID );

/* 'C' function for method : 'Device::ContactsList.Search()' */
void DeviceContactsList_Search( DeviceContactsList _this, XString aText );

/* 'C' function for method : 'Device::ContactsList.CancelSearch()' */
void DeviceContactsList_CancelSearch( DeviceContactsList _this );

/* Default onget method for the property 'NoOfItems' */
XInt32 DeviceContactsList_OnGetNoOfItems( DeviceContactsList _this );

/* Default onget method for the property 'Sorting' */
XEnum DeviceContactsList_OnGetSorting( DeviceContactsList _this );

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceContactsList_H */

/* Embedded Wizard */
