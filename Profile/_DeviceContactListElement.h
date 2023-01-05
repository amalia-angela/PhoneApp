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

#ifndef _DeviceContactListElement_H
#define _DeviceContactListElement_H

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


/* Deklaration of class : 'Device::ContactListElement' */
EW_DEFINE_FIELDS( DeviceContactListElement, XObject )
  EW_VARIABLE( next,            DeviceContactListElement )
  EW_VARIABLE( Data,            DeviceContact )
EW_END_OF_FIELDS( DeviceContactListElement )

/* Virtual Method Table (VMT) for the class : 'Device::ContactListElement' */
EW_DEFINE_METHODS( DeviceContactListElement, XObject )
EW_END_OF_METHODS( DeviceContactListElement )

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceContactListElement_H */

/* Embedded Wizard */
