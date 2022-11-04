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

#ifndef _ApplicationInComingCall_H
#define _ApplicationInComingCall_H

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

#include "_ApplicationPushButtonBig.h"
#include "_ApplicationPushButtonMediumTrans.h"
#include "_CoreGroup.h"
#include "_CoreTime.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"

/* Forward declaration of the class Application::Contact */
#ifndef _ApplicationContact_
  EW_DECLARE_CLASS( ApplicationContact )
#define _ApplicationContact_
#endif

/* Forward declaration of the class Application::ContactHistory */
#ifndef _ApplicationContactHistory_
  EW_DECLARE_CLASS( ApplicationContactHistory )
#define _ApplicationContactHistory_
#endif

/* Forward declaration of the class Application::InComingCall */
#ifndef _ApplicationInComingCall_
  EW_DECLARE_CLASS( ApplicationInComingCall )
#define _ApplicationInComingCall_
#endif

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::KeyPressHandler */
#ifndef _CoreKeyPressHandler_
  EW_DECLARE_CLASS( CoreKeyPressHandler )
#define _CoreKeyPressHandler_
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


/* Deklaration of class : 'Application::InComingCall' */
EW_DEFINE_FIELDS( ApplicationInComingCall, CoreGroup )
  EW_PROPERTY( Contact,         ApplicationContact )
  EW_PROPERTY( ContactHistory,  ApplicationContactHistory )
  EW_OBJECT  ( Background,      ViewsRectangle )
  EW_OBJECT  ( PushButtonMediumTrans, ApplicationPushButtonMediumTrans )
  EW_OBJECT  ( PushButtonMediumTrans1, ApplicationPushButtonMediumTrans )
  EW_OBJECT  ( TimeTxt,         ViewsText )
  EW_OBJECT  ( ContactNameTxt,  ViewsText )
  EW_OBJECT  ( UserInitials,    ApplicationPushButtonBig )
  EW_OBJECT  ( Time,            CoreTime )
EW_END_OF_FIELDS( ApplicationInComingCall )

/* Virtual Method Table (VMT) for the class : 'Application::InComingCall' */
EW_DEFINE_METHODS( ApplicationInComingCall, CoreGroup )
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
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( RestackTop,        void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( ApplicationInComingCall )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationInComingCall_Init( ApplicationInComingCall _this, XHandle aArg );

/* 'C' function for method : 'Application::InComingCall.OnSetContact()' */
void ApplicationInComingCall_OnSetContact( ApplicationInComingCall _this, ApplicationContact 
  value );

/* 'C' function for method : 'Application::InComingCall.onContactUpdated()' */
void ApplicationInComingCall_onContactUpdated( ApplicationInComingCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::InComingCall.onDesclineCall()' */
void ApplicationInComingCall_onDesclineCall( ApplicationInComingCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::InComingCall.onCallState()' */
void ApplicationInComingCall_onCallState( ApplicationInComingCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::InComingCall.onAcceptCall()' */
void ApplicationInComingCall_onAcceptCall( ApplicationInComingCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::InComingCall.getContact()' */
void ApplicationInComingCall_getContact( ApplicationInComingCall _this );

/* 'C' function for method : 'Application::InComingCall.updateCurrentTime()' */
void ApplicationInComingCall_updateCurrentTime( ApplicationInComingCall _this, XObject 
  sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationInComingCall_H */

/* Embedded Wizard */
