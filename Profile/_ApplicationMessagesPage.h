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

#ifndef _ApplicationMessagesPage_H
#define _ApplicationMessagesPage_H

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

#include "_ComponentsSButton25x25.h"
#include "_ComponentsSearchEtxt.h"
#include "_ComponentsTextButton.h"
#include "_CoreGroup.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreVerticalList.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"

/* Forward declaration of the class Application::Chat */
#ifndef _ApplicationChat_
  EW_DECLARE_CLASS( ApplicationChat )
#define _ApplicationChat_
#endif

/* Forward declaration of the class Application::ContactsList1 */
#ifndef _ApplicationContactsList1_
  EW_DECLARE_CLASS( ApplicationContactsList1 )
#define _ApplicationContactsList1_
#endif

/* Forward declaration of the class Application::MessagesPage */
#ifndef _ApplicationMessagesPage_
  EW_DECLARE_CLASS( ApplicationMessagesPage )
#define _ApplicationMessagesPage_
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


/* Deklaration of class : 'Application::MessagesPage' */
EW_DEFINE_FIELDS( ApplicationMessagesPage, CoreGroup )
  EW_VARIABLE( create,          ApplicationContactsList1 )
  EW_VARIABLE( chat,            ApplicationChat )
  EW_OBJECT  ( Rectangle,       ViewsRectangle )
  EW_OBJECT  ( TextButton,      ComponentsTextButton )
  EW_OBJECT  ( TitleTxt,        ViewsText )
  EW_OBJECT  ( SearchExt,       ComponentsSearchEtxt )
  EW_OBJECT  ( VerticalList,    CoreVerticalList )
  EW_OBJECT  ( SlideTouchHandler, CoreSlideTouchHandler )
  EW_OBJECT  ( SButton25x25,    ComponentsSButton25x25 )
  EW_PROPERTY( EditMode,        XBool )
EW_END_OF_FIELDS( ApplicationMessagesPage )

/* Virtual Method Table (VMT) for the class : 'Application::MessagesPage' */
EW_DEFINE_METHODS( ApplicationMessagesPage, CoreGroup )
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
EW_END_OF_METHODS( ApplicationMessagesPage )

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationMessagesPage_OnLoadItem( ApplicationMessagesPage _this, XObject 
  sender );

/* 'C' function for method : 'Application::MessagesPage.onEdit()' */
void ApplicationMessagesPage_onEdit( ApplicationMessagesPage _this, XObject sender );

/* 'C' function for method : 'Application::MessagesPage.onCreatePressed()' */
void ApplicationMessagesPage_onCreatePressed( ApplicationMessagesPage _this, XObject 
  sender );

/* 'C' function for method : 'Application::MessagesPage.onClose()' */
void ApplicationMessagesPage_onClose( ApplicationMessagesPage _this, XObject sender );

/* 'C' function for method : 'Application::MessagesPage.onAdd()' */
void ApplicationMessagesPage_onAdd( ApplicationMessagesPage _this, XObject sender );

/* 'C' function for method : 'Application::MessagesPage.onBack()' */
void ApplicationMessagesPage_onBack( ApplicationMessagesPage _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationMessagesPage_H */

/* Embedded Wizard */
