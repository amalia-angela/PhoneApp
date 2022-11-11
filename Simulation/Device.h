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

#ifndef Device_H
#define Device_H

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

#include "_DeviceContact.h"
#include "_DeviceContactList.h"
#include "_DeviceContactListElement.h"
#include "_DeviceDeviceClass.h"
#include "_DeviceDeviceSimulation.h"
#include "_DeviceHistoryContact.h"

/* User defined enumeration: 'Device::Sorting' */
typedef enum
{
  DeviceSortingNone                     = 0,
  DeviceSortingAscending                = 1,
  DeviceSortingDescending               = 2
} DeviceSorting;

/* User defined auto object: 'Device::Device' */
EW_DECLARE_AUTOOBJECT( DeviceDevice, DeviceDeviceClass )

/* User defined enumeration: 'Device::CallState' */
typedef enum
{
  DeviceCallStateNone                   = 0,
  DeviceCallStateMissed                 = 1,
  DeviceCallStateCancelled              = 2,
  DeviceCallStateDialing                = 3,
  DeviceCallStateRejected               = 4,
  DeviceCallStateHold                   = 5,
  DeviceCallStateSpeaking               = 6,
  DeviceCallStateEndCall                = 7
} DeviceCallState;

/* User defined enumeration: 'Device::CallDirection' */
typedef enum
{
  DeviceCallDirectionNone               = 0,
  DeviceCallDirectionIncoming           = 1,
  DeviceCallDirectionOutgoing           = 2
} DeviceCallDirection;

#ifdef __cplusplus
  }
#endif

#endif /* Device_H */

/* Embedded Wizard */
