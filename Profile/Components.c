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

#include "ewlocale.h"
#include "_ComponentsButton265x470.h"
#include "_ComponentsButton40x55.h"
#include "_ComponentsButton50x75.h"
#include "_ComponentsButton65x90.h"
#include "_ComponentsButtonBase70x90.h"
#include "_ComponentsInputBtnEtxt.h"
#include "_ComponentsInputEtxt.h"
#include "_ComponentsNavBarButton64x40.h"
#include "_ComponentsSButton25x25.h"
#include "_ComponentsSButton50x50.h"
#include "_ComponentsSButton65x65.h"
#include "_ComponentsTextButton.h"
#include "_ComponentsToggleButton.h"
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
  0x00000082, /* ratio 70.77 % */
  0xB8002300, 0x80088452, 0x1CD80032, 0x21674004, 0x00630008, 0x86E001BC, 0x10308021,
  0x7000022D, 0x2A116060, 0x0468F10B, 0x1263C130, 0x2CE6008A, 0x21F16394, 0x1B228448,
  0x72B3443E, 0x1E0446E1, 0x0988025F, 0x0046C140, 0xDCFA3C04, 0x89609418, 0x0C8B459F,
  0x2031B9FD, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 70, 90 }};
static const XRect _Const0001 = {{ 0, 0 }, { 70, 70 }};
static const XColor _Const0002 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XPoint _Const0003 = { 0, 91 };
static const XPoint _Const0004 = { 70, 91 };
static const XPoint _Const0005 = { 70, 0 };
static const XPoint _Const0006 = { 0, 0 };
static const XRect _Const0007 = {{ 0, 70 }, { 70, 91 }};
static const XRect _Const0008 = {{ 6, 436 }, { 265, 470 }};
static const XRect _Const0009 = {{ 0, 0 }, { 258, 33 }};
static const XPoint _Const000A = { 0, 33 };
static const XPoint _Const000B = { 258, 33 };
static const XPoint _Const000C = { 258, 0 };
static const XRect _Const000D = {{ 12, 0 }, { 258, 33 }};
static const XStringRes _Const000E = { _StringsDefault0, 0x0002 };
static const XColor _Const000F = { 0xFF, 0x29, 0x5B, 0xFF };
static const XRect _Const0010 = {{ 0, 0 }, { 66, 25 }};
static const XRect _Const0011 = {{ 0, -4 }, { 66, 28 }};
static const XColor _Const0012 = { 0xFF, 0xFF, 0xFF, 0x00 };
static const XPoint _Const0013 = { 0, 25 };
static const XPoint _Const0014 = { 66, 25 };
static const XPoint _Const0015 = { 66, 0 };
static const XRect _Const0016 = {{ 0, 0 }, { 68, 40 }};
static const XPoint _Const0017 = { 0, 40 };
static const XPoint _Const0018 = { 65, 40 };
static const XPoint _Const0019 = { 65, 0 };
static const XRect _Const001A = {{ 0, 0 }, { 68, 25 }};
static const XRect _Const001B = {{ 0, 25 }, { 68, 40 }};
static const XStringRes _Const001C = { _StringsDefault0, 0x0013 };
static const XRect _Const001D = {{ 0, 0 }, { 35, 35 }};
static const XPoint _Const001E = { 0, 35 };
static const XPoint _Const001F = { 35, 35 };
static const XPoint _Const0020 = { 35, 0 };
static const XRect _Const0021 = {{ 0, 0 }, { 50, 75 }};
static const XRect _Const0022 = {{ 0, 0 }, { 50, 50 }};
static const XRect _Const0023 = {{ 0, 50 }, { 50, 75 }};
static const XRect _Const0024 = {{ 0, 0 }, { 65, 90 }};
static const XRect _Const0025 = {{ 0, 0 }, { 65, 65 }};
static const XRect _Const0026 = {{ 0, 65 }, { 65, 90 }};
static const XRect _Const0027 = {{ 0, 0 }, { 25, 25 }};
static const XRect _Const0028 = {{ 0, 1 }, { 25, 25 }};
static const XRect _Const0029 = {{ 0, 0 }, { 92, 55 }};
static const XRect _Const002A = {{ 26, 0 }, { 66, 40 }};
static const XRect _Const002B = {{ 0, 40 }, { 92, 55 }};
static const XRect _Const002C = {{ 0, 0 }, { 266, 32 }};
static const XColor _Const002D = { 0x00, 0x00, 0x00, 0xFF };
static const XStringRes _Const002E = { _StringsDefault0, 0x001A };
static const XRect _Const002F = {{ 0, 0 }, { 272, 32 }};
static const XPoint _Const0030 = { 0, 32 };
static const XPoint _Const0031 = { 272, 32 };
static const XPoint _Const0032 = { 272, 0 };
static const XRect _Const0033 = {{ 13, 2 }, { 272, 32 }};
static const XStringRes _Const0034 = { _StringsDefault0, 0x002D };
static const XColor _Const0035 = { 0x1E, 0x1E, 0x1E, 0xFD };
static const XRect _Const0036 = {{ 14, 2 }, { 272, 32 }};
static const XColor _Const0037 = { 0xB9, 0xB9, 0xB9, 0xFD };
static const XPoint _Const0038 = { 0, 29 };
static const XPoint _Const0039 = { 0, 5 };
static const XPoint _Const003A = { 20, 20 };
static const XPoint _Const003B = { -10, -10 };
static const XColor _Const003C = { 0xEE, 0xEE, 0xEE, 0xCC };
static const XStringRes _Const003D = { _StringsDefault0, 0x0035 };
static const XStringRes _Const003E = { _StringsDefault0, 0x0039 };
static const XStringRes _Const003F = { _StringsDefault0, 0x003D };
static const XRect _Const0040 = {{ 0, 0 }, { 268, 32 }};
static const XColor _Const0041 = { 0xF0, 0xF0, 0xF0, 0xFD };
static const XRect _Const0042 = {{ 0, 0 }, { 231, 32 }};
static const XPoint _Const0043 = { 231, 32 };
static const XPoint _Const0044 = { 231, 0 };
static const XPoint _Const0045 = { 231, 33 };
static const XPoint _Const0046 = { 268, 33 };
static const XPoint _Const0047 = { 268, 1 };
static const XPoint _Const0048 = { 231, 1 };
static const XRect _Const0049 = {{ 231, 3 }, { 261, 31 }};
static const XRect _Const004A = {{ 13, 2 }, { 231, 32 }};
static const XRect _Const004B = {{ 14, 2 }, { 231, 32 }};

/* Initializer for the class 'Components::ButtonBase70x90' */
void ComponentsButtonBase70x90__Init( ComponentsButtonBase70x90 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsButtonBase70x90 );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->InitialsTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->DescripTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsButtonBase70x90 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  _this->DescriptColor = ResBlue;
  _this->IconColor = ResWhite;
  _this->BackgoundColor = ResGrey;
  _this->BackgoundColorPressed = ResGreyLight;
  _this->BackgroundColorEnabled = ResGrey;
  _this->DescriptColorEnabled = ResGrey;
  _this->IconColorEnabled = ResGrey;
  _this->DescriptColorPressed = ResGreyLight;
  _this->IconColorPressed = ResBlueLight;
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
  CoreRectView__OnSetBounds( &_this->InitialsTxt, _Const0001 );
  ViewsText_OnSetAutoSize( &_this->InitialsTxt, 1 );
  ViewsText_OnSetString( &_this->InitialsTxt, 0 );
  ViewsText_OnSetColor( &_this->InitialsTxt, _Const0002 );
  CoreRectView__OnSetBounds( &_this->DescripTxt, _Const0007 );
  ViewsText_OnSetAutoSize( &_this->DescripTxt, 1 );
  ViewsText_OnSetAlignment( &_this->DescripTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DescripTxt, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->InitialsTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DescripTxt ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ComponentsButtonBase70x90_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ComponentsButtonBase70x90_onPressKey );
  _this->DescriptFont = EwLoadResource( &ResContactFont12, ResourcesFont );
  _this->IconFont = EwLoadResource( &ResTitileFont25, ResourcesFont );
  _this->Backgound = EwLoadResource( &ResButtonRoundBig, ResourcesBitmap );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ComponentsButtonBase70x90_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ComponentsButtonBase70x90_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ComponentsButtonBase70x90_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ComponentsButtonBase70x90_onPressTouch );
  ViewsText_OnSetFont( &_this->InitialsTxt, EwLoadResource( &ResIconsFont30, ResourcesFont ));
  ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFontBold15, 
  ResourcesFont ));
}

/* Re-Initializer for the class 'Components::ButtonBase70x90' */
void ComponentsButtonBase70x90__ReInit( ComponentsButtonBase70x90 _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->InitialsTxt );
  ViewsText__ReInit( &_this->DescripTxt );
}

/* Finalizer method for the class 'Components::ButtonBase70x90' */
void ComponentsButtonBase70x90__Done( ComponentsButtonBase70x90 _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->InitialsTxt );
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
void ComponentsButtonBase70x90_UpdateViewState( ComponentsButtonBase70x90 _this, 
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
  ViewsImage_OnSetBitmap( &_this->Background, _this->Backgound );

  if ( &_this->InitialsTxt != 0 )
  {
    ViewsText_OnSetFont( &_this->InitialsTxt, _this->IconFont );
    ViewsText_OnSetString( &_this->InitialsTxt, _this->Icon );
    ViewsText_OnSetColor( &_this->InitialsTxt, _this->IconColor );
  }

  if ( &_this->DescripTxt != 0 )
  {
    ViewsText_OnSetFont( &_this->DescripTxt, _this->DescriptFont );
    ViewsText_OnSetString( &_this->DescripTxt, _this->Descript );
    ViewsText_OnSetColor( &_this->DescripTxt, _this->DescriptColor );
  }

  if ( !isEnabled )
  {
    ViewsImage_OnSetColor( &_this->Background, _this->BackgroundColorEnabled );
    ViewsText_OnSetColor( &_this->DescripTxt, _this->DescriptColorEnabled );
    ViewsText_OnSetColor( &_this->InitialsTxt, _this->IconColorEnabled );
  }
  else
    if ( isPressed )
    {
      ViewsImage_OnSetColor( &_this->Background, _this->BackgoundColorPressed );
      ViewsText_OnSetColor( &_this->DescripTxt, _this->DescriptColorPressed );
      ViewsText_OnSetColor( &_this->InitialsTxt, _this->IconColorPressed );
    }
    else
      ViewsImage_OnSetColor( &_this->Background, _this->BackgoundColor );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ComponentsButtonBase70x90_onFlashTimer( ComponentsButtonBase70x90 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ComponentsButtonBase70x90_onPressKey( ComponentsButtonBase70x90 _this, XObject 
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
void ComponentsButtonBase70x90_onEnterLeaveTouch( ComponentsButtonBase70x90 _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ComponentsButtonBase70x90_onReleaseTouch( ComponentsButtonBase70x90 _this, 
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
void ComponentsButtonBase70x90_onPressTouch( ComponentsButtonBase70x90 _this, XObject 
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

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetIcon()' */
void ComponentsButtonBase70x90_OnSetIcon( ComponentsButtonBase70x90 _this, XString 
  value )
{
  if ( !EwCompString( _this->Icon, value ))
    return;

  _this->Icon = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetDescript()' */
void ComponentsButtonBase70x90_OnSetDescript( ComponentsButtonBase70x90 _this, XString 
  value )
{
  if ( !EwCompString( _this->Descript, value ))
    return;

  _this->Descript = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetDescriptColor()' */
void ComponentsButtonBase70x90_OnSetDescriptColor( ComponentsButtonBase70x90 _this, 
  XColor value )
{
  if ( !EwCompColor( _this->DescriptColor, value ))
    return;

  _this->DescriptColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetIconColor()' */
void ComponentsButtonBase70x90_OnSetIconColor( ComponentsButtonBase70x90 _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconColor, value ))
    return;

  _this->IconColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetBackgoundColor()' */
void ComponentsButtonBase70x90_OnSetBackgoundColor( ComponentsButtonBase70x90 _this, 
  XColor value )
{
  if ( !EwCompColor( _this->BackgoundColor, value ))
    return;

  _this->BackgoundColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetBackgoundColorPressed()' */
void ComponentsButtonBase70x90_OnSetBackgoundColorPressed( ComponentsButtonBase70x90 _this, 
  XColor value )
{
  if ( !EwCompColor( _this->BackgoundColorPressed, value ))
    return;

  _this->BackgoundColorPressed = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetDescriptFont()' */
void ComponentsButtonBase70x90_OnSetDescriptFont( ComponentsButtonBase70x90 _this, 
  ResourcesFont value )
{
  if ( _this->DescriptFont == value )
    return;

  _this->DescriptFont = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetIconFont()' */
void ComponentsButtonBase70x90_OnSetIconFont( ComponentsButtonBase70x90 _this, ResourcesFont 
  value )
{
  if ( _this->IconFont == value )
    return;

  _this->IconFont = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetBackgound()' */
void ComponentsButtonBase70x90_OnSetBackgound( ComponentsButtonBase70x90 _this, 
  ResourcesBitmap value )
{
  if ( _this->Backgound == value )
    return;

  _this->Backgound = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetBackgroundColorEnabled()' */
void ComponentsButtonBase70x90_OnSetBackgroundColorEnabled( ComponentsButtonBase70x90 _this, 
  XColor value )
{
  if ( !EwCompColor( _this->BackgroundColorEnabled, value ))
    return;

  _this->BackgroundColorEnabled = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetDescriptColorEnabled()' */
void ComponentsButtonBase70x90_OnSetDescriptColorEnabled( ComponentsButtonBase70x90 _this, 
  XColor value )
{
  if ( !EwCompColor( _this->DescriptColorEnabled, value ))
    return;

  _this->DescriptColorEnabled = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetIconColorEnabled()' */
void ComponentsButtonBase70x90_OnSetIconColorEnabled( ComponentsButtonBase70x90 _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconColorEnabled, value ))
    return;

  _this->IconColorEnabled = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetDescriptColorPressed()' */
void ComponentsButtonBase70x90_OnSetDescriptColorPressed( ComponentsButtonBase70x90 _this, 
  XColor value )
{
  if ( !EwCompColor( _this->DescriptColorPressed, value ))
    return;

  _this->DescriptColorPressed = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::ButtonBase70x90.OnSetIconColorPressed()' */
void ComponentsButtonBase70x90_OnSetIconColorPressed( ComponentsButtonBase70x90 _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconColorPressed, value ))
    return;

  _this->IconColorPressed = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Components::ButtonBase70x90' */
EW_DEFINE_CLASS_VARIANTS( ComponentsButtonBase70x90 )
EW_END_OF_CLASS_VARIANTS( ComponentsButtonBase70x90 )

/* Virtual Method Table (VMT) for the class : 'Components::ButtonBase70x90' */
EW_DEFINE_CLASS( ComponentsButtonBase70x90, TemplatesPushButton, FlashTimer, DescriptFont, 
                 OnActivate, Icon, Icon, DescriptColor, "Components::ButtonBase70x90" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  ComponentsButtonBase70x90_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsButtonBase70x90 )

/* Initializer for the class 'Components::Button265x470' */
void ComponentsButton265x470__Init( ComponentsButton265x470 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsButton265x470 );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsButton265x470 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0008 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0009 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0002 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const000A );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const000B );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const000C );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0006 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Text, _Const000D );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const000E ));
  ViewsText_OnSetColor( &_this->Text, _Const000F );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ComponentsButton265x470_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ComponentsButton265x470_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ComponentsButton265x470_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ComponentsButton265x470_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ComponentsButton265x470_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ComponentsButton265x470_onPressTouch );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
}

/* Re-Initializer for the class 'Components::Button265x470' */
void ComponentsButton265x470__ReInit( ComponentsButton265x470 _this )
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

/* Finalizer method for the class 'Components::Button265x470' */
void ComponentsButton265x470__Done( ComponentsButton265x470 _this )
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
void ComponentsButton265x470_UpdateViewState( ComponentsButton265x470 _this, XSet 
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
    XColor clr = ResRed;
    ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResContactFont15, ResourcesFont ));
    ViewsText_OnSetString( &_this->Text, _this->String );
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
void ComponentsButton265x470_onFlashTimer( ComponentsButton265x470 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ComponentsButton265x470_onPressKey( ComponentsButton265x470 _this, XObject 
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
void ComponentsButton265x470_onEnterLeaveTouch( ComponentsButton265x470 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ComponentsButton265x470_onReleaseTouch( ComponentsButton265x470 _this, XObject 
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
void ComponentsButton265x470_onPressTouch( ComponentsButton265x470 _this, XObject 
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

/* 'C' function for method : 'Components::Button265x470.OnSetString()' */
void ComponentsButton265x470_OnSetString( ComponentsButton265x470 _this, XString 
  value )
{
  if ( !EwCompString( _this->String, value ))
    return;

  _this->String = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Components::Button265x470' */
EW_DEFINE_CLASS_VARIANTS( ComponentsButton265x470 )
EW_END_OF_CLASS_VARIANTS( ComponentsButton265x470 )

/* Virtual Method Table (VMT) for the class : 'Components::Button265x470' */
EW_DEFINE_CLASS( ComponentsButton265x470, TemplatesPushButton, FlashTimer, OnActivate, 
                 OnActivate, String, String, pressed, "Components::Button265x470" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  ComponentsButton265x470_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsButton265x470 )

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
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsTextButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0010 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  _this->TextColor = ResBlue;
  _this->TextColorPress = ResBlueLight;
  _this->BackgoundColor = ResTransparent;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0011 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0012 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0013 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0014 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0015 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0006 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreView_OnSetLayout((CoreView)&_this->TextTxt, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextTxt, _Const0010 );
  ViewsText_OnSetAlignment( &_this->TextTxt, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextTxt, 0 );
  ViewsText_OnSetColor( &_this->TextTxt, _Const0002 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
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
  ViewsRectangle__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
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
  ViewsRectangle__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->TextTxt );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ComponentsTextButton_UpdateLayout( ComponentsTextButton _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
  CoreRectView__OnSetBounds( &_this->Background, EwGetRectORect( _this->Super3.Bounds ));
  CoreRectView__OnSetBounds( &_this->TextTxt, EwGetRectORect( _this->Super3.Bounds ));
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
EW_DEFINE_CLASS( ComponentsTextButton, TemplatesPushButton, FlashTimer, OnActivate, 
                 OnActivate, Text, Text, TextColor, "Components::TextButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ComponentsTextButton_UpdateLayout,
  ComponentsTextButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsTextButton )

/* Initializer for the class 'Components::NavBarButton64x40' */
void ComponentsNavBarButton64x40__Init( ComponentsNavBarButton64x40 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsNavBarButton64x40 );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->IconTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->DescripTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsNavBarButton64x40 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0016 );
  _this->selected = 1;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0017 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0018 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0019 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0006 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->IconTxt, _Const001A );
  ViewsText_OnSetString( &_this->IconTxt, 0 );
  ViewsText_OnSetColor( &_this->IconTxt, _Const0002 );
  CoreView_OnSetLayout((CoreView)&_this->DescripTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->DescripTxt, _Const001B );
  ViewsText_OnSetAlignment( &_this->DescripTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DescripTxt, 0 );
  _this->Descript = EwShareString( EwLoadString( &_Const001C ));
  _this->IconColor = ResGrey;
  _this->DescrpitColor = ResGrey;
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DescripTxt ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ComponentsNavBarButton64x40_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ComponentsNavBarButton64x40_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ComponentsNavBarButton64x40_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ComponentsNavBarButton64x40_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ComponentsNavBarButton64x40_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ComponentsNavBarButton64x40_onPressTouch );
  ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
}

/* Re-Initializer for the class 'Components::NavBarButton64x40' */
void ComponentsNavBarButton64x40__ReInit( ComponentsNavBarButton64x40 _this )
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

/* Finalizer method for the class 'Components::NavBarButton64x40' */
void ComponentsNavBarButton64x40__Done( ComponentsNavBarButton64x40 _this )
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
void ComponentsNavBarButton64x40_UpdateViewState( ComponentsNavBarButton64x40 _this, 
  XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = ComponentsNavBarButton64x40_isSelected( _this );
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
void ComponentsNavBarButton64x40_onFlashTimer( ComponentsNavBarButton64x40 _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ComponentsNavBarButton64x40_onPressKey( ComponentsNavBarButton64x40 _this, 
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
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

    if ( !ComponentsNavBarButton64x40_isSelected( _this ) && ( _this->Outlet.Object 
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
void ComponentsNavBarButton64x40_onEnterLeaveTouch( ComponentsNavBarButton64x40 _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ComponentsNavBarButton64x40_onReleaseTouch( ComponentsNavBarButton64x40 _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin )
  {
    if ( !ComponentsNavBarButton64x40_isSelected( _this ) && ( _this->Outlet.Object 
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
void ComponentsNavBarButton64x40_onPressTouch( ComponentsNavBarButton64x40 _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

    if ( !ComponentsNavBarButton64x40_isSelected( _this ) && ( _this->Outlet.Object 
        != 0 ))
    {
      EwOnSetInt32( _this->Outlet, _this->OutletSelector );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }
}

/* 'C' function for method : 'Components::NavBarButton64x40.OnSetIcon()' */
void ComponentsNavBarButton64x40_OnSetIcon( ComponentsNavBarButton64x40 _this, XString 
  value )
{
  if ( !EwCompString( _this->Icon, value ))
    return;

  _this->Icon = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::NavBarButton64x40.OnSetDescript()' */
void ComponentsNavBarButton64x40_OnSetDescript( ComponentsNavBarButton64x40 _this, 
  XString value )
{
  if ( !EwCompString( _this->Descript, value ))
    return;

  _this->Descript = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::NavBarButton64x40.OnSetOutletSelector()' */
void ComponentsNavBarButton64x40_OnSetOutletSelector( ComponentsNavBarButton64x40 _this, 
  XInt32 value )
{
  if ( _this->OutletSelector == value )
    return;

  _this->OutletSelector = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::NavBarButton64x40.OnSetOutlet()' */
void ComponentsNavBarButton64x40_OnSetOutlet( ComponentsNavBarButton64x40 _this, 
  XRef value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, ComponentsNavBarButton64x40_onOutlet ), 
      _this->Outlet, 0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, ComponentsNavBarButton64x40_onOutlet ), 
      value, 0 );

  if ( value.Object != 0 )
    EwPostSignal( EwNewSlot( _this, ComponentsNavBarButton64x40_onOutlet ), ((XObject)_this ));
}

/* This slot method will receive a signal, if the value of the property assigned 
   to @Outlet has been changed by another widget or by the application logic. In 
   response to this notification, the widget will update itself. */
void ComponentsNavBarButton64x40_onOutlet( ComponentsNavBarButton64x40 _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::NavBarButton64x40.isSelected()' */
XBool ComponentsNavBarButton64x40_isSelected( ComponentsNavBarButton64x40 _this )
{
  return (XBool)(( _this->Outlet.Object != 0 ) && ( EwOnGetInt32( _this->Outlet ) 
    == _this->OutletSelector ));
}

/* Variants derived from the class : 'Components::NavBarButton64x40' */
EW_DEFINE_CLASS_VARIANTS( ComponentsNavBarButton64x40 )
EW_END_OF_CLASS_VARIANTS( ComponentsNavBarButton64x40 )

/* Virtual Method Table (VMT) for the class : 'Components::NavBarButton64x40' */
EW_DEFINE_CLASS( ComponentsNavBarButton64x40, TemplatesPushButton, FlashTimer, Outlet, 
                 Outlet, Outlet, Icon, IconColor, "Components::NavBarButton64x40" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  ComponentsNavBarButton64x40_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsNavBarButton64x40 )

/* Initializer for the class 'Components::ToggleButton' */
void ComponentsToggleButton__Init( ComponentsToggleButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesToggleButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsToggleButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Knob, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsToggleButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const001D );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const001D );
  ViewsImage_OnSetColor( &_this->Background, ResGreyLight );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const001E );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const001F );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0020 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0006 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Knob, _Const001D );
  ViewsText_OnSetString( &_this->Knob, EwLoadString( &ResCheckIcon ));
  _this->BackgroundColor = ResGreyLight;
  _this->IconColor = ResTransparent;
  _this->IconSelectedColor = ResBlue;
  _this->BackgroundSelectedColor = ResBlue;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Knob ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ComponentsToggleButton_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ComponentsToggleButton_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundSmall, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ComponentsToggleButton_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ComponentsToggleButton_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ComponentsToggleButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ComponentsToggleButton_onPressTouch );
  ViewsText_OnSetFont( &_this->Knob, EwLoadResource( &ResIconsFont20, ResourcesFont ));
}

/* Re-Initializer for the class 'Components::ToggleButton' */
void ComponentsToggleButton__ReInit( ComponentsToggleButton _this )
{
  /* At first re-initialize the super class ... */
  TemplatesToggleButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->Knob );
}

/* Finalizer method for the class 'Components::ToggleButton' */
void ComponentsToggleButton__Done( ComponentsToggleButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesToggleButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->Knob );

  /* Don't forget to deinitialize the super class ... */
  TemplatesToggleButton__Done( &_this->_.Super );
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
void ComponentsToggleButton_UpdateViewState( ComponentsToggleButton _this, XSet 
  aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;
  XBool isChecked;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );
  isChecked = _this->Active;

  if ( isChecked )
  {
    ViewsText_OnSetColor( &_this->Knob, _this->IconSelectedColor );
    ViewsImage_OnSetColor( &_this->Background, _this->BackgroundSelectedColor );
  }
  else
    if ( !isChecked )
    {
      ViewsText_OnSetColor( &_this->Knob, _this->IconColor );
      ViewsImage_OnSetColor( &_this->Background, _this->BackgroundColor );
    }

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
  _this->checked = isChecked;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ComponentsToggleButton_onFlashTimer( ComponentsToggleButton _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  ComponentsToggleButton_OnSetActive( _this, (XBool)!_this->Active );
  EwPostSignal( _this->OnToggle, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ComponentsToggleButton_onPressKey( ComponentsToggleButton _this, XObject sender )
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
    ComponentsToggleButton_OnSetActive( _this, (XBool)!_this->Active );
    EwPostSignal( _this->OnToggle, ((XObject)_this ));
  }

  CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user drags the finger while pressing 
   the button. This only updates the button to appear pressed or released. */
void ComponentsToggleButton_onEnterLeaveTouch( ComponentsToggleButton _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ComponentsToggleButton_onReleaseTouch( ComponentsToggleButton _this, XObject 
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
    ComponentsToggleButton_OnSetActive( _this, (XBool)!_this->Active );
    EwPostSignal( _this->OnToggle, ((XObject)_this ));
  }
  else
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the button's area. */
void ComponentsToggleButton_onPressTouch( ComponentsToggleButton _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
    ComponentsToggleButton_OnSetActive( _this, (XBool)!_this->Active );
    EwPostSignal( _this->OnToggle, ((XObject)_this ));
  }
}

/* 'C' function for method : 'Components::ToggleButton.OnSetActive()' */
void ComponentsToggleButton_OnSetActive( ComponentsToggleButton _this, XBool value )
{
  if ( _this->Active == value )
    return;

  _this->Active = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::ToggleButton.OnSetBackgroundColor()' */
void ComponentsToggleButton_OnSetBackgroundColor( ComponentsToggleButton _this, 
  XColor value )
{
  if ( !EwCompColor( _this->BackgroundColor, value ))
    return;

  _this->BackgroundColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::ToggleButton.OnSetIconSelectedColor()' */
void ComponentsToggleButton_OnSetIconSelectedColor( ComponentsToggleButton _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconSelectedColor, value ))
    return;

  _this->IconSelectedColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Components::ToggleButton' */
EW_DEFINE_CLASS_VARIANTS( ComponentsToggleButton )
EW_END_OF_CLASS_VARIANTS( ComponentsToggleButton )

/* Virtual Method Table (VMT) for the class : 'Components::ToggleButton' */
EW_DEFINE_CLASS( ComponentsToggleButton, TemplatesToggleButton, FlashTimer, OnToggle, 
                 OnToggle, BackgroundColor, BackgroundColor, BackgroundColor, "Components::ToggleButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  ComponentsToggleButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsToggleButton )

/* Initializer for the class 'Components::Button50x75' */
void ComponentsButton50x75__Init( ComponentsButton50x75 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ComponentsButtonBase70x90__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsButton50x75 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsButton50x75 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0021 );
  CoreRectView__OnSetBounds( &_this->Super1.Background, _Const0022 );
  CoreRectView__OnSetBounds( &_this->Super1.InitialsTxt, _Const0022 );
  CoreRectView__OnSetBounds( &_this->Super1.DescripTxt, _Const0023 );
}

/* Re-Initializer for the class 'Components::Button50x75' */
void ComponentsButton50x75__ReInit( ComponentsButton50x75 _this )
{
  /* At first re-initialize the super class ... */
  ComponentsButtonBase70x90__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Components::Button50x75' */
void ComponentsButton50x75__Done( ComponentsButton50x75 _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ComponentsButtonBase70x90 );

  /* Don't forget to deinitialize the super class ... */
  ComponentsButtonBase70x90__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Components::Button50x75' */
EW_DEFINE_CLASS_VARIANTS( ComponentsButton50x75 )
EW_END_OF_CLASS_VARIANTS( ComponentsButton50x75 )

/* Virtual Method Table (VMT) for the class : 'Components::Button50x75' */
EW_DEFINE_CLASS( ComponentsButton50x75, ComponentsButtonBase70x90, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, "Components::Button50x75" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  ComponentsButtonBase70x90_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsButton50x75 )

/* Initializer for the class 'Components::Button65x90' */
void ComponentsButton65x90__Init( ComponentsButton65x90 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ComponentsButtonBase70x90__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsButton65x90 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsButton65x90 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0024 );
  CoreRectView__OnSetBounds( &_this->Super1.Background, _Const0025 );
  CoreRectView__OnSetBounds( &_this->Super1.InitialsTxt, _Const0025 );
  CoreRectView__OnSetBounds( &_this->Super1.DescripTxt, _Const0026 );
}

/* Re-Initializer for the class 'Components::Button65x90' */
void ComponentsButton65x90__ReInit( ComponentsButton65x90 _this )
{
  /* At first re-initialize the super class ... */
  ComponentsButtonBase70x90__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Components::Button65x90' */
void ComponentsButton65x90__Done( ComponentsButton65x90 _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ComponentsButtonBase70x90 );

  /* Don't forget to deinitialize the super class ... */
  ComponentsButtonBase70x90__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Components::Button65x90' */
EW_DEFINE_CLASS_VARIANTS( ComponentsButton65x90 )
EW_END_OF_CLASS_VARIANTS( ComponentsButton65x90 )

/* Virtual Method Table (VMT) for the class : 'Components::Button65x90' */
EW_DEFINE_CLASS( ComponentsButton65x90, ComponentsButtonBase70x90, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, "Components::Button65x90" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  ComponentsButtonBase70x90_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsButton65x90 )

/* Initializer for the class 'Components::SButton65x65' */
void ComponentsSButton65x65__Init( ComponentsSButton65x65 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ComponentsButtonBase70x90__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsSButton65x65 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsSButton65x65 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0025 );
  CoreRectView__OnSetBounds( &_this->Super1.Background, _Const0025 );
  CoreRectView__OnSetBounds( &_this->Super1.InitialsTxt, _Const0025 );
  CoreRectView__OnSetBounds( &_this->Super1.DescripTxt, _Const0025 );
  ViewsText_OnSetVisible( &_this->Super1.DescripTxt, 0 );
}

/* Re-Initializer for the class 'Components::SButton65x65' */
void ComponentsSButton65x65__ReInit( ComponentsSButton65x65 _this )
{
  /* At first re-initialize the super class ... */
  ComponentsButtonBase70x90__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Components::SButton65x65' */
void ComponentsSButton65x65__Done( ComponentsSButton65x65 _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ComponentsButtonBase70x90 );

  /* Don't forget to deinitialize the super class ... */
  ComponentsButtonBase70x90__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Components::SButton65x65' */
EW_DEFINE_CLASS_VARIANTS( ComponentsSButton65x65 )
EW_END_OF_CLASS_VARIANTS( ComponentsSButton65x65 )

/* Virtual Method Table (VMT) for the class : 'Components::SButton65x65' */
EW_DEFINE_CLASS( ComponentsSButton65x65, ComponentsButtonBase70x90, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, "Components::SButton65x65" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  ComponentsButtonBase70x90_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsSButton65x65 )

/* Initializer for the class 'Components::SButton50x50' */
void ComponentsSButton50x50__Init( ComponentsSButton50x50 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ComponentsButtonBase70x90__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsSButton50x50 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsSButton50x50 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0022 );
  CoreRectView__OnSetBounds( &_this->Super1.Background, _Const0022 );
  CoreRectView__OnSetBounds( &_this->Super1.InitialsTxt, _Const0022 );
  CoreRectView__OnSetBounds( &_this->Super1.DescripTxt, _Const0022 );
  ViewsText_OnSetVisible( &_this->Super1.DescripTxt, 1 );
}

/* Re-Initializer for the class 'Components::SButton50x50' */
void ComponentsSButton50x50__ReInit( ComponentsSButton50x50 _this )
{
  /* At first re-initialize the super class ... */
  ComponentsButtonBase70x90__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Components::SButton50x50' */
void ComponentsSButton50x50__Done( ComponentsSButton50x50 _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ComponentsButtonBase70x90 );

  /* Don't forget to deinitialize the super class ... */
  ComponentsButtonBase70x90__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Components::SButton50x50' */
EW_DEFINE_CLASS_VARIANTS( ComponentsSButton50x50 )
EW_END_OF_CLASS_VARIANTS( ComponentsSButton50x50 )

/* Virtual Method Table (VMT) for the class : 'Components::SButton50x50' */
EW_DEFINE_CLASS( ComponentsSButton50x50, ComponentsButtonBase70x90, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, "Components::SButton50x50" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  ComponentsButtonBase70x90_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsSButton50x50 )

/* Initializer for the class 'Components::SButton25x25' */
void ComponentsSButton25x25__Init( ComponentsSButton25x25 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ComponentsButtonBase70x90__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsSButton25x25 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsSButton25x25 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0027 );
  CoreRectView__OnSetBounds( &_this->Super1.Background, _Const0027 );
  CoreRectView__OnSetBounds( &_this->Super1.InitialsTxt, _Const0027 );
  CoreRectView__OnSetBounds( &_this->Super1.DescripTxt, _Const0028 );
}

/* Re-Initializer for the class 'Components::SButton25x25' */
void ComponentsSButton25x25__ReInit( ComponentsSButton25x25 _this )
{
  /* At first re-initialize the super class ... */
  ComponentsButtonBase70x90__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Components::SButton25x25' */
void ComponentsSButton25x25__Done( ComponentsSButton25x25 _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ComponentsButtonBase70x90 );

  /* Don't forget to deinitialize the super class ... */
  ComponentsButtonBase70x90__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Components::SButton25x25' */
EW_DEFINE_CLASS_VARIANTS( ComponentsSButton25x25 )
EW_END_OF_CLASS_VARIANTS( ComponentsSButton25x25 )

/* Virtual Method Table (VMT) for the class : 'Components::SButton25x25' */
EW_DEFINE_CLASS( ComponentsSButton25x25, ComponentsButtonBase70x90, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, "Components::SButton25x25" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  ComponentsButtonBase70x90_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsSButton25x25 )

/* Initializer for the class 'Components::Button40x55' */
void ComponentsButton40x55__Init( ComponentsButton40x55 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ComponentsButtonBase70x90__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsButton40x55 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsButton40x55 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0029 );
  CoreRectView__OnSetBounds( &_this->Super1.Background, _Const002A );
  CoreRectView__OnSetBounds( &_this->Super1.InitialsTxt, _Const002A );
  CoreRectView__OnSetBounds( &_this->Super1.DescripTxt, _Const002B );
  ViewsImage_OnSetBitmap( &_this->Super1.Background, EwLoadResource( &ResButtonRoundSmall, 
  ResourcesBitmap ));
}

/* Re-Initializer for the class 'Components::Button40x55' */
void ComponentsButton40x55__ReInit( ComponentsButton40x55 _this )
{
  /* At first re-initialize the super class ... */
  ComponentsButtonBase70x90__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Components::Button40x55' */
void ComponentsButton40x55__Done( ComponentsButton40x55 _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ComponentsButtonBase70x90 );

  /* Don't forget to deinitialize the super class ... */
  ComponentsButtonBase70x90__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Components::Button40x55' */
EW_DEFINE_CLASS_VARIANTS( ComponentsButton40x55 )
EW_END_OF_CLASS_VARIANTS( ComponentsButton40x55 )

/* Virtual Method Table (VMT) for the class : 'Components::Button40x55' */
EW_DEFINE_CLASS( ComponentsButton40x55, ComponentsButtonBase70x90, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, "Components::Button40x55" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  ComponentsButtonBase70x90_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsButton40x55 )

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
  CoreRectView__OnSetBounds( _this, _Const002C );
  _this->blinkEffect.Value2 = 0;
  _this->blinkEffect.Value1 = 1;
  EffectsBoolEffect_OnSetCycleDuration( &_this->blinkEffect, 500 );
  EffectsBoolEffect_OnSetInterCycleDelay( &_this->blinkEffect, 500 );
  _this->Alignment = ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter;
  _this->String = EwShareString( EwLoadString( &_Const001C ));
  _this->Color = _Const002D;
  _this->CursorKeyHandler.Filter = CoreKeyCodeCursorKeys;
  _this->BackspaceKeyHandler.Filter = CoreKeyCodeBackspace;
  _this->Placeholder = EwShareString( EwLoadString( &_Const002E ));
  _this->DeleteKeyHandler.Filter = CoreKeyCodeDelete;
  _this->NewlineKeyHandler.Filter = CoreKeyCodeEnter;
  _this->CharacterKeyHandler.Filter = CoreKeyCodeCharacterKeys;
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const002F );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.05f );
  CoreView_OnSetLayout((CoreView)&_this->SimpleTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0030 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0031 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0032 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0006 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->SimpleTouchHandler, 3 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0033 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0034 ));
  ViewsText_OnSetColor( &_this->Text, _Const0035 );
  CoreView_OnSetLayout((CoreView)&_this->TextPlaceholder, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextPlaceholder, _Const0036 );
  ViewsText_OnSetAlignment( &_this->TextPlaceholder, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextPlaceholder, 0 );
  ViewsText_OnSetColor( &_this->TextPlaceholder, _Const0037 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, _Const0038 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, _Const0039 );
  ViewsLine_OnSetWidth2( &_this->Caret, 2 );
  ViewsLine_OnSetWidth1( &_this->Caret, 2 );
  ViewsLine_OnSetColor( &_this->Caret, _Const002D );
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
    EwMovePointPos( EwNewPoint( width * 2, height * 2 ), _Const003A )));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectOrigin( _this->magnifyingBack->Super1.Bounds, 
    _Const003B ));
    ViewsRectangle_OnSetColor( _this->magnifyingBack, _Const003C );
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
  &_Const003D ), _this->caretIndex ));
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
    str = EwConcatStringChar( EwLoadString( &_Const003E ), ch );

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
    str = EwStringInsert( str, EwLoadString( &_Const003E ), inx );
    inx = EwStringFindChar( str, '%', inx + 2 );
  }

  inx = EwStringFindChar( str, '^', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const003E ), inx );
    inx = EwStringFindChar( str, '^', inx + 2 );
  }

  inx = EwStringFindChar( str, '~', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const003E ), inx );
    inx = EwStringFindChar( str, '~', inx + 2 );
  }

  inx = EwStringFindChar( str, 0x00AD, 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const003E ), inx );
    inx = EwStringFindChar( str, 0x00AD, inx + 2 );
  }

  if ( _this->caretIndex > EwGetStringLength( str ))
    _this->caretIndex = EwGetStringLength( str );

  ViewsText_OnSetString( &_this->Text, EwConcatString( str, EwLoadString( &_Const003F )));
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

  if ( !EwCompString( ComponentsInputEtxt_OnGetString( _this ), EwLoadString( &_Const0034 )) 
      || !EwCompString( ComponentsInputEtxt_OnGetString( _this ), 0 ))
    ViewsText_OnSetVisible( &_this->TextPlaceholder, 1 );
  else
    ViewsText_OnSetVisible( &_this->TextPlaceholder, 0 );
}

/* Variants derived from the class : 'Components::InputEtxt' */
EW_DEFINE_CLASS_VARIANTS( ComponentsInputEtxt )
EW_END_OF_CLASS_VARIANTS( ComponentsInputEtxt )

/* Virtual Method Table (VMT) for the class : 'Components::InputEtxt' */
EW_DEFINE_CLASS( ComponentsInputEtxt, TemplatesTextEditor, blinkEffect, magnifyingBack, 
                 OnChange, String, String, caretIndex, "Components::InputEtxt" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  ComponentsInputEtxt_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsInputEtxt )

/* Initializer for the class 'Components::InputBtnEtxt' */
void ComponentsInputBtnEtxt__Init( ComponentsInputBtnEtxt _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesTextEditor__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ComponentsInputBtnEtxt );

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
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Search, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextPlaceholder, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Caret, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ComponentsInputBtnEtxt );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const002C );
  _this->blinkEffect.Value2 = 0;
  _this->blinkEffect.Value1 = 1;
  EffectsBoolEffect_OnSetCycleDuration( &_this->blinkEffect, 500 );
  EffectsBoolEffect_OnSetInterCycleDelay( &_this->blinkEffect, 500 );
  _this->String = EwShareString( EwLoadString( &_Const001C ));
  _this->Color = _Const002D;
  _this->CursorKeyHandler.Filter = CoreKeyCodeCursorKeys;
  _this->BackspaceKeyHandler.Filter = CoreKeyCodeBackspace;
  _this->Placeholder = EwShareString( EwLoadString( &_Const002E ));
  _this->DeleteKeyHandler.Filter = CoreKeyCodeDelete;
  _this->NewlineKeyHandler.Filter = CoreKeyCodeEnter;
  _this->CharacterKeyHandler.Filter = CoreKeyCodeCharacterKeys;
  _this->Icon = EwShareString( EwLoadString( &ResSerachIcon ));
  CoreView_OnSetLayout((CoreView)&_this->Frame, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame, _Const0040 );
  ViewsFrame_OnSetColor( &_this->Frame, _Const0041 );
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0042 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.05f );
  CoreView_OnSetLayout((CoreView)&_this->SimpleTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0030 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0043 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0044 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0006 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->SimpleTouchHandler, 3 );
  CoreView_OnSetLayout((CoreView)&_this->SimpleTouchHandler2, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler2, _Const0045 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler2, _Const0046 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler2, _Const0047 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler2, _Const0048 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->SimpleTouchHandler2, 3 );
  CoreView_OnSetLayout((CoreView)&_this->Search, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Search, _Const0049 );
  ViewsText_OnSetWrapText( &_this->Search, 1 );
  ViewsText_OnSetColor( &_this->Search, _Const0037 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const004A );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const001C ));
  ViewsText_OnSetColor( &_this->Text, _Const0035 );
  CoreView_OnSetLayout((CoreView)&_this->TextPlaceholder, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextPlaceholder, _Const004B );
  ViewsText_OnSetAlignment( &_this->TextPlaceholder, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextPlaceholder, 0 );
  ViewsText_OnSetColor( &_this->TextPlaceholder, _Const0037 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, _Const0038 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, _Const0039 );
  ViewsLine_OnSetWidth2( &_this->Caret, 2 );
  ViewsLine_OnSetWidth1( &_this->Caret, 2 );
  ViewsLine_OnSetColor( &_this->Caret, _Const002D );
  ViewsLine_OnSetVisible( &_this->Caret, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Search ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextPlaceholder ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Caret ), 0 );
  _this->blinkEffect.Outlet = EwNewRef( &_this->Caret, ViewsLine_OnGetVisible, ViewsLine_OnSetVisible );
  _this->Font = EwLoadResource( &ResourcesFontMedium, ResourcesFont );
  _this->CursorKeyHandler.OnPress = EwNewSlot( _this, ComponentsInputBtnEtxt_onCursorKey );
  _this->CursorKeyHandler.OnHold = EwNewSlot( _this, ComponentsInputBtnEtxt_onCursorKey );
  _this->BackspaceKeyHandler.OnPress = EwNewSlot( _this, ComponentsInputBtnEtxt_onBackspaceKey );
  _this->BackspaceKeyHandler.OnHold = EwNewSlot( _this, ComponentsInputBtnEtxt_onBackspaceKey );
  _this->DeleteKeyHandler.OnPress = EwNewSlot( _this, ComponentsInputBtnEtxt_onDeleteKey );
  _this->DeleteKeyHandler.OnHold = EwNewSlot( _this, ComponentsInputBtnEtxt_onDeleteKey );
  _this->NewlineKeyHandler.OnPress = EwNewSlot( _this, ComponentsInputBtnEtxt_onNewlineKey );
  _this->NewlineKeyHandler.OnHold = EwNewSlot( _this, ComponentsInputBtnEtxt_onNewlineKey );
  _this->CharacterKeyHandler.OnPress = EwNewSlot( _this, ComponentsInputBtnEtxt_onCharacterKey );
  _this->CharacterKeyHandler.OnHold = EwNewSlot( _this, ComponentsInputBtnEtxt_onCharacterKey );
  _this->IconFont = EwLoadResource( &ResIconsFont25, ResourcesFont );
  ViewsFrame_OnSetBitmap( &_this->Frame, EwLoadResource( &ResSearchButton, ResourcesBitmap ));
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, ComponentsInputBtnEtxt_onDragTouch );
  _this->SimpleTouchHandler.OnHold = EwNewSlot( _this, ComponentsInputBtnEtxt_onHoldTouch );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ComponentsInputBtnEtxt_onReleaseTouch );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ComponentsInputBtnEtxt_onPressTouch );
  _this->SimpleTouchHandler2.OnRelease = EwNewSlot( _this, ComponentsInputBtnEtxt_onIcon );
  ViewsText_OnSetOnUpdate( &_this->Text, EwNewSlot( _this, ComponentsInputBtnEtxt_updateCaret ));
  ViewsText_OnSetSlideHandler( &_this->Text, &_this->SlideTouchHandler );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextPlaceholder, EwLoadResource( &ResourcesFontSmall, 
  ResourcesFont ));
}

/* Re-Initializer for the class 'Components::InputBtnEtxt' */
void ComponentsInputBtnEtxt__ReInit( ComponentsInputBtnEtxt _this )
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
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler2 );
  ViewsText__ReInit( &_this->Search );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->TextPlaceholder );
  ViewsLine__ReInit( &_this->Caret );
}

/* Finalizer method for the class 'Components::InputBtnEtxt' */
void ComponentsInputBtnEtxt__Done( ComponentsInputBtnEtxt _this )
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
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler2 );
  ViewsText__Done( &_this->Search );
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
void ComponentsInputBtnEtxt_UpdateViewState( ComponentsInputBtnEtxt _this, XSet 
  aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );

  if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 1 );
  else
  {
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 0 );
    ViewsLine_OnSetVisible( &_this->Caret, 0 );
  }

  ViewsText_OnSetFont( &_this->Search, _this->IconFont );
  ViewsText_OnSetString( &_this->Search, _this->Icon );
}

/* This slot method is called after the caret has been adjusted. Its job is to adjust 
   too the position of the magnifying glass view where the augmented text content 
   around the caret is shown. */
void ComponentsInputBtnEtxt_updateMagnifyingView( ComponentsInputBtnEtxt _this, 
  XObject sender )
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
void ComponentsInputBtnEtxt_updateScrollOffset( ComponentsInputBtnEtxt _this, XObject 
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
void ComponentsInputBtnEtxt_updateCaret( ComponentsInputBtnEtxt _this, XObject sender )
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
    EwPostSignal( EwNewSlot( _this, ComponentsInputBtnEtxt_updateScrollOffset ), 
      ((XObject)_this ));
    _this->autoScroll = 0;
  }

  if ( _this->magnifyingView != 0 )
    EwPostSignal( EwNewSlot( _this, ComponentsInputBtnEtxt_updateMagnifyingView ), 
      ((XObject)_this ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   hide the magnifying glass view again. */
void ComponentsInputBtnEtxt_onReleaseTouch( ComponentsInputBtnEtxt _this, XObject 
  sender )
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
void ComponentsInputBtnEtxt_onDragTouch( ComponentsInputBtnEtxt _this, XObject sender )
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
      EwPostSignal( EwNewSlot( _this, ComponentsInputBtnEtxt_updateCaret ), ((XObject)_this ));
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
void ComponentsInputBtnEtxt_onHoldTouch( ComponentsInputBtnEtxt _this, XObject sender )
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
    EwMovePointPos( EwNewPoint( width * 2, height * 2 ), _Const003A )));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectOrigin( _this->magnifyingBack->Super1.Bounds, 
    _Const003B ));
    ViewsRectangle_OnSetColor( _this->magnifyingBack, _Const003C );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingBack ), 0 );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingView ), 0 );
    EwPostSignal( EwNewSlot( _this, ComponentsInputBtnEtxt_updateMagnifyingView ), 
      ((XObject)_this ));
  }

  if ( _this->magnifyingView != 0 )
    EwSignal( EwNewSlot( _this, ComponentsInputBtnEtxt_onDragTouch ), ((XObject)_this ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   obtain the focused state for the editor so the user can interact with the editor 
   content and to place the caret at the touched position. */
void ComponentsInputBtnEtxt_onPressTouch( ComponentsInputBtnEtxt _this, XObject 
  sender )
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
    EwPostSignal( EwNewSlot( _this, ComponentsInputBtnEtxt_updateCaret ), ((XObject)_this ));
    _this->autoScroll = 1;
  }
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   move the caret up/down/left or right in the editor text. */
void ComponentsInputBtnEtxt_onCursorKey( ComponentsInputBtnEtxt _this, XObject sender )
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
    EwPostSignal( EwNewSlot( _this, ComponentsInputBtnEtxt_updateCaret ), ((XObject)_this ));
    _this->autoScroll = 1;
  }
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign preceding the current caret position and to move the caret accordingly. */
void ComponentsInputBtnEtxt_onBackspaceKey( ComponentsInputBtnEtxt _this, XObject 
  sender )
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
  EwPostSignal( EwNewSlot( _this, ComponentsInputBtnEtxt_onChange ), ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign at the current caret position. */
void ComponentsInputBtnEtxt_onDeleteKey( ComponentsInputBtnEtxt _this, XObject sender )
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
  EwPostSignal( EwNewSlot( _this, ComponentsInputBtnEtxt_onChange ), ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the <new line> sign and to move the caret 
   to the next row. */
void ComponentsInputBtnEtxt_onNewlineKey( ComponentsInputBtnEtxt _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, EwLoadString( 
  &_Const003D ), _this->caretIndex ));
  _this->caretIndex = _this->caretIndex + 1;
  _this->autoScroll = 1;
  EwPostSignal( EwNewSlot( _this, ComponentsInputBtnEtxt_onChange ), ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the sign which has been input by the user 
   and to move the caret to the next column. */
void ComponentsInputBtnEtxt_onCharacterKey( ComponentsInputBtnEtxt _this, XObject 
  sender )
{
  XChar ch;
  XString str;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ch = _this->CharacterKeyHandler.CharCode;
  str = EwNewStringChar( ch, 1 );

  if (((( ch == '^' ) || ( ch == '~' )) || ( ch == 0x00AD )) || ( ch == '%' ))
    str = EwConcatStringChar( EwLoadString( &_Const003E ), ch );

  ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, str, 
  _this->caretIndex ));
  _this->caretIndex = _this->caretIndex + EwGetStringLength( str );
  _this->autoScroll = 1;
  EwPostSignal( EwNewSlot( _this, ComponentsInputBtnEtxt_onChange ), ((XObject)_this ));
}

/* 'C' function for method : 'Components::InputBtnEtxt.OnGetString()' */
XString ComponentsInputBtnEtxt_OnGetString( ComponentsInputBtnEtxt _this )
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

/* 'C' function for method : 'Components::InputBtnEtxt.OnSetString()' */
void ComponentsInputBtnEtxt_OnSetString( ComponentsInputBtnEtxt _this, XString value )
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
    str = EwStringInsert( str, EwLoadString( &_Const003E ), inx );
    inx = EwStringFindChar( str, '%', inx + 2 );
  }

  inx = EwStringFindChar( str, '^', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const003E ), inx );
    inx = EwStringFindChar( str, '^', inx + 2 );
  }

  inx = EwStringFindChar( str, '~', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const003E ), inx );
    inx = EwStringFindChar( str, '~', inx + 2 );
  }

  inx = EwStringFindChar( str, 0x00AD, 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const003E ), inx );
    inx = EwStringFindChar( str, 0x00AD, inx + 2 );
  }

  if ( _this->caretIndex > EwGetStringLength( str ))
    _this->caretIndex = EwGetStringLength( str );

  ViewsText_OnSetString( &_this->Text, EwConcatString( str, EwLoadString( &_Const003F )));
  _this->autoScroll = 1;
  ViewsText_OnSetScrollOffset( &_this->Text, _Const0006 );
  EwPostSignal( EwNewSlot( _this, ComponentsInputBtnEtxt_updatePlaceholder ), ((XObject)_this ));
}

/* 'C' function for method : 'Components::InputBtnEtxt.OnSetColor()' */
void ComponentsInputBtnEtxt_OnSetColor( ComponentsInputBtnEtxt _this, XColor value )
{
  if ( !EwCompColor( _this->Color, value ))
    return;

  _this->Color = value;
  ViewsText_OnSetColor( &_this->Text, value );
  ViewsLine_OnSetColor( &_this->Caret, value );
}

/* 'C' function for method : 'Components::InputBtnEtxt.OnSetPlaceholder()' */
void ComponentsInputBtnEtxt_OnSetPlaceholder( ComponentsInputBtnEtxt _this, XString 
  value )
{
  if ( !EwCompString( _this->Placeholder, value ))
    return;

  _this->Placeholder = EwShareString( value );
  ViewsText_OnSetString( &_this->TextPlaceholder, _this->Placeholder );
  EwPostSignal( EwNewSlot( _this, ComponentsInputBtnEtxt_updatePlaceholder ), ((XObject)_this ));
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::InputBtnEtxt.onChange()' */
void ComponentsInputBtnEtxt_onChange( ComponentsInputBtnEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnChange, ((XObject)_this ));
  EwPostSignal( EwNewSlot( _this, ComponentsInputBtnEtxt_updatePlaceholder ), ((XObject)_this ));
}

/* 'C' function for method : 'Components::InputBtnEtxt.updatePlaceholder()' */
void ComponentsInputBtnEtxt_updatePlaceholder( ComponentsInputBtnEtxt _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !EwCompString( ComponentsInputBtnEtxt_OnGetString( _this ), EwLoadString( 
      &_Const0034 )) || !EwCompString( ComponentsInputBtnEtxt_OnGetString( _this ), 
      0 ))
  {
    ViewsText_OnSetVisible( &_this->TextPlaceholder, 1 );
    ViewsText_OnSetColor( &_this->Search, ResGrey );
  }
  else
  {
    ViewsText_OnSetVisible( &_this->TextPlaceholder, 0 );
    ViewsText_OnSetColor( &_this->Search, ResBlue );
  }
}

/* 'C' function for method : 'Components::InputBtnEtxt.OnSetIcon()' */
void ComponentsInputBtnEtxt_OnSetIcon( ComponentsInputBtnEtxt _this, XString value )
{
  if ( !EwCompString( _this->Icon, value ))
    return;

  _this->Icon = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Components::InputBtnEtxt.onIcon()' */
void ComponentsInputBtnEtxt_onIcon( ComponentsInputBtnEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( !_this->SimpleTouchHandler2.AutoDeflected )
    EwPostSignal( _this->OnIcon, ((XObject)_this ));
}

/* Variants derived from the class : 'Components::InputBtnEtxt' */
EW_DEFINE_CLASS_VARIANTS( ComponentsInputBtnEtxt )
EW_END_OF_CLASS_VARIANTS( ComponentsInputBtnEtxt )

/* Virtual Method Table (VMT) for the class : 'Components::InputBtnEtxt' */
EW_DEFINE_CLASS( ComponentsInputBtnEtxt, TemplatesTextEditor, blinkEffect, magnifyingBack, 
                 OnChange, String, String, caretIndex, "Components::InputBtnEtxt" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  ComponentsInputBtnEtxt_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ComponentsInputBtnEtxt )

/* Embedded Wizard */
