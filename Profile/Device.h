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

#ifndef Device_H
#define Device_H

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

#include "_DeviceContact.h"
#include "_DeviceContactListElement.h"
#include "_DeviceContactsList.h"
#include "_DeviceDeviceClass.h"
#include "_DeviceDeviceSimulation.h"
#include "_DeviceHistoryContact.h"
#include "_DeviceHistoryMessagesList.h"
#include "_DeviceMessage.h"
#include "_DeviceMessagesList.h"
#include "_DevicePhoneServerClass.h"

/* User defined enumeration: 'Device::Sorting' */
typedef XEnum DeviceSorting;

#define DeviceSortingNone                                   0
#define DeviceSortingAscending                              1
#define DeviceSortingDescending                             2

/* User defined auto object: 'Device::Device' */
EW_DECLARE_AUTOOBJECT( DeviceDevice, DeviceDeviceClass )

/* User defined enumeration: 'Device::CallState' */
typedef XEnum DeviceCallState;

#define DeviceCallStateNone                                 0
#define DeviceCallStateMissed                               1
#define DeviceCallStateCancelled                            2
#define DeviceCallStateDialing                              3
#define DeviceCallStateRejected                             4
#define DeviceCallStateSpeaking                             5
#define DeviceCallStateEndCall                              6
#define DeviceCallStateFail                                 7

/* User defined enumeration: 'Device::CallDirection' */
typedef XEnum DeviceCallDirection;

#define DeviceCallDirectionNone                             0
#define DeviceCallDirectionIncoming                         1
#define DeviceCallDirectionOutgoing                         2

/* User defined auto object: 'Device::PhoneServer' */
EW_DECLARE_AUTOOBJECT( DevicePhoneServer, DevicePhoneServerClass )

#ifdef __cplusplus
  }
#endif

#endif /* Device_H */

/* Embedded Wizard */
