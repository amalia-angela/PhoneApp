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

#ifndef Application_H
#define Application_H

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

#include "_ApplicationApplication.h"
#include "_ApplicationCallPage.h"
#include "_ApplicationContact.h"
#include "_ApplicationContactAddPage.h"
#include "_ApplicationContactDetailsPage.h"
#include "_ApplicationContactEditPage.h"
#include "_ApplicationContactItem.h"
#include "_ApplicationContacts.h"
#include "_ApplicationContactsCall.h"
#include "_ApplicationContactsPage.h"
#include "_ApplicationDeviceClass.h"
#include "_ApplicationInputEtxt.h"
#include "_ApplicationKeyPadButtons.h"
#include "_ApplicationKeypad.h"
#include "_ApplicationPushButtonBig.h"
#include "_ApplicationPushButtonDelete.h"
#include "_ApplicationPushButtonMediumBlue.h"
#include "_ApplicationPushButtonMediumRed.h"
#include "_ApplicationPushButtonMediumTrans.h"
#include "_ApplicationPushButtonNoBackground.h"
#include "_ApplicationPushButtonSmall.h"
#include "_ApplicationSearchEtxt.h"
#include "_ApplicationTextButton.h"
#include "_ApplicationVariantContacts.h"

/* User defined auto object: 'Application::MyContacts' */
EW_DECLARE_AUTOOBJECT( ApplicationMyContacts, ApplicationContacts )

/* User defined enumeration: 'Application::Sorting' */
typedef enum
{
  ApplicationSortingNone                = 0,
  ApplicationSortingAscending           = 1,
  ApplicationSortingDescending          = 2
} ApplicationSorting;

/* User defined auto object: 'Application::Device' */
EW_DECLARE_AUTOOBJECT( ApplicationDevice, ApplicationDeviceClass )

#ifdef __cplusplus
  }
#endif

#endif /* Application_H */

/* Embedded Wizard */
