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

#ifndef Effects_H
#define Effects_H

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

#include "_EffectsBoolEffect.h"
#include "_EffectsEffect.h"
#include "_EffectsEffectTimerClass.h"
#include "_EffectsFadeInOutTransition.h"
#include "_EffectsFader.h"
#include "_EffectsFaderTask.h"
#include "_EffectsInt32Effect.h"
#include "_EffectsOpacityFader.h"
#include "_EffectsPointEffect.h"
#include "_EffectsPositionFader.h"
#include "_EffectsShowHideTransition.h"
#include "_EffectsSlideTransition.h"
#include "_EffectsTimingList.h"
#include "_EffectsTransition.h"
#include "_EffectsVisibilityFader.h"

/* The definition Effects::Timing determines the available timing functions for 
   animation effects. Except the 'Custom' item, all items of this definition represent 
   build-in timing functions. These can be simply selected in the effect property 
   Timing. */
typedef enum
{
  EffectsTimingLinear                   = 0,
  EffectsTimingPower_In                 = 1,
  EffectsTimingPower_Out                = 2,
  EffectsTimingPower_InOut              = 3,
  EffectsTimingExp_In                   = 4,
  EffectsTimingExp_Out                  = 5,
  EffectsTimingExp_InOut                = 6,
  EffectsTimingSine_In                  = 7,
  EffectsTimingSine_Out                 = 8,
  EffectsTimingSine_InOut               = 9,
  EffectsTimingCircle_In                = 10,
  EffectsTimingCircle_Out               = 11,
  EffectsTimingCircle_InOut             = 12,
  EffectsTimingBack_In                  = 13,
  EffectsTimingBack_Out                 = 14,
  EffectsTimingBack_InOut               = 15,
  EffectsTimingElastic_In               = 16,
  EffectsTimingElastic_Out              = 17,
  EffectsTimingElastic_InOut            = 18,
  EffectsTimingBounce_In                = 19,
  EffectsTimingBounce_Out               = 20,
  EffectsTimingBounce_InOut             = 21,
  EffectsTimingEaseIn_FastOut           = 22,
  EffectsTimingFastIn_EaseOut           = 23,
  EffectsTimingEaseIn_EaseOut           = 24,
  EffectsTimingFastIn_FastOut           = 25,
  EffectsTimingCustom                   = 26
} EffectsTiming;

/* The global autoobject Effects::EffectTimer triggers all actually active animation 
   effects. In this way all effects will run simultanously. Per default the timer 
   is configured with 15 ms period (~60 FPS). By overriding the Effects::EffectTimer 
   autoobject by a variant you can specify another resolution to drive the animations. */
EW_DECLARE_AUTOOBJECT( EffectsEffectTimer, EffectsEffectTimerClass )

/* The global autoobject Effects::ShowHideCentered represents the most primitive 
   fade-in/out operation affecting the pure visibility of a given GUI component. 
   When using the transition for the fade-in operation, the GUI component is automatically 
   arranged to appear centered within the area of its owner component. This transition 
   is thus ideal wherever one GUI component should instantly appear or disappear 
   in context of another component without any animation effects.
   Please note, with this transition the fade-in operation is performed just at 
   the beginning of all other transitions running simultaneously, in other words, 
   the GUI component appears during the start phase of the transition. In turn, 
   to fade-out the component, the operation is executed during the end phase of 
   the transition. 
   This object exists for your convenience permitting you to simply refer the transition 
   wherever it is required in your implementation without having to take care of 
   the creation and configuration of the object. If you require the transition to 
   run with other configuration (e.g. to show the GUI component at the end instead 
   of the start phase), create a copy of this object and adapt its properties accordingly. */
EW_DECLARE_AUTOOBJECT( EffectsShowHideCentered, EffectsShowHideTransition )

#ifdef __cplusplus
  }
#endif

#endif /* Effects_H */

/* Embedded Wizard */
