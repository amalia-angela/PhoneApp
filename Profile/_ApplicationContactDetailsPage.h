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

#ifndef _ApplicationContactDetailsPage_H
#define _ApplicationContactDetailsPage_H

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

#include "_ComponentsButton50x75.h"
#include "_ComponentsButtonBase70x90.h"
#include "_ComponentsSButton25x25.h"
#include "_CoreGroup.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"

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

/* Forward declaration of the class Application::ContactEditPage */
#ifndef _ApplicationContactEditPage_
  EW_DECLARE_CLASS( ApplicationContactEditPage )
#define _ApplicationContactEditPage_
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


/* Deklaration of class : 'Application::ContactDetailsPage' */
EW_DEFINE_FIELDS( ApplicationContactDetailsPage, CoreGroup )
  EW_VARIABLE( editPage,        ApplicationContactEditPage )
  EW_PROPERTY( Contact,         DeviceContact )
  EW_VARIABLE( chat,            ApplicationChat )
  EW_PROPERTY( OnDelete,        XSlot )
  EW_PROPERTY( OnBack,          XSlot )
  EW_OBJECT  ( Background,      ViewsRectangle )
  EW_OBJECT  ( Line2,           ViewsLine )
  EW_OBJECT  ( NumberTxt,       ViewsText )
  EW_OBJECT  ( MobileTxt,       ViewsText )
  EW_OBJECT  ( Line1,           ViewsLine )
  EW_OBJECT  ( CallBtn,         ComponentsButton50x75 )
  EW_OBJECT  ( VideoCallBtn,    ComponentsButton50x75 )
  EW_OBJECT  ( PushButtonMediumBlue2, ComponentsButton50x75 )
  EW_OBJECT  ( ContactName,     ViewsText )
  EW_OBJECT  ( UserInitialsBtn, ComponentsButtonBase70x90 )
  EW_OBJECT  ( EditBtn,         ComponentsSButton25x25 )
  EW_OBJECT  ( BackBtn,         ComponentsSButton25x25 )
  EW_OBJECT  ( FavoritTxt,      ViewsText )
EW_END_OF_FIELDS( ApplicationContactDetailsPage )

/* Virtual Method Table (VMT) for the class : 'Application::ContactDetailsPage' */
EW_DEFINE_METHODS( ApplicationContactDetailsPage, CoreGroup )
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
  EW_METHOD( UpdateLayout,      void )( CoreGroup _this, XPoint aSize )
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
  EW_METHOD( onTapEdit,         void )( ApplicationContactDetailsPage _this, XObject 
    sender )
  EW_METHOD( onContactUpdated,  void )( ApplicationContactDetailsPage _this, XObject 
    sender )
EW_END_OF_METHODS( ApplicationContactDetailsPage )

/* 'C' function for method : 'Application::ContactDetailsPage.onTapEdit()' */
void ApplicationContactDetailsPage_onTapEdit( ApplicationContactDetailsPage _this, 
  XObject sender );

/* Wrapper function for the virtual method : 'Application::ContactDetailsPage.onTapEdit()' */
void ApplicationContactDetailsPage__onTapEdit( void* _this, XObject sender );

/* 'C' function for method : 'Application::ContactDetailsPage.onDelete()' */
void ApplicationContactDetailsPage_onDelete( ApplicationContactDetailsPage _this, 
  XObject sender );

/* 'C' function for method : 'Application::ContactDetailsPage.onTapCall()' */
void ApplicationContactDetailsPage_onTapCall( ApplicationContactDetailsPage _this, 
  XObject sender );

/* 'C' function for method : 'Application::ContactDetailsPage.onSaveEdit()' */
void ApplicationContactDetailsPage_onSaveEdit( ApplicationContactDetailsPage _this, 
  XObject sender );

/* 'C' function for method : 'Application::ContactDetailsPage.onCancelEdit()' */
void ApplicationContactDetailsPage_onCancelEdit( ApplicationContactDetailsPage _this, 
  XObject sender );

/* 'C' function for method : 'Application::ContactDetailsPage.onBackHome()' */
void ApplicationContactDetailsPage_onBackHome( ApplicationContactDetailsPage _this, 
  XObject sender );

/* 'C' function for method : 'Application::ContactDetailsPage.OnSetContact()' */
void ApplicationContactDetailsPage_OnSetContact( ApplicationContactDetailsPage _this, 
  DeviceContact value );

/* 'C' function for method : 'Application::ContactDetailsPage.onContactUpdated()' */
void ApplicationContactDetailsPage_onContactUpdated( ApplicationContactDetailsPage _this, 
  XObject sender );

/* Wrapper function for the virtual method : 'Application::ContactDetailsPage.onContactUpdated()' */
void ApplicationContactDetailsPage__onContactUpdated( void* _this, XObject sender );

/* 'C' function for method : 'Application::ContactDetailsPage.onTapMessage()' */
void ApplicationContactDetailsPage_onTapMessage( ApplicationContactDetailsPage _this, 
  XObject sender );

/* 'C' function for method : 'Application::ContactDetailsPage.onBack()' */
void ApplicationContactDetailsPage_onBack( ApplicationContactDetailsPage _this, 
  XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationContactDetailsPage_H */

/* Embedded Wizard */
