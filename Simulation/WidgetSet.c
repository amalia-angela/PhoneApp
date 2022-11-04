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
#include "_CoreKeyPressHandler.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsFrame.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetWidgetConfig.h"
#include "Core.h"
#include "Resources.h"
#include "Views.h"
#include "WidgetSet.h"

/* Constant values used in this 'C' module only. */
static const XColor _Const0000 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XColor _Const0001 = { 0xA8, 0xAB, 0xAB, 0xFF };
static const XColor _Const0002 = { 0x6C, 0x6E, 0x70, 0xFF };
static const XColor _Const0003 = { 0xA8, 0xAB, 0xAB, 0xAA };
static const XPoint _Const0004 = { 34, 34 };
static const XColor _Const0005 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0006 = {{ 0, 0 }, { 150, 50 }};
static const XPoint _Const0007 = { 0, 50 };
static const XPoint _Const0008 = { 150, 50 };
static const XPoint _Const0009 = { 150, 0 };
static const XPoint _Const000A = { 0, 0 };

/* Include a file containing the bitmap resource : 'WidgetSet::PushButtonMedium' */
#include "_WidgetSetPushButtonMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::PushButtonMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetPushButtonMedium )

/* This autoobject provides the default customization for the 'push button' widget 
   (WidgetSet::PushButton) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetPushButton_Medium, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'WidgetSet::PushButton_Medium' */
void WidgetSetPushButton_Medium__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetLabelColorActive( _this, _Const0000 );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( _this, _Const0000 );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( _this, _Const0001 );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( _this, _Const0002 );
  WidgetSetPushButtonConfig_OnSetLabelMarginBottom( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginTop( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginRight( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginLeft( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconTintDisabled( _this, _Const0003 );
  WidgetSetPushButtonConfig_OnSetIconTintDefault( _this, _Const0002 );
  WidgetSetPushButtonConfig_OnSetIconMarginBottom( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginTop( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginRight( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginLeft( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetPushButtonConfig_OnSetFaceFrameActive( _this, 3 );
  WidgetSetPushButtonConfig_OnSetFaceFrameFocused( _this, 2 );
  WidgetSetPushButtonConfig_OnSetFaceFrameDisabled( _this, 0 );
  WidgetSetPushButtonConfig_OnSetFaceFrameDefault( _this, 1 );
  WidgetSetPushButtonConfig_OnSetFaceActive( _this, EwLoadResource( &WidgetSetPushButtonMedium, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceFocused( _this, EwLoadResource( &WidgetSetPushButtonMedium, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDisabled( _this, EwLoadResource( &WidgetSetPushButtonMedium, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDefault( _this, EwLoadResource( &WidgetSetPushButtonMedium, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetWidgetMinSize( _this, _Const0004 );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::PushButton_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Medium )

/* Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Init( WidgetSetPushButtonConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetPushButtonConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetPushButtonConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->LabelColorActive = _Const0005;
  _this->LabelColorFocused = _Const0005;
  _this->LabelColorDisabled = _Const0005;
  _this->LabelColorDefault = _Const0005;
  _this->IconTintDisabled = _Const0000;
  _this->IconTintDefault = _Const0000;
  _this->FaceFrameActive = -1;
  _this->FaceFrameFocused = -1;
  _this->FaceFrameDisabled = -1;
  _this->FaceFrameDefault = -1;
}

/* Re-Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__ReInit( WidgetSetPushButtonConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Done( WidgetSetPushButtonConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorActive()' */
void WidgetSetPushButtonConfig_OnSetLabelColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorActive, value ))
    return;

  _this->LabelColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorFocused()' */
void WidgetSetPushButtonConfig_OnSetLabelColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorFocused, value ))
    return;

  _this->LabelColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDisabled, value ))
    return;

  _this->LabelColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDefault()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDefault, value ))
    return;

  _this->LabelColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginBottom()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginBottom( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginBottom == value )
    return;

  _this->LabelMarginBottom = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginTop()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginTop( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginTop == value )
    return;

  _this->LabelMarginTop = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginRight()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginRight( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginRight == value )
    return;

  _this->LabelMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginLeft()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginLeft( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginLeft == value )
    return;

  _this->LabelMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintDisabled()' */
void WidgetSetPushButtonConfig_OnSetIconTintDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintDisabled, value ))
    return;

  _this->IconTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintDefault()' */
void WidgetSetPushButtonConfig_OnSetIconTintDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintDefault, value ))
    return;

  _this->IconTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginBottom()' */
void WidgetSetPushButtonConfig_OnSetIconMarginBottom( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginBottom == value )
    return;

  _this->IconMarginBottom = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginTop()' */
void WidgetSetPushButtonConfig_OnSetIconMarginTop( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginTop == value )
    return;

  _this->IconMarginTop = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginRight()' */
void WidgetSetPushButtonConfig_OnSetIconMarginRight( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginRight == value )
    return;

  _this->IconMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginLeft()' */
void WidgetSetPushButtonConfig_OnSetIconMarginLeft( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginLeft == value )
    return;

  _this->IconMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelFont()' */
void WidgetSetPushButtonConfig_OnSetLabelFont( WidgetSetPushButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelFont == value )
    return;

  _this->LabelFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameActive()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameActive( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameActive == value )
    return;

  _this->FaceFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameFocused()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameFocused( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameFocused == value )
    return;

  _this->FaceFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameDisabled()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameDisabled( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameDisabled == value )
    return;

  _this->FaceFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameDefault()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameDefault == value )
    return;

  _this->FaceFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceActive()' */
void WidgetSetPushButtonConfig_OnSetFaceActive( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceActive == value )
    return;

  _this->FaceActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFocused()' */
void WidgetSetPushButtonConfig_OnSetFaceFocused( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceFocused == value )
    return;

  _this->FaceFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceDisabled()' */
void WidgetSetPushButtonConfig_OnSetFaceDisabled( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceDisabled == value )
    return;

  _this->FaceDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceDefault()' */
void WidgetSetPushButtonConfig_OnSetFaceDefault( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceDefault == value )
    return;

  _this->FaceDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetWidgetMinSize()' */
void WidgetSetPushButtonConfig_OnSetWidgetMinSize( WidgetSetPushButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButtonConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS( WidgetSetPushButtonConfig, WidgetSetWidgetConfig, LabelFont, LabelColorActive, 
                 LabelColorActive, LabelColorActive, LabelColorActive, LabelColorActive, 
                 "WidgetSet::PushButtonConfig" )
EW_END_OF_CLASS( WidgetSetPushButtonConfig )

/* Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Init( WidgetSetWidgetConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetWidgetConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetWidgetConfig );
}

/* Re-Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__ReInit( WidgetSetWidgetConfig _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Done( WidgetSetWidgetConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::WidgetConfig.onInvalidate()' */
void WidgetSetWidgetConfig_onInvalidate( WidgetSetWidgetConfig _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Variants derived from the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetWidgetConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetWidgetConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS( WidgetSetWidgetConfig, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "WidgetSet::WidgetConfig" )
EW_END_OF_CLASS( WidgetSetWidgetConfig )

/* Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Init( WidgetSetPushButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetPushButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetPushButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0006 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0007 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0008 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0009 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const000A );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, WidgetSetPushButton_onFlashTimer );
  _this->KeyHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseKey );
  _this->KeyHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, WidgetSetPushButton_onLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, WidgetSetPushButton_onEnterTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__ReInit( WidgetSetPushButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Done( WidgetSetPushButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetBounds()' */
void WidgetSetPushButton_OnSetBounds( WidgetSetPushButton _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
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
void WidgetSetPushButton_UpdateViewState( WidgetSetPushButton _this, XSet aState )
{
  XBool needsFace;
  XBool needsLabel;
  XBool restack;
  XRect area;
  XBool isEnabled;
  XBool isFocused;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFace = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->FaceDefault 
  != 0 ) || ( _this->Appearance->FaceDisabled != 0 )) || ( _this->Appearance->FaceFocused 
  != 0 )) || ( _this->Appearance->FaceActive != 0 )));
  needsLabel = (XBool)((( _this->Appearance != 0 ) && ( EwCompString( _this->Label, 
  0 ) != 0 )) && ( _this->Appearance->LabelFont != 0 ));
  restack = 0;
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsFace && ( _this->frameView == 0 ))
  {
    _this->frameView = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView ), 0 );
    restack = 1;
  }
  else
    if ( !needsFace && ( _this->frameView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView ));
      _this->frameView = 0;
    }

  if ( needsLabel && ( _this->textView == 0 ))
  {
    _this->textView = EwNewObject( ViewsText, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->textView ), 0 );
    restack = 1;
    ViewsText_OnSetEnableBidiText( _this->textView, 1 );
  }
  else
    if ( !needsLabel && ( _this->textView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->textView ));
      _this->textView = 0;
    }

  if ( restack )
  {
    if ( _this->frameView != 0 )
      CoreGroup__RestackTop( _this, ((CoreView)_this->frameView ));

    if ( _this->textView != 0 )
      CoreGroup__RestackTop( _this, ((CoreView)_this->textView ));
  }

  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isFocused = (( aState & CoreViewStateFocused ) == CoreViewStateFocused );
  isPressed = (XBool)((( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->KeyHandler.Down ) || _this->FlashTimer.Enabled );

  if ( _this->frameView != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;
    XRect r = area;

    if ( !isEnabled )
    {
      bitmap = _this->Appearance->FaceDisabled;
      frameNo = _this->Appearance->FaceFrameDisabled;
    }
    else
      if ( isPressed )
      {
        bitmap = _this->Appearance->FaceActive;
        frameNo = _this->Appearance->FaceFrameActive;
      }
      else
        if ( isFocused )
        {
          bitmap = _this->Appearance->FaceFocused;
          frameNo = _this->Appearance->FaceFrameFocused;
        }
        else
        {
          bitmap = _this->Appearance->FaceDefault;
          frameNo = _this->Appearance->FaceFrameDefault;
        }

    ViewsFrame_OnSetAnimated( _this->frameView, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView, _Const0000 );

    if ( frameNo < 0 )
      frameNo = 0;

    ViewsFrame_OnSetFrameNumber( _this->frameView, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView, bitmap );
    CoreRectView__OnSetBounds( _this->frameView, r );
  }

  if ( _this->textView != 0 )
  {
    XColor clr;

    if ( !isEnabled )
      clr = _this->Appearance->LabelColorDisabled;
    else
      if ( isPressed )
        clr = _this->Appearance->LabelColorActive;
      else
        if ( isFocused )
          clr = _this->Appearance->LabelColorFocused;
        else
          clr = _this->Appearance->LabelColorDefault;

    CoreRectView__OnSetBounds( _this->textView, EwNewRect( area.Point1.X + _this->Appearance->LabelMarginLeft, 
    area.Point1.Y + _this->Appearance->LabelMarginTop, area.Point2.X - _this->Appearance->LabelMarginRight, 
    area.Point2.Y - _this->Appearance->LabelMarginBottom ));
    ViewsText_OnSetAlignment( _this->textView, ViewsTextAlignmentAlignHorzCenter 
    | ViewsTextAlignmentAlignVertCenter );
    ViewsText_OnSetWrapText( _this->textView, 1 );
    ViewsText_OnSetEllipsis( _this->textView, 1 );
    ViewsText_OnSetFont( _this->textView, _this->Appearance->LabelFont );
    ViewsText_OnSetString( _this->textView, _this->Label );
    ViewsText_OnSetColor( _this->textView, clr );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onConfigChanged()' */
void WidgetSetPushButton_onConfigChanged( WidgetSetPushButton _this, XObject sender )
{
  XEnum oldKeyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCode = _this->KeyHandler.Filter;
  _this->KeyHandler.Filter = CoreKeyCodeEnter;

  if (( oldKeyCode == CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if (( oldKeyCode != CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter == CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onFlashTimer()' */
void WidgetSetPushButton_onFlashTimer( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseKey()' */
void WidgetSetPushButton_onReleaseKey( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = 50;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ((XInt32)( _this->KeyHandler.Time - _this->onPressKeyTime ) >= pressFeedbackDuration )
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - (XInt32)( 
    _this->KeyHandler.Time - _this->onPressKeyTime ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressKey()' */
void WidgetSetPushButton_onPressKey( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  _this->onPressKeyTime = _this->KeyHandler.Time;
}

/* 'C' function for method : 'WidgetSet::PushButton.onLeaveTouch()' */
void WidgetSetPushButton_onLeaveTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onEnterTouch()' */
void WidgetSetPushButton_onEnterTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseTouch()' */
void WidgetSetPushButton_onReleaseTouch( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = 50;

  _this->KeyHandler.Enabled = 1;

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= pressFeedbackDuration )
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - _this->TouchHandler.HoldPeriod );
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressTouch()' */
void WidgetSetPushButton_onPressTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->KeyHandler.Enabled = 0;

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetLabel()' */
void WidgetSetPushButton_OnSetLabel( WidgetSetPushButton _this, XString value )
{
  if ( !EwCompString( _this->Label, value ))
    return;

  _this->Label = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetAppearance()' */
void WidgetSetPushButton_OnSetAppearance( WidgetSetPushButton _this, WidgetSetPushButtonConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButton )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButton )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS( WidgetSetPushButton, CoreGroup, textView, OnActivate, FlashTimer, 
                 FlashTimer, Label, onPressKeyTime, "WidgetSet::PushButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetPushButton_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetPushButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSetPushButton )

/* Embedded Wizard */
