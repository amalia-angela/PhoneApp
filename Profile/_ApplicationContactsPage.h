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

#ifndef _ApplicationContactsPage_H
#define _ApplicationContactsPage_H

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

#include "_ComponentsInputEtxt.h"
#include "_ComponentsPushButtonNoBackground.h"
#include "_ComponentsPushButtonSmall.h"
#include "_ComponentsSearchEtxt.h"
#include "_CoreGroup.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreVerticalList.h"
#include "_TemplatesTextEditor.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"

/* Forward declaration of the class Application::ContactAddPage */
#ifndef _ApplicationContactAddPage_
  EW_DECLARE_CLASS( ApplicationContactAddPage )
#define _ApplicationContactAddPage_
#endif

/* Forward declaration of the class Application::ContactDetailsPage */
#ifndef _ApplicationContactDetailsPage_
  EW_DECLARE_CLASS( ApplicationContactDetailsPage )
#define _ApplicationContactDetailsPage_
#endif

/* Forward declaration of the class Application::ContactsPage */
#ifndef _ApplicationContactsPage_
  EW_DECLARE_CLASS( ApplicationContactsPage )
#define _ApplicationContactsPage_
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


/* Deklaration of class : 'Application::ContactsPage' */
EW_DEFINE_FIELDS( ApplicationContactsPage, CoreGroup )
  EW_VARIABLE( addContact,      ApplicationContactAddPage )
  EW_VARIABLE( detailsPage,     ApplicationContactDetailsPage )
  EW_OBJECT  ( Background,      ViewsRectangle )
  EW_OBJECT  ( VerticalList,    CoreVerticalList )
  EW_OBJECT  ( SlideTouchHandler, CoreSlideTouchHandler )
  EW_OBJECT  ( UpButton,        ComponentsPushButtonNoBackground )
  EW_OBJECT  ( DownButton,      ComponentsPushButtonNoBackground )
  EW_OBJECT  ( SearchExt,       ComponentsSearchEtxt )
  EW_OBJECT  ( TitleTxt,        ViewsText )
  EW_OBJECT  ( PlusButton,      ComponentsPushButtonNoBackground )
  EW_OBJECT  ( MyCardTxt,       ViewsText )
  EW_OBJECT  ( PushButtonSmall, ComponentsPushButtonSmall )
  EW_OBJECT  ( TextEditor1,     TemplatesTextEditor )
  EW_OBJECT  ( InputEtxt,       ComponentsInputEtxt )
EW_END_OF_FIELDS( ApplicationContactsPage )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsPage' */
EW_DEFINE_METHODS( ApplicationContactsPage, CoreGroup )
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
  EW_METHOD( onContactActivated, void )( ApplicationContactsPage _this, XObject 
    sender )
EW_END_OF_METHODS( ApplicationContactsPage )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationContactsPage_Init( ApplicationContactsPage _this, XHandle aArg );

/* 'C' function for method : 'Application::ContactsPage.onAddPress()' */
void ApplicationContactsPage_onAddPress( ApplicationContactsPage _this, XObject 
  sender );

/* 'C' function for method : 'Application::ContactsPage.onSaveAdd()' */
void ApplicationContactsPage_onSaveAdd( ApplicationContactsPage _this, XObject sender );

/* 'C' function for method : 'Application::ContactsPage.onCancelAdd()' */
void ApplicationContactsPage_onCancelAdd( ApplicationContactsPage _this, XObject 
  sender );

/* 'C' function for method : 'Application::ContactsPage.onDeleteContact()' */
void ApplicationContactsPage_onDeleteContact( ApplicationContactsPage _this, XObject 
  sender );

/* 'C' function for method : 'Application::ContactsPage.onSearch()' */
void ApplicationContactsPage_onSearch( ApplicationContactsPage _this, XObject sender );

/* 'C' function for method : 'Application::ContactsPage.onCloseContact()' */
void ApplicationContactsPage_onCloseContact( ApplicationContactsPage _this, XObject 
  sender );

/* 'C' function for method : 'Application::ContactsPage.onUpPress()' */
void ApplicationContactsPage_onUpPress( ApplicationContactsPage _this, XObject sender );

/* 'C' function for method : 'Application::ContactsPage.onDownPress()' */
void ApplicationContactsPage_onDownPress( ApplicationContactsPage _this, XObject 
  sender );

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationContactsPage_OnLoadItem( ApplicationContactsPage _this, XObject 
  sender );

/* 'C' function for method : 'Application::ContactsPage.onNoOfContactsChanged()' */
void ApplicationContactsPage_onNoOfContactsChanged( ApplicationContactsPage _this, 
  XObject sender );

/* 'C' function for method : 'Application::ContactsPage.onContactsSortingChanged()' */
void ApplicationContactsPage_onContactsSortingChanged( ApplicationContactsPage _this, 
  XObject sender );

/* 'C' function for method : 'Application::ContactsPage.onContactActivated()' */
void ApplicationContactsPage_onContactActivated( ApplicationContactsPage _this, 
  XObject sender );

/* Wrapper function for the virtual method : 'Application::ContactsPage.onContactActivated()' */
void ApplicationContactsPage__onContactActivated( void* _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationContactsPage_H */

/* Embedded Wizard */
