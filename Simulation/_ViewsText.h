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

#ifndef _ViewsText_H
#define _ViewsText_H

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

#include "_CoreRectView.h"

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

/* Forward declaration of the class Core::SlideTouchHandler */
#ifndef _CoreSlideTouchHandler_
  EW_DECLARE_CLASS( CoreSlideTouchHandler )
#define _CoreSlideTouchHandler_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
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

/* Forward declaration of the class Views::Text */
#ifndef _ViewsText_
  EW_DECLARE_CLASS( ViewsText )
#define _ViewsText_
#endif


/* The class Views::Text provides a kind of view specialized to print the text. 
   The text is stored in the property @String. It can consist of several rows separated 
   by the new-line sign '\\n'. Optionally an automatic text wrap ca be performed 
   if the property @WrapText is 'true'. The automatic text wrap takes place primarily 
   between words. More sophisticated text wrap can be controlled by following special 
   signs used within the text:
   - The tilde sign '~' and the soft-hyphen sign '\x00AD' identify a potential text 
   wrap position. They are usually not displayed until the text wrap took place 
   at their position. Then the text row is terminated with a hyphen '-' sign.
   - The circumflex accent '^' sign and '\x200B' zero-width non breakable space 
   identify potential text wrap positions without ever being visible.
   In order to be able to output the special characters '^' and '~' and as regular 
   signs, the character '%' can be applied in front of the affected sign to convert 
   it to a regular sign. To show the '%' sign itself, use '%%' sequence.
   Beside the automatic text wrap, an explicit linefeed is possible when the '\n' 
   sign has been found in the string.
   The text output is performed with the font specified in the property @Font. The 
   position and the size of the area where the text is drawn is determined by the 
   property @Bounds. If the size of this area differs from the size of the text, 
   the text can be aligned. This is controlled by the property @Alignment. With 
   the property @Orientation the displayed content can be rotated. The color to 
   print the text is defined by the property @Color. Alternatively, the text can 
   be drawn with a color gradient specified by the properties @ColorTL, @ColorTR, 
   @ColorBL and @ColorBR. For each view's corner different color can be set.
   The property @SlideHandler permits the text view to be connected together with 
   an interactive Core::SlideTouchHandler. In this manner the user can scroll the 
   displayed text by simply touching the slide handler on the screen. Alternatively, 
   the scroll position can be controlled by the value of the property @ScrollOffset.
   The visibility of the text is controlled by the properties @Visible and @Embedded. 
   In particular the property @Embedded can determine whether the corresponding 
   view is limited (== embedded) to the boundary of a sibling Core::Outline view 
   or not. The embedding of views within a Core::Outline allows a kind of sub-groups 
   within the GUI component itself. Very useful for any kind of scrollable lists, 
   menus, etc.
   With the property @EnableBidiText the view can be configured to treat the original 
   string @String as containing bi-directional text. In such case, the string is 
   processed by the Unicode Bidirectional Algorithm. If the text contains Arabic 
   characters, the algorithm performs the shaping and determines the obligatory 
   Arabic ligatures. With the method @IsBidiText(), @IsBaseDirectionRTL() and @IsCharDirectionRTL() 
   the resulting state of the processed text can be determined.
   The text provides an additional set of methods useful to access the text rows 
   and glyphs, e.g. @GetNoOfRows(), @GetRowArea(), @RowCol2Position(), @RowCol2StringIndex(), 
   @StringIndex2RowCol(), etc. These methods can be invoked from a slot method assigned 
   to the property @OnUpdate. In this manner text position can be calculated or 
   additional decorations can be drawn. */
EW_DEFINE_FIELDS( ViewsText, CoreRectView )
  EW_PROPERTY( SlideHandler,    CoreSlideTouchHandler )
  EW_PROPERTY( Font,            ResourcesFont )
  EW_PROPERTY( OnUpdate,        XSlot )
  EW_VARIABLE( flowString,      XString )
  EW_PROPERTY( String,          XString )
  EW_VARIABLE( bidiContext,     XHandle )
  EW_VARIABLE( textSize,        XPoint )
  EW_PROPERTY( ColorBR,         XColor )
  EW_PROPERTY( ScrollOffset,    XPoint )
  EW_PROPERTY( Alignment,       XSet )
  EW_PROPERTY( Color,           XColor )
  EW_PROPERTY( WrapText,        XBool )
  EW_PROPERTY( AutoSize,        XBool )
  EW_PROPERTY( Ellipsis,        XBool )
  EW_PROPERTY( EnableBidiText,  XBool )
  EW_VARIABLE( reparsed,        XBool )
EW_END_OF_FIELDS( ViewsText )

/* Virtual Method Table (VMT) for the class : 'Views::Text' */
EW_DEFINE_METHODS( ViewsText, CoreRectView )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( ViewsText _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreView _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreView _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( ViewsText _this, XRect value )
EW_END_OF_METHODS( ViewsText )

/* 'C' function for method : 'Views::Text.Done()' */
void ViewsText_Done( ViewsText _this );

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
  aOffset, XInt32 aOpacity, XBool aBlend );

/* 'C' function for method : 'Views::Text.OnSetBounds()' */
void ViewsText_OnSetBounds( ViewsText _this, XRect value );

/* 'C' function for method : 'Views::Text.bidiReverseReorderIndex()' */
XInt32 ViewsText_bidiReverseReorderIndex( ViewsText _this, XHandle aBidi, XInt32 
  aRowStart, XInt32 aRowEnd, XInt32 aIndex );

/* 'C' function for method : 'Views::Text.bidiReorderIndex()' */
XInt32 ViewsText_bidiReorderIndex( ViewsText _this, XHandle aBidi, XInt32 aRowStart, 
  XInt32 aRowEnd, XInt32 aIndex );

/* 'C' function for method : 'Views::Text.freeBidi()' */
void ViewsText_freeBidi( ViewsText _this, XHandle aBidi );

/* 'C' function for method : 'Views::Text.createBidi()' */
XHandle ViewsText_createBidi( ViewsText _this, XInt32 aSize );

/* 'C' function for method : 'Views::Text.preOnUpdateSlot()' */
void ViewsText_preOnUpdateSlot( ViewsText _this, XObject sender );

/* 'C' function for method : 'Views::Text.preReparseSlot()' */
void ViewsText_preReparseSlot( ViewsText _this, XObject sender );

/* 'C' function for method : 'Views::Text.onSlideSlot()' */
void ViewsText_onSlideSlot( ViewsText _this, XObject sender );

/* 'C' function for method : 'Views::Text.onStartSlideSlot()' */
void ViewsText_onStartSlideSlot( ViewsText _this, XObject sender );

/* 'C' function for method : 'Views::Text.reparseSlot()' */
void ViewsText_reparseSlot( ViewsText _this, XObject sender );

/* 'C' function for method : 'Views::Text.OnSetEnableBidiText()' */
void ViewsText_OnSetEnableBidiText( ViewsText _this, XBool value );

/* The onset method for the property 'Ellipsis' changes the ellipsis mode and forces 
   an update. */
void ViewsText_OnSetEllipsis( ViewsText _this, XBool value );

/* 'C' function for method : 'Views::Text.OnSetOnUpdate()' */
void ViewsText_OnSetOnUpdate( ViewsText _this, XSlot value );

/* 'C' function for method : 'Views::Text.OnSetColorBR()' */
void ViewsText_OnSetColorBR( ViewsText _this, XColor value );

/* 'C' function for method : 'Views::Text.OnSetSlideHandler()' */
void ViewsText_OnSetSlideHandler( ViewsText _this, CoreSlideTouchHandler value );

/* 'C' function for method : 'Views::Text.OnSetAutoSize()' */
void ViewsText_OnSetAutoSize( ViewsText _this, XBool value );

/* 'C' function for method : 'Views::Text.OnSetWrapText()' */
void ViewsText_OnSetWrapText( ViewsText _this, XBool value );

/* 'C' function for method : 'Views::Text.OnSetScrollOffset()' */
void ViewsText_OnSetScrollOffset( ViewsText _this, XPoint value );

/* 'C' function for method : 'Views::Text.OnSetAlignment()' */
void ViewsText_OnSetAlignment( ViewsText _this, XSet value );

/* 'C' function for method : 'Views::Text.OnSetString()' */
void ViewsText_OnSetString( ViewsText _this, XString value );

/* 'C' function for method : 'Views::Text.OnSetFont()' */
void ViewsText_OnSetFont( ViewsText _this, ResourcesFont value );

/* 'C' function for method : 'Views::Text.OnSetColor()' */
void ViewsText_OnSetColor( ViewsText _this, XColor value );

/* 'C' function for method : 'Views::Text.OnSetVisible()' */
void ViewsText_OnSetVisible( ViewsText _this, XBool value );

/* The method IsBaseDirectionRTL() returns 'true' if the text specified in @String 
   starts with an RTL (right-to-left) character. This implies the base direction 
   of the entire text paragraph. If the text starts with an LTR (left-to-right) 
   sign or the property @EnableBidiText is 'false', this method returns 'false'. */
XBool ViewsText_IsBaseDirectionRTL( ViewsText _this );

/* The method IsBidiText() returns 'true' if the text specified in the property 
   @String contains any right-to-left contents or any other Bidi algorithm specific 
   control codes requiring the Bidi processing of this text. Please note, if the 
   property @EnableBidiText is false, the text is not processed by the Bidi algorithm 
   and this method returns 'false'. */
XBool ViewsText_IsBidiText( ViewsText _this );

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
XPoint ViewsText_StringIndex2RowCol( ViewsText _this, XInt32 aIndex );

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
XInt32 ViewsText_RowCol2StringIndex( ViewsText _this, XPoint aRowCol );

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
XPoint ViewsText_Position2RowCol( ViewsText _this, XPoint aPoint );

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
XPoint ViewsText_RowCol2Position( ViewsText _this, XPoint aRowCol );

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
XString ViewsText_GetRowString( ViewsText _this, XInt32 aRow );

/* The method GetContentArea() returns the position and the size of an area where 
   the view will show the text. This area is expressed in coordinates relative to 
   the top-left corner of the view's @Owner. The method takes in account all properties 
   which do affect the position and the alignment of the text, e.g. @Alignment, 
   @Orientation, @ScrollOffset, @WrapText, etc. */
XRect ViewsText_GetContentArea( ViewsText _this );

#ifdef __cplusplus
  }
#endif

#endif /* _ViewsText_H */

/* Embedded Wizard */
