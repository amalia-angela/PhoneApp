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

#ifndef _ApplicationContactsCall_H
#define _ApplicationContactsCall_H

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

#include "_ApplicationPushButtonNoBackground.h"
#include "_ApplicationSearchEtxt.h"
#include "_ApplicationTextButton.h"
#include "_CoreGroup.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreVerticalList.h"
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

/* Forward declaration of the class Application::ContactsCall */
#ifndef _ApplicationContactsCall_
  EW_DECLARE_CLASS( ApplicationContactsCall )
#define _ApplicationContactsCall_
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


/* Deklaration of class : 'Application::ContactsCall' */
EW_DEFINE_FIELDS( ApplicationContactsCall, CoreGroup )
  EW_VARIABLE( addContact,      ApplicationContactAddPage )
  EW_VARIABLE( detailsPage,     ApplicationContactDetailsPage )
  EW_PROPERTY( OnCancel,        XSlot )
  EW_OBJECT  ( Background,      ViewsRectangle )
  EW_OBJECT  ( VerticalList,    CoreVerticalList )
  EW_OBJECT  ( SlideTouchHandler, CoreSlideTouchHandler )
  EW_OBJECT  ( SimpleTouchHandler, CoreSimpleTouchHandler )
  EW_OBJECT  ( UpButton,        ApplicationPushButtonNoBackground )
  EW_OBJECT  ( DownButton,      ApplicationPushButtonNoBackground )
  EW_OBJECT  ( SearchExt,       ApplicationSearchEtxt )
  EW_OBJECT  ( TitleTxt,        ViewsText )
  EW_OBJECT  ( PlusButton,      ApplicationPushButtonNoBackground )
  EW_OBJECT  ( CancelBtn,       ApplicationTextButton )
  EW_PROPERTY( SelectedContact, XInt32 )
EW_END_OF_FIELDS( ApplicationContactsCall )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsCall' */
EW_DEFINE_METHODS( ApplicationContactsCall, CoreGroup )
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
EW_END_OF_METHODS( ApplicationContactsCall )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationContactsCall_Init( ApplicationContactsCall _this, XHandle aArg );

/* 'C' function for method : 'Application::ContactsCall.onAddPress()' */
void ApplicationContactsCall_onAddPress( ApplicationContactsCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::ContactsCall.onSaveAdd()' */
void ApplicationContactsCall_onSaveAdd( ApplicationContactsCall _this, XObject sender );

/* 'C' function for method : 'Application::ContactsCall.onCancelAdd()' */
void ApplicationContactsCall_onCancelAdd( ApplicationContactsCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::ContactsCall.OnSetSelectedContact()' */
void ApplicationContactsCall_OnSetSelectedContact( ApplicationContactsCall _this, 
  XInt32 value );

/* 'C' function for method : 'Application::ContactsCall.onDeleteContact()' */
void ApplicationContactsCall_onDeleteContact( ApplicationContactsCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::ContactsCall.onSearch()' */
void ApplicationContactsCall_onSearch( ApplicationContactsCall _this, XObject sender );

/* 'C' function for method : 'Application::ContactsCall.onTapContact()' */
void ApplicationContactsCall_onTapContact( ApplicationContactsCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::ContactsCall.onCloseContact()' */
void ApplicationContactsCall_onCloseContact( ApplicationContactsCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::ContactsCall.onUpPress()' */
void ApplicationContactsCall_onUpPress( ApplicationContactsCall _this, XObject sender );

/* 'C' function for method : 'Application::ContactsCall.onDownPress()' */
void ApplicationContactsCall_onDownPress( ApplicationContactsCall _this, XObject 
  sender );

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationContactsCall_OnLoadItem( ApplicationContactsCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::ContactsCall.onSetAscending()' */
void ApplicationContactsCall_onSetAscending( ApplicationContactsCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::ContactsCall.onSetDescending()' */
void ApplicationContactsCall_onSetDescending( ApplicationContactsCall _this, XObject 
  sender );

/* 'C' function for method : 'Application::ContactsCall.onNoOfContactsChanged()' */
void ApplicationContactsCall_onNoOfContactsChanged( ApplicationContactsCall _this, 
  XObject sender );

/* 'C' function for method : 'Application::ContactsCall.onCancel()' */
void ApplicationContactsCall_onCancel( ApplicationContactsCall _this, XObject sender );

/* Default onget method for the property 'SelectedContact' */
XInt32 ApplicationContactsCall_OnGetSelectedContact( ApplicationContactsCall _this );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationContactsCall_H */

/* Embedded Wizard */
