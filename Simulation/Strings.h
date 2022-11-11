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

#ifndef Strings_H
#define Strings_H

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

/* User defined constant: 'Strings::MissedTxt' */
EW_DECLARE_CONST( StringsMissedTxt )

/* User defined constant: 'Strings::IncomingTxt' */
EW_DECLARE_CONST( StringsIncomingTxt )

/* User defined constant: 'Strings::CancelledTxt' */
EW_DECLARE_CONST( StringsCancelledTxt )

/* User defined constant: 'Strings::RejectedTxt' */
EW_DECLARE_CONST( StringsRejectedTxt )

/* User defined constant: 'Strings::OutgoingTxt' */
EW_DECLARE_CONST( StringsOutgoingTxt )

/* User defined constant: 'Strings::ErrorTxt' */
extern const XStringRes StringsErrorTxt;

/* User defined constant: 'Strings::FavoritesTxt' */
extern const XStringRes StringsFavoritesTxt;

/* User defined constant: 'Strings::RecentTxt' */
extern const XStringRes StringsRecentTxt;

/* User defined constant: 'Strings::KeypadTxt' */
extern const XStringRes StringsKeypadTxt;

/* User defined constant: 'Strings::ContactsTxtx' */
extern const XStringRes StringsContactsTxtx;

/* User defined constant: 'Strings::HideTxt' */
extern const XStringRes StringsHideTxt;

#ifdef __cplusplus
  }
#endif

#endif /* Strings_H */

/* Embedded Wizard */
