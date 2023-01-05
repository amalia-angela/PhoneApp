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

#ifndef _ComponentsButtonBase70x90_H
#define _ComponentsButtonBase70x90_H

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

#include "_CoreKeyPressHandler.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_TemplatesPushButton.h"
#include "_ViewsImage.h"
#include "_ViewsText.h"

/* Forward declaration of the class Components::ButtonBase70x90 */
#ifndef _ComponentsButtonBase70x90_
  EW_DECLARE_CLASS( ComponentsButtonBase70x90 )
#define _ComponentsButtonBase70x90_
#endif

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::Group */
#ifndef _CoreGroup_
  EW_DECLARE_CLASS( CoreGroup )
#define _CoreGroup_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::TaskQueue */
#ifndef _CoreTaskQueue_
  EW_DECLARE_CLASS( CoreTaskQueue )
#define _CoreTaskQueue_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Effects::Fader */
#ifndef _EffectsFader_
  EW_DECLARE_CLASS( EffectsFader )
#define _EffectsFader_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif

/* Forward declaration of the class Resources::Bitmap */
#ifndef _ResourcesBitmap_
  EW_DECLARE_CLASS( ResourcesBitmap )
#define _ResourcesBitmap_
#endif

/* Forward declaration of the class Resources::Font */
#ifndef _ResourcesFont_
  EW_DECLARE_CLASS( ResourcesFont )
#define _ResourcesFont_
#endif


/* This class implements a 'push button' widget. When the user presses the button, 
   a signal is sent to the slot method stored in its @OnActivate property. */
EW_DEFINE_FIELDS( ComponentsButtonBase70x90, TemplatesPushButton )
  EW_OBJECT  ( FlashTimer,      CoreTimer )
  EW_OBJECT  ( KeyHandler,      CoreKeyPressHandler )
  EW_OBJECT  ( Background,      ViewsImage )
  EW_OBJECT  ( TouchHandler,    CoreSimpleTouchHandler )
  EW_OBJECT  ( InitialsTxt,     ViewsText )
  EW_OBJECT  ( DescripTxt,      ViewsText )
  EW_PROPERTY( DescriptFont,    ResourcesFont )
  EW_PROPERTY( IconFont,        ResourcesFont )
  EW_PROPERTY( Backgound,       ResourcesBitmap )
  EW_PROPERTY( OnActivate,      XSlot )
  EW_PROPERTY( Icon,            XString )
  EW_PROPERTY( Descript,        XString )
  EW_PROPERTY( DescriptColor,   XColor )
  EW_PROPERTY( IconColor,       XColor )
  EW_PROPERTY( BackgoundColor,  XColor )
  EW_PROPERTY( BackgoundColorPressed, XColor )
  EW_PROPERTY( BackgroundColorEnabled, XColor )
  EW_PROPERTY( DescriptColorEnabled, XColor )
  EW_PROPERTY( IconColorEnabled, XColor )
  EW_PROPERTY( DescriptColorPressed, XColor )
  EW_PROPERTY( IconColorPressed, XColor )
  EW_VARIABLE( pressed,         XBool )
  EW_VARIABLE( selected,        XBool )
  EW_VARIABLE( enabled,         XBool )
EW_END_OF_FIELDS( ComponentsButtonBase70x90 )

/* Virtual Method Table (VMT) for the class : 'Components::ButtonBase70x90' */
EW_DEFINE_METHODS( ComponentsButtonBase70x90, TemplatesPushButton )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, CoreView aStartView, 
    XSet aRetargetReason )
  EW_METHOD( AdjustDrawingArea, XRect )( CoreGroup _this, XRect aArea )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetBuffered,     void )( CoreGroup _this, XBool value )
  EW_METHOD( OnSetOpacity,      void )( CoreGroup _this, XInt32 value )
  EW_METHOD( SwitchToDialog,    void )( CoreGroup _this, CoreGroup aDialogGroup, 
    EffectsTransition aPresentTransition, EffectsTransition aDismissTransition, 
    EffectsTransition aOverlayTransition, EffectsTransition aRestoreTransition, 
    EffectsTransition aOverrideDismissTransition, EffectsTransition aOverrideOverlayTransition, 
    EffectsTransition aOverrideRestoreTransition, XSlot aComplete, XSlot aCancel, 
    XBool aCombine )
  EW_METHOD( DismissDialog,     void )( CoreGroup _this, CoreGroup aDialogGroup, 
    EffectsTransition aOverrideDismissTransition, EffectsTransition aOverrideOverlayTransition, 
    EffectsTransition aOverrideRestoreTransition, XSlot aComplete, XSlot aCancel, 
    XBool aCombine )
  EW_METHOD( PresentDialog,     void )( CoreGroup _this, CoreGroup aDialogGroup, 
    EffectsTransition aPresentTransition, EffectsTransition aDismissTransition, 
    EffectsTransition aOverlayTransition, EffectsTransition aRestoreTransition, 
    EffectsTransition aOverrideOverlayTransition, EffectsTransition aOverrideRestoreTransition, 
    XSlot aComplete, XSlot aCancel, XBool aCombine )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateLayout,      void )( CoreGroup _this, XPoint aSize )
  EW_METHOD( UpdateViewState,   void )( ComponentsButtonBase70x90 _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( FadeGroup,         void )( CoreGroup _this, CoreGroup aGroup, EffectsFader 
    aFader, XSlot aComplete, XSlot aCancel, XBool aCombine )
  EW_METHOD( RestackTop,        void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( ComponentsButtonBase70x90 )

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ComponentsButtonBase70x90_UpdateViewState( ComponentsButtonBase70x90 _this, 
  XSet aState );

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ComponentsButtonBase70x90_onFlashTimer( ComponentsButtonBase70x90 _this, XObject 
  sender );

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ComponentsButtonBase70x90_onPressKey( ComponentsButtonBase70x90 _this, XObject 
  sender );

/* This internal slot method is called when the user drags the finger while pressing 
   the button. This only updates the button to appear pressed or released. */
void ComponentsButtonBase70x90_onEnterLeaveTouch( ComponentsButtonBase70x90 _this, 
  XObject sender );

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ComponentsButtonBase70x90_onReleaseTouch( ComponentsButtonBase70x90 _this, 
  XObject sender );

/* This internal slot method is called when the user touches the button's area. */
void ComponentsButtonBase70x90_onPressTouch( ComponentsButtonBase70x90 _this, XObject 
  sender );

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetIcon()' */
void ComponentsButtonBase70x90_OnSetIcon( ComponentsButtonBase70x90 _this, XString 
  value );

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetDescript()' */
void ComponentsButtonBase70x90_OnSetDescript( ComponentsButtonBase70x90 _this, XString 
  value );

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetDescriptColor()' */
void ComponentsButtonBase70x90_OnSetDescriptColor( ComponentsButtonBase70x90 _this, 
  XColor value );

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetIconColor()' */
void ComponentsButtonBase70x90_OnSetIconColor( ComponentsButtonBase70x90 _this, 
  XColor value );

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetBackgoundColor()' */
void ComponentsButtonBase70x90_OnSetBackgoundColor( ComponentsButtonBase70x90 _this, 
  XColor value );

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetBackgoundColorPressed()' */
void ComponentsButtonBase70x90_OnSetBackgoundColorPressed( ComponentsButtonBase70x90 _this, 
  XColor value );

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetDescriptFont()' */
void ComponentsButtonBase70x90_OnSetDescriptFont( ComponentsButtonBase70x90 _this, 
  ResourcesFont value );

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetIconFont()' */
void ComponentsButtonBase70x90_OnSetIconFont( ComponentsButtonBase70x90 _this, ResourcesFont 
  value );

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetBackgound()' */
void ComponentsButtonBase70x90_OnSetBackgound( ComponentsButtonBase70x90 _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetBackgroundColorEnabled()' */
void ComponentsButtonBase70x90_OnSetBackgroundColorEnabled( ComponentsButtonBase70x90 _this, 
  XColor value );

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetDescriptColorEnabled()' */
void ComponentsButtonBase70x90_OnSetDescriptColorEnabled( ComponentsButtonBase70x90 _this, 
  XColor value );

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetIconColorEnabled()' */
void ComponentsButtonBase70x90_OnSetIconColorEnabled( ComponentsButtonBase70x90 _this, 
  XColor value );

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetDescriptColorPressed()' */
void ComponentsButtonBase70x90_OnSetDescriptColorPressed( ComponentsButtonBase70x90 _this, 
  XColor value );

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetIconColorPressed()' */
void ComponentsButtonBase70x90_OnSetIconColorPressed( ComponentsButtonBase70x90 _this, 
  XColor value );

#ifdef __cplusplus
  }
#endif

#endif /* _ComponentsButtonBase70x90_H */

/* Embedded Wizard */
