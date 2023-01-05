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

#ifndef _EffectsFadeInOutTransition_H
#define _EffectsFadeInOutTransition_H

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

#include "_EffectsTransition.h"

/* Forward declaration of the class Effects::FadeInOutTransition */
#ifndef _EffectsFadeInOutTransition_
  EW_DECLARE_CLASS( EffectsFadeInOutTransition )
#define _EffectsFadeInOutTransition_
#endif

/* Forward declaration of the class Effects::Fader */
#ifndef _EffectsFader_
  EW_DECLARE_CLASS( EffectsFader )
#define _EffectsFader_
#endif


/* The class Effects::FadeInOutTransition provides functionality for the fade-in/out 
   operation affecting the opacity of a given GUI component. When using the transition 
   for the fade-in operation, the GUI component is automatically arranged to appear 
   (per default centered) within the area of its owner component. This transition 
   is thus ideal wherever one GUI component should smoothly appear or disappear 
   in context of another component.
   Per default when the component is displayed, it is aligned in the center of its 
   owner. This can be modified by using the property @Alignment. Furthermore, with 
   the four properties @MarginLeft, @MarginRight, @MarginTop and @MarginBottom the 
   area to align the component within its owner can be limited.
   How long the transition should take is determined in the property @Duration, 
   which is per default 500 ms. With the property @Buffered you can configure, whether 
   the transition should additionally enable the buffering mode for the affected 
   GUI component while it perform the animation. */
EW_DEFINE_FIELDS( EffectsFadeInOutTransition, EffectsTransition )
  EW_PROPERTY( MarginLeft,      XInt32 )
  EW_PROPERTY( Alignment,       XSet )
  EW_PROPERTY( Duration,        XInt32 )
EW_END_OF_FIELDS( EffectsFadeInOutTransition )

/* Virtual Method Table (VMT) for the class : 'Effects::FadeInOutTransition' */
EW_DEFINE_METHODS( EffectsFadeInOutTransition, EffectsTransition )
  EW_METHOD( CreatePresentFader, EffectsFader )( EffectsFadeInOutTransition _this )
  EW_METHOD( CreateDismissFader, EffectsFader )( EffectsFadeInOutTransition _this )
  EW_METHOD( CreateRestoreFader, EffectsFader )( EffectsFadeInOutTransition _this )
  EW_METHOD( CreateOverlayFader, EffectsFader )( EffectsFadeInOutTransition _this )
EW_END_OF_METHODS( EffectsFadeInOutTransition )

/* The method CreatePresentFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-in (present) transition. Finally the prepared fader object is returned to 
   the caller. Typically, the created fader is used to show (to present) a GUI component 
   when the user navigates to it. The method has to be overridden and implemented 
   in derived classes. The actual implementation does nothing and returns 'null'. */
EffectsFader EffectsFadeInOutTransition_CreatePresentFader( EffectsFadeInOutTransition _this );

/* The method CreateDismissFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-out (dismiss) transition. Finally the prepared fader object is returned 
   to the caller. Typically, the created fader is used to hide (to dismiss) a GUI 
   component when the user leaves it while he/she navigates in the GUI system. The 
   method has to be overridden and implemented in derived classes. The actual implementation 
   does nothing and returns 'null'. */
EffectsFader EffectsFadeInOutTransition_CreateDismissFader( EffectsFadeInOutTransition _this );

/* The method CreateRestoreFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-in (restore) transition. Finally the prepared fader object is returned to 
   the caller. Typically, the created fader is used to show (to restore the original 
   visible state) of a GUI component, which has been obscured (overlaid) by other 
   GUI components during the user navigates in the GUI system. The method has to 
   be overridden and implemented in derived classes. The actual implementation of 
   this method redirects the operation to the method @CreatePresentFader(). */
EffectsFader EffectsFadeInOutTransition_CreateRestoreFader( EffectsFadeInOutTransition _this );

/* The method CreateOverlayFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-out (overlay) transition. Finally the prepared fader object is returned 
   to the caller. Typically, the created fader is used to temporarily hide (to overlay) 
   a GUI component when the user navigates a deeper level in the GUI system. The 
   method has to be overridden and implemented in derived classes. The actual implementation 
   of this method redirects the operation to the method @CreateDismissFader(). */
EffectsFader EffectsFadeInOutTransition_CreateOverlayFader( EffectsFadeInOutTransition _this );

/* 'C' function for method : 'Effects::FadeInOutTransition.onInitializeIn()' */
void EffectsFadeInOutTransition_onInitializeIn( EffectsFadeInOutTransition _this, 
  XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _EffectsFadeInOutTransition_H */

/* Embedded Wizard */
