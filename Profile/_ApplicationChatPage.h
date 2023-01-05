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

#ifndef _ApplicationChatPage_H
#define _ApplicationChatPage_H

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

#include "_ComponentsButton40x55.h"
#include "_ComponentsInputBtnEtxt.h"
#include "_ComponentsSButton25x25.h"
#include "_CoreGroup.h"
#include "_CoreOutline.h"
#include "_CoreSlideTouchHandler.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"

/* Forward declaration of the class Application::ChatItem */
#ifndef _ApplicationChatItem_
  EW_DECLARE_CLASS( ApplicationChatItem )
#define _ApplicationChatItem_
#endif

/* Forward declaration of the class Application::ChatPage */
#ifndef _ApplicationChatPage_
  EW_DECLARE_CLASS( ApplicationChatPage )
#define _ApplicationChatPage_
#endif

/* Forward declaration of the class Application::DetailsPage */
#ifndef _ApplicationDetailsPage_
  EW_DECLARE_CLASS( ApplicationDetailsPage )
#define _ApplicationDetailsPage_
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

/* Forward declaration of the class Device::Contact */
#ifndef _DeviceContact_
  EW_DECLARE_CLASS( DeviceContact )
#define _DeviceContact_
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


/* Deklaration of class : 'Application::ChatPage' */
EW_DEFINE_FIELDS( ApplicationChatPage, CoreGroup )
  EW_OBJECT  ( Background,      ViewsRectangle )
  EW_OBJECT  ( Outline,         CoreOutline )
  EW_OBJECT  ( SlideTouchHandler, CoreSlideTouchHandler )
  EW_OBJECT  ( Header,          ViewsRectangle )
  EW_OBJECT  ( Line,            ViewsLine )
  EW_OBJECT  ( BackBtn,         ComponentsSButton25x25 )
  EW_OBJECT  ( SearchEtxt,      ComponentsInputBtnEtxt )
  EW_OBJECT  ( BackBtn1,        ComponentsSButton25x25 )
  EW_OBJECT  ( Button40x55,     ComponentsButton40x55 )
  EW_VARIABLE( detailsPage,     ApplicationDetailsPage )
  EW_PROPERTY( Contact,         DeviceContact )
  EW_VARIABLE( lastItem,        ApplicationChatItem )
  EW_VARIABLE( OnBack,          XSlot )
EW_END_OF_FIELDS( ApplicationChatPage )

/* Virtual Method Table (VMT) for the class : 'Application::ChatPage' */
EW_DEFINE_METHODS( ApplicationChatPage, CoreGroup )
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
EW_END_OF_METHODS( ApplicationChatPage )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationChatPage_Init( ApplicationChatPage _this, XHandle aArg );

/* 'C' function for method : 'Application::ChatPage.onBack()' */
void ApplicationChatPage_onBack( ApplicationChatPage _this, XObject sender );

/* 'C' function for method : 'Application::ChatPage.onUser()' */
void ApplicationChatPage_onUser( ApplicationChatPage _this, XObject sender );

/* 'C' function for method : 'Application::ChatPage.onCall()' */
void ApplicationChatPage_onCall( ApplicationChatPage _this, XObject sender );

/* 'C' function for method : 'Application::ChatPage.onCloseUser()' */
void ApplicationChatPage_onCloseUser( ApplicationChatPage _this, XObject sender );

/* 'C' function for method : 'Application::ChatPage.OnSetContact()' */
void ApplicationChatPage_OnSetContact( ApplicationChatPage _this, DeviceContact 
  value );

/* 'C' function for method : 'Application::ChatPage.onContactUpdated()' */
void ApplicationChatPage_onContactUpdated( ApplicationChatPage _this, XObject sender );

/* 'C' function for method : 'Application::ChatPage.onSend()' */
void ApplicationChatPage_onSend( ApplicationChatPage _this, XObject sender );

/* 'C' function for method : 'Application::ChatPage.onMessageUpdate()' */
void ApplicationChatPage_onMessageUpdate( ApplicationChatPage _this, XObject sender );

/* 'C' function for method : 'Application::ChatPage.RemoveMessages()' */
void ApplicationChatPage_RemoveMessages( ApplicationChatPage _this );

/* 'C' function for method : 'Application::ChatPage.onDeleteMessage()' */
void ApplicationChatPage_onDeleteMessage( ApplicationChatPage _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationChatPage_H */

/* Embedded Wizard */
