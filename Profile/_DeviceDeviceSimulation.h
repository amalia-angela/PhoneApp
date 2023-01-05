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

#ifndef _DeviceDeviceSimulation_H
#define _DeviceDeviceSimulation_H

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

#include "_DeviceContactsList.h"
#include "_DeviceDeviceClass.h"
#include "_DeviceHistoryMessagesList.h"

/* Forward declaration of the class Device::Contact */
#ifndef _DeviceContact_
  EW_DECLARE_CLASS( DeviceContact )
#define _DeviceContact_
#endif

/* Forward declaration of the class Device::PhoneServerClass */
#ifndef _DevicePhoneServerClass_
  EW_DECLARE_CLASS( DevicePhoneServerClass )
#define _DevicePhoneServerClass_
#endif


/* Deklaration of class variant : 'Device::DeviceSimulation' */
EW_DEFINE_VFIELDS( DeviceDeviceSimulation, XObject, DeviceDeviceClass )
EW_END_OF_VFIELDS( DeviceDeviceSimulation )

/* Virtual Method Table (VMT) for the class variant : 'Device::DeviceSimulation' */
EW_DEFINE_VMETHODS( DeviceDeviceSimulation, XObject, DeviceDeviceClass )
EW_END_OF_VMETHODS( DeviceDeviceSimulation )

/* 'C' function for method : 'Device::DeviceSimulation.Init()' */
void DeviceDeviceSimulation_Init( DeviceDeviceClass _this, XHandle aArg );

/* 'C' function for method : 'Device::DeviceSimulation.CreateContact()' */
void DeviceDeviceSimulation_CreateContact( DeviceDeviceClass _this, XString aLastName, 
  XString aFirstName, XString aPhoneNumber );

/* 'C' function for method : 'Device::DeviceSimulation.CreateContactData()' */
void DeviceDeviceSimulation_CreateContactData( DeviceDeviceClass _this, XObject 
  sender );

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceDeviceSimulation_H */

/* Embedded Wizard */
