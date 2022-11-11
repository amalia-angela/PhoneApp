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

#ifndef _ApplicationRecentItm_H
#define _ApplicationRecentItm_H

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

#include "_ComponentsPushButtonSmall.h"
#include "_ComponentsTextButton.h"
#include "_CoreGroup.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_EffectsInt32Effect.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"

/* Forward declaration of the class Application::RecentItm */
#ifndef _ApplicationRecentItm_
  EW_DECLARE_CLASS( ApplicationRecentItm )
#define _ApplicationRecentItm_
#endif

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
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

/* Forward declaration of the class Device::HistoryContact */
#ifndef _DeviceHistoryContact_
  EW_DECLARE_CLASS( DeviceHistoryContact )
#define _DeviceHistoryContact_
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


/* Deklaration of class : 'Application::RecentItm' */
EW_DEFINE_FIELDS( ApplicationRecentItm, CoreGroup )
  EW_PROPERTY( ContactHistory,  DeviceHistoryContact )
  EW_PROPERTY( OnActivate,      XSlot )
  EW_PROPERTY( OnDelete,        XSlot )
  EW_PROPERTY( OnInfo,          XSlot )
  EW_OBJECT  ( FlashTimer,      CoreTimer )
  EW_OBJECT  ( KeyHandler,      CoreKeyPressHandler )
  EW_OBJECT  ( Background,      ViewsRectangle )
  EW_OBJECT  ( TouchHandler,    CoreSimpleTouchHandler )
  EW_OBJECT  ( Line,            ViewsLine )
  EW_OBJECT  ( LastNameTxt,     ViewsText )
  EW_OBJECT  ( FirstNameTxt,    ViewsText )
  EW_OBJECT  ( CallTypeTxt,     ViewsText )
  EW_OBJECT  ( TimeTxt,         ViewsText )
  EW_OBJECT  ( InfoButton,      ComponentsPushButtonSmall )
  EW_OBJECT  ( PushButtonSmall, ComponentsPushButtonSmall )
  EW_OBJECT  ( RemoveButton,    ComponentsPushButtonSmall )
  EW_OBJECT  ( DeleteButton,    ComponentsTextButton )
  EW_OBJECT  ( Line1,           ViewsLine )
  EW_OBJECT  ( EditEffect,      EffectsInt32Effect )
  EW_OBJECT  ( DeleteEffect,    EffectsInt32Effect )
  EW_PROPERTY( Icon,            XString )
  EW_PROPERTY( ButtonColor,     XColor )
  EW_PROPERTY( IconColor,       XColor )
  EW_PROPERTY( ColorText1,      XColor )
  EW_PROPERTY( ColorText2,      XColor )
  EW_PROPERTY( EditMode,        XBool )
  EW_VARIABLE( enabled,         XBool )
  EW_VARIABLE( selected,        XBool )
  EW_VARIABLE( pressed,         XBool )
EW_END_OF_FIELDS( ApplicationRecentItm )

/* Virtual Method Table (VMT) for the class : 'Application::RecentItm' */
EW_DEFINE_METHODS( ApplicationRecentItm, CoreGroup )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
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
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( ApplicationRecentItm _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( RestackTop,        void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( ApplicationRecentItm )

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
void ApplicationRecentItm_UpdateViewState( ApplicationRecentItm _this, XSet aState );

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationRecentItm_onFlashTimer( ApplicationRecentItm _this, XObject sender );

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationRecentItm_onPressKey( ApplicationRecentItm _this, XObject sender );

/* This internal slot method is called when the user drags the finger while pressing 
   the button. This only updates the button to appear pressed or released. */
void ApplicationRecentItm_onEnterLeaveTouch( ApplicationRecentItm _this, XObject 
  sender );

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ApplicationRecentItm_onReleaseTouch( ApplicationRecentItm _this, XObject sender );

/* This internal slot method is called when the user touches the button's area. */
void ApplicationRecentItm_onPressTouch( ApplicationRecentItm _this, XObject sender );

/* 'C' function for method : 'Application::RecentItm.onAnimate()' */
void ApplicationRecentItm_onAnimate( ApplicationRecentItm _this, XObject sender );

/* 'C' function for method : 'Application::RecentItm.OnSetEditMode()' */
void ApplicationRecentItm_OnSetEditMode( ApplicationRecentItm _this, XBool value );

/* 'C' function for method : 'Application::RecentItm.onDelete()' */
void ApplicationRecentItm_onDelete( ApplicationRecentItm _this, XObject sender );

/* 'C' function for method : 'Application::RecentItm.onShowDelete()' */
void ApplicationRecentItm_onShowDelete( ApplicationRecentItm _this, XObject sender );

/* 'C' function for method : 'Application::RecentItm.onInfo()' */
void ApplicationRecentItm_onInfo( ApplicationRecentItm _this, XObject sender );

/* 'C' function for method : 'Application::RecentItm.OnSetContactHistory()' */
void ApplicationRecentItm_OnSetContactHistory( ApplicationRecentItm _this, DeviceHistoryContact 
  value );

/* 'C' function for method : 'Application::RecentItm.onContactRistoryUpdate()' */
void ApplicationRecentItm_onContactRistoryUpdate( ApplicationRecentItm _this, XObject 
  sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationRecentItm_H */

/* Embedded Wizard */
