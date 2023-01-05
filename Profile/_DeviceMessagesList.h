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

#ifndef _DeviceMessagesList_H
#define _DeviceMessagesList_H

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

/* Forward declaration of the class Device::Message */
#ifndef _DeviceMessage_
  EW_DECLARE_CLASS( DeviceMessage )
#define _DeviceMessage_
#endif

/* Forward declaration of the class Device::MessagesList */
#ifndef _DeviceMessagesList_
  EW_DECLARE_CLASS( DeviceMessagesList )
#define _DeviceMessagesList_
#endif


/* Deklaration of class : 'Device::MessagesList' */
EW_DEFINE_FIELDS( DeviceMessagesList, XObject )
  EW_VARIABLE( head,            DeviceMessage )
  EW_PROPERTY( NoOfItems,       XInt32 )
EW_END_OF_FIELDS( DeviceMessagesList )

/* Virtual Method Table (VMT) for the class : 'Device::MessagesList' */
EW_DEFINE_METHODS( DeviceMessagesList, XObject )
EW_END_OF_METHODS( DeviceMessagesList )

/* 'C' function for method : 'Device::MessagesList.Add()' */
void DeviceMessagesList_Add( DeviceMessagesList _this, DeviceMessage aMessage );

/* 'C' function for method : 'Device::MessagesList.Remove()' */
void DeviceMessagesList_Remove( DeviceMessagesList _this, DeviceMessage aMessage );

/* 'C' function for method : 'Device::MessagesList.TraceMessages()' */
void DeviceMessagesList_TraceMessages( DeviceMessagesList _this );

/* 'C' function for method : 'Device::MessagesList.OnSetNoOfItems()' */
void DeviceMessagesList_OnSetNoOfItems( DeviceMessagesList _this, XInt32 value );

/* 'C' function for method : 'Device::MessagesList.GetLastMessage()' */
DeviceMessage DeviceMessagesList_GetLastMessage( DeviceMessagesList _this );

/* 'C' function for method : 'Device::MessagesList.RemoveAll()' */
void DeviceMessagesList_RemoveAll( DeviceMessagesList _this );

/* Default onget method for the property 'NoOfItems' */
XInt32 DeviceMessagesList_OnGetNoOfItems( DeviceMessagesList _this );

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceMessagesList_H */

/* Embedded Wizard */
