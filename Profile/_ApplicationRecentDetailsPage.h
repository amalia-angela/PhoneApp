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

#ifndef _ApplicationRecentDetailsPage_H
#define _ApplicationRecentDetailsPage_H

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

#include "_ApplicationDetailsPage.h"
#include "_ComponentsButton50x75.h"
#include "_ComponentsButtonBase70x90.h"
#include "_ComponentsSButton25x25.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"

/* Forward declaration of the class Application::ChatPage */
#ifndef _ApplicationChatPage_
  EW_DECLARE_CLASS( ApplicationChatPage )
#define _ApplicationChatPage_
#endif

/* Forward declaration of the class Application::EditPage */
#ifndef _ApplicationEditPage_
  EW_DECLARE_CLASS( ApplicationEditPage )
#define _ApplicationEditPage_
#endif

/* Forward declaration of the class Application::RecentDetailsPage */
#ifndef _ApplicationRecentDetailsPage_
  EW_DECLARE_CLASS( ApplicationRecentDetailsPage )
#define _ApplicationRecentDetailsPage_
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

/* Forward declaration of the class Device::Contact */
#ifndef _DeviceContact_
  EW_DECLARE_CLASS( DeviceContact )
#define _DeviceContact_
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


/* Deklaration of class : 'Application::RecentDetailsPage' */
EW_DEFINE_FIELDS( ApplicationRecentDetailsPage, ApplicationDetailsPage )
  EW_OBJECT  ( Line4,           ViewsLine )
  EW_OBJECT  ( DateTxt,         ViewsText )
  EW_OBJECT  ( TypeTxt,         ViewsText )
  EW_OBJECT  ( TimeTxt,         ViewsText )
  EW_OBJECT  ( DurationTxt,     ViewsText )
  EW_PROPERTY( HistoryContact,  DeviceHistoryContact )
EW_END_OF_FIELDS( ApplicationRecentDetailsPage )

/* Virtual Method Table (VMT) for the class : 'Application::RecentDetailsPage' */
EW_DEFINE_METHODS( ApplicationRecentDetailsPage, ApplicationDetailsPage )
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
  EW_METHOD( onTapEdit,         void )( ApplicationDetailsPage _this, XObject sender )
  EW_METHOD( onContactUpdated,  void )( ApplicationRecentDetailsPage _this, XObject 
    sender )
EW_END_OF_METHODS( ApplicationRecentDetailsPage )

/* 'C' function for method : 'Application::RecentDetailsPage.onContactUpdated()' */
void ApplicationRecentDetailsPage_onContactUpdated( ApplicationRecentDetailsPage _this, 
  XObject sender );

/* 'C' function for method : 'Application::RecentDetailsPage.OnSetHistoryContact()' */
void ApplicationRecentDetailsPage_OnSetHistoryContact( ApplicationRecentDetailsPage _this, 
  DeviceHistoryContact value );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationRecentDetailsPage_H */

/* Embedded Wizard */