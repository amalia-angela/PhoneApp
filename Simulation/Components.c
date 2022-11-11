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
* Profile  : Simulation
* Platform : Tara.Win32.RGBA8888
*
*******************************************************************************/

#include "ewlocale.h"
#include "_ComponentsInputEtxt.h"
#include "_ComponentsKeyPadButtons.h"
#include "_ComponentsNavBarButtons.h"
#include "_ComponentsPushButtonBig.h"
#include "_ComponentsPushButtonDelete.h"
#include "_ComponentsPushButtonMediumBlue.h"
#include "_ComponentsPushButtonMediumTrans.h"
#include "_ComponentsPushButtonNoBackground.h"
#include "_ComponentsPushButtonSmall.h"
#include "_ComponentsSearchEtxt.h"
#include "_ComponentsTextButton.h"
#include "_CoreGroup.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_EffectsBoolEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_ViewsWarpGroup.h"
#include "Components.h"
#include "Core.h"
#include "Res.h"
#include "Resources.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x00000096, /* ratio 69.33 % */
  0xB8001500, 0x800A6452, 0x00C20032, 0x0C600390, 0x04003400, 0x60400002, 0x14891160,
  0x0898962D, 0x2A4580E0, 0x01E00107, 0x04E38740, 0xB800498B, 0x24273001, 0x002092C3,
  0x12384480, 0x219743E6, 0x18F82227, 0x8E4466B2, 0x8C620915, 0x48489160, 0x224B2136,
  0x8DF0E98C, 0x1B09924A, 0x31C8E542, 0x00000020, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 50, 75 }};
static const XRect _Const0001 = {{ 0, 0 }, { 50, 50 }};
static const XColor _Const0002 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XPoint _Const0003 = { 0, 50 };
static const XPoint _Const0004 = { 50, 50 };
static const XPoint _Const0005 = { 50, 0 };
static const XPoint _Const0006 = { 0, 0 };
static const XRect _Const0007 = {{ 1, 0 }, { 50, 50 }};
static const XRect _Const0008 = {{ 0, 50 }, { 50, 75 }};
static const XRect _Const0009 = {{ 0, 0 }, { 70, 91 }};
static const XRect _Const000A = {{ 0, 0 }, { 70, 70 }};
static const XPoint _Const000B = { 0, 91 };
static const XPoint _Const000C = { 70, 91 };
static const XPoint _Const000D = { 70, 0 };
static const XRect _Const000E = {{ 0, 70 }, { 70, 91 }};
static const XRect _Const000F = {{ 0, 0 }, { 25, 25 }};
static const XPoint _Const0010 = { 0, 25 };
static const XPoint _Const0011 = { 25, 25 };
static const XPoint _Const0012 = { 25, 0 };
static const XRect _Const0013 = {{ 0, 0 }, { 266, 32 }};
static const XColor _Const0014 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0015 = {{ 0, 0 }, { 268, 32 }};
static const XColor _Const0016 = { 0xF0, 0xF0, 0xF0, 0xFD };
static const XRect _Const0017 = {{ 0, 0 }, { 272, 32 }};
static const XPoint _Const0018 = { 0, 32 };
static const XPoint _Const0019 = { 272, 32 };
static const XPoint _Const001A = { 272, 0 };
static const XRect _Const001B = {{ 48, 2 }, { 272, 32 }};
static const XStringRes _Const001C = { _StringsDefault0, 0x0002 };
static const XColor _Const001D = { 0xB9, 0xB9, 0xB9, 0xFD };
static const XPoint _Const001E = { 50, 70 };
static const XRect _Const001F = {{ 11, 2 }, { 41, 27 }};
static const XPoint _Const0020 = { 20, 20 };
static const XPoint _Const0021 = { -10, -10 };
static const XColor _Const0022 = { 0xEE, 0xEE, 0xEE, 0xCC };
static const XStringRes _Const0023 = { _StringsDefault0, 0x000C };
static const XStringRes _Const0024 = { _StringsDefault0, 0x0010 };
static const XStringRes _Const0025 = { _StringsDefault0, 0x0014 };
static const XStringRes _Const0026 = { _StringsDefault0, 0x001B };
static const XRect _Const0027 = {{ 13, 2 }, { 272, 32 }};
static const XStringRes _Const0028 = { _StringsDefault0, 0x002E };
static const XColor _Const0029 = { 0x1E, 0x1E, 0x1E, 0xFD };
static const XRect _Const002A = {{ 14, 2 }, { 272, 32 }};
static const XPoint _Const002B = { 0, 29 };
static const XPoint _Const002C = { 0, 5 };
static const XStringRes _Const002D = { _StringsDefault0, 0x0036 };
static const XRect _Const002E = {{ 6, 436 }, { 264, 469 }};
static const XRect _Const002F = {{ 0, 0 }, { 258, 33 }};
static const XPoint _Const0030 = { 0, 33 };
static const XPoint _Const0031 = { 258, 33 };
static const XPoint _Const0032 = { 258, 0 };
static const XRect _Const0033 = {{ 12, 0 }, { 258, 33 }};
static const XStringRes _Const0034 = { _StringsDefault0, 0x003A };
static const XColor _Const0035 = { 0xFF, 0x29, 0x5B, 0xFF };
static const XRect _Const0036 = {{ 0, 0 }, { 65, 92 }};
static const XRect _Const0037 = {{ 0, 0 }, { 65, 65 }};
static const XPoint _Const0038 = { 0, 65 };
static const XPoint _Const0039 = { 65, 65 };
static const XPoint _Const003A = { 65, 0 };
static const XRect _Const003B = {{ 0, 65 }, { 65, 92 }};
static const XRect _Const003C = {{ 0, 0 }, { 66, 25 }};
static const XPoint _Const003D = { 66, 25 };
static const XPoint _Const003E = { 66, 0 };
static const XRect _Const003F = {{ 0, -4 }, { 66, 28 }};
static const XColor _Const0040 = { 0xFF, 0xFF, 0xFF, 0x00 };
static const XRect _Const0041 = {{ 0, 0 }, { 68, 40 }};
static const XPoint _Const0042 = { 0, 40 };
static const XPoint _Const0043 = { 65, 40 };
static const XRect _Const0044 = {{ 0, 0 }, { 68, 25 }};
static const XRect _Const0045 = {{ 0, 25 }, { 68, 40 }};

/* Initializer for the class 'Components::PushButtonMediumBlue' */
void ComponentsPushButtonMediumBlue__Init( ComponentsPushButtonMediumBlue _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsPushButtonMediumBlue );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->IconTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->DescripTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsPushButtonMediumBlue );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0001 );
  ViewsImage_OnSetColor( &_this->Background, _Const0002 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0003 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0004 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0005 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0006 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->IconTxt, _Const0007 );
  ViewsText_OnSetString( &_this->IconTxt, 0 );
  ViewsText_OnSetColor( &_this->IconTxt, _Const0002 );
  CoreRectView__OnSetBounds( &_this->DescripTxt, _Const0008 );
  ViewsText_OnSetColor( &_this->DescripTxt, ResBlue );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DescripTxt ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ComponentsPushButtonMediumBlue_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ComponentsPushButtonMediumBlue_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundMedium, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ComponentsPushButtonMediumBlue_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ComponentsPushButtonMediumBlue_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ComponentsPushButtonMediumBlue_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ComponentsPushButtonMediumBlue_onPressTouch );
  ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
}

/* Re-Initializer for the class 'Components::PushButtonMediumBlue' */
void ComponentsPushButtonMediumBlue__ReInit( ComponentsPushButtonMediumBlue _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->IconTxt );
  ViewsText__ReInit( &_this->DescripTxt );
}

/* Finalizer method for the class 'Components::PushButtonMediumBlue' */
void ComponentsPushButtonMediumBlue__Done( ComponentsPushButtonMediumBlue _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->IconTxt );
  ViewsText__Done( &_this->DescripTxt );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
}

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
void ComponentsPushButtonMediumBlue_UpdateViewState( ComponentsPushButtonMediumBlue _this, 
  XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->IconTxt != 0 )
  {
    XColor clr = ResWhite;
    ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
    ViewsText_OnSetString( &_this->IconTxt, _this->Icon );
    ViewsText_OnSetColor( &_this->IconTxt, clr );
  }

  if ( &_this->DescripTxt != 0 )
  {
    XColor clr = ResBlue;
    ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, 
    ResourcesFont ));
    ViewsText_OnSetString( &_this->DescripTxt, _this->Descrip );
    ViewsText_OnSetColor( &_this->DescripTxt, clr );
  }

  if ( !isEnabled )
  {
    ViewsImage_OnSetColor( &_this->Background, ResGrey );
    ViewsText_OnSetColor( &_this->DescripTxt, ResGrey );
    ViewsText_OnSetColor( &_this->IconTxt, ResGreyLight );
  }
  else
    if ( isPressed )
      ViewsImage_OnSetColor( &_this->Background, ResBlueLight );
    else
      ViewsImage_OnSetColor( &_this->Background, ResBlue );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ComponentsPushButtonMediumBlue_onFlashTimer( ComponentsPushButtonMediumBlue _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ComponentsPushButtonMediumBlue_onPressKey( ComponentsPushButtonMediumBlue _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->TouchHandler.Down )
    return;

  if ( _this->KeyHandler.Repetition )
    return;

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user drags the finger while pressing 
   the button. This only updates the button to appear pressed or released. */
void ComponentsPushButtonMediumBlue_onEnterLeaveTouch( ComponentsPushButtonMediumBlue _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ComponentsPushButtonMediumBlue_onReleaseTouch( ComponentsPushButtonMediumBlue _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin )
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
  else
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the button's area. */
void ComponentsPushButtonMediumBlue_onPressTouch( ComponentsPushButtonMediumBlue _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Components::PushButtonMediumBlue.OnSetIcon()' */
void ComponentsPushButtonMediumBlue_OnSetIcon( ComponentsPushButtonMediumBlue _this, 
  XString value )
{
  if ( !EwCompString( _this->Icon, value ))
    return;

  _this->Icon = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::PushButtonMediumBlue.OnSetDescrip()' */
void ComponentsPushButtonMediumBlue_OnSetDescrip( ComponentsPushButtonMediumBlue _this, 
  XString value )
{
  if ( !EwCompString( _this->Descrip, value ))
    return;

  _this->Descrip = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Components::PushButtonMediumBlue' */
EW_DEFINE_CLASS_VARIANTS( ComponentsPushButtonMediumBlue )
EW_END_OF_CLASS_VARIANTS( ComponentsPushButtonMediumBlue )

/* Virtual Method Table (VMT) for the class : 'Components::PushButtonMediumBlue' */
EW_DEFINE_CLASS( ComponentsPushButtonMediumBlue, TemplatesPushButton, OnActivate, 
                 OnActivate, FlashTimer, FlashTimer, Icon, enabled, "Components::PushButtonMediumBlue" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ComponentsPushButtonMediumBlue_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsPushButtonMediumBlue )

/* Initializer for the class 'Components::PushButtonBig' */
void ComponentsPushButtonBig__Init( ComponentsPushButtonBig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsPushButtonBig );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->DescripTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsPushButtonBig );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0009 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const000A );
  ViewsImage_OnSetColor( &_this->Background, _Const0002 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const000B );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const000C );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const000D );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0006 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Text, _Const000A );
  ViewsText_OnSetString( &_this->Text, 0 );
  ViewsText_OnSetColor( &_this->Text, _Const0002 );
  CoreRectView__OnSetBounds( &_this->DescripTxt, _Const000E );
  ViewsText_OnSetAlignment( &_this->DescripTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertBottom );
  ViewsText_OnSetString( &_this->DescripTxt, 0 );
  _this->DescriptColor = ResBlue;
  _this->InitialsColor = ResWhite;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DescripTxt ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ComponentsPushButtonBig_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ComponentsPushButtonBig_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundBig, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ComponentsPushButtonBig_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ComponentsPushButtonBig_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ComponentsPushButtonBig_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ComponentsPushButtonBig_onPressTouch );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResIconsFont30, ResourcesFont ));
  ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFontBold15, 
  ResourcesFont ));
}

/* Re-Initializer for the class 'Components::PushButtonBig' */
void ComponentsPushButtonBig__ReInit( ComponentsPushButtonBig _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->DescripTxt );
}

/* Finalizer method for the class 'Components::PushButtonBig' */
void ComponentsPushButtonBig__Done( ComponentsPushButtonBig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->Text );
  ViewsText__Done( &_this->DescripTxt );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
}

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
void ComponentsPushButtonBig_UpdateViewState( ComponentsPushButtonBig _this, XSet 
  aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->Text != 0 )
  {
    XColor clr = _this->InitialsColor;
    ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResTitileFont25, ResourcesFont ));
    ViewsText_OnSetString( &_this->Text, _this->Initials );
    ViewsText_OnSetColor( &_this->Text, clr );
  }

  if ( &_this->DescripTxt != 0 )
  {
    XColor clr = _this->DescriptColor;
    ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, 
    ResourcesFont ));
    ViewsText_OnSetString( &_this->DescripTxt, _this->Descript );
    ViewsText_OnSetColor( &_this->DescripTxt, clr );
  }

  if ( !isEnabled )
  {
    ViewsImage_OnSetColor( &_this->Background, ResGrey );
    ViewsText_OnSetVisible( &_this->DescripTxt, 0 );
  }
  else
    ViewsImage_OnSetColor( &_this->Background, ResGrey );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ComponentsPushButtonBig_onFlashTimer( ComponentsPushButtonBig _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ComponentsPushButtonBig_onPressKey( ComponentsPushButtonBig _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->TouchHandler.Down )
    return;

  if ( _this->KeyHandler.Repetition )
    return;

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

  CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user drags the finger while pressing 
   the button. This only updates the button to appear pressed or released. */
void ComponentsPushButtonBig_onEnterLeaveTouch( ComponentsPushButtonBig _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ComponentsPushButtonBig_onReleaseTouch( ComponentsPushButtonBig _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( !( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin ))
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the button's area. */
void ComponentsPushButtonBig_onPressTouch( ComponentsPushButtonBig _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
}

/* 'C' function for method : 'Components::PushButtonBig.OnSetInitials()' */
void ComponentsPushButtonBig_OnSetInitials( ComponentsPushButtonBig _this, XString 
  value )
{
  if ( !EwCompString( _this->Initials, value ))
    return;

  _this->Initials = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::PushButtonBig.OnSetDescript()' */
void ComponentsPushButtonBig_OnSetDescript( ComponentsPushButtonBig _this, XString 
  value )
{
  if ( !EwCompString( _this->Descript, value ))
    return;

  _this->Descript = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Components::PushButtonBig' */
EW_DEFINE_CLASS_VARIANTS( ComponentsPushButtonBig )
EW_END_OF_CLASS_VARIANTS( ComponentsPushButtonBig )

/* Virtual Method Table (VMT) for the class : 'Components::PushButtonBig' */
EW_DEFINE_CLASS( ComponentsPushButtonBig, TemplatesPushButton, FlashTimer, FlashTimer, 
                 FlashTimer, FlashTimer, Initials, DescriptColor, "Components::PushButtonBig" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ComponentsPushButtonBig_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsPushButtonBig )

/* Initializer for the class 'Components::PushButtonSmall' */
void ComponentsPushButtonSmall__Init( ComponentsPushButtonSmall _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsPushButtonSmall );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->IconTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextText, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsPushButtonSmall );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000F );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  _this->ButtonColor = ResGrey;
  _this->TextColor = ResWhite;
  _this->IconColor = ResGrey;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const000F );
  ViewsImage_OnSetColor( &_this->Background, _Const0002 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0010 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0011 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0012 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0006 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->IconTxt, _Const000F );
  ViewsText_OnSetString( &_this->IconTxt, 0 );
  ViewsText_OnSetColor( &_this->IconTxt, _Const0002 );
  CoreRectView__OnSetBounds( &_this->TextText, _Const000F );
  ViewsText_OnSetString( &_this->TextText, 0 );
  ViewsText_OnSetColor( &_this->TextText, _Const0002 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextText ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ComponentsPushButtonSmall_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ComponentsPushButtonSmall_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundSmall, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ComponentsPushButtonSmall_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ComponentsPushButtonSmall_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ComponentsPushButtonSmall_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ComponentsPushButtonSmall_onPressTouch );
  ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextText, EwLoadResource( &ResIconsFont25, ResourcesFont ));
}

/* Re-Initializer for the class 'Components::PushButtonSmall' */
void ComponentsPushButtonSmall__ReInit( ComponentsPushButtonSmall _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->IconTxt );
  ViewsText__ReInit( &_this->TextText );
}

/* Finalizer method for the class 'Components::PushButtonSmall' */
void ComponentsPushButtonSmall__Done( ComponentsPushButtonSmall _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->IconTxt );
  ViewsText__Done( &_this->TextText );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
}

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
void ComponentsPushButtonSmall_UpdateViewState( ComponentsPushButtonSmall _this, 
  XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->TextText != 0 )
  {
    XColor clr = _this->TextColor;
    ViewsText_OnSetFont( &_this->TextText, EwLoadResource( &ResContactFont12, ResourcesFont ));
    ViewsText_OnSetString( &_this->TextText, _this->Text );
    ViewsText_OnSetColor( &_this->TextText, clr );
  }

  if ( &_this->IconTxt != 0 )
  {
    XColor clr = _this->IconColor;
    ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
    ViewsText_OnSetString( &_this->IconTxt, _this->Icon );
    ViewsText_OnSetColor( &_this->IconTxt, clr );
  }

  if ( !isEnabled )
    ViewsImage_OnSetColor( &_this->Background, ResPressColor );
  else
    ViewsImage_OnSetColor( &_this->Background, _this->ButtonColor );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ComponentsPushButtonSmall_onFlashTimer( ComponentsPushButtonSmall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ComponentsPushButtonSmall_onPressKey( ComponentsPushButtonSmall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->TouchHandler.Down )
    return;

  if ( _this->KeyHandler.Repetition )
    return;

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user drags the finger while pressing 
   the button. This only updates the button to appear pressed or released. */
void ComponentsPushButtonSmall_onEnterLeaveTouch( ComponentsPushButtonSmall _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ComponentsPushButtonSmall_onReleaseTouch( ComponentsPushButtonSmall _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin )
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
  else
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the button's area. */
void ComponentsPushButtonSmall_onPressTouch( ComponentsPushButtonSmall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Components::PushButtonSmall.OnSetText()' */
void ComponentsPushButtonSmall_OnSetText( ComponentsPushButtonSmall _this, XString 
  value )
{
  if ( !EwCompString( _this->Text, value ))
    return;

  _this->Text = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::PushButtonSmall.OnSetButtonColor()' */
void ComponentsPushButtonSmall_OnSetButtonColor( ComponentsPushButtonSmall _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ButtonColor, value ))
    return;

  _this->ButtonColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::PushButtonSmall.OnSetTextColor()' */
void ComponentsPushButtonSmall_OnSetTextColor( ComponentsPushButtonSmall _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TextColor, value ))
    return;

  _this->TextColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::PushButtonSmall.OnSetIcon()' */
void ComponentsPushButtonSmall_OnSetIcon( ComponentsPushButtonSmall _this, XString 
  value )
{
  if ( !EwCompString( _this->Icon, value ))
    return;

  _this->Icon = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::PushButtonSmall.OnSetIconColor()' */
void ComponentsPushButtonSmall_OnSetIconColor( ComponentsPushButtonSmall _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconColor, value ))
    return;

  _this->IconColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Components::PushButtonSmall' */
EW_DEFINE_CLASS_VARIANTS( ComponentsPushButtonSmall )
EW_END_OF_CLASS_VARIANTS( ComponentsPushButtonSmall )

/* Virtual Method Table (VMT) for the class : 'Components::PushButtonSmall' */
EW_DEFINE_CLASS( ComponentsPushButtonSmall, TemplatesPushButton, OnActivate, OnActivate, 
                 FlashTimer, FlashTimer, Text, ButtonColor, "Components::PushButtonSmall" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ComponentsPushButtonSmall_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsPushButtonSmall )

/* Initializer for the class 'Components::PushButtonNoBackground' */
void ComponentsPushButtonNoBackground__Init( ComponentsPushButtonNoBackground _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsPushButtonNoBackground );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsPushButtonNoBackground );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000F );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const000F );
  ViewsImage_OnSetColor( &_this->Background, _Const0002 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0010 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0011 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0012 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0006 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Text, _Const000F );
  ViewsText_OnSetString( &_this->Text, 0 );
  ViewsText_OnSetColor( &_this->Text, _Const0002 );
  _this->IconColor = ResBlue;
  _this->IconColorPressed = ResBlueLight;
  _this->BackgroundColor = ResWhiteTransparent;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ComponentsPushButtonNoBackground_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ComponentsPushButtonNoBackground_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundMedium, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ComponentsPushButtonNoBackground_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ComponentsPushButtonNoBackground_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ComponentsPushButtonNoBackground_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ComponentsPushButtonNoBackground_onPressTouch );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResIconsFont25, ResourcesFont ));
}

/* Re-Initializer for the class 'Components::PushButtonNoBackground' */
void ComponentsPushButtonNoBackground__ReInit( ComponentsPushButtonNoBackground _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Components::PushButtonNoBackground' */
void ComponentsPushButtonNoBackground__Done( ComponentsPushButtonNoBackground _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
}

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
void ComponentsPushButtonNoBackground_UpdateViewState( ComponentsPushButtonNoBackground _this, 
  XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->Text != 0 )
  {
    ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResIconsFont25, ResourcesFont ));
    ViewsText_OnSetString( &_this->Text, _this->Icon );
    ViewsText_OnSetColor( &_this->Text, _this->IconColor );
  }

  if ( !isEnabled )
  {
    ViewsImage_OnSetColor( &_this->Background, _this->BackgroundColor );
    ViewsText_OnSetColor( &_this->Text, ResGrey );
  }
  else
    if ( isPressed )
    {
      ViewsImage_OnSetColor( &_this->Background, _this->BackgroundColor );
      ViewsText_OnSetColor( &_this->Text, _this->IconColorPressed );
    }
    else
      ViewsImage_OnSetColor( &_this->Background, _this->BackgroundColor );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ComponentsPushButtonNoBackground_onFlashTimer( ComponentsPushButtonNoBackground _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ComponentsPushButtonNoBackground_onPressKey( ComponentsPushButtonNoBackground _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->TouchHandler.Down )
    return;

  if ( _this->KeyHandler.Repetition )
    return;

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user drags the finger while pressing 
   the button. This only updates the button to appear pressed or released. */
void ComponentsPushButtonNoBackground_onEnterLeaveTouch( ComponentsPushButtonNoBackground _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ComponentsPushButtonNoBackground_onReleaseTouch( ComponentsPushButtonNoBackground _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin )
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
  else
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the button's area. */
void ComponentsPushButtonNoBackground_onPressTouch( ComponentsPushButtonNoBackground _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Components::PushButtonNoBackground.OnSetIcon()' */
void ComponentsPushButtonNoBackground_OnSetIcon( ComponentsPushButtonNoBackground _this, 
  XString value )
{
  if ( !EwCompString( _this->Icon, value ))
    return;

  _this->Icon = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Components::PushButtonNoBackground' */
EW_DEFINE_CLASS_VARIANTS( ComponentsPushButtonNoBackground )
EW_END_OF_CLASS_VARIANTS( ComponentsPushButtonNoBackground )

/* Virtual Method Table (VMT) for the class : 'Components::PushButtonNoBackground' */
EW_DEFINE_CLASS( ComponentsPushButtonNoBackground, TemplatesPushButton, OnActivate, 
                 OnActivate, FlashTimer, FlashTimer, Icon, IconColor, "Components::PushButtonNoBackground" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ComponentsPushButtonNoBackground_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsPushButtonNoBackground )

/* Initializer for the class 'Components::SearchEtxt' */
void ComponentsSearchEtxt__Init( ComponentsSearchEtxt _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesTextEditor__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsSearchEtxt );

  /* ... then construct all embedded objects */
  EffectsBoolEffect__Init( &_this->blinkEffect, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->CursorKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->BackspaceKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->DeleteKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->NewlineKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->CharacterKeyHandler, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Caret, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Search, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsSearchEtxt );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0013 );
  _this->blinkEffect.Value2 = 0;
  _this->blinkEffect.Value1 = 1;
  EffectsBoolEffect_OnSetCycleDuration( &_this->blinkEffect, 500 );
  EffectsBoolEffect_OnSetInterCycleDelay( &_this->blinkEffect, 500 );
  _this->Color = _Const0014;
  _this->CursorKeyHandler.Filter = CoreKeyCodeCursorKeys;
  _this->BackspaceKeyHandler.Filter = CoreKeyCodeBackspace;
  _this->DeleteKeyHandler.Filter = CoreKeyCodeDelete;
  _this->NewlineKeyHandler.Filter = CoreKeyCodeEnter;
  _this->CharacterKeyHandler.Filter = CoreKeyCodeCharacterKeys;
  CoreView_OnSetLayout((CoreView)&_this->Frame, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame, _Const0015 );
  ViewsFrame_OnSetColor( &_this->Frame, _Const0016 );
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0017 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.050000f );
  CoreView_OnSetLayout((CoreView)&_this->SimpleTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0018 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0019 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const001A );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0006 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->SimpleTouchHandler, 3 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const001B );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const001C ));
  ViewsText_OnSetColor( &_this->Text, _Const001D );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, _Const001E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, _Const0004 );
  ViewsLine_OnSetWidth2( &_this->Caret, 2 );
  ViewsLine_OnSetWidth1( &_this->Caret, 2 );
  ViewsLine_OnSetColor( &_this->Caret, _Const0014 );
  ViewsLine_OnSetVisible( &_this->Caret, 0 );
  CoreView_OnSetLayout((CoreView)&_this->Search, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Search, _Const001F );
  ViewsText_OnSetWrapText( &_this->Search, 1 );
  ViewsText_OnSetString( &_this->Search, EwLoadString( &ResSerachIconTxt ));
  ViewsText_OnSetColor( &_this->Search, _Const001D );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Caret ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Search ), 0 );
  _this->blinkEffect.Outlet = EwNewRef( &_this->Caret, ViewsLine_OnGetVisible, ViewsLine_OnSetVisible );
  _this->Font = EwLoadResource( &ResourcesFontMedium, ResourcesFont );
  _this->CursorKeyHandler.OnPress = EwNewSlot( _this, ComponentsSearchEtxt_onCursorKey );
  _this->CursorKeyHandler.OnHold = EwNewSlot( _this, ComponentsSearchEtxt_onCursorKey );
  _this->BackspaceKeyHandler.OnPress = EwNewSlot( _this, ComponentsSearchEtxt_onBackspaceKey );
  _this->BackspaceKeyHandler.OnHold = EwNewSlot( _this, ComponentsSearchEtxt_onBackspaceKey );
  _this->DeleteKeyHandler.OnPress = EwNewSlot( _this, ComponentsSearchEtxt_onDeleteKey );
  _this->DeleteKeyHandler.OnHold = EwNewSlot( _this, ComponentsSearchEtxt_onDeleteKey );
  _this->NewlineKeyHandler.OnPress = EwNewSlot( _this, ComponentsSearchEtxt_onNewlineKey );
  _this->NewlineKeyHandler.OnHold = EwNewSlot( _this, ComponentsSearchEtxt_onNewlineKey );
  _this->CharacterKeyHandler.OnPress = EwNewSlot( _this, ComponentsSearchEtxt_onCharacterKey );
  _this->CharacterKeyHandler.OnHold = EwNewSlot( _this, ComponentsSearchEtxt_onCharacterKey );
  ViewsFrame_OnSetBitmap( &_this->Frame, EwLoadResource( &ResSearchButton, ResourcesBitmap ));
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, ComponentsSearchEtxt_onDragTouch );
  _this->SimpleTouchHandler.OnHold = EwNewSlot( _this, ComponentsSearchEtxt_onHoldTouch );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ComponentsSearchEtxt_onReleaseTouch );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ComponentsSearchEtxt_onPressTouch );
  ViewsText_OnSetOnUpdate( &_this->Text, EwNewSlot( _this, ComponentsSearchEtxt_updateCaret ));
  ViewsText_OnSetSlideHandler( &_this->Text, &_this->SlideTouchHandler );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Search, EwLoadResource( &ResIconsFont25, ResourcesFont ));
}

/* Re-Initializer for the class 'Components::SearchEtxt' */
void ComponentsSearchEtxt__ReInit( ComponentsSearchEtxt _this )
{
  /* At first re-initialize the super class ... */
  TemplatesTextEditor__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  EffectsBoolEffect__ReInit( &_this->blinkEffect );
  CoreKeyPressHandler__ReInit( &_this->CursorKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->BackspaceKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->DeleteKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->NewlineKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->CharacterKeyHandler );
  ViewsFrame__ReInit( &_this->Frame );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsText__ReInit( &_this->Text );
  ViewsLine__ReInit( &_this->Caret );
  ViewsText__ReInit( &_this->Search );
}

/* Finalizer method for the class 'Components::SearchEtxt' */
void ComponentsSearchEtxt__Done( ComponentsSearchEtxt _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesTextEditor );

  /* Finalize all embedded objects */
  EffectsBoolEffect__Done( &_this->blinkEffect );
  CoreKeyPressHandler__Done( &_this->CursorKeyHandler );
  CoreKeyPressHandler__Done( &_this->BackspaceKeyHandler );
  CoreKeyPressHandler__Done( &_this->DeleteKeyHandler );
  CoreKeyPressHandler__Done( &_this->NewlineKeyHandler );
  CoreKeyPressHandler__Done( &_this->CharacterKeyHandler );
  ViewsFrame__Done( &_this->Frame );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsText__Done( &_this->Text );
  ViewsLine__Done( &_this->Caret );
  ViewsText__Done( &_this->Search );

  /* Don't forget to deinitialize the super class ... */
  TemplatesTextEditor__Done( &_this->_.Super );
}

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
void ComponentsSearchEtxt_UpdateViewState( ComponentsSearchEtxt _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );

  if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 1 );
  else
  {
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 0 );
    ViewsLine_OnSetVisible( &_this->Caret, 0 );
  }
}

/* This slot method is called after the caret has been adjusted. Its job is to adjust 
   too the position of the magnifying glass view where the augmented text content 
   around the caret is shown. */
void ComponentsSearchEtxt_updateMagnifyingView( ComponentsSearchEtxt _this, XObject 
  sender )
{
  XRect srcArea;
  XRect extent;
  XRect bounds;
  XPoint caret;
  XInt32 srcX;
  XInt32 dstX;
  XPoint ofs;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView == 0 )
    return;

  srcArea = _this->magnifyingView->Super1.SourceArea;
  extent = CoreView__GetExtent( _this->magnifyingView );
  bounds = _this->Super3.Bounds;
  caret = _this->Caret.Super1.Point1;
  srcX = caret.X - ( EwGetRectW( srcArea ) / 2 );

  if ( srcX < 0 )
    srcX = 0;

  if (( srcX + EwGetRectW( srcArea )) > EwGetRectW( bounds ))
    srcX = EwGetRectW( bounds ) - EwGetRectW( srcArea );

  ViewsWarpView_OnSetSourceArea((ViewsWarpView)_this->magnifyingView, EwSetRectOrigin( 
  _this->magnifyingView->Super1.SourceArea, EwNewPoint( srcX, caret.Y )));
  dstX = ( bounds.Point1.X + caret.X ) - (( caret.X - srcX ) * 2 );
  ofs = EwNewPoint( dstX - extent.Point1.X, ( bounds.Point1.Y + caret.Y ) - extent.Point2.Y );
  CoreView__MoveView( _this->magnifyingView, ofs, 0 );
  CoreView__MoveView( _this->magnifyingBack, ofs, 0 );
}

/* This slot method is called after a short delay when the user has moved the caret 
   or modified the text. Its job is to ensure that the caret is still visible. If 
   necessary, the editor content is scrolled. */
void ComponentsSearchEtxt_updateScrollOffset( ComponentsSearchEtxt _this, XObject 
  sender )
{
  XRect bounds;
  XInt32 ofsX;
  XInt32 ofsY;
  XPoint size;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  bounds = _this->Text.Super1.Bounds;
  ofsX = 0;
  ofsY = 0;

  if ( _this->Caret.Super1.Point1.X < bounds.Point1.X )
    ofsX = bounds.Point1.X - _this->Caret.Super1.Point1.X;

  if ( _this->Caret.Super1.Point1.X > bounds.Point2.X )
    ofsX = bounds.Point2.X - _this->Caret.Super1.Point1.X;

  if ( _this->Caret.Super1.Point1.Y < bounds.Point1.Y )
    ofsY = bounds.Point1.Y - _this->Caret.Super1.Point1.Y;

  if ( _this->Caret.Super1.Point2.Y > bounds.Point2.Y )
    ofsY = bounds.Point2.Y - _this->Caret.Super1.Point2.Y;

  if (( ofsX != 0 ) || ( ofsY != 0 ))
    ViewsText_OnSetScrollOffset( &_this->Text, EwMovePointPos( _this->Text.ScrollOffset, 
    EwNewPoint( ofsX, ofsY )));

  ofsX = _this->Text.ScrollOffset.X;
  ofsY = _this->Text.ScrollOffset.Y;
  size = EwGetRectSize( ViewsText_GetContentArea( &_this->Text ));

  if ( size.X <= EwGetRectW( _this->Text.Super1.Bounds ))
    ofsX = 0;

  if ( size.Y <= EwGetRectH( _this->Text.Super1.Bounds ))
    ofsY = 0;

  ViewsText_OnSetScrollOffset( &_this->Text, EwNewPoint( ofsX, ofsY ));
}

/* This slot method is attached to the Text view. Each time the Text view has rearranged 
   the text, this method is called. Its job is to adjust the caret to the evtl. 
   new position. */
void ComponentsSearchEtxt_updateCaret( ComponentsSearchEtxt _this, XObject sender )
{
  XPoint rowCol;
  XPoint pos;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Font == 0 )
    return;

  rowCol = ViewsText_StringIndex2RowCol( &_this->Text, _this->caretIndex );
  pos = ViewsText_RowCol2Position( &_this->Text, rowCol );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, EwMovePointNeg( pos, EwNewPoint( 
  0, _this->Font->Ascent )));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, EwMovePointPos( pos, EwNewPoint( 
  0, _this->Font->Descent )));

  if ( _this->blinkEffect.Enabled )
  {
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 0 );
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 1 );
  }

  if ( _this->autoScroll )
  {
    EwPostSignal( EwNewSlot( _this, ComponentsSearchEtxt_updateScrollOffset ), ((XObject)_this ));
    _this->autoScroll = 0;
  }

  if ( _this->magnifyingView != 0 )
    EwPostSignal( EwNewSlot( _this, ComponentsSearchEtxt_updateMagnifyingView ), 
      ((XObject)_this ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   hide the magnifying glass view again. */
void ComponentsSearchEtxt_onReleaseTouch( ComponentsSearchEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView != 0 )
  {
    CoreGroup__Remove( _this->Super4.Owner, ((CoreView)_this->magnifyingView ));
    CoreGroup__Remove( _this->Super4.Owner, ((CoreView)_this->magnifyingBack ));
    _this->magnifyingView = 0;
    _this->magnifyingBack = 0;
    CoreGroup__OnSetBuffered( _this, 0 );
  }
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   move the caret accordingly to the user's finger movement. */
void ComponentsSearchEtxt_onDragTouch( ComponentsSearchEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView != 0 )
  {
    XPoint rc = ViewsText_Position2RowCol( &_this->Text, _this->SimpleTouchHandler.CurrentPos );
    XInt32 newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

    if ( newCaretIndex != _this->caretIndex )
    {
      _this->caretIndex = newCaretIndex;
      EwPostSignal( EwNewSlot( _this, ComponentsSearchEtxt_updateCaret ), ((XObject)_this ));
      _this->autoScroll = 1;
    }
  }
  else
  {
    XPoint ofs = EwMovePointNeg( _this->SimpleTouchHandler.CurrentPos, _this->SimpleTouchHandler.HittingPos );

    if (((( ofs.X < -8 ) || ( ofs.X > 8 )) || ( ofs.Y < -8 )) || ( ofs.Y > 8 ))
      CoreRoot_DeflectCursor( CoreView__GetRoot( _this ), ((CoreView)&_this->SlideTouchHandler ), 
      _Const0006 );
  }
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   activate the caret movement mode if the user has pressed the finger on the screen 
   for a while. The method also shows a small magnifying glass where the text around 
   the caret is shown. This should help the user to navigate the caret with the 
   finger. */
void ComponentsSearchEtxt_onHoldTouch( ComponentsSearchEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->SimpleTouchHandler.HoldPeriod >= 300 ) && ( _this->magnifyingView 
      == 0 ))
  {
    XInt32 height = _this->Caret.Super1.Point2.Y - _this->Caret.Super1.Point1.Y;
    XInt32 width = height * 3;

    if ( height > EwGetRectH( _this->Super3.Bounds ))
      height = EwGetRectH( _this->Super3.Bounds );

    if ( width > EwGetRectW( _this->Super3.Bounds ))
      width = EwGetRectW( _this->Super3.Bounds );

    CoreGroup__OnSetBuffered( _this, 1 );
    _this->magnifyingView = EwNewObject( ViewsWarpGroup, 0 );
    _this->magnifyingBack = EwNewObject( ViewsRectangle, 0 );
    ViewsWarpGroup_OnSetGroup( _this->magnifyingView, ((CoreGroup)_this ));
    ViewsWarpView_OnSetQuality((ViewsWarpView)_this->magnifyingView, 1 );
    ViewsWarpGroup_OnSetOpacity( _this->magnifyingView, 200 );
    ViewsWarpView_OnSetSourceArea((ViewsWarpView)_this->magnifyingView, EwNewRect( 
    0, 0, width, height ));
    CoreQuadView__OnSetPoint2( _this->magnifyingView, EwSetPointX( _this->magnifyingView->Super2.Point2, 
    width * 2 ));
    CoreQuadView__OnSetPoint3( _this->magnifyingView, EwSetPointX( _this->magnifyingView->Super2.Point3, 
    width * 2 ));
    CoreQuadView__OnSetPoint3( _this->magnifyingView, EwSetPointY( _this->magnifyingView->Super2.Point3, 
    height * 2 ));
    CoreQuadView__OnSetPoint4( _this->magnifyingView, EwSetPointY( _this->magnifyingView->Super2.Point4, 
    height * 2 ));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectSize( _this->magnifyingBack->Super1.Bounds, 
    EwMovePointPos( EwNewPoint( width * 2, height * 2 ), _Const0020 )));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectOrigin( _this->magnifyingBack->Super1.Bounds, 
    _Const0021 ));
    ViewsRectangle_OnSetColor( _this->magnifyingBack, _Const0022 );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingBack ), 0 );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingView ), 0 );
    EwPostSignal( EwNewSlot( _this, ComponentsSearchEtxt_updateMagnifyingView ), 
      ((XObject)_this ));
  }

  if ( _this->magnifyingView != 0 )
    EwSignal( EwNewSlot( _this, ComponentsSearchEtxt_onDragTouch ), ((XObject)_this ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   obtain the focused state for the editor so the user can interact with the editor 
   content and to place the caret at the touched position. */
void ComponentsSearchEtxt_onPressTouch( ComponentsSearchEtxt _this, XObject sender )
{
  XPoint rc;
  XInt32 newCaretIndex;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !CoreGroup_HasViewState((CoreGroup)_this, CoreViewStateFocused ))
    CoreGroup_ObtainFocus((CoreGroup)_this );

  rc = ViewsText_Position2RowCol( &_this->Text, _this->SimpleTouchHandler.CurrentPos );
  newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

  if ( newCaretIndex != _this->caretIndex )
  {
    _this->caretIndex = newCaretIndex;
    EwPostSignal( EwNewSlot( _this, ComponentsSearchEtxt_updateCaret ), ((XObject)_this ));
    _this->autoScroll = 1;
  }
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   move the caret up/down/left or right in the editor text. */
void ComponentsSearchEtxt_onCursorKey( ComponentsSearchEtxt _this, XObject sender )
{
  XPoint rc;
  XInt32 newCaretIndex;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Font == 0 )
    return;

  rc = ViewsText_StringIndex2RowCol( &_this->Text, _this->caretIndex );

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeLeft )
  {
    rc.X = ( rc.X - 1 );

    if ( ViewsText_RowCol2StringIndex( &_this->Text, rc ) == _this->caretIndex )
    {
      rc.Y = ( rc.Y - 1 );
      rc.X = EwGetStringLength( ViewsText_GetRowString( &_this->Text, rc.Y ));
    }
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeRight )
  {
    rc.X = ( rc.X + 1 );

    if ( ViewsText_RowCol2StringIndex( &_this->Text, rc ) == _this->caretIndex )
    {
      rc.Y = ( rc.Y + 1 );
      rc.X = 0;
    }
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeUp )
  {
    XPoint pos = ViewsText_RowCol2Position( &_this->Text, rc );
    XInt32 rowHeight = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;
    rc = ViewsText_Position2RowCol( &_this->Text, EwMovePointNeg( pos, EwNewPoint( 
    0, rowHeight )));
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeDown )
  {
    XPoint pos = ViewsText_RowCol2Position( &_this->Text, rc );
    XInt32 rowHeight = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;
    rc = ViewsText_Position2RowCol( &_this->Text, EwMovePointPos( pos, EwNewPoint( 
    0, rowHeight )));
  }

  newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

  if ( newCaretIndex != _this->caretIndex )
  {
    _this->caretIndex = newCaretIndex;
    EwPostSignal( EwNewSlot( _this, ComponentsSearchEtxt_updateCaret ), ((XObject)_this ));
    _this->autoScroll = 1;
  }
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign preceding the current caret position and to move the caret accordingly. */
void ComponentsSearchEtxt_onBackspaceKey( ComponentsSearchEtxt _this, XObject sender )
{
  XChar ch;
  XInt32 count;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->caretIndex == 0 )
    return;

  ch = EwGetStringChar( _this->Text.String, _this->caretIndex - 1 );
  count = 1;

  if ((( ch == '^' ) || ( ch == '~' )) || ( ch == '%' ))
    count = 2;

  ViewsText_OnSetString( &_this->Text, EwStringRemove( _this->Text.String, _this->caretIndex 
  - count, count ));
  _this->caretIndex = _this->caretIndex - count;
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign at the current caret position. */
void ComponentsSearchEtxt_onDeleteKey( ComponentsSearchEtxt _this, XObject sender )
{
  XChar ch;
  XInt32 count;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->caretIndex >= ( EwGetStringLength( _this->Text.String ) - 1 ))
    return;

  ch = EwGetStringChar( _this->Text.String, _this->caretIndex );
  count = 1;

  if ( ch == '%' )
    count = 2;

  ViewsText_OnSetString( &_this->Text, EwStringRemove( _this->Text.String, _this->caretIndex, 
  count ));
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the <new line> sign and to move the caret 
   to the next row. */
void ComponentsSearchEtxt_onNewlineKey( ComponentsSearchEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, EwLoadString( 
  &_Const0023 ), _this->caretIndex ));
  _this->caretIndex = _this->caretIndex + 1;
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the sign which has been input by the user 
   and to move the caret to the next column. */
void ComponentsSearchEtxt_onCharacterKey( ComponentsSearchEtxt _this, XObject sender )
{
  XChar ch;
  XString str;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ch = _this->CharacterKeyHandler.CharCode;
  str = EwNewStringChar( ch, 1 );

  if (((( ch == '^' ) || ( ch == '~' )) || ( ch == 0x00AD )) || ( ch == '%' ))
    str = EwConcatStringChar( EwLoadString( &_Const0024 ), ch );

  ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, str, 
  _this->caretIndex ));
  _this->caretIndex = _this->caretIndex + EwGetStringLength( str );
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* 'C' function for method : 'Components::SearchEtxt.OnSetColor()' */
void ComponentsSearchEtxt_OnSetColor( ComponentsSearchEtxt _this, XColor value )
{
  if ( !EwCompColor( _this->Color, value ))
    return;

  _this->Color = value;
  ViewsText_OnSetColor( &_this->Text, value );
  ViewsLine_OnSetColor( &_this->Caret, value );
}

/* Variants derived from the class : 'Components::SearchEtxt' */
EW_DEFINE_CLASS_VARIANTS( ComponentsSearchEtxt )
EW_END_OF_CLASS_VARIANTS( ComponentsSearchEtxt )

/* Virtual Method Table (VMT) for the class : 'Components::SearchEtxt' */
EW_DEFINE_CLASS( ComponentsSearchEtxt, TemplatesTextEditor, magnifyingBack, OnChange, 
                 blinkEffect, blinkEffect, caretIndex, caretIndex, "Components::SearchEtxt" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ComponentsSearchEtxt_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsSearchEtxt )

/* Initializer for the class 'Components::InputEtxt' */
void ComponentsInputEtxt__Init( ComponentsInputEtxt _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesTextEditor__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsInputEtxt );

  /* ... then construct all embedded objects */
  EffectsBoolEffect__Init( &_this->blinkEffect, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->CursorKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->BackspaceKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->DeleteKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->NewlineKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->CharacterKeyHandler, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextPlaceholder, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Caret, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsInputEtxt );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0013 );
  _this->blinkEffect.Value2 = 0;
  _this->blinkEffect.Value1 = 1;
  EffectsBoolEffect_OnSetCycleDuration( &_this->blinkEffect, 500 );
  EffectsBoolEffect_OnSetInterCycleDelay( &_this->blinkEffect, 500 );
  _this->Alignment = ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter;
  _this->String = EwShareString( EwLoadString( &_Const0025 ));
  _this->Color = _Const0014;
  _this->CursorKeyHandler.Filter = CoreKeyCodeCursorKeys;
  _this->BackspaceKeyHandler.Filter = CoreKeyCodeBackspace;
  _this->Placeholder = EwShareString( EwLoadString( &_Const0026 ));
  _this->DeleteKeyHandler.Filter = CoreKeyCodeDelete;
  _this->NewlineKeyHandler.Filter = CoreKeyCodeEnter;
  _this->CharacterKeyHandler.Filter = CoreKeyCodeCharacterKeys;
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0017 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.050000f );
  CoreView_OnSetLayout((CoreView)&_this->SimpleTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0018 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0019 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const001A );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0006 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->SimpleTouchHandler, 3 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0027 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0028 ));
  ViewsText_OnSetColor( &_this->Text, _Const0029 );
  CoreView_OnSetLayout((CoreView)&_this->TextPlaceholder, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextPlaceholder, _Const002A );
  ViewsText_OnSetAlignment( &_this->TextPlaceholder, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextPlaceholder, 0 );
  ViewsText_OnSetColor( &_this->TextPlaceholder, _Const001D );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, _Const002B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, _Const002C );
  ViewsLine_OnSetWidth2( &_this->Caret, 2 );
  ViewsLine_OnSetWidth1( &_this->Caret, 2 );
  ViewsLine_OnSetColor( &_this->Caret, _Const0014 );
  ViewsLine_OnSetVisible( &_this->Caret, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextPlaceholder ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Caret ), 0 );
  _this->blinkEffect.Outlet = EwNewRef( &_this->Caret, ViewsLine_OnGetVisible, ViewsLine_OnSetVisible );
  _this->Font = EwLoadResource( &ResourcesFontMedium, ResourcesFont );
  _this->CursorKeyHandler.OnPress = EwNewSlot( _this, ComponentsInputEtxt_onCursorKey );
  _this->CursorKeyHandler.OnHold = EwNewSlot( _this, ComponentsInputEtxt_onCursorKey );
  _this->BackspaceKeyHandler.OnPress = EwNewSlot( _this, ComponentsInputEtxt_onBackspaceKey );
  _this->BackspaceKeyHandler.OnHold = EwNewSlot( _this, ComponentsInputEtxt_onBackspaceKey );
  _this->DeleteKeyHandler.OnPress = EwNewSlot( _this, ComponentsInputEtxt_onDeleteKey );
  _this->DeleteKeyHandler.OnHold = EwNewSlot( _this, ComponentsInputEtxt_onDeleteKey );
  _this->NewlineKeyHandler.OnPress = EwNewSlot( _this, ComponentsInputEtxt_onNewlineKey );
  _this->NewlineKeyHandler.OnHold = EwNewSlot( _this, ComponentsInputEtxt_onNewlineKey );
  _this->CharacterKeyHandler.OnPress = EwNewSlot( _this, ComponentsInputEtxt_onCharacterKey );
  _this->CharacterKeyHandler.OnHold = EwNewSlot( _this, ComponentsInputEtxt_onCharacterKey );
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, ComponentsInputEtxt_onDragTouch );
  _this->SimpleTouchHandler.OnHold = EwNewSlot( _this, ComponentsInputEtxt_onHoldTouch );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ComponentsInputEtxt_onReleaseTouch );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ComponentsInputEtxt_onPressTouch );
  ViewsText_OnSetOnUpdate( &_this->Text, EwNewSlot( _this, ComponentsInputEtxt_updateCaret ));
  ViewsText_OnSetSlideHandler( &_this->Text, &_this->SlideTouchHandler );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextPlaceholder, EwLoadResource( &ResourcesFontSmall, 
  ResourcesFont ));
}

/* Re-Initializer for the class 'Components::InputEtxt' */
void ComponentsInputEtxt__ReInit( ComponentsInputEtxt _this )
{
  /* At first re-initialize the super class ... */
  TemplatesTextEditor__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  EffectsBoolEffect__ReInit( &_this->blinkEffect );
  CoreKeyPressHandler__ReInit( &_this->CursorKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->BackspaceKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->DeleteKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->NewlineKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->CharacterKeyHandler );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->TextPlaceholder );
  ViewsLine__ReInit( &_this->Caret );
}

/* Finalizer method for the class 'Components::InputEtxt' */
void ComponentsInputEtxt__Done( ComponentsInputEtxt _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesTextEditor );

  /* Finalize all embedded objects */
  EffectsBoolEffect__Done( &_this->blinkEffect );
  CoreKeyPressHandler__Done( &_this->CursorKeyHandler );
  CoreKeyPressHandler__Done( &_this->BackspaceKeyHandler );
  CoreKeyPressHandler__Done( &_this->DeleteKeyHandler );
  CoreKeyPressHandler__Done( &_this->NewlineKeyHandler );
  CoreKeyPressHandler__Done( &_this->CharacterKeyHandler );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsText__Done( &_this->Text );
  ViewsText__Done( &_this->TextPlaceholder );
  ViewsLine__Done( &_this->Caret );

  /* Don't forget to deinitialize the super class ... */
  TemplatesTextEditor__Done( &_this->_.Super );
}

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
void ComponentsInputEtxt_UpdateViewState( ComponentsInputEtxt _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );

  if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 1 );
  else
  {
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 0 );
    ViewsLine_OnSetVisible( &_this->Caret, 0 );
  }
}

/* This slot method is called after the caret has been adjusted. Its job is to adjust 
   too the position of the magnifying glass view where the augmented text content 
   around the caret is shown. */
void ComponentsInputEtxt_updateMagnifyingView( ComponentsInputEtxt _this, XObject 
  sender )
{
  XRect srcArea;
  XRect extent;
  XRect bounds;
  XPoint caret;
  XInt32 srcX;
  XInt32 dstX;
  XPoint ofs;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView == 0 )
    return;

  srcArea = _this->magnifyingView->Super1.SourceArea;
  extent = CoreView__GetExtent( _this->magnifyingView );
  bounds = _this->Super3.Bounds;
  caret = _this->Caret.Super1.Point1;
  srcX = caret.X - ( EwGetRectW( srcArea ) / 2 );

  if ( srcX < 0 )
    srcX = 0;

  if (( srcX + EwGetRectW( srcArea )) > EwGetRectW( bounds ))
    srcX = EwGetRectW( bounds ) - EwGetRectW( srcArea );

  ViewsWarpView_OnSetSourceArea((ViewsWarpView)_this->magnifyingView, EwSetRectOrigin( 
  _this->magnifyingView->Super1.SourceArea, EwNewPoint( srcX, caret.Y )));
  dstX = ( bounds.Point1.X + caret.X ) - (( caret.X - srcX ) * 2 );
  ofs = EwNewPoint( dstX - extent.Point1.X, ( bounds.Point1.Y + caret.Y ) - extent.Point2.Y );
  CoreView__MoveView( _this->magnifyingView, ofs, 0 );
  CoreView__MoveView( _this->magnifyingBack, ofs, 0 );
}

/* This slot method is called after a short delay when the user has moved the caret 
   or modified the text. Its job is to ensure that the caret is still visible. If 
   necessary, the editor content is scrolled. */
void ComponentsInputEtxt_updateScrollOffset( ComponentsInputEtxt _this, XObject 
  sender )
{
  XRect bounds;
  XInt32 ofsX;
  XInt32 ofsY;
  XPoint size;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  bounds = _this->Text.Super1.Bounds;
  ofsX = 0;
  ofsY = 0;

  if ( _this->Caret.Super1.Point1.X < bounds.Point1.X )
    ofsX = bounds.Point1.X - _this->Caret.Super1.Point1.X;

  if ( _this->Caret.Super1.Point1.X > bounds.Point2.X )
    ofsX = bounds.Point2.X - _this->Caret.Super1.Point1.X;

  if ( _this->Caret.Super1.Point1.Y < bounds.Point1.Y )
    ofsY = bounds.Point1.Y - _this->Caret.Super1.Point1.Y;

  if ( _this->Caret.Super1.Point2.Y > bounds.Point2.Y )
    ofsY = bounds.Point2.Y - _this->Caret.Super1.Point2.Y;

  if (( ofsX != 0 ) || ( ofsY != 0 ))
    ViewsText_OnSetScrollOffset( &_this->Text, EwMovePointPos( _this->Text.ScrollOffset, 
    EwNewPoint( ofsX, ofsY )));

  ofsX = _this->Text.ScrollOffset.X;
  ofsY = _this->Text.ScrollOffset.Y;
  size = EwGetRectSize( ViewsText_GetContentArea( &_this->Text ));

  if ( size.X <= EwGetRectW( _this->Text.Super1.Bounds ))
    ofsX = 0;

  if ( size.Y <= EwGetRectH( _this->Text.Super1.Bounds ))
    ofsY = 0;

  ViewsText_OnSetScrollOffset( &_this->Text, EwNewPoint( ofsX, ofsY ));
}

/* This slot method is attached to the Text view. Each time the Text view has rearranged 
   the text, this method is called. Its job is to adjust the caret to the evtl. 
   new position. */
void ComponentsInputEtxt_updateCaret( ComponentsInputEtxt _this, XObject sender )
{
  XPoint rowCol;
  XPoint pos;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Font == 0 )
    return;

  rowCol = ViewsText_StringIndex2RowCol( &_this->Text, _this->caretIndex );
  pos = ViewsText_RowCol2Position( &_this->Text, rowCol );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, EwMovePointNeg( pos, EwNewPoint( 
  0, _this->Font->Ascent )));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, EwMovePointPos( pos, EwNewPoint( 
  0, _this->Font->Descent )));

  if ( _this->blinkEffect.Enabled )
  {
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 0 );
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 1 );
  }

  if ( _this->autoScroll )
  {
    EwPostSignal( EwNewSlot( _this, ComponentsInputEtxt_updateScrollOffset ), ((XObject)_this ));
    _this->autoScroll = 0;
  }

  if ( _this->magnifyingView != 0 )
    EwPostSignal( EwNewSlot( _this, ComponentsInputEtxt_updateMagnifyingView ), 
      ((XObject)_this ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   hide the magnifying glass view again. */
void ComponentsInputEtxt_onReleaseTouch( ComponentsInputEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView != 0 )
  {
    CoreGroup__Remove( _this->Super4.Owner, ((CoreView)_this->magnifyingView ));
    CoreGroup__Remove( _this->Super4.Owner, ((CoreView)_this->magnifyingBack ));
    _this->magnifyingView = 0;
    _this->magnifyingBack = 0;
    CoreGroup__OnSetBuffered( _this, 0 );
  }
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   move the caret accordingly to the user's finger movement. */
void ComponentsInputEtxt_onDragTouch( ComponentsInputEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView != 0 )
  {
    XPoint rc = ViewsText_Position2RowCol( &_this->Text, _this->SimpleTouchHandler.CurrentPos );
    XInt32 newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

    if ( newCaretIndex != _this->caretIndex )
    {
      _this->caretIndex = newCaretIndex;
      EwPostSignal( EwNewSlot( _this, ComponentsInputEtxt_updateCaret ), ((XObject)_this ));
      _this->autoScroll = 1;
    }
  }
  else
  {
    XPoint ofs = EwMovePointNeg( _this->SimpleTouchHandler.CurrentPos, _this->SimpleTouchHandler.HittingPos );

    if (((( ofs.X < -8 ) || ( ofs.X > 8 )) || ( ofs.Y < -8 )) || ( ofs.Y > 8 ))
      CoreRoot_DeflectCursor( CoreView__GetRoot( _this ), ((CoreView)&_this->SlideTouchHandler ), 
      _Const0006 );
  }
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   activate the caret movement mode if the user has pressed the finger on the screen 
   for a while. The method also shows a small magnifying glass where the text around 
   the caret is shown. This should help the user to navigate the caret with the 
   finger. */
void ComponentsInputEtxt_onHoldTouch( ComponentsInputEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->SimpleTouchHandler.HoldPeriod >= 300 ) && ( _this->magnifyingView 
      == 0 ))
  {
    XInt32 height = _this->Caret.Super1.Point2.Y - _this->Caret.Super1.Point1.Y;
    XInt32 width = height * 3;

    if ( height > EwGetRectH( _this->Super3.Bounds ))
      height = EwGetRectH( _this->Super3.Bounds );

    if ( width > EwGetRectW( _this->Super3.Bounds ))
      width = EwGetRectW( _this->Super3.Bounds );

    CoreGroup__OnSetBuffered( _this, 1 );
    _this->magnifyingView = EwNewObject( ViewsWarpGroup, 0 );
    _this->magnifyingBack = EwNewObject( ViewsRectangle, 0 );
    ViewsWarpGroup_OnSetGroup( _this->magnifyingView, ((CoreGroup)_this ));
    ViewsWarpView_OnSetQuality((ViewsWarpView)_this->magnifyingView, 1 );
    ViewsWarpGroup_OnSetOpacity( _this->magnifyingView, 200 );
    ViewsWarpView_OnSetSourceArea((ViewsWarpView)_this->magnifyingView, EwNewRect( 
    0, 0, width, height ));
    CoreQuadView__OnSetPoint2( _this->magnifyingView, EwSetPointX( _this->magnifyingView->Super2.Point2, 
    width * 2 ));
    CoreQuadView__OnSetPoint3( _this->magnifyingView, EwSetPointX( _this->magnifyingView->Super2.Point3, 
    width * 2 ));
    CoreQuadView__OnSetPoint3( _this->magnifyingView, EwSetPointY( _this->magnifyingView->Super2.Point3, 
    height * 2 ));
    CoreQuadView__OnSetPoint4( _this->magnifyingView, EwSetPointY( _this->magnifyingView->Super2.Point4, 
    height * 2 ));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectSize( _this->magnifyingBack->Super1.Bounds, 
    EwMovePointPos( EwNewPoint( width * 2, height * 2 ), _Const0020 )));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectOrigin( _this->magnifyingBack->Super1.Bounds, 
    _Const0021 ));
    ViewsRectangle_OnSetColor( _this->magnifyingBack, _Const0022 );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingBack ), 0 );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingView ), 0 );
    EwPostSignal( EwNewSlot( _this, ComponentsInputEtxt_updateMagnifyingView ), 
      ((XObject)_this ));
  }

  if ( _this->magnifyingView != 0 )
    EwSignal( EwNewSlot( _this, ComponentsInputEtxt_onDragTouch ), ((XObject)_this ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   obtain the focused state for the editor so the user can interact with the editor 
   content and to place the caret at the touched position. */
void ComponentsInputEtxt_onPressTouch( ComponentsInputEtxt _this, XObject sender )
{
  XPoint rc;
  XInt32 newCaretIndex;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !CoreGroup_HasViewState((CoreGroup)_this, CoreViewStateFocused ))
    CoreGroup_ObtainFocus((CoreGroup)_this );

  rc = ViewsText_Position2RowCol( &_this->Text, _this->SimpleTouchHandler.CurrentPos );
  newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

  if ( newCaretIndex != _this->caretIndex )
  {
    _this->caretIndex = newCaretIndex;
    EwPostSignal( EwNewSlot( _this, ComponentsInputEtxt_updateCaret ), ((XObject)_this ));
    _this->autoScroll = 1;
  }
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   move the caret up/down/left or right in the editor text. */
void ComponentsInputEtxt_onCursorKey( ComponentsInputEtxt _this, XObject sender )
{
  XPoint rc;
  XInt32 newCaretIndex;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Font == 0 )
    return;

  rc = ViewsText_StringIndex2RowCol( &_this->Text, _this->caretIndex );

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeLeft )
  {
    rc.X = ( rc.X - 1 );

    if ( ViewsText_RowCol2StringIndex( &_this->Text, rc ) == _this->caretIndex )
    {
      rc.Y = ( rc.Y - 1 );
      rc.X = EwGetStringLength( ViewsText_GetRowString( &_this->Text, rc.Y ));
    }
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeRight )
  {
    rc.X = ( rc.X + 1 );

    if ( ViewsText_RowCol2StringIndex( &_this->Text, rc ) == _this->caretIndex )
    {
      rc.Y = ( rc.Y + 1 );
      rc.X = 0;
    }
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeUp )
  {
    XPoint pos = ViewsText_RowCol2Position( &_this->Text, rc );
    XInt32 rowHeight = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;
    rc = ViewsText_Position2RowCol( &_this->Text, EwMovePointNeg( pos, EwNewPoint( 
    0, rowHeight )));
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeDown )
  {
    XPoint pos = ViewsText_RowCol2Position( &_this->Text, rc );
    XInt32 rowHeight = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;
    rc = ViewsText_Position2RowCol( &_this->Text, EwMovePointPos( pos, EwNewPoint( 
    0, rowHeight )));
  }

  newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

  if ( newCaretIndex != _this->caretIndex )
  {
    _this->caretIndex = newCaretIndex;
    EwPostSignal( EwNewSlot( _this, ComponentsInputEtxt_updateCaret ), ((XObject)_this ));
    _this->autoScroll = 1;
  }
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign preceding the current caret position and to move the caret accordingly. */
void ComponentsInputEtxt_onBackspaceKey( ComponentsInputEtxt _this, XObject sender )
{
  XChar ch;
  XInt32 count;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->caretIndex == 0 )
    return;

  ch = EwGetStringChar( _this->Text.String, _this->caretIndex - 1 );
  count = 1;

  if ((( ch == '^' ) || ( ch == '~' )) || ( ch == '%' ))
    count = 2;

  ViewsText_OnSetString( &_this->Text, EwStringRemove( _this->Text.String, _this->caretIndex 
  - count, count ));
  _this->caretIndex = _this->caretIndex - count;
  _this->autoScroll = 1;
  EwPostSignal( EwNewSlot( _this, ComponentsInputEtxt_onChange ), ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign at the current caret position. */
void ComponentsInputEtxt_onDeleteKey( ComponentsInputEtxt _this, XObject sender )
{
  XChar ch;
  XInt32 count;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->caretIndex >= ( EwGetStringLength( _this->Text.String ) - 1 ))
    return;

  ch = EwGetStringChar( _this->Text.String, _this->caretIndex );
  count = 1;

  if ( ch == '%' )
    count = 2;

  ViewsText_OnSetString( &_this->Text, EwStringRemove( _this->Text.String, _this->caretIndex, 
  count ));
  _this->autoScroll = 1;
  EwPostSignal( EwNewSlot( _this, ComponentsInputEtxt_onChange ), ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the <new line> sign and to move the caret 
   to the next row. */
void ComponentsInputEtxt_onNewlineKey( ComponentsInputEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, EwLoadString( 
  &_Const0023 ), _this->caretIndex ));
  _this->caretIndex = _this->caretIndex + 1;
  _this->autoScroll = 1;
  EwPostSignal( EwNewSlot( _this, ComponentsInputEtxt_onChange ), ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the sign which has been input by the user 
   and to move the caret to the next column. */
void ComponentsInputEtxt_onCharacterKey( ComponentsInputEtxt _this, XObject sender )
{
  XChar ch;
  XString str;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ch = _this->CharacterKeyHandler.CharCode;
  str = EwNewStringChar( ch, 1 );

  if (((( ch == '^' ) || ( ch == '~' )) || ( ch == 0x00AD )) || ( ch == '%' ))
    str = EwConcatStringChar( EwLoadString( &_Const0024 ), ch );

  ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, str, 
  _this->caretIndex ));
  _this->caretIndex = _this->caretIndex + EwGetStringLength( str );
  _this->autoScroll = 1;
  EwPostSignal( EwNewSlot( _this, ComponentsInputEtxt_onChange ), ((XObject)_this ));
}

/* 'C' function for method : 'Components::InputEtxt.OnSetAlignment()' */
void ComponentsInputEtxt_OnSetAlignment( ComponentsInputEtxt _this, XSet value )
{
  if ( _this->Alignment == value )
    return;

  _this->Alignment = value;
  ViewsText_OnSetAlignment( &_this->Text, value );
  _this->autoScroll = 1;
  ViewsText_OnSetScrollOffset( &_this->Text, _Const0006 );
}

/* 'C' function for method : 'Components::InputEtxt.OnGetString()' */
XString ComponentsInputEtxt_OnGetString( ComponentsInputEtxt _this )
{
  XString str = _this->Text.String;
  XInt32 inx = EwStringFindChar( str, '%', 0 );

  while ( inx >= 0 )
  {
    str = EwStringRemove( str, inx, 1 );
    inx = EwStringFindChar( str, '%', inx + 1 );
  }

  return EwStringLeft( str, EwGetStringLength( str ) - 1 );
}

/* 'C' function for method : 'Components::InputEtxt.OnSetString()' */
void ComponentsInputEtxt_OnSetString( ComponentsInputEtxt _this, XString value )
{
  XString str;
  XInt32 inx;

  if ( !EwCompString( _this->String, value ))
    return;

  _this->String = EwShareString( value );
  str = value;
  inx = EwStringFindChar( str, '%', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const0024 ), inx );
    inx = EwStringFindChar( str, '%', inx + 2 );
  }

  inx = EwStringFindChar( str, '^', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const0024 ), inx );
    inx = EwStringFindChar( str, '^', inx + 2 );
  }

  inx = EwStringFindChar( str, '~', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const0024 ), inx );
    inx = EwStringFindChar( str, '~', inx + 2 );
  }

  inx = EwStringFindChar( str, 0x00AD, 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const0024 ), inx );
    inx = EwStringFindChar( str, 0x00AD, inx + 2 );
  }

  if ( _this->caretIndex > EwGetStringLength( str ))
    _this->caretIndex = EwGetStringLength( str );

  ViewsText_OnSetString( &_this->Text, EwConcatString( str, EwLoadString( &_Const002D )));
  _this->autoScroll = 1;
  ViewsText_OnSetScrollOffset( &_this->Text, _Const0006 );
  EwPostSignal( EwNewSlot( _this, ComponentsInputEtxt_updatePlaceholder ), ((XObject)_this ));
}

/* 'C' function for method : 'Components::InputEtxt.OnSetColor()' */
void ComponentsInputEtxt_OnSetColor( ComponentsInputEtxt _this, XColor value )
{
  if ( !EwCompColor( _this->Color, value ))
    return;

  _this->Color = value;
  ViewsText_OnSetColor( &_this->Text, value );
  ViewsLine_OnSetColor( &_this->Caret, value );
}

/* 'C' function for method : 'Components::InputEtxt.OnSetFont()' */
void ComponentsInputEtxt_OnSetFont( ComponentsInputEtxt _this, ResourcesFont value )
{
  if ( _this->Font == value )
    return;

  _this->Font = value;
  ViewsText_OnSetFont( &_this->Text, value );
  _this->autoScroll = 1;
  ViewsText_OnSetScrollOffset( &_this->Text, _Const0006 );
}

/* 'C' function for method : 'Components::InputEtxt.OnSetPlaceholder()' */
void ComponentsInputEtxt_OnSetPlaceholder( ComponentsInputEtxt _this, XString value )
{
  if ( !EwCompString( _this->Placeholder, value ))
    return;

  _this->Placeholder = EwShareString( value );
  ViewsText_OnSetString( &_this->TextPlaceholder, _this->Placeholder );
  EwPostSignal( EwNewSlot( _this, ComponentsInputEtxt_updatePlaceholder ), ((XObject)_this ));
}

/* 'C' function for method : 'Components::InputEtxt.onChange()' */
void ComponentsInputEtxt_onChange( ComponentsInputEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnChange, ((XObject)_this ));
  EwPostSignal( EwNewSlot( _this, ComponentsInputEtxt_updatePlaceholder ), ((XObject)_this ));
}

/* 'C' function for method : 'Components::InputEtxt.updatePlaceholder()' */
void ComponentsInputEtxt_updatePlaceholder( ComponentsInputEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !EwCompString( ComponentsInputEtxt_OnGetString( _this ), EwLoadString( &_Const0028 )) 
      || !EwCompString( ComponentsInputEtxt_OnGetString( _this ), 0 ))
    ViewsText_OnSetVisible( &_this->TextPlaceholder, 1 );
  else
    ViewsText_OnSetVisible( &_this->TextPlaceholder, 0 );
}

/* Variants derived from the class : 'Components::InputEtxt' */
EW_DEFINE_CLASS_VARIANTS( ComponentsInputEtxt )
EW_END_OF_CLASS_VARIANTS( ComponentsInputEtxt )

/* Virtual Method Table (VMT) for the class : 'Components::InputEtxt' */
EW_DEFINE_CLASS( ComponentsInputEtxt, TemplatesTextEditor, magnifyingBack, OnChange, 
                 blinkEffect, blinkEffect, String, caretIndex, "Components::InputEtxt" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ComponentsInputEtxt_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsInputEtxt )

/* Initializer for the class 'Components::PushButtonDelete' */
void ComponentsPushButtonDelete__Init( ComponentsPushButtonDelete _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsPushButtonDelete );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsPushButtonDelete );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const002E );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const002F );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0002 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0030 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0031 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0032 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0006 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Text, _Const0033 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0034 ));
  ViewsText_OnSetColor( &_this->Text, _Const0035 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ComponentsPushButtonDelete_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ComponentsPushButtonDelete_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ComponentsPushButtonDelete_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ComponentsPushButtonDelete_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ComponentsPushButtonDelete_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ComponentsPushButtonDelete_onPressTouch );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
}

/* Re-Initializer for the class 'Components::PushButtonDelete' */
void ComponentsPushButtonDelete__ReInit( ComponentsPushButtonDelete _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsRectangle__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Components::PushButtonDelete' */
void ComponentsPushButtonDelete__Done( ComponentsPushButtonDelete _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsRectangle__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
}

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
void ComponentsPushButtonDelete_UpdateViewState( ComponentsPushButtonDelete _this, 
  XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->Text != 0 )
  {
    XColor clr = ResRed;
    ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResContactFont15, ResourcesFont ));
    ViewsText_OnSetString( &_this->Text, _this->Label );
    ViewsText_OnSetColor( &_this->Text, clr );
  }

  if ( !isEnabled )
  {
    ViewsRectangle_OnSetColor( &_this->Background, ResWhiteTransparent );
    ViewsText_OnSetColor( &_this->Text, ResGrey );
  }
  else
    if ( isPressed )
    {
      ViewsRectangle_OnSetColor( &_this->Background, ResPressColor );
      ViewsText_OnSetColor( &_this->Text, ResRedLight );
    }
    else
      ViewsRectangle_OnSetColor( &_this->Background, ResWhiteTransparent );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ComponentsPushButtonDelete_onFlashTimer( ComponentsPushButtonDelete _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ComponentsPushButtonDelete_onPressKey( ComponentsPushButtonDelete _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->TouchHandler.Down )
    return;

  if ( _this->KeyHandler.Repetition )
    return;

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user drags the finger while pressing 
   the button. This only updates the button to appear pressed or released. */
void ComponentsPushButtonDelete_onEnterLeaveTouch( ComponentsPushButtonDelete _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ComponentsPushButtonDelete_onReleaseTouch( ComponentsPushButtonDelete _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin )
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
  else
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the button's area. */
void ComponentsPushButtonDelete_onPressTouch( ComponentsPushButtonDelete _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Components::PushButtonDelete.OnSetLabel()' */
void ComponentsPushButtonDelete_OnSetLabel( ComponentsPushButtonDelete _this, XString 
  value )
{
  if ( !EwCompString( _this->Label, value ))
    return;

  _this->Label = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Components::PushButtonDelete' */
EW_DEFINE_CLASS_VARIANTS( ComponentsPushButtonDelete )
EW_END_OF_CLASS_VARIANTS( ComponentsPushButtonDelete )

/* Virtual Method Table (VMT) for the class : 'Components::PushButtonDelete' */
EW_DEFINE_CLASS( ComponentsPushButtonDelete, TemplatesPushButton, OnActivate, OnActivate, 
                 FlashTimer, FlashTimer, Label, enabled, "Components::PushButtonDelete" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ComponentsPushButtonDelete_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsPushButtonDelete )

/* Initializer for the class 'Components::PushButtonMediumTrans' */
void ComponentsPushButtonMediumTrans__Init( ComponentsPushButtonMediumTrans _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsPushButtonMediumTrans );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->IconTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->DescripTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsPushButtonMediumTrans );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0036 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0037 );
  ViewsImage_OnSetColor( &_this->Background, _Const0002 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0038 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0039 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const003A );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0006 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->IconTxt, _Const0037 );
  ViewsText_OnSetString( &_this->IconTxt, 0 );
  ViewsText_OnSetColor( &_this->IconTxt, _Const0002 );
  CoreView_OnSetLayout((CoreView)&_this->DescripTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->DescripTxt, _Const003B );
  ViewsText_OnSetAlignment( &_this->DescripTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DescripTxt, 0 );
  _this->ButtonColor = ResWhiteTransparent;
  _this->IconColor = ResWhite;
  _this->ButtonColorPressed = ResWhiteSemiTransparent;
  _this->DescriptColor = ResWhite;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DescripTxt ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ComponentsPushButtonMediumTrans_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ComponentsPushButtonMediumTrans_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundMedium1, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ComponentsPushButtonMediumTrans_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ComponentsPushButtonMediumTrans_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ComponentsPushButtonMediumTrans_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ComponentsPushButtonMediumTrans_onPressTouch );
  ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
}

/* Re-Initializer for the class 'Components::PushButtonMediumTrans' */
void ComponentsPushButtonMediumTrans__ReInit( ComponentsPushButtonMediumTrans _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->IconTxt );
  ViewsText__ReInit( &_this->DescripTxt );
}

/* Finalizer method for the class 'Components::PushButtonMediumTrans' */
void ComponentsPushButtonMediumTrans__Done( ComponentsPushButtonMediumTrans _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->IconTxt );
  ViewsText__Done( &_this->DescripTxt );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
}

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
void ComponentsPushButtonMediumTrans_UpdateViewState( ComponentsPushButtonMediumTrans _this, 
  XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->IconTxt != 0 )
  {
    XColor clr = _this->IconColor;
    ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont25, ResourcesFont ));
    ViewsText_OnSetString( &_this->IconTxt, _this->Icon );
    ViewsText_OnSetColor( &_this->IconTxt, clr );
  }

  if ( &_this->DescripTxt != 0 )
  {
    XColor clr = _this->DescriptColor;
    ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, 
    ResourcesFont ));
    ViewsText_OnSetString( &_this->DescripTxt, _this->Descript );
    ViewsText_OnSetColor( &_this->DescripTxt, clr );
  }

  if ( !isEnabled )
  {
    ViewsImage_OnSetColor( &_this->Background, ResTransparent );
    ViewsText_OnSetColor( &_this->DescripTxt, ResWhiteTransparent );
    ViewsText_OnSetColor( &_this->IconTxt, ResWhiteTransparent );
  }
  else
    if ( isPressed )
      ViewsImage_OnSetColor( &_this->Background, _this->ButtonColorPressed );
    else
      ViewsImage_OnSetColor( &_this->Background, _this->ButtonColor );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ComponentsPushButtonMediumTrans_onFlashTimer( ComponentsPushButtonMediumTrans _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ComponentsPushButtonMediumTrans_onPressKey( ComponentsPushButtonMediumTrans _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->TouchHandler.Down )
    return;

  if ( _this->KeyHandler.Repetition )
    return;

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user drags the finger while pressing 
   the button. This only updates the button to appear pressed or released. */
void ComponentsPushButtonMediumTrans_onEnterLeaveTouch( ComponentsPushButtonMediumTrans _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ComponentsPushButtonMediumTrans_onReleaseTouch( ComponentsPushButtonMediumTrans _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin )
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
  else
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the button's area. */
void ComponentsPushButtonMediumTrans_onPressTouch( ComponentsPushButtonMediumTrans _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Components::PushButtonMediumTrans.OnSetIcon()' */
void ComponentsPushButtonMediumTrans_OnSetIcon( ComponentsPushButtonMediumTrans _this, 
  XString value )
{
  if ( !EwCompString( _this->Icon, value ))
    return;

  _this->Icon = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::PushButtonMediumTrans.OnSetDescript()' */
void ComponentsPushButtonMediumTrans_OnSetDescript( ComponentsPushButtonMediumTrans _this, 
  XString value )
{
  if ( !EwCompString( _this->Descript, value ))
    return;

  _this->Descript = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::PushButtonMediumTrans.OnSetButtonColor()' */
void ComponentsPushButtonMediumTrans_OnSetButtonColor( ComponentsPushButtonMediumTrans _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ButtonColor, value ))
    return;

  _this->ButtonColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::PushButtonMediumTrans.OnSetIconColor()' */
void ComponentsPushButtonMediumTrans_OnSetIconColor( ComponentsPushButtonMediumTrans _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconColor, value ))
    return;

  _this->IconColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Components::PushButtonMediumTrans' */
EW_DEFINE_CLASS_VARIANTS( ComponentsPushButtonMediumTrans )
EW_END_OF_CLASS_VARIANTS( ComponentsPushButtonMediumTrans )

/* Virtual Method Table (VMT) for the class : 'Components::PushButtonMediumTrans' */
EW_DEFINE_CLASS( ComponentsPushButtonMediumTrans, TemplatesPushButton, OnActivate, 
                 OnActivate, FlashTimer, FlashTimer, Icon, ButtonColor, "Components::PushButtonMediumTrans" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ComponentsPushButtonMediumTrans_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsPushButtonMediumTrans )

/* Initializer for the class 'Components::KeyPadButtons' */
void ComponentsKeyPadButtons__Init( ComponentsKeyPadButtons _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsKeyPadButtons );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->IconTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->DescripTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsKeyPadButtons );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0037 );
  _this->ButtonColor = ResWhiteTransparent;
  _this->IconColor = ResWhite;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0037 );
  ViewsImage_OnSetColor( &_this->Background, _Const0002 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0038 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0039 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const003A );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0006 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->IconTxt, _Const0037 );
  ViewsText_OnSetString( &_this->IconTxt, 0 );
  ViewsText_OnSetColor( &_this->IconTxt, _Const0002 );
  CoreRectView__OnSetBounds( &_this->DescripTxt, _Const0037 );
  ViewsText_OnSetString( &_this->DescripTxt, 0 );
  ViewsText_OnSetColor( &_this->DescripTxt, _Const0002 );
  _this->TextColor = ResWhite;
  _this->ButtonColorPressed = ResWhiteSemiTransparent;
  _this->IconColorPressed = ResWhiteSemiTransparent;
  _this->TextColorPressed = ResWhiteSemiTransparent;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DescripTxt ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ComponentsKeyPadButtons_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ComponentsKeyPadButtons_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundMedium1, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ComponentsKeyPadButtons_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ComponentsKeyPadButtons_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ComponentsKeyPadButtons_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ComponentsKeyPadButtons_onPressTouch );
  ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
}

/* Re-Initializer for the class 'Components::KeyPadButtons' */
void ComponentsKeyPadButtons__ReInit( ComponentsKeyPadButtons _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->IconTxt );
  ViewsText__ReInit( &_this->DescripTxt );
}

/* Finalizer method for the class 'Components::KeyPadButtons' */
void ComponentsKeyPadButtons__Done( ComponentsKeyPadButtons _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->IconTxt );
  ViewsText__Done( &_this->DescripTxt );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
}

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
void ComponentsKeyPadButtons_UpdateViewState( ComponentsKeyPadButtons _this, XSet 
  aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->IconTxt != 0 )
  {
    XColor clr = _this->IconColor;
    ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont25, ResourcesFont ));
    ViewsText_OnSetString( &_this->IconTxt, _this->Icon );
    ViewsText_OnSetColor( &_this->IconTxt, clr );
  }

  if ( &_this->DescripTxt != 0 )
  {
    XColor clr = _this->TextColor;
    ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResTitileFont25, ResourcesFont ));
    ViewsText_OnSetString( &_this->DescripTxt, _this->Text );
    ViewsText_OnSetColor( &_this->DescripTxt, clr );
  }

  if ( !isEnabled )
  {
    ViewsImage_OnSetColor( &_this->Background, ResPressColor );
    ViewsText_OnSetColor( &_this->IconTxt, ResGrey );
    ViewsText_OnSetColor( &_this->DescripTxt, ResGrey );
  }
  else
    if ( isPressed )
    {
      ViewsImage_OnSetColor( &_this->Background, _this->ButtonColorPressed );
      ViewsText_OnSetColor( &_this->IconTxt, _this->IconColorPressed );
      ViewsText_OnSetColor( &_this->DescripTxt, _this->TextColorPressed );
    }
    else
      ViewsImage_OnSetColor( &_this->Background, _this->ButtonColor );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* 'C' function for method : 'Components::KeyPadButtons.OnSetText()' */
void ComponentsKeyPadButtons_OnSetText( ComponentsKeyPadButtons _this, XString value )
{
  if ( !EwCompString( _this->Text, value ))
    return;

  _this->Text = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::KeyPadButtons.OnSetButtonColor()' */
void ComponentsKeyPadButtons_OnSetButtonColor( ComponentsKeyPadButtons _this, XColor 
  value )
{
  if ( !EwCompColor( _this->ButtonColor, value ))
    return;

  _this->ButtonColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::KeyPadButtons.OnSetIconColor()' */
void ComponentsKeyPadButtons_OnSetIconColor( ComponentsKeyPadButtons _this, XColor 
  value )
{
  if ( !EwCompColor( _this->IconColor, value ))
    return;

  _this->IconColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ComponentsKeyPadButtons_onFlashTimer( ComponentsKeyPadButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ComponentsKeyPadButtons_onPressKey( ComponentsKeyPadButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->TouchHandler.Down )
    return;

  if ( _this->KeyHandler.Repetition )
    return;

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* 'C' function for method : 'Components::KeyPadButtons.OnSetIcon()' */
void ComponentsKeyPadButtons_OnSetIcon( ComponentsKeyPadButtons _this, XString value )
{
  if ( !EwCompString( _this->Icon, value ))
    return;

  _this->Icon = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user drags the finger while pressing 
   the button. This only updates the button to appear pressed or released. */
void ComponentsKeyPadButtons_onEnterLeaveTouch( ComponentsKeyPadButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ComponentsKeyPadButtons_onReleaseTouch( ComponentsKeyPadButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin )
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
  else
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the button's area. */
void ComponentsKeyPadButtons_onPressTouch( ComponentsKeyPadButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Components::KeyPadButtons.OnSetTextColor()' */
void ComponentsKeyPadButtons_OnSetTextColor( ComponentsKeyPadButtons _this, XColor 
  value )
{
  if ( !EwCompColor( _this->TextColor, value ))
    return;

  _this->TextColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::KeyPadButtons.OnSetButtonColorPressed()' */
void ComponentsKeyPadButtons_OnSetButtonColorPressed( ComponentsKeyPadButtons _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ButtonColorPressed, value ))
    return;

  _this->ButtonColorPressed = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::KeyPadButtons.OnSetIconColorPressed()' */
void ComponentsKeyPadButtons_OnSetIconColorPressed( ComponentsKeyPadButtons _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconColorPressed, value ))
    return;

  _this->IconColorPressed = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::KeyPadButtons.OnSetTextColorPressed()' */
void ComponentsKeyPadButtons_OnSetTextColorPressed( ComponentsKeyPadButtons _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TextColorPressed, value ))
    return;

  _this->TextColorPressed = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Components::KeyPadButtons' */
EW_DEFINE_CLASS_VARIANTS( ComponentsKeyPadButtons )
EW_END_OF_CLASS_VARIANTS( ComponentsKeyPadButtons )

/* Virtual Method Table (VMT) for the class : 'Components::KeyPadButtons' */
EW_DEFINE_CLASS( ComponentsKeyPadButtons, TemplatesPushButton, OnActivate, OnActivate, 
                 FlashTimer, FlashTimer, Icon, ButtonColor, "Components::KeyPadButtons" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ComponentsKeyPadButtons_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsKeyPadButtons )

/* Initializer for the class 'Components::TextButton' */
void ComponentsTextButton__Init( ComponentsTextButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsTextButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsTextButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const003C );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0010 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const003D );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const003E );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0006 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const003F );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0040 );
  CoreView_OnSetLayout((CoreView)&_this->TextTxt, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextTxt, _Const003C );
  ViewsText_OnSetAlignment( &_this->TextTxt, ViewsTextAlignmentAlignHorzCenter | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextTxt, 0 );
  ViewsText_OnSetColor( &_this->TextTxt, _Const0002 );
  _this->TextColor = ResBlue;
  _this->TextColorPress = ResBlueLight;
  _this->BackgoundColor = ResTransparent;
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextTxt ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ComponentsTextButton_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ComponentsTextButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ComponentsTextButton_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ComponentsTextButton_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ComponentsTextButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ComponentsTextButton_onPressTouch );
  ViewsText_OnSetFont( &_this->TextTxt, EwLoadResource( &ResIconsFont25, ResourcesFont ));
}

/* Re-Initializer for the class 'Components::TextButton' */
void ComponentsTextButton__ReInit( ComponentsTextButton _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsRectangle__ReInit( &_this->Background );
  ViewsText__ReInit( &_this->TextTxt );
}

/* Finalizer method for the class 'Components::TextButton' */
void ComponentsTextButton__Done( ComponentsTextButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsRectangle__Done( &_this->Background );
  ViewsText__Done( &_this->TextTxt );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
}

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
void ComponentsTextButton_UpdateViewState( ComponentsTextButton _this, XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->TextTxt != 0 )
  {
    XColor clr = _this->TextColor;
    ViewsText_OnSetFont( &_this->TextTxt, EwLoadResource( &ResContactFont15, ResourcesFont ));
    ViewsText_OnSetString( &_this->TextTxt, _this->Text );
    ViewsText_OnSetColor( &_this->TextTxt, clr );
  }

  if ( !isEnabled )
  {
    ViewsRectangle_OnSetColor( &_this->Background, _this->BackgoundColor );
    ViewsText_OnSetColor( &_this->TextTxt, ResGrey );
  }
  else
    if ( isPressed )
    {
      ViewsRectangle_OnSetColor( &_this->Background, _this->BackgoundColor );
      ViewsText_OnSetColor( &_this->TextTxt, _this->TextColorPress );
    }
    else
      ViewsRectangle_OnSetColor( &_this->Background, _this->BackgoundColor );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ComponentsTextButton_onFlashTimer( ComponentsTextButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ComponentsTextButton_onPressKey( ComponentsTextButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->TouchHandler.Down )
    return;

  if ( _this->KeyHandler.Repetition )
    return;

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user drags the finger while pressing 
   the button. This only updates the button to appear pressed or released. */
void ComponentsTextButton_onEnterLeaveTouch( ComponentsTextButton _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ComponentsTextButton_onReleaseTouch( ComponentsTextButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin )
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
  else
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the button's area. */
void ComponentsTextButton_onPressTouch( ComponentsTextButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Components::TextButton.OnSetText()' */
void ComponentsTextButton_OnSetText( ComponentsTextButton _this, XString value )
{
  if ( !EwCompString( _this->Text, value ))
    return;

  _this->Text = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::TextButton.OnSetTextColor()' */
void ComponentsTextButton_OnSetTextColor( ComponentsTextButton _this, XColor value )
{
  if ( !EwCompColor( _this->TextColor, value ))
    return;

  _this->TextColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::TextButton.OnSetTextColorPress()' */
void ComponentsTextButton_OnSetTextColorPress( ComponentsTextButton _this, XColor 
  value )
{
  if ( !EwCompColor( _this->TextColorPress, value ))
    return;

  _this->TextColorPress = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::TextButton.OnSetBackgoundColor()' */
void ComponentsTextButton_OnSetBackgoundColor( ComponentsTextButton _this, XColor 
  value )
{
  if ( !EwCompColor( _this->BackgoundColor, value ))
    return;

  _this->BackgoundColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Components::TextButton' */
EW_DEFINE_CLASS_VARIANTS( ComponentsTextButton )
EW_END_OF_CLASS_VARIANTS( ComponentsTextButton )

/* Virtual Method Table (VMT) for the class : 'Components::TextButton' */
EW_DEFINE_CLASS( ComponentsTextButton, TemplatesPushButton, OnActivate, OnActivate, 
                 FlashTimer, FlashTimer, Text, TextColor, "Components::TextButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ComponentsTextButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsTextButton )

/* Initializer for the class 'Components::NavBarButtons' */
void ComponentsNavBarButtons__Init( ComponentsNavBarButtons _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsNavBarButtons );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->IconTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->DescripTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsNavBarButtons );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0041 );
  _this->selected = 1;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0042 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0043 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const003A );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0006 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->IconTxt, _Const0044 );
  ViewsText_OnSetString( &_this->IconTxt, 0 );
  ViewsText_OnSetColor( &_this->IconTxt, _Const0002 );
  CoreView_OnSetLayout((CoreView)&_this->DescripTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->DescripTxt, _Const0045 );
  ViewsText_OnSetAlignment( &_this->DescripTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DescripTxt, 0 );
  _this->Descript = EwShareString( EwLoadString( &_Const0025 ));
  _this->IconColor = ResGrey;
  _this->DescrpitColor = ResGrey;
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DescripTxt ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ComponentsNavBarButtons_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ComponentsNavBarButtons_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ComponentsNavBarButtons_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ComponentsNavBarButtons_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ComponentsNavBarButtons_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ComponentsNavBarButtons_onPressTouch );
  ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
}

/* Re-Initializer for the class 'Components::NavBarButtons' */
void ComponentsNavBarButtons__ReInit( ComponentsNavBarButtons _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->IconTxt );
  ViewsText__ReInit( &_this->DescripTxt );
}

/* Finalizer method for the class 'Components::NavBarButtons' */
void ComponentsNavBarButtons__Done( ComponentsNavBarButtons _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->IconTxt );
  ViewsText__Done( &_this->DescripTxt );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
}

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
void ComponentsNavBarButtons_UpdateViewState( ComponentsNavBarButtons _this, XSet 
  aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = ComponentsNavBarButtons_isSelected( _this );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->IconTxt != 0 )
  {
    XColor clr = _this->IconColor;
    ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
    ViewsText_OnSetString( &_this->IconTxt, _this->Icon );
    ViewsText_OnSetColor( &_this->IconTxt, clr );
  }

  if ( &_this->DescripTxt != 0 )
  {
    XColor clr = _this->DescrpitColor;
    ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, 
    ResourcesFont ));
    ViewsText_OnSetString( &_this->DescripTxt, _this->Descript );
    ViewsText_OnSetColor( &_this->DescripTxt, clr );
  }

  if ( !isEnabled )
  {
    ViewsText_OnSetColor( &_this->IconTxt, ResGreyLight );
    ViewsText_OnSetColor( &_this->DescripTxt, ResGreyLight );
  }
  else
    if ( isPressed )
    {
      ViewsText_OnSetColor( &_this->IconTxt, ResBlueLight );
      ViewsText_OnSetColor( &_this->DescripTxt, ResBlueLight );
    }
    else
      if ( isSelected )
      {
        ViewsText_OnSetColor( &_this->IconTxt, ResBlue );
        ViewsText_OnSetColor( &_this->DescripTxt, ResBlue );
      }
      else
      {
        ViewsText_OnSetColor( &_this->IconTxt, ResGrey );
        ViewsText_OnSetColor( &_this->DescripTxt, ResGrey );
      }

  if ( isPressed && isSelected )
    ViewsText_OnSetColor( &_this->IconTxt, ResBlue );
  else
    if ( isPressed && !isSelected )
      ViewsText_OnSetColor( &_this->IconTxt, ResBlueLight );
    else
      if ( isEnabled && isSelected )
        ViewsText_OnSetColor( &_this->IconTxt, ResBlue );
      else
        if ( isEnabled && !isSelected )
          ViewsText_OnSetColor( &_this->IconTxt, ResGrey );
        else
          if ( isSelected )
            ViewsText_OnSetColor( &_this->IconTxt, ResBlue );
          else
            ViewsText_OnSetColor( &_this->IconTxt, ResRedLight );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ComponentsNavBarButtons_onFlashTimer( ComponentsNavBarButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ComponentsNavBarButtons_onPressKey( ComponentsNavBarButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->TouchHandler.Down )
    return;

  if ( _this->KeyHandler.Repetition )
    return;

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

    if ( !ComponentsNavBarButtons_isSelected( _this ) && ( _this->Outlet.Object 
        != 0 ))
    {
      EwOnSetInt32( _this->Outlet, _this->OutletSelector );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }

  CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user drags the finger while pressing 
   the button. This only updates the button to appear pressed or released. */
void ComponentsNavBarButtons_onEnterLeaveTouch( ComponentsNavBarButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ComponentsNavBarButtons_onReleaseTouch( ComponentsNavBarButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin )
  {
    if ( !ComponentsNavBarButtons_isSelected( _this ) && ( _this->Outlet.Object 
        != 0 ))
    {
      EwOnSetInt32( _this->Outlet, _this->OutletSelector );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }
  else
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the button's area. */
void ComponentsNavBarButtons_onPressTouch( ComponentsNavBarButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

    if ( !ComponentsNavBarButtons_isSelected( _this ) && ( _this->Outlet.Object 
        != 0 ))
    {
      EwOnSetInt32( _this->Outlet, _this->OutletSelector );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }
}

/* 'C' function for method : 'Components::NavBarButtons.OnSetIcon()' */
void ComponentsNavBarButtons_OnSetIcon( ComponentsNavBarButtons _this, XString value )
{
  if ( !EwCompString( _this->Icon, value ))
    return;

  _this->Icon = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::NavBarButtons.OnSetDescript()' */
void ComponentsNavBarButtons_OnSetDescript( ComponentsNavBarButtons _this, XString 
  value )
{
  if ( !EwCompString( _this->Descript, value ))
    return;

  _this->Descript = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::NavBarButtons.OnSetOutletSelector()' */
void ComponentsNavBarButtons_OnSetOutletSelector( ComponentsNavBarButtons _this, 
  XInt32 value )
{
  if ( _this->OutletSelector == value )
    return;

  _this->OutletSelector = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::NavBarButtons.OnSetOutlet()' */
void ComponentsNavBarButtons_OnSetOutlet( ComponentsNavBarButtons _this, XRef value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, ComponentsNavBarButtons_onOutlet ), _this->Outlet, 
      0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, ComponentsNavBarButtons_onOutlet ), value, 
      0 );

  if ( value.Object != 0 )
    EwPostSignal( EwNewSlot( _this, ComponentsNavBarButtons_onOutlet ), ((XObject)_this ));
}

/* This slot method will receive a signal, if the value of the property assigned 
   to @Outlet has been changed by another widget or by the application logic. In 
   response to this notification, the widget will update itself. */
void ComponentsNavBarButtons_onOutlet( ComponentsNavBarButtons _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::NavBarButtons.isSelected()' */
XBool ComponentsNavBarButtons_isSelected( ComponentsNavBarButtons _this )
{
  return (XBool)(( _this->Outlet.Object != 0 ) && ( EwOnGetInt32( _this->Outlet ) 
    == _this->OutletSelector ));
}

/* Variants derived from the class : 'Components::NavBarButtons' */
EW_DEFINE_CLASS_VARIANTS( ComponentsNavBarButtons )
EW_END_OF_CLASS_VARIANTS( ComponentsNavBarButtons )

/* Virtual Method Table (VMT) for the class : 'Components::NavBarButtons' */
EW_DEFINE_CLASS( ComponentsNavBarButtons, TemplatesPushButton, Outlet, Outlet, Outlet, 
                 FlashTimer, Icon, IconColor, "Components::NavBarButtons" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ComponentsNavBarButtons_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsNavBarButtons )

/* Embedded Wizard */
