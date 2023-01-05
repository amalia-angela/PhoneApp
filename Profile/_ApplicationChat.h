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

#ifndef _ApplicationChat_H
#define _ApplicationChat_H

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

#include "_ComponentsButton40x55.h"
#include "_ComponentsSButton25x25.h"
#include "_ComponentsSearchEtxt.h"
#include "_CoreGroup.h"
#include "_CoreOutline.h"
#include "_CoreSlideTouchHandler.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"

/* Forward declaration of the class Application::Chat */
#ifndef _ApplicationChat_
  EW_DECLARE_CLASS( ApplicationChat )
#define _ApplicationChat_
#endif

/* Forward declaration of the class Application::ContactDetailsPage */
#ifndef _ApplicationContactDetailsPage_
  EW_DECLARE_CLASS( ApplicationContactDetailsPage )
#define _ApplicationContactDetailsPage_
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


/* Deklaration of class : 'Application::Chat' */
EW_DEFINE_FIELDS( ApplicationChat, CoreGroup )
  EW_VARIABLE( detailsPage,     ApplicationContactDetailsPage )
  EW_PROPERTY( Contact,         DeviceContact )
  EW_VARIABLE( OnBack,          XSlot )
  EW_OBJECT  ( Outline,         CoreOutline )
  EW_OBJECT  ( SlideTouchHandler, CoreSlideTouchHandler )
  EW_OBJECT  ( Background,      ViewsRectangle )
  EW_OBJECT  ( Header,          ViewsRectangle )
  EW_OBJECT  ( Line,            ViewsLine )
  EW_OBJECT  ( BackBtn,         ComponentsSButton25x25 )
  EW_OBJECT  ( SearchEtxt,      ComponentsSearchEtxt )
  EW_OBJECT  ( BackBtn1,        ComponentsSButton25x25 )
  EW_OBJECT  ( Button40x55,     ComponentsButton40x55 )
  EW_VARIABLE( nrOfItem,        XInt32 )
EW_END_OF_FIELDS( ApplicationChat )

/* Virtual Method Table (VMT) for the class : 'Application::Chat' */
EW_DEFINE_METHODS( ApplicationChat, CoreGroup )
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
EW_END_OF_METHODS( ApplicationChat )

/* 'C' function for method : 'Application::Chat.onBack()' */
void ApplicationChat_onBack( ApplicationChat _this, XObject sender );

/* 'C' function for method : 'Application::Chat.onUser()' */
void ApplicationChat_onUser( ApplicationChat _this, XObject sender );

/* 'C' function for method : 'Application::Chat.onCall()' */
void ApplicationChat_onCall( ApplicationChat _this, XObject sender );

/* 'C' function for method : 'Application::Chat.onCloseDetailsPage()' */
void ApplicationChat_onCloseDetailsPage( ApplicationChat _this, XObject sender );

/* 'C' function for method : 'Application::Chat.OnSetContact()' */
void ApplicationChat_OnSetContact( ApplicationChat _this, DeviceContact value );

/* 'C' function for method : 'Application::Chat.onContactUpdated()' */
void ApplicationChat_onContactUpdated( ApplicationChat _this, XObject sender );

/* 'C' function for method : 'Application::Chat.onSend()' */
void ApplicationChat_onSend( ApplicationChat _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationChat_H */

/* Embedded Wizard */
