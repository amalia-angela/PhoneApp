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

#ifndef _ComponentsInputEtxt_H
#define _ComponentsInputEtxt_H

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

#include "_CoreKeyPressHandler.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_EffectsBoolEffect.h"
#include "_TemplatesTextEditor.h"
#include "_ViewsLine.h"
#include "_ViewsText.h"

/* Forward declaration of the class Components::InputEtxt */
#ifndef _ComponentsInputEtxt_
  EW_DECLARE_CLASS( ComponentsInputEtxt )
#define _ComponentsInputEtxt_
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

/* Forward declaration of the class Resources::Font */
#ifndef _ResourcesFont_
  EW_DECLARE_CLASS( ResourcesFont )
#define _ResourcesFont_
#endif

/* Forward declaration of the class Views::Rectangle */
#ifndef _ViewsRectangle_
  EW_DECLARE_CLASS( ViewsRectangle )
#define _ViewsRectangle_
#endif

/* Forward declaration of the class Views::WarpGroup */
#ifndef _ViewsWarpGroup_
  EW_DECLARE_CLASS( ViewsWarpGroup )
#define _ViewsWarpGroup_
#endif


/* This component implements an editor. */
EW_DEFINE_FIELDS( ComponentsInputEtxt, TemplatesTextEditor )
  EW_OBJECT  ( blinkEffect,     EffectsBoolEffect )
  EW_OBJECT  ( CursorKeyHandler, CoreKeyPressHandler )
  EW_OBJECT  ( BackspaceKeyHandler, CoreKeyPressHandler )
  EW_OBJECT  ( DeleteKeyHandler, CoreKeyPressHandler )
  EW_OBJECT  ( NewlineKeyHandler, CoreKeyPressHandler )
  EW_OBJECT  ( CharacterKeyHandler, CoreKeyPressHandler )
  EW_OBJECT  ( SlideTouchHandler, CoreSlideTouchHandler )
  EW_OBJECT  ( SimpleTouchHandler, CoreSimpleTouchHandler )
  EW_OBJECT  ( Text,            ViewsText )
  EW_OBJECT  ( TextPlaceholder, ViewsText )
  EW_OBJECT  ( Caret,           ViewsLine )
  EW_VARIABLE( magnifyingBack,  ViewsRectangle )
  EW_VARIABLE( magnifyingView,  ViewsWarpGroup )
  EW_PROPERTY( Font,            ResourcesFont )
  EW_PROPERTY( OnChange,        XSlot )
  EW_PROPERTY( String,          XString )
  EW_PROPERTY( Placeholder,     XString )
  EW_VARIABLE( caretIndex,      XInt32 )
  EW_PROPERTY( Alignment,       XSet )
  EW_PROPERTY( Color,           XColor )
  EW_VARIABLE( autoScroll,      XBool )
EW_END_OF_FIELDS( ComponentsInputEtxt )

/* Virtual Method Table (VMT) for the class : 'Components::InputEtxt' */
EW_DEFINE_METHODS( ComponentsInputEtxt, TemplatesTextEditor )
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
  EW_METHOD( UpdateViewState,   void )( ComponentsInputEtxt _this, XSet aState )
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
EW_END_OF_METHODS( ComponentsInputEtxt )

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ComponentsInputEtxt_UpdateViewState( ComponentsInputEtxt _this, XSet aState );

/* This slot method is called after the caret has been adjusted. Its job is to adjust 
   too the position of the magnifying glass view where the augmented text content 
   around the caret is shown. */
void ComponentsInputEtxt_updateMagnifyingView( ComponentsInputEtxt _this, XObject 
  sender );

/* This slot method is called after a short delay when the user has moved the caret 
   or modified the text. Its job is to ensure that the caret is still visible. If 
   necessary, the editor content is scrolled. */
void ComponentsInputEtxt_updateScrollOffset( ComponentsInputEtxt _this, XObject 
  sender );

/* This slot method is attached to the Text view. Each time the Text view has rearranged 
   the text, this method is called. Its job is to adjust the caret to the evtl. 
   new position. */
void ComponentsInputEtxt_updateCaret( ComponentsInputEtxt _this, XObject sender );

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   hide the magnifying glass view again. */
void ComponentsInputEtxt_onReleaseTouch( ComponentsInputEtxt _this, XObject sender );

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   move the caret accordingly to the user's finger movement. */
void ComponentsInputEtxt_onDragTouch( ComponentsInputEtxt _this, XObject sender );

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   activate the caret movement mode if the user has pressed the finger on the screen 
   for a while. The method also shows a small magnifying glass where the text around 
   the caret is shown. This should help the user to navigate the caret with the 
   finger. */
void ComponentsInputEtxt_onHoldTouch( ComponentsInputEtxt _this, XObject sender );

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   obtain the focused state for the editor so the user can interact with the editor 
   content and to place the caret at the touched position. */
void ComponentsInputEtxt_onPressTouch( ComponentsInputEtxt _this, XObject sender );

/* This method is called from the corresponding keyboard handler. Its job is to 
   move the caret up/down/left or right in the editor text. */
void ComponentsInputEtxt_onCursorKey( ComponentsInputEtxt _this, XObject sender );

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign preceding the current caret position and to move the caret accordingly. */
void ComponentsInputEtxt_onBackspaceKey( ComponentsInputEtxt _this, XObject sender );

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign at the current caret position. */
void ComponentsInputEtxt_onDeleteKey( ComponentsInputEtxt _this, XObject sender );

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the <new line> sign and to move the caret 
   to the next row. */
void ComponentsInputEtxt_onNewlineKey( ComponentsInputEtxt _this, XObject sender );

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the sign which has been input by the user 
   and to move the caret to the next column. */
void ComponentsInputEtxt_onCharacterKey( ComponentsInputEtxt _this, XObject sender );

/* 'C' function for method : 'Components::InputEtxt.OnSetAlignment()' */
void ComponentsInputEtxt_OnSetAlignment( ComponentsInputEtxt _this, XSet value );

/* 'C' function for method : 'Components::InputEtxt.OnGetString()' */
XString ComponentsInputEtxt_OnGetString( ComponentsInputEtxt _this );

/* 'C' function for method : 'Components::InputEtxt.OnSetString()' */
void ComponentsInputEtxt_OnSetString( ComponentsInputEtxt _this, XString value );

/* 'C' function for method : 'Components::InputEtxt.OnSetColor()' */
void ComponentsInputEtxt_OnSetColor( ComponentsInputEtxt _this, XColor value );

/* 'C' function for method : 'Components::InputEtxt.OnSetFont()' */
void ComponentsInputEtxt_OnSetFont( ComponentsInputEtxt _this, ResourcesFont value );

/* 'C' function for method : 'Components::InputEtxt.OnSetPlaceholder()' */
void ComponentsInputEtxt_OnSetPlaceholder( ComponentsInputEtxt _this, XString value );

/* 'C' function for method : 'Components::InputEtxt.onChange()' */
void ComponentsInputEtxt_onChange( ComponentsInputEtxt _this, XObject sender );

/* 'C' function for method : 'Components::InputEtxt.updatePlaceholder()' */
void ComponentsInputEtxt_updatePlaceholder( ComponentsInputEtxt _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ComponentsInputEtxt_H */

/* Embedded Wizard */
