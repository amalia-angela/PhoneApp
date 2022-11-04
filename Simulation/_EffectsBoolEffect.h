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

#ifndef _EffectsBoolEffect_H
#define _EffectsBoolEffect_H

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

/* Forward declaration of the class Core::Timer */
#ifndef _CoreTimer_
  EW_DECLARE_CLASS( CoreTimer )
#define _CoreTimer_
#endif

/* Forward declaration of the class Effects::BoolEffect */
#ifndef _EffectsBoolEffect_
  EW_DECLARE_CLASS( EffectsBoolEffect )
#define _EffectsBoolEffect_
#endif


/* The class Effects::BoolEffect provides an animation effect intended to toggle 
   a 'bool' value between two values determined by the properties @Value1 and @value2. 
   The effect can 'remote control' a 'bool' property which is referred by the @Outlet 
   property. 
   Beside the both end values, bool animation effects are determined by their duration. 
   The duration is primarily controlled by the value of the property @CycleDuration. 
   This is the time the effect will take for a single animation run. Whether and 
   how often the animation is repeated is stored in the property @NoOfCycles. In 
   this case the property @InterCycleDelay can determine an optional interval to 
   wait between two consecutive animation runs. Finally the property @InitialDelay 
   determines the interval to wait at the very beginning of the effect still before 
   the first animation run began.
   When the effect is finished a signal is send to the slot method stored in the 
   @OnFinished property.
   Whether the effect is running or not is controlled by its property @Enabled. 
   It can be used to start and stop the effect. The effect can also be controlled 
   by sending signals to its @StartEffect and @StopEffect slot methods. */
EW_DEFINE_FIELDS( EffectsBoolEffect, XObject )
  EW_VARIABLE( timer,           CoreTimer )
  EW_PROPERTY( Outlet,          XRef )
  EW_VARIABLE( cycleCounter,    XInt32 )
  EW_VARIABLE( startTime,       XUInt32 )
  EW_PROPERTY( CycleDuration,   XInt32 )
  EW_PROPERTY( InterCycleDelay, XInt32 )
  EW_PROPERTY( Enabled,         XBool )
  EW_PROPERTY( Value1,          XBool )
  EW_PROPERTY( Value2,          XBool )
EW_END_OF_FIELDS( EffectsBoolEffect )

/* Virtual Method Table (VMT) for the class : 'Effects::BoolEffect' */
EW_DEFINE_METHODS( EffectsBoolEffect, XObject )
EW_END_OF_METHODS( EffectsBoolEffect )

/* 'C' function for method : 'Effects::BoolEffect.timerSlot()' */
void EffectsBoolEffect_timerSlot( EffectsBoolEffect _this, XObject sender );

/* 'C' function for method : 'Effects::BoolEffect.OnSetCycleDuration()' */
void EffectsBoolEffect_OnSetCycleDuration( EffectsBoolEffect _this, XInt32 value );

/* 'C' function for method : 'Effects::BoolEffect.OnSetInterCycleDelay()' */
void EffectsBoolEffect_OnSetInterCycleDelay( EffectsBoolEffect _this, XInt32 value );

/* 'C' function for method : 'Effects::BoolEffect.OnSetEnabled()' */
void EffectsBoolEffect_OnSetEnabled( EffectsBoolEffect _this, XBool value );

#ifdef __cplusplus
  }
#endif

#endif /* _EffectsBoolEffect_H */

/* Embedded Wizard */
