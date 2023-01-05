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

#ifndef _ApplicationHomePage_H
#define _ApplicationHomePage_H

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

#include "_ComponentsButton50x75.h"
#include "_ComponentsSButton50x50.h"
#include "_CoreGroup.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"

/* Forward declaration of the class Application::EditPage */
#ifndef _ApplicationEditPage_
  EW_DECLARE_CLASS( ApplicationEditPage )
#define _ApplicationEditPage_
#endif

/* Forward declaration of the class Application::HomePage */
#ifndef _ApplicationHomePage_
  EW_DECLARE_CLASS( ApplicationHomePage )
#define _ApplicationHomePage_
#endif

/* Forward declaration of the class Application::MessagesApp */
#ifndef _ApplicationMessagesApp_
  EW_DECLARE_CLASS( ApplicationMessagesApp )
#define _ApplicationMessagesApp_
#endif

/* Forward declaration of the class Application::PhoneApp */
#ifndef _ApplicationPhoneApp_
  EW_DECLARE_CLASS( ApplicationPhoneApp )
#define _ApplicationPhoneApp_
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


/* Deklaration of class : 'Application::HomePage' */
EW_DEFINE_FIELDS( ApplicationHomePage, CoreGroup )
  EW_OBJECT  ( Image,           ViewsImage )
  EW_OBJECT  ( Button50x77,     ComponentsButton50x75 )
  EW_OBJECT  ( Footer,          ViewsRectangle )
  EW_OBJECT  ( Contacts,        ComponentsSButton50x50 )
  EW_OBJECT  ( Messeges,        ComponentsSButton50x50 )
  EW_OBJECT  ( SButton50x50,    ComponentsSButton50x50 )
  EW_VARIABLE( phoneApp,        ApplicationPhoneApp )
  EW_VARIABLE( messageApp,      ApplicationMessagesApp )
  EW_VARIABLE( settingsApp,     ApplicationEditPage )
EW_END_OF_FIELDS( ApplicationHomePage )

/* Virtual Method Table (VMT) for the class : 'Application::HomePage' */
EW_DEFINE_METHODS( ApplicationHomePage, CoreGroup )
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
EW_END_OF_METHODS( ApplicationHomePage )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationHomePage_Init( ApplicationHomePage _this, XHandle aArg );

/* 'C' function for method : 'Application::HomePage.onPhoneAppPressed()' */
void ApplicationHomePage_onPhoneAppPressed( ApplicationHomePage _this, XObject sender );

/* 'C' function for method : 'Application::HomePage.onMessagesAppPressed()' */
void ApplicationHomePage_onMessagesAppPressed( ApplicationHomePage _this, XObject 
  sender );

/* 'C' function for method : 'Application::HomePage.onSettingsAppPressed()' */
void ApplicationHomePage_onSettingsAppPressed( ApplicationHomePage _this, XObject 
  sender );

/* 'C' function for method : 'Application::HomePage.onClose()' */
void ApplicationHomePage_onClose( ApplicationHomePage _this, XObject sender );

/* 'C' function for method : 'Application::HomePage.onSave()' */
void ApplicationHomePage_onSave( ApplicationHomePage _this, XObject sender );

/* 'C' function for method : 'Application::HomePage.ShowUnreadMessages()' */
void ApplicationHomePage_ShowUnreadMessages( ApplicationHomePage _this, XObject 
  sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationHomePage_H */

/* Embedded Wizard */
