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

#include "ewlocale.h"
#include "_CoreCursorEvent.h"
#include "_CoreCursorHit.h"
#include "_CoreDragEvent.h"
#include "_CoreEvent.h"
#include "_CoreGroup.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_EffectsEffectTimerClass.h"
#include "_GraphicsCanvas.h"
#include "_GraphicsWarpMatrix.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_ViewsWarpGroup.h"
#include "_ViewsWarpView.h"
#include "Core.h"
#include "Effects.h"
#include "Graphics.h"
#include "Resources.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x000001D4, /* ratio 56.41 % */
  0xB8003700, 0x000A8452, 0x00CA0034, 0x0A600100, 0xD2003600, 0x70932000, 0x6F830021,
  0x3001D400, 0x2445A0E6, 0x7000C200, 0x4561F133, 0x00740039, 0x60624958, 0x2C738911,
  0x5288848A, 0x798A48A1, 0x48CC762C, 0x8EC2A492, 0x64522A74, 0x80222778, 0x8A1908A0,
  0xA8C76864, 0x562EA2C2, 0xD2E29002, 0x0C854220, 0x4894421D, 0x0045EB11, 0x4C763719,
  0x48A4000A, 0x2A211492, 0xA610C944, 0x4335934C, 0x70C9CC96, 0x3FBBC8E7, 0x58B50A8F,
  0xB7D22254, 0x28029D4C, 0x466830CA, 0xA23B3186, 0x621108CC, 0xEB31BD5B, 0x541BBD82,
  0x51A0C921, 0x39715E57, 0x86492E44, 0x65063324, 0x1C2DD148, 0xEAE92293, 0x2E57CABD,
  0x014AD3CA, 0x779D3CC4, 0x163364F4, 0xB98D7AFF, 0x94003691, 0x05B23312, 0xE4F7E670,
  0x32A200DE, 0x6D37722C, 0x8D9198C5, 0x3288DDE7, 0x5EA6C4A6, 0x8DF002BB, 0x8EC922B6,
  0x5D4B3339, 0x00001019, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XColor _Const0000 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XPoint _Const0001 = { 1, 1 };
static const XPoint _Const0002 = { 0, 0 };
static const XRect _Const0003 = {{ 0, 0 }, { 0, 0 }};
static const XStringRes _Const0004 = { _StringsDefault0, 0x0002 };
static const XStringRes _Const0005 = { _StringsDefault0, 0x001D };
static const XStringRes _Const0006 = { _StringsDefault0, 0x0041 };
static const XStringRes _Const0007 = { _StringsDefault0, 0x0093 };

/* Initializer for the class 'Views::Line' */
void ViewsLine__Init( ViewsLine _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreLineView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ViewsLine );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ViewsLine );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Width2 = 1;
  _this->Width1 = 1;
  _this->Color = _Const0000;
}

/* Re-Initializer for the class 'Views::Line' */
void ViewsLine__ReInit( ViewsLine _this )
{
  /* At first re-initialize the super class ... */
  CoreLineView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Views::Line' */
void ViewsLine__Done( ViewsLine _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreLineView );

  /* Don't forget to deinitialize the super class ... */
  CoreLineView__Done( &_this->_.Super );
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you never will need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsLine_Draw( ViewsLine _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XInt32 w1 = _this->Width1;
  XInt32 w2 = _this->Width2;
  XPoint p1 = EwMovePointPos( _this->Super1.Point1, aOffset );
  XPoint p2 = EwMovePointPos( _this->Super1.Point2, aOffset );
  XColor c1;
  XColor c2;
  XColor c = _this->Color;

  if ( !EwCompPoint( p1, p2 ))
    return;

  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended ) 
  == CoreViewStateAlphaBlended ));
  aOpacity = aOpacity + 1;
  c1 = c2 = c;

  if ( aOpacity < 256 )
  {
    c1.Alpha = (XUInt8)(( aOpacity * c1.Alpha ) >> 8 );
    c2.Alpha = (XUInt8)(( aOpacity * c2.Alpha ) >> 8 );
  }

  if (( w1 == 1 ) && ( w2 == 1 ))
    GraphicsCanvas_DrawLine( aCanvas, aClip, p1, p2, c1, c2, aBlend );
  else
    GraphicsCanvas_DrawThickLine( aCanvas, aClip, p1, p2, w1, w2, c1, c2, aBlend );
}

/* The method GetExtent() returns the position and the size of the view relative 
   to the origin of its @Owner. In case of views with a non rectangular shape the 
   method returns the rectangular boundary area enclosing the entire shape. */
XRect ViewsLine_GetExtent( ViewsLine _this )
{
  XInt32 w1 = _this->Width1;
  XInt32 w2 = _this->Width2;
  XPoint p1 = _this->Super1.Point1;
  XPoint p2 = _this->Super1.Point2;
  XFloat fw1;
  XFloat fw2;
  XFloat fp1X;
  XFloat fp1Y;
  XFloat fp2X;
  XFloat fp2Y;
  XFloat dirX;
  XFloat dirY;
  XFloat len;
  XFloat c1x;
  XFloat c1y;
  XFloat c2x;
  XFloat c2y;
  XFloat c3x;
  XFloat c3y;
  XFloat c4x;
  XFloat c4y;
  XFloat left;
  XFloat right;
  XFloat top;
  XFloat bottom;
  XRect r;

  if ((( w1 == 1 ) && ( w2 == 1 )) || !EwCompPoint( p1, p2 ))
    return CoreLineView_GetExtent((CoreLineView)_this );

  fw1 = (XFloat)w1 / 2.000000f;
  fw2 = (XFloat)w2 / 2.000000f;
  fp1X = (XFloat)p1.X;
  fp1Y = (XFloat)p1.Y;
  fp2X = (XFloat)p2.X;
  fp2Y = (XFloat)p2.Y;
  dirX = fp2X - fp1X;
  dirY = fp2Y - fp1Y;
  len = EwMathSqrt(( dirX * dirX ) + ( dirY * dirY ));
  dirX = dirX / len;
  dirY = dirY / len;
  c1x = fp1X + ( dirY * fw1 );
  c1y = fp1Y - ( dirX * fw1 );
  c2x = fp2X + ( dirY * fw2 );
  c2y = fp2Y - ( dirX * fw2 );
  c3x = fp2X - ( dirY * fw2 );
  c3y = fp2Y + ( dirX * fw2 );
  c4x = fp1X - ( dirY * fw1 );
  c4y = fp1Y + ( dirX * fw1 );
  left = c1x;
  right = c1x;
  top = c1y;
  bottom = c1y;

  if ( c2x < left )
    left = c2x;

  if ( c3x < left )
    left = c3x;

  if ( c4x < left )
    left = c4x;

  if ( c2x > right )
    right = c2x;

  if ( c3x > right )
    right = c3x;

  if ( c4x > right )
    right = c4x;

  if ( c2y < top )
    top = c2y;

  if ( c3y < top )
    top = c3y;

  if ( c4y < top )
    top = c4y;

  if ( c2y > bottom )
    bottom = c2y;

  if ( c3y > bottom )
    bottom = c3y;

  if ( c4y > bottom )
    bottom = c4y;

  r = EwNewRect((XInt32)left, (XInt32)top, (XInt32)right, (XInt32)bottom );
  r.Point2 = EwMovePointPos( r.Point2, _Const0001 );
  return r;
}

/* 'C' function for method : 'Views::Line.observerSlot()' */
void ViewsLine_observerSlot( ViewsLine _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));
}

/* 'C' function for method : 'Views::Line.OnSetWidth2()' */
void ViewsLine_OnSetWidth2( ViewsLine _this, XInt32 value )
{
  if ( value < 1 )
    value = 1;

  if ( value == _this->Width2 )
    return;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  _this->Width2 = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  if ((( value != 1 ) || ( _this->Width1 != 1 )) && ( _this->whiteBitmap == 0 ))
  {
    _this->whiteBitmap = EwLoadResource( &ResourcesWhiteBitmapStripe, ResourcesBitmap );

    if ( _this->whiteBitmap->Mutable )
      EwAttachObjObserver( EwNewSlot( _this, ViewsLine_observerSlot ), (XObject)_this->whiteBitmap, 
        0 );
  }

  if ((( value == 1 ) && ( _this->Width1 == 1 )) && ( _this->whiteBitmap != 0 ))
  {
    if ( _this->whiteBitmap->Mutable )
      EwDetachObjObserver( EwNewSlot( _this, ViewsLine_observerSlot ), (XObject)_this->whiteBitmap, 
        0 );

    _this->whiteBitmap = 0;
  }
}

/* 'C' function for method : 'Views::Line.OnSetWidth1()' */
void ViewsLine_OnSetWidth1( ViewsLine _this, XInt32 value )
{
  if ( value < 1 )
    value = 1;

  if ( value == _this->Width1 )
    return;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  _this->Width1 = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  if ((( value != 1 ) || ( _this->Width2 != 1 )) && ( _this->whiteBitmap == 0 ))
  {
    _this->whiteBitmap = EwLoadResource( &ResourcesWhiteBitmapStripe, ResourcesBitmap );

    if ( _this->whiteBitmap->Mutable )
      EwAttachObjObserver( EwNewSlot( _this, ViewsLine_observerSlot ), (XObject)_this->whiteBitmap, 
        0 );
  }

  if ((( value == 1 ) && ( _this->Width2 == 1 )) && ( _this->whiteBitmap != 0 ))
  {
    if ( _this->whiteBitmap->Mutable )
      EwDetachObjObserver( EwNewSlot( _this, ViewsLine_observerSlot ), (XObject)_this->whiteBitmap, 
        0 );

    _this->whiteBitmap = 0;
  }
}

/* 'C' function for method : 'Views::Line.OnSetWidth()' */
void ViewsLine_OnSetWidth( ViewsLine _this, XInt32 value )
{
  if ( value < 1 )
    value = 1;

  if (( value == _this->Width1 ) && ( value == _this->Width2 ))
    return;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  _this->Width1 = value;
  _this->Width2 = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  if (( value != 1 ) && ( _this->whiteBitmap == 0 ))
  {
    _this->whiteBitmap = EwLoadResource( &ResourcesWhiteBitmapStripe, ResourcesBitmap );

    if ( _this->whiteBitmap->Mutable )
      EwAttachObjObserver( EwNewSlot( _this, ViewsLine_observerSlot ), (XObject)_this->whiteBitmap, 
        0 );
  }

  if (( value == 1 ) && ( _this->whiteBitmap != 0 ))
  {
    if ( _this->whiteBitmap->Mutable )
      EwDetachObjObserver( EwNewSlot( _this, ViewsLine_observerSlot ), (XObject)_this->whiteBitmap, 
        0 );

    _this->whiteBitmap = 0;
  }
}

/* 'C' function for method : 'Views::Line.OnSetColor()' */
void ViewsLine_OnSetColor( ViewsLine _this, XColor value )
{
  if ( !EwCompColor( value, _this->Color ))
    return;

  _this->Color = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));
}

/* 'C' function for method : 'Views::Line.OnGetVisible()' */
XBool ViewsLine_OnGetVisible( ViewsLine _this )
{
  return (( _this->Super2.viewState & CoreViewStateVisible ) == CoreViewStateVisible );
}

/* 'C' function for method : 'Views::Line.OnSetVisible()' */
void ViewsLine_OnSetVisible( ViewsLine _this, XBool value )
{
  if ( value )
    CoreView__ChangeViewState( _this, CoreViewStateVisible, 0 );
  else
    CoreView__ChangeViewState( _this, 0, CoreViewStateVisible );
}

/* Variants derived from the class : 'Views::Line' */
EW_DEFINE_CLASS_VARIANTS( ViewsLine )
EW_END_OF_CLASS_VARIANTS( ViewsLine )

/* Virtual Method Table (VMT) for the class : 'Views::Line' */
EW_DEFINE_CLASS( ViewsLine, CoreLineView, whiteBitmap, Width2, Width2, Width2, Width2, 
                 Width2, "Views::Line" )
  CoreLineView_initLayoutContext,
  CoreView_GetRoot,
  ViewsLine_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreLineView_ArrangeView,
  CoreLineView_MoveView,
  ViewsLine_GetExtent,
  CoreView_ChangeViewState,
EW_END_OF_CLASS( ViewsLine )

/* Initializer for the class 'Views::Rectangle' */
void ViewsRectangle__Init( ViewsRectangle _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ViewsRectangle );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ViewsRectangle );

  /* ... and initialize objects, variables, properties, etc. */
  _this->ColorBL = _Const0000;
  _this->ColorBR = _Const0000;
  _this->ColorTR = _Const0000;
  _this->ColorTL = _Const0000;
  _this->Color = _Const0000;
}

/* Re-Initializer for the class 'Views::Rectangle' */
void ViewsRectangle__ReInit( ViewsRectangle _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Views::Rectangle' */
void ViewsRectangle__Done( ViewsRectangle _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRectView );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_.Super );
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you never will need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsRectangle_Draw( ViewsRectangle _this, GraphicsCanvas aCanvas, XRect aClip, 
  XPoint aOffset, XInt32 aOpacity, XBool aBlend )
{
  XColor ctl = _this->ColorTL;
  XColor ctr = _this->ColorTR;
  XColor cbl = _this->ColorBL;
  XColor cbr = _this->ColorBR;
  XColor c = _this->Color;

  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended ) 
  == CoreViewStateAlphaBlended ));
  aOpacity = aOpacity + 1;

  if ((( !EwCompColor( ctl, ctr ) && !EwCompColor( cbl, cbr )) && !EwCompColor( 
      ctl, cbl )) && !EwCompColor( ctl, _Const0000 ))
    ctl = ctr = cbl = cbr = c;
  else
    if ( EwCompColor( c, _Const0000 ))
    {
      ctl.Alpha = (XUInt8)(( ctl.Alpha * ( c.Alpha + 1 )) >> 8 );
      ctl.Red = (XUInt8)(( ctl.Red * ( c.Red + 1 )) >> 8 );
      ctl.Green = (XUInt8)(( ctl.Green * ( c.Green + 1 )) >> 8 );
      ctl.Blue = (XUInt8)(( ctl.Blue * ( c.Blue + 1 )) >> 8 );
      ctr.Alpha = (XUInt8)(( ctr.Alpha * ( c.Alpha + 1 )) >> 8 );
      ctr.Red = (XUInt8)(( ctr.Red * ( c.Red + 1 )) >> 8 );
      ctr.Green = (XUInt8)(( ctr.Green * ( c.Green + 1 )) >> 8 );
      ctr.Blue = (XUInt8)(( ctr.Blue * ( c.Blue + 1 )) >> 8 );
      cbl.Alpha = (XUInt8)(( cbl.Alpha * ( c.Alpha + 1 )) >> 8 );
      cbl.Red = (XUInt8)(( cbl.Red * ( c.Red + 1 )) >> 8 );
      cbl.Green = (XUInt8)(( cbl.Green * ( c.Green + 1 )) >> 8 );
      cbl.Blue = (XUInt8)(( cbl.Blue * ( c.Blue + 1 )) >> 8 );
      cbr.Alpha = (XUInt8)(( cbr.Alpha * ( c.Alpha + 1 )) >> 8 );
      cbr.Red = (XUInt8)(( cbr.Red * ( c.Red + 1 )) >> 8 );
      cbr.Green = (XUInt8)(( cbr.Green * ( c.Green + 1 )) >> 8 );
      cbr.Blue = (XUInt8)(( cbr.Blue * ( c.Blue + 1 )) >> 8 );
    }

  if ( aOpacity < 256 )
  {
    ctl.Alpha = (XUInt8)(( aOpacity * ctl.Alpha ) >> 8 );
    ctr.Alpha = (XUInt8)(( aOpacity * ctr.Alpha ) >> 8 );
    cbl.Alpha = (XUInt8)(( aOpacity * cbl.Alpha ) >> 8 );
    cbr.Alpha = (XUInt8)(( aOpacity * cbr.Alpha ) >> 8 );
  }

  GraphicsCanvas_FillRectangle( aCanvas, aClip, EwMoveRectPos( _this->Super1.Bounds, 
  aOffset ), ctl, ctr, cbr, cbl, aBlend );
}

/* 'C' function for method : 'Views::Rectangle.OnSetColorBL()' */
void ViewsRectangle_OnSetColorBL( ViewsRectangle _this, XColor value )
{
  if ( !EwCompColor( value, _this->ColorBL ))
    return;

  _this->ColorBL = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Rectangle.OnSetColorBR()' */
void ViewsRectangle_OnSetColorBR( ViewsRectangle _this, XColor value )
{
  if ( !EwCompColor( value, _this->ColorBR ))
    return;

  _this->ColorBR = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Rectangle.OnSetColorTR()' */
void ViewsRectangle_OnSetColorTR( ViewsRectangle _this, XColor value )
{
  if ( !EwCompColor( value, _this->ColorTR ))
    return;

  _this->ColorTR = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Rectangle.OnSetColorTL()' */
void ViewsRectangle_OnSetColorTL( ViewsRectangle _this, XColor value )
{
  if ( !EwCompColor( value, _this->ColorTL ))
    return;

  _this->ColorTL = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Rectangle.OnSetColor()' */
void ViewsRectangle_OnSetColor( ViewsRectangle _this, XColor value )
{
  if ( !EwCompColor( value, _this->Color ))
    return;

  _this->Color = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* Variants derived from the class : 'Views::Rectangle' */
EW_DEFINE_CLASS_VARIANTS( ViewsRectangle )
EW_END_OF_CLASS_VARIANTS( ViewsRectangle )

/* Virtual Method Table (VMT) for the class : 'Views::Rectangle' */
EW_DEFINE_CLASS( ViewsRectangle, CoreRectView, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Views::Rectangle" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsRectangle_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( ViewsRectangle )

/* Initializer for the class 'Views::Frame' */
void ViewsFrame__Init( ViewsFrame _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ViewsFrame );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ViewsFrame );

  /* ... and initialize objects, variables, properties, etc. */
  _this->animFrameNumber = -1;
  _this->Color = _Const0000;
}

/* Re-Initializer for the class 'Views::Frame' */
void ViewsFrame__ReInit( ViewsFrame _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Views::Frame' */
void ViewsFrame__Done( ViewsFrame _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRectView );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_.Super );
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you never will need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsFrame_Draw( ViewsFrame _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XInt32 frameNr = 0;
  XColor ctl;
  XColor ctr;
  XColor cbr;
  XColor cbl;
  XColor c;
  XInt32 opacity;
  XRect r;

  if ( _this->animFrameNumber >= 0 )
    frameNr = _this->animFrameNumber;

  if (( _this->Bitmap == 0 ) || ( frameNr >= _this->Bitmap->NoOfFrames ))
    return;

  ResourcesBitmap__Update( _this->Bitmap );
  c = _this->Color;
  opacity = ((( aOpacity + 1 ) * 255 ) >> 8 ) + 1;
  r = EwMoveRectPos( _this->Super1.Bounds, aOffset );
  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended ) 
  == CoreViewStateAlphaBlended ));
  ctl = ctr = cbl = cbr = c;

  if ( opacity < 256 )
  {
    ctl.Alpha = (XUInt8)(( ctl.Alpha * opacity ) >> 8 );
    ctr.Alpha = (XUInt8)(( ctr.Alpha * opacity ) >> 8 );
    cbr.Alpha = (XUInt8)(( cbr.Alpha * opacity ) >> 8 );
    cbl.Alpha = (XUInt8)(( cbl.Alpha * opacity ) >> 8 );
  }

  GraphicsCanvas_DrawBitmapFrame( aCanvas, aClip, _this->Bitmap, frameNr, r, GraphicsEdgesBottom 
  | GraphicsEdgesInterior | GraphicsEdgesLeft | GraphicsEdgesRight | GraphicsEdgesTop, 
  ctl, ctr, cbr, cbl, aBlend );
}

/* 'C' function for method : 'Views::Frame.observerSlot()' */
void ViewsFrame_observerSlot( ViewsFrame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Frame.timerSlot()' */
void ViewsFrame_timerSlot( ViewsFrame _this, XObject sender )
{
  XInt32 frameNr;
  XInt32 period;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  frameNr = _this->animFrameNumber;
  period = 0;

  if ( _this->Bitmap != 0 )
    period = _this->Bitmap->NoOfFrames * _this->Bitmap->FrameDelay;

  if ((( _this->timer != 0 ) && ( _this->animFrameNumber < 0 )) && ( period > 0 ))
    _this->startTime = _this->timer->Time;

  if (( _this->timer != 0 ) && ( period > 0 ))
  {
    XInt32 time = (XInt32)( _this->timer->Time - _this->startTime );
    frameNr = time / _this->Bitmap->FrameDelay;

    if ( time >= period )
    {
      frameNr = frameNr % _this->Bitmap->NoOfFrames;
      _this->startTime = _this->timer->Time - ( time % period );
    }
  }

  if ((( frameNr != _this->animFrameNumber ) && ( _this->Super2.Owner != 0 )) && 
      (( _this->Super2.viewState & CoreViewStateVisible ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  _this->animFrameNumber = frameNr;

  if (( period == 0 ) && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsFrame_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
  }
}

/* 'C' function for method : 'Views::Frame.OnSetColor()' */
void ViewsFrame_OnSetColor( ViewsFrame _this, XColor value )
{
  if ( !EwCompColor( value, _this->Color ))
    return;

  _this->Color = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Frame.OnSetAnimated()' */
void ViewsFrame_OnSetAnimated( ViewsFrame _this, XBool value )
{
  if ( _this->Animated == value )
    return;

  _this->Animated = value;
  _this->animFrameNumber = -1;

  if ( !value && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsFrame_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
  }

  if ( value )
  {
    _this->timer = ((CoreTimer)EwGetAutoObject( &EffectsEffectTimer, EffectsEffectTimerClass ));
    EwAttachObjObserver( EwNewSlot( _this, ViewsFrame_timerSlot ), (XObject)_this->timer, 
      0 );
    EwPostSignal( EwNewSlot( _this, ViewsFrame_timerSlot ), ((XObject)_this ));
  }

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Frame.OnSetBitmap()' */
void ViewsFrame_OnSetBitmap( ViewsFrame _this, ResourcesBitmap value )
{
  if ( value == _this->Bitmap )
    return;

  if (( _this->Bitmap != 0 ) && _this->Bitmap->Mutable )
    EwDetachObjObserver( EwNewSlot( _this, ViewsFrame_observerSlot ), (XObject)_this->Bitmap, 
      0 );

  _this->Bitmap = value;
  _this->animFrameNumber = -1;

  if (( value != 0 ) && value->Mutable )
    EwAttachObjObserver( EwNewSlot( _this, ViewsFrame_observerSlot ), (XObject)value, 
      0 );

  if ( _this->Animated )
  {
    ViewsFrame_OnSetAnimated( _this, 0 );
    ViewsFrame_OnSetAnimated( _this, 1 );
  }

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* Variants derived from the class : 'Views::Frame' */
EW_DEFINE_CLASS_VARIANTS( ViewsFrame )
EW_END_OF_CLASS_VARIANTS( ViewsFrame )

/* Virtual Method Table (VMT) for the class : 'Views::Frame' */
EW_DEFINE_CLASS( ViewsFrame, CoreRectView, timer, animFrameNumber, animFrameNumber, 
                 animFrameNumber, animFrameNumber, animFrameNumber, "Views::Frame" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsFrame_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( ViewsFrame )

/* Initializer for the class 'Views::Image' */
void ViewsImage__Init( ViewsImage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ViewsImage );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ViewsImage );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Color = _Const0000;
}

/* Re-Initializer for the class 'Views::Image' */
void ViewsImage__ReInit( ViewsImage _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Views::Image' */
void ViewsImage__Done( ViewsImage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRectView );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_.Super );
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you never will need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsImage_Draw( ViewsImage _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XInt32 frameNr = 0;
  XRect area;
  XPoint size;
  XColor ctl;
  XColor ctr;
  XColor cbr;
  XColor cbl;
  XColor c;
  XInt32 opacity;

  if ( _this->animFrameNumber >= 0 )
    frameNr = _this->animFrameNumber;

  if (( _this->Bitmap == 0 ) || ( frameNr >= _this->Bitmap->NoOfFrames ))
    return;

  ResourcesBitmap__Update( _this->Bitmap );
  area = ViewsImage_GetContentArea( _this );
  size = _this->Bitmap->FrameSize;

  if ( EwIsRectEmpty( area ))
    return;

  c = _this->Color;
  opacity = ((( aOpacity + 1 ) * 255 ) >> 8 ) + 1;
  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended ) 
  == CoreViewStateAlphaBlended ));
  ctl = ctr = cbl = cbr = c;

  if ( opacity < 256 )
  {
    ctl.Alpha = (XUInt8)(( ctl.Alpha * opacity ) >> 8 );
    ctr.Alpha = (XUInt8)(( ctr.Alpha * opacity ) >> 8 );
    cbr.Alpha = (XUInt8)(( cbr.Alpha * opacity ) >> 8 );
    cbl.Alpha = (XUInt8)(( cbl.Alpha * opacity ) >> 8 );
  }

  if ( !EwCompPoint( EwGetRectSize( area ), size ))
    GraphicsCanvas_CopyBitmap( aCanvas, aClip, _this->Bitmap, frameNr, EwMoveRectPos( 
    _this->Super1.Bounds, aOffset ), EwMovePointNeg( _this->Super1.Bounds.Point1, 
    area.Point1 ), ctl, ctr, cbr, cbl, aBlend );
  else
    GraphicsCanvas_ScaleBitmap( aCanvas, aClip, _this->Bitmap, frameNr, EwMoveRectPos( 
    area, aOffset ), EwNewRect2Point( _Const0002, size ), ctl, ctr, cbr, cbl, aBlend, 
    1 );
}

/* 'C' function for method : 'Views::Image.observerSlot()' */
void ViewsImage_observerSlot( ViewsImage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.timerSlot()' */
void ViewsImage_timerSlot( ViewsImage _this, XObject sender )
{
  XInt32 frameNr;
  XInt32 period;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  frameNr = _this->animFrameNumber;
  period = 0;

  if ( _this->Bitmap != 0 )
    period = _this->Bitmap->NoOfFrames * _this->Bitmap->FrameDelay;

  if ((( _this->timer != 0 ) && ( _this->animFrameNumber < 0 )) && ( period > 0 ))
    _this->startTime = _this->timer->Time;

  if (( _this->timer != 0 ) && ( period > 0 ))
  {
    XInt32 time = (XInt32)( _this->timer->Time - _this->startTime );
    frameNr = time / _this->Bitmap->FrameDelay;

    if ( time >= period )
    {
      frameNr = frameNr % _this->Bitmap->NoOfFrames;
      _this->startTime = _this->timer->Time - ( time % period );
    }
  }

  if ((( frameNr != _this->animFrameNumber ) && ( _this->Super2.Owner != 0 )) && 
      (( _this->Super2.viewState & CoreViewStateVisible ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  _this->animFrameNumber = frameNr;

  if (( period == 0 ) && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsImage_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
  }
}

/* 'C' function for method : 'Views::Image.OnSetColor()' */
void ViewsImage_OnSetColor( ViewsImage _this, XColor value )
{
  if ( !EwCompColor( value, _this->Color ))
    return;

  _this->Color = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.OnSetAnimated()' */
void ViewsImage_OnSetAnimated( ViewsImage _this, XBool value )
{
  if ( _this->Animated == value )
    return;

  _this->Animated = value;
  _this->animFrameNumber = -1;

  if ( !value && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsImage_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
  }

  if ( value )
  {
    _this->timer = ((CoreTimer)EwGetAutoObject( &EffectsEffectTimer, EffectsEffectTimerClass ));
    EwAttachObjObserver( EwNewSlot( _this, ViewsImage_timerSlot ), (XObject)_this->timer, 
      0 );
    EwPostSignal( EwNewSlot( _this, ViewsImage_timerSlot ), ((XObject)_this ));
  }

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.OnSetBitmap()' */
void ViewsImage_OnSetBitmap( ViewsImage _this, ResourcesBitmap value )
{
  if ( value == _this->Bitmap )
    return;

  if (( _this->Bitmap != 0 ) && _this->Bitmap->Mutable )
    EwDetachObjObserver( EwNewSlot( _this, ViewsImage_observerSlot ), (XObject)_this->Bitmap, 
      0 );

  _this->Bitmap = value;
  _this->animFrameNumber = -1;

  if (( value != 0 ) && value->Mutable )
    EwAttachObjObserver( EwNewSlot( _this, ViewsImage_observerSlot ), (XObject)value, 
      0 );

  if ( _this->Animated )
  {
    ViewsImage_OnSetAnimated( _this, 0 );
    ViewsImage_OnSetAnimated( _this, 1 );
  }

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* The method GetContentArea() returns the position and the size of an area where 
   the view will show the bitmap. This area is expressed in coordinates relative 
   to the top-left corner of the view's @Owner. The method takes in account all 
   properties which do affect the position and the alignment of the bitmap, e.g. 
   @Alignment or @ScrollOffset. */
XRect ViewsImage_GetContentArea( ViewsImage _this )
{
  XPoint size;
  XRect bounds;
  XInt32 width;
  XInt32 height;
  XRect rd;
  XRect rs;

  if ( _this->Bitmap == 0 )
    return _Const0003;

  size = _this->Bitmap->FrameSize;
  bounds = _this->Super1.Bounds;
  width = EwGetRectW( bounds );
  height = EwGetRectH( bounds );

  if (( size.X == 0 ) || ( size.Y == 0 ))
    return _Const0003;

  rd = EwNewRect( 0, 0, width, height );
  rs = rd;
  rs = EwSetRectSize( rs, size );

  if ( EwGetRectW( rs ) != EwGetRectW( rd ))
    rs = EwSetRectX( rs, ( rd.Point1.X + ( EwGetRectW( rd ) / 2 )) - ( EwGetRectW( 
    rs ) / 2 ));

  if ( EwGetRectH( rs ) != EwGetRectH( rd ))
    rs = EwSetRectY( rs, ( rd.Point1.Y + ( EwGetRectH( rd ) / 2 )) - ( EwGetRectH( 
    rs ) / 2 ));

  rs = EwMoveRectPos( rs, bounds.Point1 );
  return rs;
}

/* Variants derived from the class : 'Views::Image' */
EW_DEFINE_CLASS_VARIANTS( ViewsImage )
EW_END_OF_CLASS_VARIANTS( ViewsImage )

/* Virtual Method Table (VMT) for the class : 'Views::Image' */
EW_DEFINE_CLASS( ViewsImage, CoreRectView, timer, startTime, startTime, startTime, 
                 startTime, startTime, "Views::Image" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsImage_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( ViewsImage )

/* Initializer for the class 'Views::Text' */
void ViewsText__Init( ViewsText _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ViewsText );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ViewsText );

  /* ... and initialize objects, variables, properties, etc. */
  _this->ColorBR = _Const0000;
  _this->Alignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->Color = _Const0000;
}

/* Re-Initializer for the class 'Views::Text' */
void ViewsText__ReInit( ViewsText _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Views::Text' */
void ViewsText__Done( ViewsText _this )
{
  /* Call the user defined destructor of the class */
  ViewsText_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRectView );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_.Super );
}

/* 'C' function for method : 'Views::Text.Done()' */
void ViewsText_Done( ViewsText _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you never will need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsText_Draw( ViewsText _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XSet align;
  ResourcesFont font;
  XRect rd;
  XColor ctl;
  XColor ctr;
  XColor cbr;
  XColor cbl;
  XColor col;
  XInt32 opacity;
  XInt32 noOfRows;
  XRect area;
  XPoint ofs;
  XInt32 leading;
  XInt32 rowHeight;
  XInt32 clipY1;
  XInt32 clipY2;
  XInt32 areaW;
  XInt32 y;
  XInt32 i;
  XInt32 c;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aBlend );

  if ( !EwCompString( _this->flowString, 0 ) || ( _this->Font == 0 ))
    return;

  align = _this->Alignment;
  font = _this->Font;
  rd = EwMoveRectPos( _this->Super1.Bounds, aOffset );
  ctl = _Const0000;
  ctr = _Const0000;
  cbr = _this->ColorBR;
  cbl = _Const0000;
  col = _this->Color;
  opacity = ((( aOpacity + 1 ) * 255 ) >> 8 ) + 1;
  noOfRows = EwGetStringChar( _this->flowString, 0 );
  area = EwMoveRectPos( ViewsText_GetContentArea( _this ), aOffset );
  ofs = EwNewPoint( rd.Point1.X - area.Point1.X, ( rd.Point1.Y - area.Point1.Y ) 
  - font->Ascent );

  if ( noOfRows < 1 )
    return;

  if ( !EwCompColor( _Const0000, cbr ))
    ctl = ctr = cbl = cbr = col;
  else
    if ( EwCompColor( col, _Const0000 ))
    {
      ctl.Alpha = (XUInt8)(( 255 * ( col.Alpha + 1 )) >> 8 );
      ctl.Red = (XUInt8)(( ctl.Red * ( col.Red + 1 )) >> 8 );
      ctl.Green = (XUInt8)(( ctl.Green * ( col.Green + 1 )) >> 8 );
      ctl.Blue = (XUInt8)(( ctl.Blue * ( col.Blue + 1 )) >> 8 );
      ctr.Alpha = (XUInt8)(( 255 * ( col.Alpha + 1 )) >> 8 );
      ctr.Red = (XUInt8)(( ctr.Red * ( col.Red + 1 )) >> 8 );
      ctr.Green = (XUInt8)(( ctr.Green * ( col.Green + 1 )) >> 8 );
      ctr.Blue = (XUInt8)(( ctr.Blue * ( col.Blue + 1 )) >> 8 );
      cbl.Alpha = (XUInt8)(( 255 * ( col.Alpha + 1 )) >> 8 );
      cbl.Red = (XUInt8)(( cbl.Red * ( col.Red + 1 )) >> 8 );
      cbl.Green = (XUInt8)(( cbl.Green * ( col.Green + 1 )) >> 8 );
      cbl.Blue = (XUInt8)(( cbl.Blue * ( col.Blue + 1 )) >> 8 );
      cbr.Alpha = (XUInt8)(( cbr.Alpha * ( col.Alpha + 1 )) >> 8 );
      cbr.Red = (XUInt8)(( cbr.Red * ( col.Red + 1 )) >> 8 );
      cbr.Green = (XUInt8)(( cbr.Green * ( col.Green + 1 )) >> 8 );
      cbr.Blue = (XUInt8)(( cbr.Blue * ( col.Blue + 1 )) >> 8 );
    }

  if ( opacity < 256 )
  {
    ctl.Alpha = (XUInt8)(( ctl.Alpha * opacity ) >> 8 );
    ctr.Alpha = (XUInt8)(( ctr.Alpha * opacity ) >> 8 );
    cbr.Alpha = (XUInt8)(( cbr.Alpha * opacity ) >> 8 );
    cbl.Alpha = (XUInt8)(( cbl.Alpha * opacity ) >> 8 );
  }

  if ((( align & ViewsTextAlignmentAlignHorzAuto ) == ViewsTextAlignmentAlignHorzAuto ))
  {
    if ( ViewsText_IsBaseDirectionRTL( _this ))
      align = ( align & ~ViewsTextAlignmentAlignHorzAuto ) | ViewsTextAlignmentAlignHorzRight;
    else
      align = ( align & ~ViewsTextAlignmentAlignHorzAuto ) | ViewsTextAlignmentAlignHorzLeft;
  }

  if (( noOfRows == 1 ) && !(( align & ViewsTextAlignmentAlignHorzJustified ) == 
      ViewsTextAlignmentAlignHorzJustified ))
  {
    GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, 2, EwGetStringChar( 
    _this->flowString, 1 ) - 1, rd, ofs, 0, ViewsOrientationNormal, ctl, ctr, cbr, 
    cbl, 1 );
    return;
  }

  leading = font->Leading;
  rowHeight = ( font->Ascent + font->Descent ) + leading;
  clipY1 = aClip.Point1.Y - area.Point1.Y;
  clipY2 = aClip.Point2.Y - area.Point1.Y;
  areaW = EwGetRectW( area );
  y = 0;
  i = 1;
  c = EwGetStringChar( _this->flowString, 1 );

  while ((( y + rowHeight ) < clipY1 ) && ( c > 0 ))
  {
    i = i + c;
    y = y + rowHeight;
    c = EwGetStringChar( _this->flowString, i );
  }

  while (( y < clipY2 ) && ( c > 0 ))
  {
    XPoint ofs2 = EwMovePointNeg( ofs, EwNewPoint( 0, y ));
    XInt32 rw = 0;
    XBool justified = 0;

    if ((((( align & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified ) 
        && ( EwGetStringChar( _this->flowString, ( i + c ) - 1 ) != 0x000A )) && 
        ( EwGetStringChar( _this->flowString, i + 1 ) != 0x000A )) && ( EwGetStringChar( 
        _this->flowString, i + c ) != 0x0000 ))
      justified = 1;

    if ( justified && !!( align & ( ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignHorzRight )))
    {
      XInt32 rowEnd = i + c;
      XInt32 blank1 = EwStringFindChar( _this->flowString, 0x0020, i + 1 );
      XInt32 blank2 = EwStringFindChar( _this->flowString, 0x00A0, i + 1 );

      if ((( blank1 < 0 ) || ( blank1 >= rowEnd )) && (( blank2 < 0 ) || ( blank2 
          >= rowEnd )))
        justified = 0;
    }

    if ( justified )
      rw = areaW;
    else
      if ((( align & ViewsTextAlignmentAlignHorzRight ) == ViewsTextAlignmentAlignHorzRight ))
        ofs2.X = (( ofs2.X - areaW ) + ResourcesFont_GetTextAdvance( font, _this->flowString, 
        i + 1, c - 1 ));
      else
        if ((( align & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter ))
          ofs2.X = (( ofs2.X - ( areaW / 2 )) + ( ResourcesFont_GetTextAdvance( 
          font, _this->flowString, i + 1, c - 1 ) / 2 ));

    GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, i + 1, c - 
    1, rd, ofs2, rw, ViewsOrientationNormal, ctl, ctr, cbr, cbl, 1 );
    i = i + c;
    y = y + rowHeight;
    c = EwGetStringChar( _this->flowString, i );
  }
}

/* 'C' function for method : 'Views::Text.OnSetBounds()' */
void ViewsText_OnSetBounds( ViewsText _this, XRect value )
{
  XBool resized;

  if ( !EwCompRect( value, _this->Super1.Bounds ))
    return;

  resized = (XBool)( EwGetRectW( _this->Super1.Bounds ) != EwGetRectW( value ));

  if ((( resized && _this->WrapText ) && _this->reparsed ) && !(( _this->Super2.viewState 
      & CoreViewStateUpdatingLayout ) == CoreViewStateUpdatingLayout ))
  {
    _this->flowString = 0;
    _this->reparsed = 0;
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
  }

  CoreRectView_OnSetBounds((CoreRectView)_this, value );
  EwPostSignal( EwNewSlot( _this, ViewsText_preOnUpdateSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.preOnUpdateSlot()' */
void ViewsText_preOnUpdateSlot( ViewsText _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.preReparseSlot()' */
void ViewsText_preReparseSlot( ViewsText _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.onSlideSlot()' */
void ViewsText_onSlideSlot( ViewsText _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetScrollOffset( _this, _this->SlideHandler->Offset );
}

/* 'C' function for method : 'Views::Text.onStartSlideSlot()' */
void ViewsText_onStartSlideSlot( ViewsText _this, XObject sender )
{
  XRect area;
  XPoint origin;
  XPoint offset;
  XPoint minOffset;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  area = ViewsText_GetContentArea( _this );
  origin = _this->Super1.Bounds.Point1;

  if ( area.Point1.X > origin.X )
    area.Point1.X = origin.X;

  if ( area.Point1.Y > origin.Y )
    area.Point1.Y = origin.Y;

  offset = EwMovePointNeg( area.Point1, _this->Super1.Bounds.Point1 );
  minOffset = EwMovePointNeg( EwGetRectSize( _this->Super1.Bounds ), EwGetRectSize( 
  area ));

  if ( minOffset.X > 0 )
    minOffset.X = 0;

  if ( minOffset.Y > 0 )
    minOffset.Y = 0;

  _this->SlideHandler->Offset = _this->ScrollOffset;
  _this->SlideHandler->MinOffset = EwMovePointNeg( EwMovePointPos( _this->ScrollOffset, 
  minOffset ), offset );
  _this->SlideHandler->MaxOffset = EwMovePointNeg( _this->ScrollOffset, offset );
}

/* 'C' function for method : 'Views::Text.reparseSlot()' */
void ViewsText_reparseSlot( ViewsText _this, XObject sender )
{
  XInt32 width;
  XInt32 maxWidth;
  ResourcesFont font;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->reparsed )
    return;

  width = EwGetRectW( _this->Super1.Bounds );
  maxWidth = -1;
  font = _this->Font;

  if ((( font != 0 ) && !!!font->Ascent ) && !!!font->Descent )
    font = 0;

  if ( _this->WrapText )
  {
    maxWidth = width;

    if ( maxWidth < 0 )
      maxWidth = 1;
  }

  _this->reparsed = 1;

  if (( EwCompString( _this->String, 0 ) != 0 ) && ( font != 0 ))
  {
    XInt32 length = EwGetStringLength( _this->String );
    _this->flowString = EwShareString( ResourcesFont_ParseFlowString( font, _this->String, 
    0, maxWidth, length, 0 ));
  }
  else
    _this->flowString = 0;

  _this->textSize = _Const0002;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  EwPostSignal( EwNewSlot( _this, ViewsText_preOnUpdateSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetOnUpdate()' */
void ViewsText_OnSetOnUpdate( ViewsText _this, XSlot value )
{
  if ( !EwCompSlot( value, _this->OnUpdate ))
    return;

  _this->OnUpdate = value;

  if ( _this->WrapText || !EwIsSlotNull( value ))
    _this->Super2.viewState = _this->Super2.viewState & ~CoreViewStateFastReshape;
  else
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStateFastReshape;
}

/* 'C' function for method : 'Views::Text.OnSetColorBR()' */
void ViewsText_OnSetColorBR( ViewsText _this, XColor value )
{
  if ( !EwCompColor( value, _this->ColorBR ))
    return;

  _this->ColorBR = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Text.OnSetSlideHandler()' */
void ViewsText_OnSetSlideHandler( ViewsText _this, CoreSlideTouchHandler value )
{
  if ( value == _this->SlideHandler )
    return;

  if (( value != 0 ) && ( value->privateOnSlide.Object != 0 ))
  {
    EwTrace( "%s%*%s", EwLoadString( &_Const0004 ), value, EwLoadString( &_Const0005 ));

    {
      EwThrow( EwLoadString( &_Const0006 ));
      return;
    }
  }

  if ( _this->SlideHandler != 0 )
  {
    _this->SlideHandler->privateOnStart = EwNullSlot;
    _this->SlideHandler->privateOnSlide = EwNullSlot;
  }

  _this->SlideHandler = value;

  if ( value != 0 )
  {
    value->privateOnStart = EwNewSlot( _this, ViewsText_onStartSlideSlot );
    value->privateOnSlide = EwNewSlot( _this, ViewsText_onSlideSlot );
  }
}

/* 'C' function for method : 'Views::Text.OnSetWrapText()' */
void ViewsText_OnSetWrapText( ViewsText _this, XBool value )
{
  if ( value == _this->WrapText )
    return;

  _this->WrapText = value;

  if ( _this->reparsed )
  {
    _this->flowString = 0;
    _this->reparsed = 0;
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
  }

  if ( value || !EwIsSlotNull( _this->OnUpdate ))
    _this->Super2.viewState = _this->Super2.viewState & ~CoreViewStateFastReshape;
  else
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStateFastReshape;
}

/* 'C' function for method : 'Views::Text.OnSetScrollOffset()' */
void ViewsText_OnSetScrollOffset( ViewsText _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->ScrollOffset ))
    return;

  _this->ScrollOffset = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  if ( _this->reparsed )
    EwPostSignal( EwNewSlot( _this, ViewsText_preOnUpdateSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetAlignment()' */
void ViewsText_OnSetAlignment( ViewsText _this, XSet value )
{
  if ( value == _this->Alignment )
    return;

  _this->Alignment = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  if ( _this->reparsed )
    EwPostSignal( EwNewSlot( _this, ViewsText_preOnUpdateSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetString()' */
void ViewsText_OnSetString( ViewsText _this, XString value )
{
  if ( !EwCompString( value, _this->String ))
    return;

  _this->String = EwShareString( value );
  _this->flowString = 0;
  _this->reparsed = 0;
  EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetFont()' */
void ViewsText_OnSetFont( ViewsText _this, ResourcesFont value )
{
  if ( value == _this->Font )
    return;

  _this->Font = value;
  _this->flowString = 0;
  _this->reparsed = 0;
  EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetColor()' */
void ViewsText_OnSetColor( ViewsText _this, XColor value )
{
  if ( !EwCompColor( value, _this->Color ))
    return;

  _this->Color = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Text.OnSetVisible()' */
void ViewsText_OnSetVisible( ViewsText _this, XBool value )
{
  if ( value )
    CoreView__ChangeViewState( _this, CoreViewStateVisible, 0 );
  else
    CoreView__ChangeViewState( _this, 0, CoreViewStateVisible );
}

/* The method IsBaseDirectionRTL() returns 'true' if the text specified in @String 
   starts with an RTL (right-to-left) character. This implies the base direction 
   of the entire text paragraph. If the text starts with an LTR (left-to-right) 
   sign or the property @EnableBidiText is 'false', this method returns 'false'. */
XBool ViewsText_IsBaseDirectionRTL( ViewsText _this )
{
  if ( !_this->reparsed )
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  return 0;
}

/* The method StringIndex2RowCol() tries to determine the row and column display 
   position of a sign corresponding to a character with the given number aIndex 
   stored in the original string @String. Within the string the first character 
   has the index 0, the second 1, and so far. The returned value defines the row/column 
   position where the affected sign is displayed after the string is processed and 
   wrapped in several text rows. This value contains in its 'x' component the column 
   number and in the 'y' component the row number. The columns and rows are counted 
   starting with 0.
   Please note, that the returned row/column position identifies visible signs only. 
   If aIndex addresses a zero-width sign (e.g. eliminated soft-hyphen, new-line, 
   Bidi control marks, the escape sign '%', etc.), the method returns in 'x' the 
   column position identifying the next visible sign existing within the same text 
   row. If starting at the estimated column position there is no other visible sign 
   until the end of the text row, the method returns in 'x' the column number of 
   the last visible sign + 1 (means: the returned position addresses the column 
   behind the last visible sign). Furthermore, if the Text view is configured with 
   the property @Ellipsis set 'true', the method fails and returns the value <0,0> 
   regardless of the specified aIndex parameter.
   The method is useful to determine the displayed text fragment corresponding to 
   a given string index. Knowing the row number you can use the method @GetRowString() 
   to obtain the corresponding row text and with the known column number you can 
   evaluate the corresponding character in this row. Furthermore, by using the method 
   @RowCol2Position() you can obtain the pixel position where the sign at the estimated 
   row/column is displayed. */
XPoint ViewsText_StringIndex2RowCol( ViewsText _this, XInt32 aIndex )
{
  XInt32 lastRow;
  XInt32 rowLen;
  XInt32 inx;
  XInt32 skip;
  XInt32 row;
  XInt32 col;
  XBool count;

  if ( !EwCompString( _this->String, 0 ) || ( _this->Font == 0 ))
    return _Const0002;

  if ( !_this->reparsed )
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  if ( aIndex < 0 )
    aIndex = 0;

  lastRow = EwGetStringChar( _this->flowString, 0 ) - 1;
  rowLen = EwGetStringChar( _this->flowString, 1 );
  inx = 1;
  skip = 2;
  row = 0;
  col = -1;
  count = 1;
  aIndex = aIndex + 2;

  while (( row < lastRow ) && (( inx + rowLen ) <= aIndex ))
  {
    inx = inx + rowLen;
    row = row + 1;
    skip = skip + 1;
    aIndex = aIndex + 1;
    rowLen = EwGetStringChar( _this->flowString, inx );
  }

  if ( aIndex > ( inx + rowLen ))
    aIndex = inx + rowLen;

  for ( ; aIndex > inx; inx = inx + 1 )
  {
    XChar ch = EwGetStringChar( _this->flowString, inx + 1 );

    if ( count )
      col = col + 1;

    count = (XBool)(( ch != 0xFEFF ) && ( ch != 0x000A ));
  }

  return EwNewPoint( col, row );
}

/* The method RowCol2StringIndex() tries to determine from the given row/column 
   position the index of the corresponding character in the original string @String. 
   The position is specified in the parameter aRowCol. This parameter contains in 
   its 'x' component the column number and in the 'y' component the row number as 
   it is displayed on the screen. The columns and rows are counted starting with 
   0. The returned index refers within @String the character which is displayed 
   at the specified row/column position.
   Please note, the passed row/column position identifies visible signs only in 
   the order as they appear on the screen. Any zero-width signs (e.g. eliminated 
   soft-hyphen, new-line, Bidi control marks, the escape sign '%', etc.) are ignored. 
   If the specified row is negative, the method returns the index corresponding 
   to the first sign in the first row. If the specified row does not exist, the 
   method returns the index corresponding to the character following the last sign 
   in the last row. If the specified column is negative, the method returns the 
   index corresponding to the first sign within the affected row. If the specified 
   column does not exist, the method returns the index of the character following 
   the last sign within the row. Furthermore, if the Text view is configured with 
   the property @Ellipsis set 'true', the method fails and returns the value 0 regardless 
   of the specified aRowCol parameter. 
   This method is useful if e.g. a text fragment found at the given row/column position 
   should be evaluated or modified. */
XInt32 ViewsText_RowCol2StringIndex( ViewsText _this, XPoint aRowCol )
{
  XInt32 row;
  XInt32 col;
  XInt32 inx;
  XInt32 skip;
  XInt32 noOfRows;
  XInt32 rowLen;
  XInt32 inx2;
  XBool pending;

  if ( !EwCompString( _this->String, 0 ) || ( _this->Font == 0 ))
    return 0;

  if ( !_this->reparsed )
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  row = aRowCol.Y;
  col = aRowCol.X;
  inx = 1;
  skip = 2;
  noOfRows = EwGetStringChar( _this->flowString, 0 );
  rowLen = EwGetStringChar( _this->flowString, 1 );

  if ( row >= noOfRows )
  {
    row = noOfRows - 1;
    col = EwGetStringLength( _this->flowString );
  }

  if ( row < 0 )
  {
    row = 0;
    col = 0;
  }

  if ( col < 0 )
    col = 0;

  while (( row > 0 ) && ( rowLen > 0 ))
  {
    inx = inx + rowLen;
    row = row - 1;
    skip = skip + 1;
    rowLen = EwGetStringChar( _this->flowString, inx );
  }

  inx2 = inx;
  pending = 0;

  while (( col >= 0 ) && ( rowLen > 1 ))
  {
    XChar ch = EwGetStringChar( _this->flowString, inx + 1 );
    inx = inx + 1;
    rowLen = rowLen - 1;
    pending = (XBool)(( ch == 0xFEFF ) || ( ch == 0x000A ));

    if ( !pending )
    {
      col = col - 1;
      inx2 = inx;
    }
  }

  if (( !pending && ( col >= 0 )) && ( EwGetStringChar( _this->flowString, inx + 
      1 ) == 0x0000 ))
    pending = 1;

  if ( pending )
    inx2 = inx2 + 1;

  inx2 = inx2 - skip;
  return inx2;
}

/* The method Position2RowCol() tries to determine the row and column numbers for 
   the specified pixel position aPoint. The position aPoint is expressed in coordinates 
   relative to the top-left corner of the view's @Owner. The method takes in account 
   all properties which do affect the position and the alignment of the text, e.g. 
   @Alignment, @Orientation, @ScrollOffset, @WrapText, etc. The returned value contains 
   in 'x' the column number and in 'y' the row number of the affected sign as it 
   is displayed on the screen. The first row/column has the number 0, the second 
   has the number 1, and so far.
   If the specified position points above the first or below the last row, the corresponding 
   row is selected. If the position points before the first sign of the affected 
   row, the first column 0 is selected. If the position points behind the last sign 
   in the row, the method returns the column number of the last sign in the row 
   +1.
   This method is useful, e.g. to determine which sign lies at a position touched 
   by the user. */
XPoint ViewsText_Position2RowCol( ViewsText _this, XPoint aPoint )
{
  XRect area;
  ResourcesFont font;
  XSet align;
  XInt32 noOfRows;
  XInt32 leading;
  XInt32 rowHeight;
  XInt32 row;
  XString rowString;
  XInt32 rowLen;
  XBool justified;
  XInt32 rw;
  XInt32 x;
  XInt32 col;

  if ( !EwCompString( _this->String, 0 ) || ( _this->Font == 0 ))
    return _Const0002;

  if ( !_this->reparsed )
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  area = ViewsText_GetContentArea( _this );

  if ( EwIsRectEmpty( area ))
    return _Const0002;

  font = _this->Font;
  align = _this->Alignment;
  noOfRows = EwGetStringChar( _this->flowString, 0 );
  leading = font->Leading;

  if ( aPoint.Y < area.Point1.Y )
    aPoint.Y = area.Point1.Y;

  if ( aPoint.Y >= area.Point2.Y )
    aPoint.Y = ( area.Point2.Y - 1 );

  rowHeight = ( font->Ascent + font->Descent ) + leading;
  row = ( aPoint.Y - area.Point1.Y ) / rowHeight;
  rowString = ViewsText_GetRowString( _this, row );
  rowLen = EwGetStringLength( rowString );
  justified = 0;

  if ((( align & ViewsTextAlignmentAlignHorzAuto ) == ViewsTextAlignmentAlignHorzAuto ))
  {
    if ( ViewsText_IsBaseDirectionRTL( _this ))
      align = ( align & ~ViewsTextAlignmentAlignHorzAuto ) | ViewsTextAlignmentAlignHorzRight;
    else
      align = ( align & ~ViewsTextAlignmentAlignHorzAuto ) | ViewsTextAlignmentAlignHorzLeft;
  }

  if ((( align & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified ) 
      && ( row < ( noOfRows - 1 )))
    justified = 1;

  if (( justified && ( EwStringFindChar( rowString, 0x0020, 0 ) < 0 )) && ( EwStringFindChar( 
      rowString, 0x00A0, 0 ) < 0 ))
    justified = 0;

  if ( justified )
  {
    XInt32 inx = 1;
    XInt32 row2 = row;

    while ( row2 > 0 )
    {
      inx = inx + EwGetStringChar( _this->flowString, inx );
      row2 = row2 - 1;
    }

    if (( EwGetStringChar( _this->flowString, inx + 1 ) == 0x000A ) || ( EwGetStringChar( 
        _this->flowString, ( inx + EwGetStringChar( _this->flowString, inx )) - 
        1 ) == 0x000A ))
      justified = 0;
  }

  rw = 0;
  x = 0;

  if ( justified )
    rw = EwGetRectW( area );
  else
    if ((( align & ViewsTextAlignmentAlignHorzRight ) == ViewsTextAlignmentAlignHorzRight ))
      x = EwGetRectW( area ) - ResourcesFont_GetTextAdvance( font, rowString, 0, 
      rowLen );
    else
      if ((( align & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter ))
        x = ( EwGetRectW( area ) / 2 ) - ( ResourcesFont_GetTextAdvance( font, rowString, 
        0, rowLen ) / 2 );

  col = ResourcesFont_GetTextColumnAtPosition( font, rowString, 0, rowLen, ( aPoint.X 
  - area.Point1.X ) - x, rw );

  if ( col < 0 )
    col = 0;

  return EwNewPoint( col, row );
}

/* The method RowCol2Position() returns the baseline-position where the view will 
   draw the sign for the row and column specified in the parameter aRowCol. This 
   parameter contains in 'x' the number of the column and in 'y' the number of the 
   row as it is displayed on the screen. The first row/column has the number 0, 
   the second the number 1, and so far. The returned position is expressed in coordinates 
   relative to the top-left corner of the view's @Owner. The method takes in account 
   all properties which do affect the position and the alignment of the text, e.g. 
   @Alignment, @Orientation, @ScrollOffset, @WrapText, etc.
   If the specified row is negative, the method returns the position of the first 
   sign in the first text row. If the specified row is not existing, the method 
   returns the position behind the last sign in the last text row. If the column 
   is negative, the method returns the position of the first sign in the corresponding 
   row. If the row does not contain the specified column, the position behind the 
   last sign in the row is returned.
   This method is useful, if e.g. additional decoration should be drawn around the 
   signs like a blinking caret in a text editor, etc. */
XPoint ViewsText_RowCol2Position( ViewsText _this, XPoint aRowCol )
{
  XInt32 noOfRows;
  ResourcesFont font;
  XSet align;
  XInt32 row;
  XInt32 col;
  XString rowString;
  XInt32 rowLen;
  XRect area;
  XBool justified;
  XInt32 leading;
  XInt32 y;
  XInt32 rw;
  XInt32 x;
  XInt32 pos;

  if ( !EwCompString( _this->String, 0 ) || ( _this->Font == 0 ))
    return _Const0002;

  if ( !_this->reparsed )
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  noOfRows = EwGetStringChar( _this->flowString, 0 );
  font = _this->Font;
  align = _this->Alignment;
  row = aRowCol.Y;
  col = aRowCol.X;

  if ( row >= noOfRows )
  {
    row = noOfRows - 1;
    col = EwGetStringLength( _this->flowString );
  }

  if ( row < 0 )
  {
    row = 0;
    col = 0;
  }

  rowString = ViewsText_GetRowString( _this, row );
  rowLen = EwGetStringLength( rowString );
  area = ViewsText_GetContentArea( _this );
  justified = 0;
  leading = font->Leading;

  if ((( align & ViewsTextAlignmentAlignHorzAuto ) == ViewsTextAlignmentAlignHorzAuto ))
  {
    if ( ViewsText_IsBaseDirectionRTL( _this ))
      align = ( align & ~ViewsTextAlignmentAlignHorzAuto ) | ViewsTextAlignmentAlignHorzRight;
    else
      align = ( align & ~ViewsTextAlignmentAlignHorzAuto ) | ViewsTextAlignmentAlignHorzLeft;
  }

  if ((( align & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified ) 
      && ( row < ( noOfRows - 1 )))
    justified = 1;

  if (( justified && ( EwStringFindChar( rowString, 0x0020, 0 ) < 0 )) && ( EwStringFindChar( 
      rowString, 0x00A0, 0 ) < 0 ))
    justified = 0;

  if ( justified )
  {
    XInt32 inx = 1;
    XInt32 row2 = row;

    while ( row2 > 0 )
    {
      inx = inx + EwGetStringChar( _this->flowString, inx );
      row2 = row2 - 1;
    }

    if (( EwGetStringChar( _this->flowString, inx + 1 ) == 0x000A ) || ( EwGetStringChar( 
        _this->flowString, ( inx + EwGetStringChar( _this->flowString, inx )) - 
        1 ) == 0x000A ))
      justified = 0;
  }

  y = ( area.Point1.Y + ( row * (( font->Ascent + font->Descent ) + leading ))) 
  + font->Ascent;
  rw = 0;
  x = area.Point1.X;

  if ( justified )
    rw = EwGetRectW( area );
  else
    if ((( align & ViewsTextAlignmentAlignHorzRight ) == ViewsTextAlignmentAlignHorzRight ))
      x = area.Point2.X - ResourcesFont_GetTextAdvance( font, rowString, 0, rowLen );
    else
      if ((( align & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter ))
        x = ( x + ( EwGetRectW( area ) / 2 )) - ( ResourcesFont_GetTextAdvance( 
        font, rowString, 0, rowLen ) / 2 );

  pos = ResourcesFont_GetPositionAtTextColumn( font, rowString, 0, rowLen, col, 
  rw );

  if ( pos < 0 )
    pos = 0;

  return EwNewPoint( x + pos, y );
}

/* The method GetRowString() returns the content of the row with the number specified 
   in the parameter aRow. The first row has the number 0, the second 1, and so far. 
   If the row is not available, an empty string is returned. Please note, if the 
   view is configured with @EnableBidiText to process and display bi-directional 
   text and the affected text row is reversed, the method returns the Bidi processed 
   string as it appears on the screen.
   All invisible signs, like the soft-hyphen sign, the '%' escape sign, the new-line 
   sign, Bidi control codes as well as the superfluous space signs found eventually 
   after a line wrap are removed from the returned string. In other words, the returned 
   string corresponds to the text displayed in the row. */
XString ViewsText_GetRowString( ViewsText _this, XInt32 aRow )
{
  XInt32 noOfRows;
  XInt32 inx;
  XInt32 start;
  XInt32 end;
  XChar ch;
  XString rowString;
  XInt32 inx1;

  if ( !EwCompString( _this->String, 0 ) || ( _this->Font == 0 ))
    return 0;

  if ( !_this->reparsed )
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  noOfRows = EwGetStringChar( _this->flowString, 0 );
  inx = 1;

  if ((( _this->Font == 0 ) || ( aRow < 0 )) || ( aRow >= noOfRows ))
    return 0;

  while ( aRow > 0 )
  {
    inx = inx + EwGetStringChar( _this->flowString, inx );
    aRow = aRow - 1;
  }

  start = inx;
  end = inx + EwGetStringChar( _this->flowString, inx );
  ch = 0x0000;

  do
  {
    start = start + 1;
    ch = EwGetStringChar( _this->flowString, start );
  }
  while ((( ch == 0xFEFF ) || ( ch == 0x000A )) && ( start <= end ));

  do
  {
    end = end - 1;
    ch = EwGetStringChar( _this->flowString, end );
  }
  while ((( ch == 0xFEFF ) || ( ch == 0x000A )) && ( start <= end ));

  rowString = EwStringMiddle( _this->flowString, start, ( end - start ) + 1 );

  for ( inx1 = EwStringFindChar( rowString, 0xFEFF, 0 ); inx1 >= 0; inx1 = EwStringFindChar( 
       rowString, 0xFEFF, inx1 + 1 ))
  {
    XInt32 inx2 = inx1 + 1;

    while ( EwGetStringChar( rowString, inx2 ) == 0xFEFF )
      inx2 = inx2 + 1;

    rowString = EwStringRemove( rowString, inx1, inx2 - inx1 );
  }

  return rowString;
}

/* The method GetContentArea() returns the position and the size of an area where 
   the view will show the text. This area is expressed in coordinates relative to 
   the top-left corner of the view's @Owner. The method takes in account all properties 
   which do affect the position and the alignment of the text, e.g. @Alignment, 
   @Orientation, @ScrollOffset, @WrapText, etc. */
XRect ViewsText_GetContentArea( ViewsText _this )
{
  XInt32 leading;
  XInt32 rh;
  XSet align;
  XRect bounds;
  XInt32 width;
  XInt32 height;
  XRect rd;
  XRect rs;

  if ( !EwCompString( _this->String, 0 ) || ( _this->Font == 0 ))
    return _Const0003;

  if ( !_this->reparsed )
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  if ( !EwCompString( _this->flowString, 0 ))
    return _Const0003;

  leading = _this->Font->Leading;
  rh = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;

  if ( !EwCompPoint( _this->textSize, _Const0002 ))
    _this->textSize.X = ResourcesFont_GetFlowTextAdvance( _this->Font, _this->flowString );

  _this->textSize.Y = (( EwGetStringChar( _this->flowString, 0 ) * rh ) - leading );
  align = _this->Alignment;
  bounds = _this->Super1.Bounds;
  width = EwGetRectW( bounds );
  height = EwGetRectH( bounds );
  rd = EwNewRect( 0, 0, width, height );
  rs = EwNewRect2Point( rd.Point1, EwMovePointPos( rd.Point1, _this->textSize ));

  if ((( align & ViewsTextAlignmentAlignHorzAuto ) == ViewsTextAlignmentAlignHorzAuto ))
  {
    if ( ViewsText_IsBaseDirectionRTL( _this ))
      align = ( align & ~ViewsTextAlignmentAlignHorzAuto ) | ViewsTextAlignmentAlignHorzRight;
    else
      align = ( align & ~ViewsTextAlignmentAlignHorzAuto ) | ViewsTextAlignmentAlignHorzLeft;
  }

  if ((( align & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified ))
  {
    XInt32 maxWidth;
    maxWidth = width;

    if ( maxWidth < 0 )
      maxWidth = 0;

    if ( maxWidth > EwGetRectW( rs ))
      rs = EwSetRectW( rs, maxWidth );
  }

  if ( EwGetRectW( rs ) != EwGetRectW( rd ))
  {
    if ((( align & ViewsTextAlignmentAlignHorzRight ) == ViewsTextAlignmentAlignHorzRight ))
      rs = EwSetRectX( rs, rd.Point2.X - EwGetRectW( rs ));
    else
      if ((( align & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter ))
        rs = EwSetRectX( rs, ( rd.Point1.X + ( EwGetRectW( rd ) / 2 )) - ( EwGetRectW( 
        rs ) / 2 ));
  }

  if ( EwGetRectH( rs ) != EwGetRectH( rd ))
  {
    if ((( align & ViewsTextAlignmentAlignVertBottom ) == ViewsTextAlignmentAlignVertBottom ))
      rs = EwSetRectY( rs, rd.Point2.Y - EwGetRectH( rs ));
    else
      if ((( align & ViewsTextAlignmentAlignVertCenter ) == ViewsTextAlignmentAlignVertCenter ))
        rs = EwSetRectY( rs, ( rd.Point1.Y + ( EwGetRectH( rd ) / 2 )) - ( EwGetRectH( 
        rs ) / 2 ));
  }

  rs = EwMoveRectPos( rs, bounds.Point1 );
  return EwMoveRectPos( rs, _this->ScrollOffset );
}

/* Variants derived from the class : 'Views::Text' */
EW_DEFINE_CLASS_VARIANTS( ViewsText )
EW_END_OF_CLASS_VARIANTS( ViewsText )

/* Virtual Method Table (VMT) for the class : 'Views::Text' */
EW_DEFINE_CLASS( ViewsText, CoreRectView, SlideHandler, OnUpdate, flowString, flowString, 
                 flowString, textSize, "Views::Text" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsText_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  ViewsText_OnSetBounds,
EW_END_OF_CLASS( ViewsText )

/* Initializer for the class 'Views::WarpView' */
void ViewsWarpView__Init( ViewsWarpView _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreQuadView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ViewsWarpView );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ViewsWarpView );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Super2.viewState = CoreViewStateAlphaBlended | CoreViewStateVisible;
  _this->Quality = 1;
}

/* Re-Initializer for the class 'Views::WarpView' */
void ViewsWarpView__ReInit( ViewsWarpView _this )
{
  /* At first re-initialize the super class ... */
  CoreQuadView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Views::WarpView' */
void ViewsWarpView__Done( ViewsWarpView _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreQuadView );

  /* Don't forget to deinitialize the super class ... */
  CoreQuadView__Done( &_this->_.Super );
}

/* 'C' function for method : 'Views::WarpView.OnSetPoint4()' */
void ViewsWarpView_OnSetPoint4( ViewsWarpView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Super1.Point4 ))
    return;

  CoreQuadView_OnSetPoint4((CoreQuadView)_this, value );
  _this->vertices[ 3 ][ 0 ] = (XFloat)value.X;
  _this->vertices[ 3 ][ 1 ] = (XFloat)value.Y;
  _this->vertices[ 3 ][ 2 ] = 1.000000f;
  _this->newUpdateCase = 'E';
  EwPostSignal( EwNewSlot( _this, ViewsWarpView__update ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::WarpView.OnSetPoint3()' */
void ViewsWarpView_OnSetPoint3( ViewsWarpView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Super1.Point3 ))
    return;

  CoreQuadView_OnSetPoint3((CoreQuadView)_this, value );
  _this->vertices[ 2 ][ 0 ] = (XFloat)value.X;
  _this->vertices[ 2 ][ 1 ] = (XFloat)value.Y;
  _this->vertices[ 2 ][ 2 ] = 1.000000f;
  _this->newUpdateCase = 'E';
  EwPostSignal( EwNewSlot( _this, ViewsWarpView__update ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::WarpView.OnSetPoint2()' */
void ViewsWarpView_OnSetPoint2( ViewsWarpView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Super1.Point2 ))
    return;

  CoreQuadView_OnSetPoint2((CoreQuadView)_this, value );
  _this->vertices[ 1 ][ 0 ] = (XFloat)value.X;
  _this->vertices[ 1 ][ 1 ] = (XFloat)value.Y;
  _this->vertices[ 1 ][ 2 ] = 1.000000f;
  _this->newUpdateCase = 'E';
  EwPostSignal( EwNewSlot( _this, ViewsWarpView__update ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::WarpView.OnSetPoint1()' */
void ViewsWarpView_OnSetPoint1( ViewsWarpView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Super1.Point1 ))
    return;

  CoreQuadView_OnSetPoint1((CoreQuadView)_this, value );
  _this->vertices[ 0 ][ 0 ] = (XFloat)value.X;
  _this->vertices[ 0 ][ 1 ] = (XFloat)value.Y;
  _this->vertices[ 0 ][ 2 ] = 1.000000f;
  _this->newUpdateCase = 'E';
  EwPostSignal( EwNewSlot( _this, ViewsWarpView__update ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::WarpView.calculateLight()' */
void ViewsWarpView_calculateLight( ViewsWarpView _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  return;
}

/* 'C' function for method : 'Views::WarpView.update()' */
void ViewsWarpView_update( ViewsWarpView _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->newUpdateCase == 0x0000 )
    return;

  if ( _this->newUpdateCase == 'E' )
  {
    GraphicsWarpMatrix m = EwNewObject( GraphicsWarpMatrix, 0 );
    m = GraphicsWarpMatrix_DeriveFromQuad( m, _this->vertices[ 0 ][ 0 ], _this->vertices[ 
    0 ][ 1 ], _this->vertices[ 1 ][ 0 ], _this->vertices[ 1 ][ 1 ], _this->vertices[ 
    2 ][ 0 ], _this->vertices[ 2 ][ 1 ], _this->vertices[ 3 ][ 0 ], _this->vertices[ 
    3 ][ 1 ]);

    if ( m != 0 )
    {
      GraphicsWarpMatrix_CalculateZ( m, 0.000000f, 0.000000f );
      _this->vertices[ 0 ][ 2 ] = m->Z * 240.000000f;
      GraphicsWarpMatrix_CalculateZ( m, 1.000000f, 0.000000f );
      _this->vertices[ 1 ][ 2 ] = m->Z * 240.000000f;
      GraphicsWarpMatrix_CalculateZ( m, 1.000000f, 1.000000f );
      _this->vertices[ 2 ][ 2 ] = m->Z * 240.000000f;
      GraphicsWarpMatrix_CalculateZ( m, 0.000000f, 1.000000f );
      _this->vertices[ 3 ][ 2 ] = m->Z * 240.000000f;
    }

    ViewsWarpView_calculateLight( _this );
  }

  _this->oldUpdateCase = _this->newUpdateCase;
  _this->newUpdateCase = 0x0000;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));
}

/* Wrapper function for the virtual method : 'Views::WarpView.update()' */
__declspec( naked ) void ViewsWarpView__update( void* _this, XObject sender )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 108 ]
  }
}

/* 'C' function for method : 'Views::WarpView.OnSetQuality()' */
void ViewsWarpView_OnSetQuality( ViewsWarpView _this, XBool value )
{
  if ( value == _this->Quality )
    return;

  _this->Quality = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));
}

/* 'C' function for method : 'Views::WarpView.OnSetSourceArea()' */
void ViewsWarpView_OnSetSourceArea( ViewsWarpView _this, XRect value )
{
  if ( !EwCompRect( value, _this->SourceArea ))
    return;

  _this->SourceArea = value;

  if (((( _this->oldUpdateCase == 'E' ) && ( _this->newUpdateCase == 0x0000 )) && 
      ( _this->Super2.Owner != 0 )) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  if (( _this->oldUpdateCase != 'E' ) && ( _this->newUpdateCase == 0x0000 ))
  {
    _this->newUpdateCase = _this->oldUpdateCase;
    EwPostSignal( EwNewSlot( _this, ViewsWarpView__update ), ((XObject)_this ));
  }
}

/* Variants derived from the class : 'Views::WarpView' */
EW_DEFINE_CLASS_VARIANTS( ViewsWarpView )
EW_END_OF_CLASS_VARIANTS( ViewsWarpView )

/* Virtual Method Table (VMT) for the class : 'Views::WarpView' */
EW_DEFINE_CLASS( ViewsWarpView, CoreQuadView, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Views::WarpView" )
  CoreQuadView_initLayoutContext,
  CoreView_GetRoot,
  CoreView_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreQuadView_ArrangeView,
  CoreQuadView_MoveView,
  CoreQuadView_GetExtent,
  CoreView_ChangeViewState,
  ViewsWarpView_OnSetPoint4,
  ViewsWarpView_OnSetPoint3,
  ViewsWarpView_OnSetPoint2,
  ViewsWarpView_OnSetPoint1,
  ViewsWarpView_update,
EW_END_OF_CLASS( ViewsWarpView )

/* Initializer for the class 'Views::WarpGroup' */
void ViewsWarpGroup__Init( ViewsWarpGroup _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ViewsWarpView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ViewsWarpGroup );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ViewsWarpGroup );

  /* ... and initialize objects, variables, properties, etc. */
  _this->i11 = 1.000000f;
  _this->i22 = 1.000000f;
  _this->i33 = 1.000000f;
  _this->Opacity = 255;
}

/* Re-Initializer for the class 'Views::WarpGroup' */
void ViewsWarpGroup__ReInit( ViewsWarpGroup _this )
{
  /* At first re-initialize the super class ... */
  ViewsWarpView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Views::WarpGroup' */
void ViewsWarpGroup__Done( ViewsWarpGroup _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ViewsWarpView );

  /* Don't forget to deinitialize the super class ... */
  ViewsWarpView__Done( &_this->_.Super );
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you never will need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsWarpGroup_Draw( ViewsWarpGroup _this, GraphicsCanvas aCanvas, XRect aClip, 
  XPoint aOffset, XInt32 aOpacity, XBool aBlend )
{
  XFloat ofsX;
  XFloat ofsY;
  XRect area;
  XInt32 o1;
  XInt32 o2;
  XInt32 o3;
  XInt32 o4;
  XInt32 o;
  XColor c1;
  XColor c2;
  XColor c3;
  XColor c4;

  if ( _this->bitmap == 0 )
    return;

  ResourcesBitmap__Update( _this->bitmap );
  ofsX = (XFloat)aOffset.X;
  ofsY = (XFloat)aOffset.Y;
  area = EwIntersectRect2( _this->Super1.SourceArea, EwNewRect2Point( _Const0002, 
  _this->Super1.bitmapSize ));
  aBlend = (XBool)( aBlend && (( _this->Super3.viewState & CoreViewStateAlphaBlended ) 
  == CoreViewStateAlphaBlended ));
  aOpacity = aOpacity + 1;
  o = _this->Opacity;
  o1 = o2 = o3 = o4 = o;
  c1 = EwNewColor( 255, 255, 255, (XUInt8)(( aOpacity * o1 ) >> 8 ));
  c2 = EwNewColor( 255, 255, 255, (XUInt8)(( aOpacity * o2 ) >> 8 ));
  c3 = EwNewColor( 255, 255, 255, (XUInt8)(( aOpacity * o3 ) >> 8 ));
  c4 = EwNewColor( 255, 255, 255, (XUInt8)(( aOpacity * o4 ) >> 8 ));
  aClip = EwIntersectRect2( aClip, EwMoveRectPos( _Const0003, aOffset ));
  GraphicsCanvas_WarpBitmap( aCanvas, aClip, _this->bitmap, 0, _this->Super1.vertices[ 
  0 ][ 0 ] + ofsX, _this->Super1.vertices[ 0 ][ 1 ] + ofsY, _this->Super1.vertices[ 
  0 ][ 2 ], _this->Super1.vertices[ 1 ][ 0 ] + ofsX, _this->Super1.vertices[ 1 ][ 
  1 ] + ofsY, _this->Super1.vertices[ 1 ][ 2 ], _this->Super1.vertices[ 2 ][ 0 ] 
  + ofsX, _this->Super1.vertices[ 2 ][ 1 ] + ofsY, _this->Super1.vertices[ 2 ][ 
  2 ], _this->Super1.vertices[ 3 ][ 0 ] + ofsX, _this->Super1.vertices[ 3 ][ 1 ] 
  + ofsY, _this->Super1.vertices[ 3 ][ 2 ], area, c1, c2, c3, c4, aBlend, _this->Super1.Quality );
}

/* The method HandleEvent() is invoked automatically if the view has received an 
   event. For example, touching the view on the touch screen can cause the view 
   to receive a Core::CursorEvent event. Within this method the view can evaluate 
   the event and react to it.
   Whether the event has been handled by the view or not is determined by the return 
   value. To sign an event as handled HandleEvent() should return a valid object 
   (e.g. 'this'). If the event has not been handled, 'null' should be returned.
   Depending on the kind of the event, the framework can continue dispatching of 
   still unhandled events. For example, keyboard events (Core::KeyEvent class) are 
   automatically delivered to the superior @Owner of the receiver view if this view 
   has ignored the event.
   HandleEvent() is invoked automatically by the framework, so you never should 
   need to invoke it directly. However you can prepare and post new events by using 
   the methods DispatchEvent() and BroadcastEvent() of the application class Core::Root. */
XObject ViewsWarpGroup_HandleEvent( ViewsWarpGroup _this, CoreEvent aEvent )
{
  CoreCursorEvent event1;
  CoreDragEvent event2;
  XPoint offset;
  CoreGroup grp;
  CoreView view;

  if (( _this->Group == 0 ) || ( _this->cursorTargetView == 0 ))
    return 0;

  event1 = EwCastObject( aEvent, CoreCursorEvent );
  event2 = EwCastObject( aEvent, CoreDragEvent );

  if (( event1 == 0 ) && ( event2 == 0 ))
    return 0;

  offset = _Const0002;
  grp = _this->cursorTargetView->Owner;

  while (( grp != 0 ) && ( grp != _this->Group ))
  {
    offset = EwMovePointNeg( offset, grp->Super1.Bounds.Point1 );
    grp = grp->Super2.Owner;
  }

  view = _this->cursorTargetView;

  if (( event1 != 0 ) && !event1->Down )
    _this->cursorTargetView = 0;

  if ( event1 != 0 )
  {
    event1->CurrentPos = EwMovePointPos( ViewsWarpGroup_mapPosition( _this, event1->CurrentPos ), 
    offset );
    event1->HittingPos = EwMovePointPos( ViewsWarpGroup_mapPosition( _this, event1->HittingPos ), 
    offset );
    return CoreView__HandleEvent( view, ((CoreEvent)event1 ));
  }

  if ( event2 != 0 )
  {
    XPoint oldPos = EwMovePointPos( ViewsWarpGroup_mapPosition( _this, EwMovePointNeg( 
      event2->CurrentPos, event2->Offset )), offset );
    event2->CurrentPos = EwMovePointPos( ViewsWarpGroup_mapPosition( _this, event2->CurrentPos ), 
    offset );
    event2->HittingPos = EwMovePointPos( ViewsWarpGroup_mapPosition( _this, event2->HittingPos ), 
    offset );
    event2->Offset = EwMovePointNeg( event2->CurrentPos, oldPos );
    return CoreView__HandleEvent( view, ((CoreEvent)event2 ));
  }

  return CoreView_HandleEvent((CoreView)_this, aEvent );
}

/* The method CursorHitTest() is invoked automatically in order to determine whether 
   the view is interested in the receipt of cursor events or not. This method will 
   be invoked immediately after the user has tapped the visible area of the view. 
   If the view is not interested in the cursor event, the framework repeats this 
   procedure for the next behind view until a willing view has been found or all 
   views are evaluated.
   In the implementation of the method the view can evaluate the passed aArea parameter. 
   It determines the place where the user has tapped the view with his fingertip 
   expressed in the coordinates of the views @Owner. The method can test e.g. whether 
   the tapped area does intersect any touchable areas within the view, etc. The 
   affected finger is identified in the parameter aFinger. The first finger (or 
   the first mouse device button) has the number 0.
   The parameter aStrikeCount determines how many times the same area has been tapped 
   in series. This is useful to detect series of multiple touches, e.g. in case 
   of the double click, aStrikeCount == 2.
   The parameter aDedicatedView, if it is not 'null', restricts the event to be 
   handled by this view only. If aDedicatedView == null, no special restriction 
   exists.
   This method is also invoked if during an existing grab cycle the current target 
   view has decided to resign and deflect the cursor events to another view. This 
   is usually the case after the user has performed a gesture the current target 
   view is not interested to process. Thereupon, the system looks for another view 
   willing to take over the cursor event processing after the performed gesture. 
   Which gesture has caused the operation, is specified in the parameter aRetargetReason.
   If the view is willing to process the event, the method should create, initialize 
   and return a new Core::CursorHit object. This object identify the willing view. 
   Otherwise the method should return 'null'.
   CursorHitTest() is invoked automatically by the framework, so you never should 
   need to invoke it directly. This method is predetermined for the hit-test only. 
   The proper processing of events should take place in the @HandleEvent() method 
   by reacting to Core::CursorEvent and Core::DragEvent events. */
CoreCursorHit ViewsWarpGroup_CursorHitTest( ViewsWarpGroup _this, XRect aArea, XInt32 
  aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
{
  XPoint pos;
  XRect srcArea;
  CoreCursorHit hit;

  if (( _this->Group == 0 ) || !(( _this->Group->Super2.viewState & ( CoreViewStateEnabled 
      | CoreViewStateTouchable )) == ( CoreViewStateEnabled | CoreViewStateTouchable )))
    return 0;

  pos = EwGetRectCenter( aArea );
  pos = ViewsWarpGroup_mapPosition( _this, pos );
  srcArea = EwIntersectRect2( _this->Super1.SourceArea, EwNewRect2Point( _Const0002, 
  _this->Super1.bitmapSize ));

  if ( !EwIsPointInRect( srcArea, pos ))
    return 0;

  hit = CoreView__CursorHitTest( _this->Group, EwMoveRectPos( EwMoveRectPos( EwGetRectORect( 
  aArea ), pos ), _this->Group->Super1.Bounds.Point1 ), aFinger, aStrikeCount, aDedicatedView, 
  aRetargetReason );

  if ( hit != 0 )
    _this->cursorTargetView = hit->View;
  else
    _this->cursorTargetView = 0;

  if ( _this->cursorTargetView != 0 )
    return CoreCursorHit_Initialize( EwNewObject( CoreCursorHit, 0 ), ((CoreView)_this ), 
      _Const0002 );

  return 0;
}

/* 'C' function for method : 'Views::WarpGroup.update()' */
void ViewsWarpGroup_update( ViewsWarpGroup _this, XObject sender )
{
  ViewsWarpView_update((ViewsWarpView)_this, sender );
  _this->invMatrixValid = 0;
}

/* 'C' function for method : 'Views::WarpGroup.updateInvMatrix()' */
void ViewsWarpGroup_updateInvMatrix( ViewsWarpGroup _this )
{
  XFloat x1 = _this->Super1.vertices[ 0 ][ 0 ];
  XFloat y1 = _this->Super1.vertices[ 0 ][ 1 ];
  XFloat x2 = _this->Super1.vertices[ 1 ][ 0 ];
  XFloat y2 = _this->Super1.vertices[ 1 ][ 1 ];
  XFloat x3 = _this->Super1.vertices[ 2 ][ 0 ];
  XFloat y3 = _this->Super1.vertices[ 2 ][ 1 ];
  XFloat x4 = _this->Super1.vertices[ 3 ][ 0 ];
  XFloat y4 = _this->Super1.vertices[ 3 ][ 1 ];
  XFloat deltaX1 = x2 - x3;
  XFloat deltaY1 = y2 - y3;
  XFloat deltaX2 = x4 - x3;
  XFloat deltaY2 = y4 - y3;
  XFloat sumX = (( x1 - x2 ) + x3 ) - x4;
  XFloat sumY = (( y1 - y2 ) + y3 ) - y4;
  XFloat det = ( deltaX1 * deltaY2 ) - ( deltaY1 * deltaX2 );
  XFloat g;
  XFloat h;
  XFloat a;
  XFloat b;
  XFloat c;
  XFloat d;
  XFloat e;
  XFloat f;

  if ( det == 0.000000f )
    return;

  g = (( sumX * deltaY2 ) - ( sumY * deltaX2 )) / det;
  h = (( deltaX1 * sumY ) - ( deltaY1 * sumX )) / det;
  a = ( x2 - x1 ) + ( g * x2 );
  b = ( x4 - x1 ) + ( h * x4 );
  c = x1;
  d = ( y2 - y1 ) + ( g * y2 );
  e = ( y4 - y1 ) + ( h * y4 );
  f = y1;
  _this->i11 = e - ( f * h );
  _this->i12 = ( c * h ) - b;
  _this->i13 = ( b * f ) - ( c * e );
  _this->i21 = ( f * g ) - d;
  _this->i22 = a - ( c * g );
  _this->i23 = ( c * d ) - ( a * f );
  _this->i31 = ( d * h ) - ( e * g );
  _this->i32 = ( b * g ) - ( a * h );
  _this->i33 = ( a * e ) - ( b * d );
  _this->invMatrixValid = 1;
}

/* 'C' function for method : 'Views::WarpGroup.mapPosition()' */
XPoint ViewsWarpGroup_mapPosition( ViewsWarpGroup _this, XPoint aPos )
{
  XFloat xd;
  XFloat yd;
  XFloat xs;
  XFloat ys;
  XFloat qs;
  XRect srcArea;

  if ( !_this->invMatrixValid )
    ViewsWarpGroup_updateInvMatrix( _this );

  xd = (XFloat)aPos.X;
  yd = (XFloat)aPos.Y;
  xs = (( xd * _this->i11 ) + ( yd * _this->i12 )) + _this->i13;
  ys = (( xd * _this->i21 ) + ( yd * _this->i22 )) + _this->i23;
  qs = (( xd * _this->i31 ) + ( yd * _this->i32 )) + _this->i33;

  if ( qs != 0.000000f )
  {
    xs = xs / qs;
    ys = ys / qs;
  }

  srcArea = EwIntersectRect2( _this->Super1.SourceArea, EwNewRect2Point( _Const0002, 
  _this->Super1.bitmapSize ));
  xs = xs * (XFloat)EwGetRectW( srcArea );
  ys = ys * (XFloat)EwGetRectH( srcArea );
  return EwMovePointPos( EwNewPoint((XInt32)xs, (XInt32)ys ), srcArea.Point1 );
}

/* 'C' function for method : 'Views::WarpGroup.observerSlot()' */
void ViewsWarpGroup_observerSlot( ViewsWarpGroup _this, XObject sender )
{
  XPoint oldBitmapSize;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldBitmapSize = _this->Super1.bitmapSize;

  if ( _this->Group != 0 )
    _this->bitmap = ((ResourcesBitmap)_this->Group->buffer );
  else
    _this->bitmap = 0;

  if ( _this->bitmap != 0 )
    _this->Super1.bitmapSize = _this->bitmap->FrameSize;
  else
    _this->Super1.bitmapSize = _Const0002;

  if ((( !EwCompPoint( oldBitmapSize, _this->Super1.bitmapSize ) || (( _this->Super1.oldUpdateCase 
      == 'E' ) && ( _this->Super1.newUpdateCase == 0x0000 ))) && ( _this->Super3.Owner 
      != 0 )) && (( _this->Super3.viewState & CoreViewStateVisible ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super3.Owner, CoreView__GetExtent( _this ));

  if ((( _this->Super1.oldUpdateCase != 'E' ) && ( _this->Super1.newUpdateCase == 
      0x0000 )) && EwCompPoint( oldBitmapSize, _this->Super1.bitmapSize ))
  {
    _this->Super1.newUpdateCase = _this->Super1.oldUpdateCase;
    EwPostSignal( EwNewSlot( _this, ViewsWarpView__update ), ((XObject)_this ));
  }
}

/* 'C' function for method : 'Views::WarpGroup.OnSetOpacity()' */
void ViewsWarpGroup_OnSetOpacity( ViewsWarpGroup _this, XInt32 value )
{
  if ( value == _this->Opacity )
    return;

  _this->Opacity = value;

  if (( _this->Super3.Owner != 0 ) && (( _this->Super3.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super3.Owner, CoreView__GetExtent( _this ));
}

/* 'C' function for method : 'Views::WarpGroup.OnSetGroup()' */
void ViewsWarpGroup_OnSetGroup( ViewsWarpGroup _this, CoreGroup value )
{
  if ( value == _this->Group )
    return;

  if (( value != 0 ) && ( value == _this->Super3.Owner ))
  {
    EwThrow( EwLoadString( &_Const0007 ));
    return;
  }

  if ( _this->Group != 0 )
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsWarpGroup_observerSlot ), (XObject)_this->Group, 
      0 );
    _this->bitmap = 0;
  }

  _this->Group = value;

  if ( value != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ViewsWarpGroup_observerSlot ), (XObject)value, 
      0 );
    _this->bitmap = ((ResourcesBitmap)value->buffer );
  }

  EwSignal( EwNewSlot( _this, ViewsWarpGroup_observerSlot ), ((XObject)_this ));
}

/* Variants derived from the class : 'Views::WarpGroup' */
EW_DEFINE_CLASS_VARIANTS( ViewsWarpGroup )
EW_END_OF_CLASS_VARIANTS( ViewsWarpGroup )

/* Virtual Method Table (VMT) for the class : 'Views::WarpGroup' */
EW_DEFINE_CLASS( ViewsWarpGroup, ViewsWarpView, cursorTargetView, i11, i11, i11, 
                 i11, i11, "Views::WarpGroup" )
  CoreQuadView_initLayoutContext,
  CoreView_GetRoot,
  ViewsWarpGroup_Draw,
  ViewsWarpGroup_HandleEvent,
  ViewsWarpGroup_CursorHitTest,
  CoreQuadView_ArrangeView,
  CoreQuadView_MoveView,
  CoreQuadView_GetExtent,
  CoreView_ChangeViewState,
  ViewsWarpView_OnSetPoint4,
  ViewsWarpView_OnSetPoint3,
  ViewsWarpView_OnSetPoint2,
  ViewsWarpView_OnSetPoint1,
  ViewsWarpGroup_update,
EW_END_OF_CLASS( ViewsWarpGroup )

/* Embedded Wizard */
