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
#include "_ApplicationContactsApp.h"
#include "_ApplicationContactsInsideCall.h"
#include "_ApplicationContactsList.h"
#include "_ApplicationContactsManager.h"
#include "_ApplicationContactsManager1.h"
#include "_ApplicationContactsPage.h"
#include "_ApplicationDetailsInsideCall.h"
#include "_ApplicationDeviceClass.h"
#include "_ApplicationFavContactItem.h"
#include "_ApplicationFavoritesPage.h"
#include "_ApplicationInComingCall.h"
#include "_ApplicationInputEtxt.h"
#include "_ApplicationKeyPadButtons.h"
#include "_ApplicationKeypadInsideCall.h"
#include "_ApplicationKeypadPage.h"
#include "_ApplicationNavBarButtons.h"
#include "_ApplicationPushButtonBig.h"
#include "_ApplicationPushButtonDelete.h"
#include "_ApplicationPushButtonMediumBlue.h"
#include "_ApplicationPushButtonMediumRed.h"
#include "_ApplicationPushButtonMediumTrans.h"
#include "_ApplicationPushButtonNoBackground.h"
#include "_ApplicationPushButtonSmall.h"
#include "_ApplicationRecentPage.h"
#include "_ApplicationSearchEtxt.h"
#include "_ApplicationTextButton.h"

/* Forward declaration of the class Effects::SlideTransition */
#ifndef _EffectsSlideTransition_
  EW_DECLARE_CLASS( EffectsSlideTransition )
#define _EffectsSlideTransition_
#endif

/* User defined auto object: 'Application::MyContacts' */
EW_DECLARE_AUTOOBJECT( ApplicationMyContacts, ApplicationContactsManager )

/* User defined enumeration: 'Application::Sorting' */
typedef enum
{
  ApplicationSortingNone                = 0,
  ApplicationSortingAscending           = 1,
  ApplicationSortingDescending          = 2
} ApplicationSorting;

/* User defined auto object: 'Application::Device' */
EW_DECLARE_AUTOOBJECT( ApplicationDevice, ApplicationDeviceClass )

/* User defined enumeration: 'Application::CallState' */
typedef enum
{
  ApplicationCallStateNone              = 0,
  ApplicationCallStateRingIncoming      = 1,
  ApplicationCallStateRingOutgoing      = 2,
  ApplicationCallStateTalk              = 3
} ApplicationCallState;

/* The global autoobject Effects::SlideUpCentered represents the fade-in/out operation 
   affecting the position and the opacity of the given GUI component. When using 
   the transition for the fade-in operation, the GUI component slides from the bottom 
   edge of its owner component and continues moving vertically until it reaches 
   the owner's center position. When using the transition for the fade-out operation, 
   the component slides up until it leaves the visible area of its owner component. 
   Additionally, while the transitions are performed, the opacity of the GUI component 
   fades-in or fades-out accordingly. This transition is thus ideal wherever one 
   GUI component should smoothly slide-in/out in context of another component. The 
   duration of the transition is configured per default to take 500 ms and the timing 
   is configured to start fast and then slow down the animation (FastIn_EaseOut).
   This object exists for your convenience permitting you to simply refer the transition 
   wherever it is required in your implementation without having to take care of 
   the creation and configuration of the object. If you require the transition to 
   run with other configuration (e.g. other timing parameters), create a copy of 
   this object and adapt its properties accordingly. */
EW_DECLARE_AUTOOBJECT( ApplicationSlideUpCentered, EffectsSlideTransition )

#ifdef __cplusplus
  }
#endif

#endif /* Application_H */

/* Embedded Wizard */
