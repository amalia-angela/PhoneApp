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

#ifndef _ApplicationOngoingCall_H
#define _ApplicationOngoingCall_H

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

#include "_ApplicationCallBase.h"
#include "_ApplicationKeypadInsideCall.h"
#include "_ComponentsButton65x90.h"
#include "_ComponentsButtonBase70x90.h"
#include "_CoreTimer.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"

/* Forward declaration of the class Application::ContactsAppInsideCall */
#ifndef _ApplicationContactsAppInsideCall_
  EW_DECLARE_CLASS( ApplicationContactsAppInsideCall )
#define _ApplicationContactsAppInsideCall_
#endif

/* Forward declaration of the class Application::ContactsInsideCall */
#ifndef _ApplicationContactsInsideCall_
  EW_DECLARE_CLASS( ApplicationContactsInsideCall )
#define _ApplicationContactsInsideCall_
#endif

/* Forward declaration of the class Application::OngoingCall */
#ifndef _ApplicationOngoingCall_
  EW_DECLARE_CLASS( ApplicationOngoingCall )
#define _ApplicationOngoingCall_
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


/* Deklaration of class : 'Application::OngoingCall' */
EW_DEFINE_FIELDS( ApplicationOngoingCall, ApplicationCallBase )
  EW_OBJECT  ( ContactsBtn,     ComponentsButton65x90 )
  EW_OBJECT  ( VideoCallBtn,    ComponentsButton65x90 )
  EW_OBJECT  ( AddCallBtn,      ComponentsButton65x90 )
  EW_OBJECT  ( SpeakerBtn,      ComponentsButton65x90 )
  EW_OBJECT  ( KeyPadBtn,       ComponentsButton65x90 )
  EW_OBJECT  ( MuteBtn,         ComponentsButton65x90 )
  EW_OBJECT  ( Keypad,          ApplicationKeypadInsideCall )
  EW_OBJECT  ( Stoper,          CoreTimer )
  EW_VARIABLE( contactsPage,    ApplicationContactsInsideCall )
  EW_VARIABLE( addCall,         ApplicationContactsAppInsideCall )
EW_END_OF_FIELDS( ApplicationOngoingCall )

/* Virtual Method Table (VMT) for the class : 'Application::OngoingCall' */
EW_DEFINE_METHODS( ApplicationOngoingCall, ApplicationCallBase )
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
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
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
  EW_METHOD( onContactUpdated,  void )( ApplicationOngoingCall _this, XObject sender )
EW_END_OF_METHODS( ApplicationOngoingCall )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationOngoingCall_Init( ApplicationOngoingCall _this, XHandle aArg );

/* 'C' function for method : 'Application::OngoingCall.onContactUpdated()' */
void ApplicationOngoingCall_onContactUpdated( ApplicationOngoingCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::OngoingCall.onSpeakerPress()' */
void ApplicationOngoingCall_onSpeakerPress( ApplicationOngoingCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::OngoingCall.onMicPress()' */
void ApplicationOngoingCall_onMicPress( ApplicationOngoingCall _this, XObject sender );

/* 'C' function for method : 'Application::OngoingCall.onKeypadPress()' */
void ApplicationOngoingCall_onKeypadPress( ApplicationOngoingCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::OngoingCall.onAddCallPress()' */
void ApplicationOngoingCall_onAddCallPress( ApplicationOngoingCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::OngoingCall.onVideoCallPress()' */
void ApplicationOngoingCall_onVideoCallPress( ApplicationOngoingCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::OngoingCall.onContactsPress()' */
void ApplicationOngoingCall_onContactsPress( ApplicationOngoingCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::OngoingCall.onCancel()' */
void ApplicationOngoingCall_onCancel( ApplicationOngoingCall _this, XObject sender );

/* 'C' function for method : 'Application::OngoingCall.onHide()' */
void ApplicationOngoingCall_onHide( ApplicationOngoingCall _this, XObject sender );

/* 'C' function for method : 'Application::OngoingCall.onKeypadEdit()' */
void ApplicationOngoingCall_onKeypadEdit( ApplicationOngoingCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::OngoingCall.onCancel1()' */
void ApplicationOngoingCall_onCancel1( ApplicationOngoingCall _this, XObject sender );

/* 'C' function for method : 'Application::OngoingCall.upDateTalkDuration()' */
void ApplicationOngoingCall_upDateTalkDuration( ApplicationOngoingCall _this, XObject 
  sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationOngoingCall_H */

/* Embedded Wizard */
