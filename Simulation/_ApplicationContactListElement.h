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

#ifndef _ApplicationContactListElement_H
#define _ApplicationContactListElement_H

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

/* Forward declaration of the class Application::ContactListElement */
#ifndef _ApplicationContactListElement_
  EW_DECLARE_CLASS( ApplicationContactListElement )
#define _ApplicationContactListElement_
#endif


/* Deklaration of class : 'Application::ContactListElement' */
EW_DEFINE_FIELDS( ApplicationContactListElement, XObject )
  EW_VARIABLE( next,            ApplicationContactListElement )
  EW_VARIABLE( Data,            ApplicationContact )
EW_END_OF_FIELDS( ApplicationContactListElement )

/* Virtual Method Table (VMT) for the class : 'Application::ContactListElement' */
EW_DEFINE_METHODS( ApplicationContactListElement, XObject )
EW_END_OF_METHODS( ApplicationContactListElement )

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationContactListElement_H */

/* Embedded Wizard */
