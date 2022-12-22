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
#include "_ApplicationApplication.h"
#include "_CoreCursorEvent.h"
#include "_CoreCursorGrabEvent.h"
#include "_CoreCursorHit.h"
#include "_CoreDialogContext.h"
#include "_CoreDragEvent.h"
#include "_CoreEvent.h"
#include "_CoreGroup.h"
#include "_CoreKeyEvent.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreLayoutContext.h"
#include "_CoreLayoutLineContext.h"
#include "_CoreLayoutQuadContext.h"
#include "_CoreLineView.h"
#include "_CoreOutline.h"
#include "_CoreQuadView.h"
#include "_CoreRectView.h"
#include "_CoreResource.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTask.h"
#include "_CoreTaskQueue.h"
#include "_CoreTime.h"
#include "_CoreTimeSpan.h"
#include "_CoreTimer.h"
#include "_CoreVerticalList.h"
#include "_CoreView.h"
#include "_EffectsEffectTimerClass.h"
#include "_EffectsFader.h"
#include "_EffectsFaderTask.h"
#include "_EffectsShowHideTransition.h"
#include "_EffectsTransition.h"
#include "_GraphicsCanvas.h"
#include "_ResourcesBitmap.h"
#include "_ViewsText.h"
#include "Core.h"
#include "Effects.h"
#include "Resources.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x000004A0, /* ratio 46.62 % */
  0xB8005300, 0x000A8452, 0x00CA0034, 0x0EC00100, 0x01093480, 0x800859DC, 0x1137800C,
  0x737450E7, 0x8A1D0011, 0xE9B22262, 0xC50CF1C8, 0x7E19188F, 0x23510844, 0x3A729343,
  0x070001D6, 0x03164D80, 0xC88C1E0B, 0x30C422D0, 0x34624600, 0xC74C70C9, 0x46493436,
  0x6191F8E4, 0x47408A4B, 0xD40854C6, 0x358A1E62, 0xA8D002A7, 0x8B446990, 0x34E46336,
  0xCF615088, 0x76A20087, 0x28C00A24, 0x3135A446, 0x91EAEC72, 0x408653E2, 0xA99C7E8D,
  0x8655E476, 0x4D36311C, 0x002B95AA, 0x02C10AAF, 0x49D39180, 0xD2668647, 0x53188C56,
  0x0AA4E3E5, 0x18C64663, 0xB2E5A913, 0x8D572314, 0xC72D02D8, 0x32EB3217, 0xB33358C4,
  0xE5108FE4, 0x625004DA, 0x5798802C, 0x793C9621, 0xCFE1A679, 0x464AB73C, 0xE880166A,
  0x4F2DAEC9, 0xA1546884, 0x71B61FCD, 0x16C0069B, 0x16C96865, 0x0DD69615, 0x99C63500,
  0xBCBE8183, 0xC326BA9D, 0xEEDB2C89, 0xA1521864, 0x85D4C3D0, 0x39294E5B, 0x95D05D70,
  0x4B9C4E3B, 0xC68566DE, 0x91043997, 0x47CD1342, 0xE5756151, 0xB31AC005, 0x15939071,
  0x97681168, 0x3609F07C, 0xDDC04721, 0xDF4C5F15, 0x05136525, 0x6027D200, 0x45D60544,
  0x6148569F, 0x007390E4, 0x45221044, 0x20684A23, 0xA629935E, 0x4A1183C1, 0xE4505504,
  0x5FD93551, 0x1E38D1D3, 0x54CC0087, 0xE4334D93, 0x46444524, 0x469314CD, 0x6178AD10,
  0x048D9243, 0x7D404591, 0x4E459C54, 0x8296C74E, 0x9C5951B0, 0x19659391, 0x1957519C,
  0x2E429235, 0x6D81B6CC, 0x053431A0, 0x6706578F, 0x21468750, 0xF51210C4, 0x7926B64D,
  0x4246CC3A, 0xA5AA1A4E, 0xBA4068D5, 0x7A7F1F05, 0x72D1457D, 0x50C8EDF7, 0x69B63A8C,
  0x910492D3, 0x569CDC15, 0x9DD14722, 0x27A7AA45, 0xC5027C00, 0xE67F4591, 0x878F2857,
  0xA29148FE, 0x575A311C, 0xB5A28F62, 0x0E54A492, 0xC28CE3A8, 0x48E44519, 0x97553923,
  0xA6C9EA4B, 0x591F7C25, 0x014D9B3A, 0x00000001, 0x00000000
};

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault1[] =
{
  0x0000036A, /* ratio 50.80 % */
  0xB8008500, 0x000A8452, 0x00CA0034, 0x4DA00100, 0x0E740042, 0x80037802, 0x520042CC,
  0x0881CE1E, 0x31800C20, 0x3000D600, 0x000E1148, 0x5C520014, 0x2360034C, 0x39133743,
  0xA768F432, 0x6C960023, 0x90018A6C, 0x96432153, 0x890E1930, 0x0EA1E729, 0x3CAD4700,
  0x25911A2C, 0x99398F48, 0xD1C96CDC, 0x3FAB8005, 0xE8941606, 0x88C3E1B3, 0x645A2908,
  0xC6E15198, 0x8A411E88, 0x27F2A944, 0x233197D5, 0xD35004CE, 0x3C9D4E23, 0x0A0DBA1F,
  0xA2C52860, 0x5D268F0A, 0xCDA9D1CA, 0x02CF53A8, 0x87D57AB0, 0xBB088356, 0x3608543A,
  0x0F8C58E6, 0xA9AC521D, 0xB7CAED90, 0x94526000, 0xD4EEB36B, 0xF6771E9C, 0x2FD7CCFC,
  0x6348C000, 0x74C8552B, 0x52BCD3EA, 0x0C662A59, 0xAE63C760, 0x0C732717, 0x9062F15B,
  0xBB3D16E2, 0xEE3A1975, 0xEF369A45, 0x15DBCEA6, 0xB0D745E8, 0xFD980305, 0xC3C7F0BA,
  0x8D537200, 0xEFCAFBC8, 0x3C9717C8, 0x4A0003CC, 0x9154B377, 0x716984D8, 0x17E5D175,
  0xA9DC3A15, 0xFEC5A2D0, 0x5531DD17, 0xC5CDD665, 0xA93B4517, 0xA44810F1, 0x00132689,
  0xD3054DFC, 0xD7FD1719, 0x159C4B1D, 0xDD1990C7, 0x5090E451, 0xDB151944, 0x50021D11,
  0xF1260007, 0x456FC376, 0x851D67B1, 0x1144450C, 0x04C1B743, 0xCD394292, 0x1B4DA315,
  0x68D70489, 0x13984517, 0x084A1345, 0xCD1C8C00, 0x17625C38, 0x43E261C5, 0xC2142A27,
  0xC0880055, 0x362E0022, 0xF98CA487, 0x9464E735, 0xD1E5764F, 0x78F51E8E, 0x1A024451,
  0x05952526, 0x00031568, 0x80495032, 0x69502556, 0x00004067, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XPoint _Const0000 = { 0, 0 };
static const XRect _Const0001 = {{ 0, 0 }, { 0, 0 }};
static const XColor _Const0002 = { 0x00, 0x00, 0x00, 0x00 };
static const XStringRes _Const0003 = { _StringsDefault0, 0x0002 };
static const XStringRes _Const0004 = { _StringsDefault0, 0x002B };
static const XStringRes _Const0005 = { _StringsDefault0, 0x0057 };
static const XStringRes _Const0006 = { _StringsDefault0, 0x0088 };
static const XStringRes _Const0007 = { _StringsDefault0, 0x00B8 };
static const XStringRes _Const0008 = { _StringsDefault0, 0x00DD };
static const XStringRes _Const0009 = { _StringsDefault0, 0x011C };
static const XStringRes _Const000A = { _StringsDefault0, 0x0131 };
static const XStringRes _Const000B = { _StringsDefault0, 0x014D };
static const XStringRes _Const000C = { _StringsDefault0, 0x0161 };
static const XStringRes _Const000D = { _StringsDefault0, 0x0172 };
static const XStringRes _Const000E = { _StringsDefault0, 0x018C };
static const XRect _Const000F = {{ -8, -8 }, { 9, 9 }};
static const XStringRes _Const0010 = { _StringsDefault0, 0x01BF };
static const XStringRes _Const0011 = { _StringsDefault0, 0x01DA };
static const XStringRes _Const0012 = { _StringsDefault0, 0x01FE };
static const XRect _Const0013 = {{ 0, 0 }, { 170, 120 }};
static const XStringRes _Const0014 = { _StringsDefault1, 0x0002 };
static const XStringRes _Const0015 = { _StringsDefault1, 0x0044 };
static const XStringRes _Const0016 = { _StringsDefault1, 0x0083 };
static const XStringRes _Const0017 = { _StringsDefault1, 0x00C1 };
static const XStringRes _Const0018 = { _StringsDefault1, 0x00FC };
static const XStringRes _Const0019 = { _StringsDefault1, 0x0153 };
static const XStringRes _Const001A = { _StringsDefault1, 0x018A };
static const XStringRes _Const001B = { _StringsDefault1, 0x01AC };
static const XStringRes _Const001C = { _StringsDefault1, 0x01B1 };

#ifndef EW_DONT_CHECK_INDEX
  /* This function is used to check the indices when accessing an array.
     If you don't want this verification add the define EW_DONT_CHECK_INDEX
     to your Makefile or project settings. */
  static int EwCheckIndex( int aIndex, int aRange, const char* aFile, int aLine )
  {
    if (( aIndex < 0 ) || ( aIndex >= aRange ))
    {
      EwPrint( "[FATAL ERROR in %s:%d] Array index %d out of bounds %d",
                aFile, aLine, aIndex, aRange );
      EwPanic();
    }
    return aIndex;
  }

  #define EwCheckIndex( aIndex, aRange ) \
    EwCheckIndex( aIndex, aRange, __FILE__, __LINE__ )
#else
  #define EwCheckIndex( aIndex, aRange ) aIndex
#endif

/* Global constant containing the preferred size of the screen in pixel. */
const XPoint EwScreenSize = { 272, 480 };

/* Global constant containing the main application class. */
const XClass EwApplicationClass = EW_CLASS( ApplicationApplication );

/* Global constant containing the user defined application title. */
const char* EwApplicationTitle = "";

/* Initializer for the class 'Core::View' */
void CoreView__Init( CoreView _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreView );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreView );

  /* ... and initialize objects, variables, properties, etc. */
  _this->viewState = CoreViewStateAlphaBlended | CoreViewStateFastReshape | CoreViewStateVisible;
  _this->Layout = CoreLayoutAlignToLeft | CoreLayoutAlignToTop;
}

/* Re-Initializer for the class 'Core::View' */
void CoreView__ReInit( CoreView _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::View' */
void CoreView__Done( CoreView _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Core::View.initLayoutContext()' */
void CoreView_initLayoutContext( CoreView _this, XRect aBounds, CoreOutline aOutline )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aOutline );
  EW_UNUSED_ARG( aBounds );
}

/* Wrapper function for the virtual method : 'Core::View.initLayoutContext()' */
__declspec( naked ) void CoreView__initLayoutContext( void* _this, XRect aBounds, 
  CoreOutline aOutline )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aBounds );
  EW_UNUSED_ARG( aOutline );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 56 ]
  }
}

/* 'C' function for method : 'Core::View.OnSetStackingPriority()' */
void CoreView_OnSetStackingPriority( CoreView _this, XInt32 value )
{
  if ( _this->StackingPriority == value )
    return;

  _this->StackingPriority = value;

  if ( _this->Owner != 0 )
  {
    CoreView sibling = _this->next;
    XInt32 delta = 0;

    while (( sibling != 0 ) && ( value > sibling->StackingPriority ))
    {
      sibling = sibling->next;
      delta = delta + 1;
    }

    sibling = _this->prev;

    while (( sibling != 0 ) && ( value < sibling->StackingPriority ))
    {
      sibling = sibling->prev;
      delta = delta - 1;
    }

    if ( delta != 0 )
      CoreGroup__Restack( _this->Owner, _this, delta );
  }
}

/* 'C' function for method : 'Core::View.OnSetLayout()' */
void CoreView_OnSetLayout( CoreView _this, XSet value )
{
  XSet delta = value ^ _this->Layout;

  if ( !delta )
    return;

  _this->Layout = value;

  if (( _this->layoutContext != 0 ) && !(( _this->viewState & CoreViewStateEmbedded ) 
      == CoreViewStateEmbedded ))
  {
    _this->Owner->Super2.viewState = _this->Owner->Super2.viewState | ( CoreViewStatePendingLayout 
    | CoreViewStateUpdateLayout );
    EwPostSignal( EwNewSlot( _this->Owner, CoreGroup_updateComponent ), ((XObject)_this ));
    CoreGroup__InvalidateArea( _this->Owner, EwGetRectORect( _this->Owner->Super1.Bounds ));
  }

  if (( _this->layoutContext != 0 ) && (( _this->viewState & CoreViewStateEmbedded ) 
      == CoreViewStateEmbedded ))
  {
    _this->layoutContext->outline->Super2.viewState = _this->layoutContext->outline->Super2.viewState 
    | CoreViewStateUpdateLayout;
    _this->Owner->Super2.viewState = _this->Owner->Super2.viewState | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this->Owner, CoreGroup_updateComponent ), ((XObject)_this ));
  }
}

/* The method GetRoot() delivers the application object, this view belongs to. The 
   application object represents the entire screen of the GUI application. Thus 
   in the views hierarchy, the application object serves as the root view.
   This method can fail and return null if the view still doesn't belong to any 
   owner group. */
CoreRoot CoreView_GetRoot( CoreView _this )
{
  CoreGroup grp = _this->Owner;

  while ( grp != 0 )
  {
    CoreRoot root = EwCastObject( grp, CoreRoot );

    if ( root != 0 )
      return root;

    grp = grp->Super2.Owner;
  }

  return 0;
}

/* Wrapper function for the virtual method : 'Core::View.GetRoot()' */
__declspec( naked ) CoreRoot CoreView__GetRoot( void* _this )
{
  EW_UNUSED_ARG( _this );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 60 ]
  }
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
void CoreView_Draw( CoreView _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aBlend );
  EW_UNUSED_ARG( aOpacity );
  EW_UNUSED_ARG( aOffset );
  EW_UNUSED_ARG( aClip );
  EW_UNUSED_ARG( aCanvas );
}

/* Wrapper function for the virtual method : 'Core::View.Draw()' */
__declspec( naked ) void CoreView__Draw( void* _this, GraphicsCanvas aCanvas, XRect 
  aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aCanvas );
  EW_UNUSED_ARG( aClip );
  EW_UNUSED_ARG( aOffset );
  EW_UNUSED_ARG( aOpacity );
  EW_UNUSED_ARG( aBlend );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 64 ]
  }
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
XObject CoreView_HandleEvent( CoreView _this, CoreEvent aEvent )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aEvent );

  return 0;
}

/* Wrapper function for the virtual method : 'Core::View.HandleEvent()' */
__declspec( naked ) XObject CoreView__HandleEvent( void* _this, CoreEvent aEvent )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aEvent );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 68 ]
  }
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
CoreCursorHit CoreView_CursorHitTest( CoreView _this, XRect aArea, XInt32 aFinger, 
  XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aRetargetReason );
  EW_UNUSED_ARG( aDedicatedView );
  EW_UNUSED_ARG( aStrikeCount );
  EW_UNUSED_ARG( aFinger );
  EW_UNUSED_ARG( aArea );

  return 0;
}

/* Wrapper function for the virtual method : 'Core::View.CursorHitTest()' */
__declspec( naked ) CoreCursorHit CoreView__CursorHitTest( void* _this, XRect aArea, 
  XInt32 aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArea );
  EW_UNUSED_ARG( aFinger );
  EW_UNUSED_ARG( aStrikeCount );
  EW_UNUSED_ARG( aDedicatedView );
  EW_UNUSED_ARG( aRetargetReason );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 72 ]
  }
}

/* The method ArrangeView() is invoked automatically if the superior @Owner group 
   needs to re-arrange its views. For example, the changing of the owners size can 
   cause the enclosed views to adapt their position and size, so all views still 
   fit within the new owners area. This method provides the core functionality for 
   the automatic GUI layout mechanism.
   The arrangement is controlled primarily by the @Layout property of the view. 
   It specifies a set of alignment constraints and determines whether the view can 
   change its size. The bounds area where the view should be arranged, is passed 
   in the parameter aBounds. This is usually the current area of the views owner.
   The parameter aFormation defines the desired arrangement mode. Depending on the 
   value of this parameter, the views can be arranged in rows or columns. If aFormation 
   == Core::Formation.None, no automatic row/column arrangement is performed and 
   the view is moved and scaled only to fit inside the aBounds area.
   ArrangeView() is invoked automatically by the framework, so you never should 
   need to invoke it directly.
   The method returns the size of the view after it has been arranged. */
XPoint CoreView_ArrangeView( CoreView _this, XRect aBounds, XEnum aFormation )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aFormation );
  EW_UNUSED_ARG( aBounds );

  return _Const0000;
}

/* Wrapper function for the virtual method : 'Core::View.ArrangeView()' */
__declspec( naked ) XPoint CoreView__ArrangeView( void* _this, XRect aBounds, XEnum 
  aFormation )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aBounds );
  EW_UNUSED_ARG( aFormation );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 76 ]
  }
}

/* The method MoveView() changes the position of the view by adding the value aOffset 
   to all corners of the view. For example, in case of a line view the value is 
   added to the both line end points.
   The parameter aFastMove serves for the optimization purpose. If it is 'true', 
   the corners are modified without performing any updates of the view and without 
   redrawing the screen. This is useful, when you wish to move or arrange a lot 
   of views at once. In this case it's up to you to request the finally screen update. 
   To do this you can use the method InvalidateArea() of the views @Owner.
   In the case aFastMove == false, the operation automatically requests the screen 
   redraw of the view areas before and after the movement. You don't need to take 
   care about it. */
void CoreView_MoveView( CoreView _this, XPoint aOffset, XBool aFastMove )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aFastMove );
  EW_UNUSED_ARG( aOffset );
}

/* Wrapper function for the virtual method : 'Core::View.MoveView()' */
__declspec( naked ) void CoreView__MoveView( void* _this, XPoint aOffset, XBool 
  aFastMove )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aOffset );
  EW_UNUSED_ARG( aFastMove );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 80 ]
  }
}

/* The method GetExtent() returns the position and the size of the view relative 
   to the origin of its @Owner. In case of views with a non rectangular shape the 
   method returns the rectangular boundary area enclosing the entire shape. */
XRect CoreView_GetExtent( CoreView _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  return _Const0001;
}

/* Wrapper function for the virtual method : 'Core::View.GetExtent()' */
__declspec( naked ) XRect CoreView__GetExtent( void* _this )
{
  EW_UNUSED_ARG( _this );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 8 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 84 ]
  }
}

/* The method ChangeViewState() modifies the current state of the view. The state 
   is a set of switches determining whether a view is visible, whether it can react 
   to user inputs or whether it is just performing some update operations, etc.
   The modification is controlled by the the both parameters. The first aSetState 
   contains the switches to activate within the view state. The second aClearState 
   determines all switches to disable.
   Depending on the state alteration the method will perform different operations, 
   e.g. in response to the clearing of the visible state, the method will request 
   a screen redraw to make disappear the view from the screen.
   ChangeViewState() is invoked automatically by the framework, so you never should 
   need to invoke it directly. All relevant states are available as properties e.g. 
   the property Visible in derived classes reflects the visible state of the view. */
void CoreView_ChangeViewState( CoreView _this, XSet aSetState, XSet aClearState )
{
  XSet newState;
  XSet deltaState;

  if ((( _this->viewState & CoreViewStateIsOutline ) == CoreViewStateIsOutline ))
    aSetState = aSetState & ~CoreViewStateEmbedded;

  newState = ( _this->viewState & ~aClearState ) | aSetState;
  deltaState = newState ^ _this->viewState;
  _this->viewState = newState;

  if (( _this->Owner != 0 ) && !!( deltaState & ( CoreViewStateEnabled | CoreViewStateFocusable )))
  {
    XBool focusable = (( _this->viewState & ( CoreViewStateEnabled | CoreViewStateFocusable )) 
      == ( CoreViewStateEnabled | CoreViewStateFocusable ));

    if ( focusable && ( _this->Owner->Focus == 0 ))
      CoreGroup__OnSetFocus( _this->Owner, _this );

    if ( !focusable && ( _this->Owner->Focus == _this ))
      CoreGroup__OnSetFocus( _this->Owner, CoreGroup__FindSiblingView( _this->Owner, 
      _this, CoreViewStateEnabled | CoreViewStateFocusable ));
  }

  if (( _this->Owner != 0 ) && !!( deltaState & ( CoreViewStateAlphaBlended | CoreViewStateEmbedded 
      | CoreViewStateVisible )))
    CoreGroup__InvalidateArea( _this->Owner, CoreView__GetExtent( _this ));

  if (((( _this->layoutContext != 0 ) && ( _this->Owner != 0 )) && (( newState & 
      CoreViewStateEmbedded ) == CoreViewStateEmbedded )) && (( deltaState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
  {
    _this->viewState = _this->viewState | CoreViewStateRequestLayout;
    _this->Owner->Super2.viewState = _this->Owner->Super2.viewState | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this->Owner, CoreGroup_updateComponent ), ((XObject)_this ));
  }

  if (( _this->Owner != 0 ) && (( deltaState & CoreViewStateEmbedded ) == CoreViewStateEmbedded ))
  {
    _this->layoutContext = 0;
    _this->viewState = _this->viewState | CoreViewStateRequestLayout;
    _this->Owner->Super2.viewState = _this->Owner->Super2.viewState | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this->Owner, CoreGroup_updateComponent ), ((XObject)_this ));
  }
}

/* Wrapper function for the virtual method : 'Core::View.ChangeViewState()' */
__declspec( naked ) void CoreView__ChangeViewState( void* _this, XSet aSetState, 
  XSet aClearState )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aSetState );
  EW_UNUSED_ARG( aClearState );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 88 ]
  }
}

/* Variants derived from the class : 'Core::View' */
EW_DEFINE_CLASS_VARIANTS( CoreView )
EW_END_OF_CLASS_VARIANTS( CoreView )

/* Virtual Method Table (VMT) for the class : 'Core::View' */
EW_DEFINE_CLASS( CoreView, XObject, next, viewState, viewState, viewState, viewState, 
                 viewState, "Core::View" )
  CoreView_initLayoutContext,
  CoreView_GetRoot,
  CoreView_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreView_ArrangeView,
  CoreView_MoveView,
  CoreView_GetExtent,
  CoreView_ChangeViewState,
EW_END_OF_CLASS( CoreView )

/* Initializer for the class 'Core::LineView' */
void CoreLineView__Init( CoreLineView _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreLineView );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreLineView );

  /* ... and initialize objects, variables, properties, etc. */
}

/* Re-Initializer for the class 'Core::LineView' */
void CoreLineView__ReInit( CoreLineView _this )
{
  /* At first re-initialize the super class ... */
  CoreView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::LineView' */
void CoreLineView__Done( CoreLineView _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreView );

  /* Don't forget to deinitialize the super class ... */
  CoreView__Done( &_this->_.Super );
}

/* 'C' function for method : 'Core::LineView.initLayoutContext()' */
void CoreLineView_initLayoutContext( CoreLineView _this, XRect aBounds, CoreOutline 
  aOutline )
{
  CoreLayoutLineContext context = EwNewObject( CoreLayoutLineContext, 0 );

  _this->Super1.layoutContext = 0;
  context->Super1.extent = CoreLineView_getExtent( _this );
  context->Super1.bounds = aBounds;
  context->Super1.outline = aOutline;
  context->point1 = _this->Point1;
  context->point2 = _this->Point2;
  _this->Super1.layoutContext = ((CoreLayoutContext)context );
}

/* The method ArrangeView() is invoked automatically if the superior @Owner group 
   needs to re-arrange its views. For example, the changing of the owners size can 
   cause the enclosed views to adapt their position and size, so all views still 
   fit within the new owners area. This method provides the core functionality for 
   the automatic GUI layout mechanism.
   The arrangement is controlled primarily by the @Layout property of the view. 
   It specifies a set of alignment constraints and determines whether the view can 
   change its size. The bounds area where the view should be arranged, is passed 
   in the parameter aBounds. This is usually the current area of the views owner.
   The parameter aFormation defines the desired arrangement mode. Depending on the 
   value of this parameter, the views can be arranged in rows or columns. If aFormation 
   == Core::Formation.None, no automatic row/column arrangement is performed and 
   the view is moved and scaled only to fit inside the aBounds area.
   ArrangeView() is invoked automatically by the framework, so you never should 
   need to invoke it directly.
   The method returns the size of the view after it has been arranged. */
XPoint CoreLineView_ArrangeView( CoreLineView _this, XRect aBounds, XEnum aFormation )
{
  XSet layout = _this->Super1.Layout;
  CoreLayoutLineContext context = EwCastObject( _this->Super1.layoutContext, CoreLayoutLineContext );
  XInt32 x1 = context->Super1.extent.Point1.X;
  XInt32 y1 = context->Super1.extent.Point1.Y;
  XInt32 x2 = context->Super1.extent.Point2.X;
  XInt32 y2 = context->Super1.extent.Point2.Y;
  XPoint dstSize = EwGetRectSize( aBounds );
  XInt32 w = x2 - x1;
  XInt32 h = y2 - y1;
  XInt32 tmp;

  if ( aFormation == CoreFormationNone )
  {
    XPoint srcSize = EwGetRectSize( context->Super1.bounds );
    x1 = x1 - context->Super1.bounds.Point1.X;
    y1 = y1 - context->Super1.bounds.Point1.Y;

    if ( srcSize.X != dstSize.X )
    {
      XBool alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
      XBool resizeHorz = (( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz );

      if ( !alignToLeft && ( resizeHorz || !alignToRight ))
        x1 = ( x1 * dstSize.X ) / srcSize.X;

      if ( !alignToRight && ( resizeHorz || !alignToLeft ))
      {
        x2 = x2 - context->Super1.bounds.Point1.X;
        x2 = ( x2 * dstSize.X ) / srcSize.X;
        x2 = x2 - dstSize.X;
      }
      else
        x2 = x2 - context->Super1.bounds.Point2.X;

      x1 = x1 + aBounds.Point1.X;
      x2 = x2 + aBounds.Point2.X;

      if ( !resizeHorz )
      {
        if ( alignToLeft && !alignToRight )
          x2 = x1 + w;
        else
          if ( !alignToLeft && alignToRight )
            x1 = x2 - w;
          else
          {
            x1 = x1 + ((( x2 - x1 ) - w ) / 2 );
            x2 = x1 + w;
          }
      }
    }
    else
    {
      x2 = x2 - context->Super1.bounds.Point2.X;
      x1 = x1 + aBounds.Point1.X;
      x2 = x2 + aBounds.Point2.X;
    }

    if ( srcSize.Y != dstSize.Y )
    {
      XBool alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );
      XBool resizeVert = (( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert );

      if ( !alignToTop && ( resizeVert || !alignToBottom ))
        y1 = ( y1 * dstSize.Y ) / srcSize.Y;

      if ( !alignToBottom && ( resizeVert || !alignToTop ))
      {
        y2 = y2 - context->Super1.bounds.Point1.Y;
        y2 = ( y2 * dstSize.Y ) / srcSize.Y;
        y2 = y2 - dstSize.Y;
      }
      else
        y2 = y2 - context->Super1.bounds.Point2.Y;

      y1 = y1 + aBounds.Point1.Y;
      y2 = y2 + aBounds.Point2.Y;

      if ( !resizeVert )
      {
        if ( alignToTop && !alignToBottom )
          y2 = y1 + h;
        else
          if ( !alignToTop && alignToBottom )
            y1 = y2 - h;
          else
          {
            y1 = y1 + ((( y2 - y1 ) - h ) / 2 );
            y2 = y1 + h;
          }
      }
    }
    else
    {
      y2 = y2 - context->Super1.bounds.Point2.Y;
      y1 = y1 + aBounds.Point1.Y;
      y2 = y2 + aBounds.Point2.Y;
    }
  }
  else
  {
    switch ( aFormation )
    {
      case CoreFormationLeftToRight :
      {
        x1 = aBounds.Point1.X;
        x2 = x1 + w;
      }
      break;

      case CoreFormationRightToLeft :
      {
        x2 = aBounds.Point2.X;
        x1 = x2 - w;
      }
      break;

      case CoreFormationTopToBottom :
      {
        y1 = aBounds.Point1.Y;
        y2 = y1 + h;
      }
      break;

      case CoreFormationBottomToTop :
      {
        y2 = aBounds.Point2.Y;
        y1 = y2 - h;
      }
      break;

      default :; 
    }

    if (( aFormation == CoreFormationLeftToRight ) || ( aFormation == CoreFormationRightToLeft ))
    {
      XBool alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );
      XBool resizeVert = (( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert );

      if ( resizeVert )
      {
        y1 = aBounds.Point1.Y;
        y2 = aBounds.Point2.Y;
      }
      else
        if ( alignToTop && !alignToBottom )
        {
          y1 = aBounds.Point1.Y;
          y2 = y1 + h;
        }
        else
          if ( alignToBottom && !alignToTop )
          {
            y2 = aBounds.Point2.Y;
            y1 = y2 - h;
          }
          else
          {
            y1 = aBounds.Point1.Y + (( EwGetRectH( aBounds ) - h ) / 2 );
            y2 = y1 + h;
          }
    }

    if (( aFormation == CoreFormationTopToBottom ) || ( aFormation == CoreFormationBottomToTop ))
    {
      XBool alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
      XBool resizeHorz = (( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz );

      if ( resizeHorz )
      {
        x1 = aBounds.Point1.X;
        x2 = aBounds.Point2.X;
      }
      else
        if ( alignToLeft && !alignToRight )
        {
          x1 = aBounds.Point1.X;
          x2 = x1 + w;
        }
        else
          if ( alignToRight && !alignToLeft )
          {
            x2 = aBounds.Point2.X;
            x1 = x2 - w;
          }
          else
          {
            x1 = aBounds.Point1.X + (( EwGetRectW( aBounds ) - w ) / 2 );
            x2 = x1 + w;
          }
    }
  }

  context->Super1.isEmpty = (XBool)(( x1 >= x2 ) || ( y1 >= y2 ));
  w = x2 - x1;
  h = y2 - y1;

  if ( context->point2.X < context->point1.X )
  {
    tmp = x1;
    x1 = x2 - 1;
    x2 = tmp - 1;
  }

  if ( context->point2.Y < context->point1.Y )
  {
    tmp = y1;
    y1 = y2 - 1;
    y2 = tmp - 1;
  }

  if (( x2 - x1 ) == 1 )
    x2 = x1;

  if (( y2 - y1 ) == 1 )
    y2 = y1;

  if ((( _this->Super1.viewState & CoreViewStateFastReshape ) == CoreViewStateFastReshape ))
  {
    _this->Point1 = EwNewPoint( x1, y1 );
    _this->Point2 = EwNewPoint( x2, y2 );
  }
  else
  {
    CoreLineView_OnSetPoint1( _this, EwNewPoint( x1, y1 ));
    CoreLineView_OnSetPoint2( _this, EwNewPoint( x2, y2 ));
    _this->Super1.layoutContext = ((CoreLayoutContext)context );
  }

  return EwNewPoint( w, h );
}

/* The method MoveView() changes the position of the view by adding the value aOffset 
   to all corners of the view. For example, in case of a line view the value is 
   added to the both line end points.
   The parameter aFastMove serves for the optimization purpose. If it is 'true', 
   the corners are modified without performing any updates of the view and without 
   redrawing the screen. This is useful, when you wish to move or arrange a lot 
   of views at once. In this case it's up to you to request the finally screen update. 
   To do this you can use the method InvalidateArea() of the views @Owner.
   In the case aFastMove == false, the operation automatically requests the screen 
   redraw of the view areas before and after the movement. You don't need to take 
   care about it. */
void CoreLineView_MoveView( CoreLineView _this, XPoint aOffset, XBool aFastMove )
{
  if ( aFastMove )
  {
    _this->Point1 = EwMovePointPos( _this->Point1, aOffset );
    _this->Point2 = EwMovePointPos( _this->Point2, aOffset );
  }
  else
  {
    CoreLineView_OnSetPoint1( _this, EwMovePointPos( _this->Point1, aOffset ));
    CoreLineView_OnSetPoint2( _this, EwMovePointPos( _this->Point2, aOffset ));
  }
}

/* The method GetExtent() returns the position and the size of the view relative 
   to the origin of its @Owner. In case of views with a non rectangular shape the 
   method returns the rectangular boundary area enclosing the entire shape. */
XRect CoreLineView_GetExtent( CoreLineView _this )
{
  if (( _this->Super1.layoutContext != 0 ) && _this->Super1.layoutContext->isEmpty )
    return _Const0001;

  return CoreLineView_getExtent( _this );
}

/* 'C' function for method : 'Core::LineView.getExtent()' */
XRect CoreLineView_getExtent( CoreLineView _this )
{
  XInt32 x1 = _this->Point1.X;
  XInt32 y1 = _this->Point1.Y;
  XInt32 x2 = _this->Point2.X;
  XInt32 y2 = _this->Point2.Y;
  XInt32 w = x2 - x1;
  XInt32 h = y2 - y1;
  XInt32 tmp;

  if ( w < 0 )
    w = -w;

  if ( h < 0 )
    h = -h;

  if ( w >= h )
  {
    if ( x2 > x1 )
      x2 = x2 - 1;

    if ( x2 < x1 )
      x2 = x2 + 1;
  }

  if ( h >= w )
  {
    if ( y2 > y1 )
      y2 = y2 - 1;

    if ( y2 < y1 )
      y2 = y2 + 1;
  }

  if ( x2 < x1 )
  {
    tmp = x1;
    x1 = x2;
    x2 = tmp;
  }

  if ( y2 < y1 )
  {
    tmp = y1;
    y1 = y2;
    y2 = tmp;
  }

  return EwNewRect( x1, y1, x2 + 1, y2 + 1 );
}

/* Wrapper function for the non virtual method : 'Core::LineView.getExtent()' */
__declspec( naked ) XRect CoreLineView__getExtent( void* _this )
{
  EW_UNUSED_ARG( _this );

  __asm jmp CoreLineView_getExtent
}

/* 'C' function for method : 'Core::LineView.OnSetPoint2()' */
void CoreLineView_OnSetPoint2( CoreLineView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Point2 ))
    return;

  if (( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super1.Owner, CoreView__GetExtent( _this ));

  _this->Super1.layoutContext = 0;
  _this->Point2 = value;

  if (( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super1.Owner, CoreView__GetExtent( _this ));

  if ((( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateEmbedded ) 
      == CoreViewStateEmbedded )) && !(( _this->Super1.Owner->Super2.viewState & 
      CoreViewStateUpdatingLayout ) == CoreViewStateUpdatingLayout ))
  {
    _this->Super1.viewState = _this->Super1.viewState | CoreViewStateRequestLayout;
    _this->Super1.Owner->Super2.viewState = _this->Super1.Owner->Super2.viewState 
    | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this->Super1.Owner, CoreGroup_updateComponent ), ((XObject)_this ));
  }
}

/* 'C' function for method : 'Core::LineView.OnSetPoint1()' */
void CoreLineView_OnSetPoint1( CoreLineView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Point1 ))
    return;

  if (( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super1.Owner, CoreView__GetExtent( _this ));

  _this->Super1.layoutContext = 0;
  _this->Point1 = value;

  if (( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super1.Owner, CoreView__GetExtent( _this ));

  if ((( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateEmbedded ) 
      == CoreViewStateEmbedded )) && !(( _this->Super1.Owner->Super2.viewState & 
      CoreViewStateUpdatingLayout ) == CoreViewStateUpdatingLayout ))
  {
    _this->Super1.viewState = _this->Super1.viewState | CoreViewStateRequestLayout;
    _this->Super1.Owner->Super2.viewState = _this->Super1.Owner->Super2.viewState 
    | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this->Super1.Owner, CoreGroup_updateComponent ), ((XObject)_this ));
  }
}

/* Variants derived from the class : 'Core::LineView' */
EW_DEFINE_CLASS_VARIANTS( CoreLineView )
EW_END_OF_CLASS_VARIANTS( CoreLineView )

/* Virtual Method Table (VMT) for the class : 'Core::LineView' */
EW_DEFINE_CLASS( CoreLineView, CoreView, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 "Core::LineView" )
  CoreLineView_initLayoutContext,
  CoreView_GetRoot,
  CoreView_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreLineView_ArrangeView,
  CoreLineView_MoveView,
  CoreLineView_GetExtent,
  CoreView_ChangeViewState,
EW_END_OF_CLASS( CoreLineView )

/* Initializer for the class 'Core::QuadView' */
void CoreQuadView__Init( CoreQuadView _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreQuadView );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreQuadView );

  /* ... and initialize objects, variables, properties, etc. */
}

/* Re-Initializer for the class 'Core::QuadView' */
void CoreQuadView__ReInit( CoreQuadView _this )
{
  /* At first re-initialize the super class ... */
  CoreView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::QuadView' */
void CoreQuadView__Done( CoreQuadView _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreView );

  /* Don't forget to deinitialize the super class ... */
  CoreView__Done( &_this->_.Super );
}

/* 'C' function for method : 'Core::QuadView.initLayoutContext()' */
void CoreQuadView_initLayoutContext( CoreQuadView _this, XRect aBounds, CoreOutline 
  aOutline )
{
  CoreLayoutQuadContext context = EwNewObject( CoreLayoutQuadContext, 0 );

  _this->Super1.layoutContext = 0;
  context->Super1.extent = CoreView__GetExtent( _this );
  context->Super1.bounds = aBounds;
  context->Super1.outline = aOutline;
  context->point1 = _this->Point1;
  context->point2 = _this->Point2;
  context->point3 = _this->Point3;
  context->point4 = _this->Point4;
  _this->Super1.layoutContext = ((CoreLayoutContext)context );
}

/* The method ArrangeView() is invoked automatically if the superior @Owner group 
   needs to re-arrange its views. For example, the changing of the owners size can 
   cause the enclosed views to adapt their position and size, so all views still 
   fit within the new owners area. This method provides the core functionality for 
   the automatic GUI layout mechanism.
   The arrangement is controlled primarily by the @Layout property of the view. 
   It specifies a set of alignment constraints and determines whether the view can 
   change its size. The bounds area where the view should be arranged, is passed 
   in the parameter aBounds. This is usually the current area of the views owner.
   The parameter aFormation defines the desired arrangement mode. Depending on the 
   value of this parameter, the views can be arranged in rows or columns. If aFormation 
   == Core::Formation.None, no automatic row/column arrangement is performed and 
   the view is moved and scaled only to fit inside the aBounds area.
   ArrangeView() is invoked automatically by the framework, so you never should 
   need to invoke it directly.
   The method returns the size of the view after it has been arranged. */
XPoint CoreQuadView_ArrangeView( CoreQuadView _this, XRect aBounds, XEnum aFormation )
{
  XSet layout = _this->Super1.Layout;
  CoreLayoutQuadContext context = EwCastObject( _this->Super1.layoutContext, CoreLayoutQuadContext );
  XInt32 x1 = context->Super1.extent.Point1.X;
  XInt32 y1 = context->Super1.extent.Point1.Y;
  XInt32 x2 = context->Super1.extent.Point2.X;
  XInt32 y2 = context->Super1.extent.Point2.Y;
  XPoint dstSize = EwGetRectSize( aBounds );
  XInt32 w = x2 - x1;
  XInt32 h = y2 - y1;
  XInt32 ex;
  XInt32 ey;
  XInt32 ew;
  XInt32 eh;

  if ( aFormation == CoreFormationNone )
  {
    XPoint srcSize = EwGetRectSize( context->Super1.bounds );
    x1 = x1 - context->Super1.bounds.Point1.X;
    y1 = y1 - context->Super1.bounds.Point1.Y;

    if ( srcSize.X != dstSize.X )
    {
      XBool alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
      XBool resizeHorz = (( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz );

      if ( !alignToLeft && ( resizeHorz || !alignToRight ))
        x1 = ( x1 * dstSize.X ) / srcSize.X;

      if ( !alignToRight && ( resizeHorz || !alignToLeft ))
      {
        x2 = x2 - context->Super1.bounds.Point1.X;
        x2 = ( x2 * dstSize.X ) / srcSize.X;
        x2 = x2 - dstSize.X;
      }
      else
        x2 = x2 - context->Super1.bounds.Point2.X;

      x1 = x1 + aBounds.Point1.X;
      x2 = x2 + aBounds.Point2.X;

      if ( !resizeHorz )
      {
        if ( alignToLeft && !alignToRight )
          x2 = x1 + w;
        else
          if ( !alignToLeft && alignToRight )
            x1 = x2 - w;
          else
          {
            x1 = x1 + ((( x2 - x1 ) - w ) / 2 );
            x2 = x1 + w;
          }
      }
    }
    else
    {
      x2 = x2 - context->Super1.bounds.Point2.X;
      x1 = x1 + aBounds.Point1.X;
      x2 = x2 + aBounds.Point2.X;
    }

    if ( srcSize.Y != dstSize.Y )
    {
      XBool alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );
      XBool resizeVert = (( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert );

      if ( !alignToTop && ( resizeVert || !alignToBottom ))
        y1 = ( y1 * dstSize.Y ) / srcSize.Y;

      if ( !alignToBottom && ( resizeVert || !alignToTop ))
      {
        y2 = y2 - context->Super1.bounds.Point1.Y;
        y2 = ( y2 * dstSize.Y ) / srcSize.Y;
        y2 = y2 - dstSize.Y;
      }
      else
        y2 = y2 - context->Super1.bounds.Point2.Y;

      y1 = y1 + aBounds.Point1.Y;
      y2 = y2 + aBounds.Point2.Y;

      if ( !resizeVert )
      {
        if ( alignToTop && !alignToBottom )
          y2 = y1 + h;
        else
          if ( !alignToTop && alignToBottom )
            y1 = y2 - h;
          else
          {
            y1 = y1 + ((( y2 - y1 ) - h ) / 2 );
            y2 = y1 + h;
          }
      }
    }
    else
    {
      y2 = y2 - context->Super1.bounds.Point2.Y;
      y1 = y1 + aBounds.Point1.Y;
      y2 = y2 + aBounds.Point2.Y;
    }
  }
  else
  {
    switch ( aFormation )
    {
      case CoreFormationLeftToRight :
      {
        x1 = aBounds.Point1.X;
        x2 = x1 + w;
      }
      break;

      case CoreFormationRightToLeft :
      {
        x2 = aBounds.Point2.X;
        x1 = x2 - w;
      }
      break;

      case CoreFormationTopToBottom :
      {
        y1 = aBounds.Point1.Y;
        y2 = y1 + h;
      }
      break;

      case CoreFormationBottomToTop :
      {
        y2 = aBounds.Point2.Y;
        y1 = y2 - h;
      }
      break;

      default :; 
    }

    if (( aFormation == CoreFormationLeftToRight ) || ( aFormation == CoreFormationRightToLeft ))
    {
      XBool alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );
      XBool resizeVert = (( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert );

      if ( resizeVert )
      {
        y1 = aBounds.Point1.Y;
        y2 = aBounds.Point2.Y;
      }
      else
        if ( alignToTop && !alignToBottom )
        {
          y1 = aBounds.Point1.Y;
          y2 = y1 + h;
        }
        else
          if ( alignToBottom && !alignToTop )
          {
            y2 = aBounds.Point2.Y;
            y1 = y2 - h;
          }
          else
          {
            y1 = aBounds.Point1.Y + (( EwGetRectH( aBounds ) - h ) / 2 );
            y2 = y1 + h;
          }
    }

    if (( aFormation == CoreFormationTopToBottom ) || ( aFormation == CoreFormationBottomToTop ))
    {
      XBool alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
      XBool resizeHorz = (( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz );

      if ( resizeHorz )
      {
        x1 = aBounds.Point1.X;
        x2 = aBounds.Point2.X;
      }
      else
        if ( alignToLeft && !alignToRight )
        {
          x1 = aBounds.Point1.X;
          x2 = x1 + w;
        }
        else
          if ( alignToRight && !alignToLeft )
          {
            x2 = aBounds.Point2.X;
            x1 = x2 - w;
          }
          else
          {
            x1 = aBounds.Point1.X + (( EwGetRectW( aBounds ) - w ) / 2 );
            x2 = x1 + w;
          }
    }
  }

  context->Super1.isEmpty = (XBool)(( x1 >= x2 ) || ( y1 >= y2 ));
  w = ( x2 - x1 ) - 1;
  h = ( y2 - y1 ) - 1;
  ex = context->Super1.extent.Point1.X;
  ey = context->Super1.extent.Point1.Y;
  ew = ( context->Super1.extent.Point2.X - ex ) - 1;
  eh = ( context->Super1.extent.Point2.Y - ey ) - 1;

  if ( ew == 0 )
    ew = 1;

  if ( eh == 0 )
    eh = 1;

  if ((( _this->Super1.viewState & CoreViewStateFastReshape ) == CoreViewStateFastReshape ))
  {
    _this->Point1 = EwNewPoint( x1 + ((( context->point1.X - ex ) * w ) / ew ), 
    y1 + ((( context->point1.Y - ey ) * h ) / eh ));
    _this->Point2 = EwNewPoint( x1 + ((( context->point2.X - ex ) * w ) / ew ), 
    y1 + ((( context->point2.Y - ey ) * h ) / eh ));
    _this->Point3 = EwNewPoint( x1 + ((( context->point3.X - ex ) * w ) / ew ), 
    y1 + ((( context->point3.Y - ey ) * h ) / eh ));
    _this->Point4 = EwNewPoint( x1 + ((( context->point4.X - ex ) * w ) / ew ), 
    y1 + ((( context->point4.Y - ey ) * h ) / eh ));
  }
  else
  {
    CoreQuadView__OnSetPoint1( _this, EwNewPoint( x1 + ((( context->point1.X - ex ) 
    * w ) / ew ), y1 + ((( context->point1.Y - ey ) * h ) / eh )));
    CoreQuadView__OnSetPoint2( _this, EwNewPoint( x1 + ((( context->point2.X - ex ) 
    * w ) / ew ), y1 + ((( context->point2.Y - ey ) * h ) / eh )));
    CoreQuadView__OnSetPoint3( _this, EwNewPoint( x1 + ((( context->point3.X - ex ) 
    * w ) / ew ), y1 + ((( context->point3.Y - ey ) * h ) / eh )));
    CoreQuadView__OnSetPoint4( _this, EwNewPoint( x1 + ((( context->point4.X - ex ) 
    * w ) / ew ), y1 + ((( context->point4.Y - ey ) * h ) / eh )));
    _this->Super1.layoutContext = ((CoreLayoutContext)context );
  }

  return EwNewPoint( w + 1, h + 1 );
}

/* The method MoveView() changes the position of the view by adding the value aOffset 
   to all corners of the view. For example, in case of a line view the value is 
   added to the both line end points.
   The parameter aFastMove serves for the optimization purpose. If it is 'true', 
   the corners are modified without performing any updates of the view and without 
   redrawing the screen. This is useful, when you wish to move or arrange a lot 
   of views at once. In this case it's up to you to request the finally screen update. 
   To do this you can use the method InvalidateArea() of the views @Owner.
   In the case aFastMove == false, the operation automatically requests the screen 
   redraw of the view areas before and after the movement. You don't need to take 
   care about it. */
void CoreQuadView_MoveView( CoreQuadView _this, XPoint aOffset, XBool aFastMove )
{
  if ( aFastMove )
  {
    _this->Point1 = EwMovePointPos( _this->Point1, aOffset );
    _this->Point2 = EwMovePointPos( _this->Point2, aOffset );
    _this->Point3 = EwMovePointPos( _this->Point3, aOffset );
    _this->Point4 = EwMovePointPos( _this->Point4, aOffset );
  }
  else
  {
    CoreQuadView__OnSetPoint1( _this, EwMovePointPos( _this->Point1, aOffset ));
    CoreQuadView__OnSetPoint2( _this, EwMovePointPos( _this->Point2, aOffset ));
    CoreQuadView__OnSetPoint3( _this, EwMovePointPos( _this->Point3, aOffset ));
    CoreQuadView__OnSetPoint4( _this, EwMovePointPos( _this->Point4, aOffset ));
  }
}

/* The method GetExtent() returns the position and the size of the view relative 
   to the origin of its @Owner. In case of views with a non rectangular shape the 
   method returns the rectangular boundary area enclosing the entire shape. */
XRect CoreQuadView_GetExtent( CoreQuadView _this )
{
  XInt32 x1;
  XInt32 y1;
  XInt32 x2;
  XInt32 y2;

  if (( _this->Super1.layoutContext != 0 ) && _this->Super1.layoutContext->isEmpty )
    return _Const0001;

  x1 = _this->Point1.X;
  y1 = _this->Point1.Y;
  x2 = _this->Point3.X;
  y2 = _this->Point3.Y;

  if (((( _this->Point4.X != x1 ) || ( _this->Point2.Y != y1 )) || ( _this->Point2.X 
      != x2 )) || ( _this->Point4.Y != y2 ))
  {
    if ( _this->Point2.X < x1 )
      x1 = _this->Point2.X;

    if ( _this->Point3.X < x1 )
      x1 = _this->Point3.X;

    if ( _this->Point4.X < x1 )
      x1 = _this->Point4.X;

    if ( _this->Point2.Y < y1 )
      y1 = _this->Point2.Y;

    if ( _this->Point3.Y < y1 )
      y1 = _this->Point3.Y;

    if ( _this->Point4.Y < y1 )
      y1 = _this->Point4.Y;

    if ( _this->Point1.X > x2 )
      x2 = _this->Point1.X;

    if ( _this->Point2.X > x2 )
      x2 = _this->Point2.X;

    if ( _this->Point4.X > x2 )
      x2 = _this->Point4.X;

    if ( _this->Point1.Y > y2 )
      y2 = _this->Point1.Y;

    if ( _this->Point2.Y > y2 )
      y2 = _this->Point2.Y;

    if ( _this->Point4.Y > y2 )
      y2 = _this->Point4.Y;
  }
  else
  {
    XInt32 tmp;

    if ( x2 < x1 )
    {
      tmp = x1;
      x1 = x2;
      x2 = tmp;
    }

    if ( y2 < y1 )
    {
      tmp = y1;
      y1 = y2;
      y2 = tmp;
    }
  }

  return EwNewRect( x1, y1, x2 + 1, y2 + 1 );
}

/* 'C' function for method : 'Core::QuadView.OnSetPoint4()' */
void CoreQuadView_OnSetPoint4( CoreQuadView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Point4 ))
    return;

  if (( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super1.Owner, CoreView__GetExtent( _this ));

  _this->Super1.layoutContext = 0;
  _this->Point4 = value;

  if (( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super1.Owner, CoreView__GetExtent( _this ));

  if ((( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateEmbedded ) 
      == CoreViewStateEmbedded )) && !(( _this->Super1.Owner->Super2.viewState & 
      CoreViewStateUpdatingLayout ) == CoreViewStateUpdatingLayout ))
  {
    _this->Super1.viewState = _this->Super1.viewState | CoreViewStateRequestLayout;
    _this->Super1.Owner->Super2.viewState = _this->Super1.Owner->Super2.viewState 
    | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this->Super1.Owner, CoreGroup_updateComponent ), ((XObject)_this ));
  }
}

/* Wrapper function for the virtual method : 'Core::QuadView.OnSetPoint4()' */
__declspec( naked ) void CoreQuadView__OnSetPoint4( void* _this, XPoint value )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( value );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 92 ]
  }
}

/* 'C' function for method : 'Core::QuadView.OnSetPoint3()' */
void CoreQuadView_OnSetPoint3( CoreQuadView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Point3 ))
    return;

  if (( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super1.Owner, CoreView__GetExtent( _this ));

  _this->Super1.layoutContext = 0;
  _this->Point3 = value;

  if (( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super1.Owner, CoreView__GetExtent( _this ));

  if ((( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateEmbedded ) 
      == CoreViewStateEmbedded )) && !(( _this->Super1.Owner->Super2.viewState & 
      CoreViewStateUpdatingLayout ) == CoreViewStateUpdatingLayout ))
  {
    _this->Super1.viewState = _this->Super1.viewState | CoreViewStateRequestLayout;
    _this->Super1.Owner->Super2.viewState = _this->Super1.Owner->Super2.viewState 
    | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this->Super1.Owner, CoreGroup_updateComponent ), ((XObject)_this ));
  }
}

/* Wrapper function for the virtual method : 'Core::QuadView.OnSetPoint3()' */
__declspec( naked ) void CoreQuadView__OnSetPoint3( void* _this, XPoint value )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( value );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 96 ]
  }
}

/* 'C' function for method : 'Core::QuadView.OnSetPoint2()' */
void CoreQuadView_OnSetPoint2( CoreQuadView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Point2 ))
    return;

  if (( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super1.Owner, CoreView__GetExtent( _this ));

  _this->Super1.layoutContext = 0;
  _this->Point2 = value;

  if (( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super1.Owner, CoreView__GetExtent( _this ));

  if ((( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateEmbedded ) 
      == CoreViewStateEmbedded )) && !(( _this->Super1.Owner->Super2.viewState & 
      CoreViewStateUpdatingLayout ) == CoreViewStateUpdatingLayout ))
  {
    _this->Super1.viewState = _this->Super1.viewState | CoreViewStateRequestLayout;
    _this->Super1.Owner->Super2.viewState = _this->Super1.Owner->Super2.viewState 
    | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this->Super1.Owner, CoreGroup_updateComponent ), ((XObject)_this ));
  }
}

/* Wrapper function for the virtual method : 'Core::QuadView.OnSetPoint2()' */
__declspec( naked ) void CoreQuadView__OnSetPoint2( void* _this, XPoint value )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( value );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 100 ]
  }
}

/* 'C' function for method : 'Core::QuadView.OnSetPoint1()' */
void CoreQuadView_OnSetPoint1( CoreQuadView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Point1 ))
    return;

  if (( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super1.Owner, CoreView__GetExtent( _this ));

  _this->Super1.layoutContext = 0;
  _this->Point1 = value;

  if (( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super1.Owner, CoreView__GetExtent( _this ));

  if ((( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateEmbedded ) 
      == CoreViewStateEmbedded )) && !(( _this->Super1.Owner->Super2.viewState & 
      CoreViewStateUpdatingLayout ) == CoreViewStateUpdatingLayout ))
  {
    _this->Super1.viewState = _this->Super1.viewState | CoreViewStateRequestLayout;
    _this->Super1.Owner->Super2.viewState = _this->Super1.Owner->Super2.viewState 
    | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this->Super1.Owner, CoreGroup_updateComponent ), ((XObject)_this ));
  }
}

/* Wrapper function for the virtual method : 'Core::QuadView.OnSetPoint1()' */
__declspec( naked ) void CoreQuadView__OnSetPoint1( void* _this, XPoint value )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( value );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 104 ]
  }
}

/* The method IsPointInside() verifies whether the specified position aPoint lies 
   within the quad and returns 'true' if this is the case. If aPoint lies outside 
   the quad, the method returns 'false'. */
XBool CoreQuadView_IsPointInside( CoreQuadView _this, XPoint aPoint )
{
  XPoint points[ 4 ] = {0};
  XInt32 i = 0;
  XInt32 j = 3;
  XBool inside1 = 0;
  XBool inside2 = 0;

  points[ 0 ] = _this->Point1;
  points[ 1 ] = _this->Point2;
  points[ 2 ] = _this->Point3;
  points[ 3 ] = _this->Point4;

  while ( i < 4 )
  {
    XInt32 vert1X = points[ EwCheckIndex( i, 4 )].X;
    XInt32 vert1Y = points[ EwCheckIndex( i, 4 )].Y;
    XInt32 vert2X = points[ EwCheckIndex( j, 4 )].X;
    XInt32 vert2Y = points[ EwCheckIndex( j, 4 )].Y;

    if ((( vert1Y > aPoint.Y ) != ( vert2Y > aPoint.Y )) || (( vert1Y < aPoint.Y ) 
        != ( vert2Y < aPoint.Y )))
    {
      XInt32 x = ((( vert2X - vert1X ) * ( aPoint.Y - vert1Y )) / ( vert2Y - vert1Y )) 
        + vert1X;

      if ( aPoint.X > x )
        inside1 = (XBool)!inside1;

      if ( aPoint.X < x )
        inside2 = (XBool)!inside2;
    }

    j = i;
    i = i + 1;
  }

  return (XBool)( inside1 || inside2 );
}

/* The method HasRectShape() evaluates the shape of the quad and returns 'true' 
   if the quad has the shape of a rectangle. Otherwise 'false' is returned. */
XBool CoreQuadView_HasRectShape( CoreQuadView _this )
{
  return (XBool)((((( _this->Point1.X == _this->Point4.X ) && ( _this->Point2.X 
    == _this->Point3.X )) && ( _this->Point1.Y == _this->Point2.Y )) && ( _this->Point3.Y 
    == _this->Point4.Y )) || (((( _this->Point1.X == _this->Point2.X ) && ( _this->Point3.X 
    == _this->Point4.X )) && ( _this->Point1.Y == _this->Point4.Y )) && ( _this->Point2.Y 
    == _this->Point3.Y )));
}

/* Variants derived from the class : 'Core::QuadView' */
EW_DEFINE_CLASS_VARIANTS( CoreQuadView )
EW_END_OF_CLASS_VARIANTS( CoreQuadView )

/* Virtual Method Table (VMT) for the class : 'Core::QuadView' */
EW_DEFINE_CLASS( CoreQuadView, CoreView, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 "Core::QuadView" )
  CoreQuadView_initLayoutContext,
  CoreView_GetRoot,
  CoreView_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreQuadView_ArrangeView,
  CoreQuadView_MoveView,
  CoreQuadView_GetExtent,
  CoreView_ChangeViewState,
  CoreQuadView_OnSetPoint4,
  CoreQuadView_OnSetPoint3,
  CoreQuadView_OnSetPoint2,
  CoreQuadView_OnSetPoint1,
EW_END_OF_CLASS( CoreQuadView )

/* Initializer for the class 'Core::RectView' */
void CoreRectView__Init( CoreRectView _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreRectView );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreRectView );

  /* ... and initialize objects, variables, properties, etc. */
}

/* Re-Initializer for the class 'Core::RectView' */
void CoreRectView__ReInit( CoreRectView _this )
{
  /* At first re-initialize the super class ... */
  CoreView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::RectView' */
void CoreRectView__Done( CoreRectView _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreView );

  /* Don't forget to deinitialize the super class ... */
  CoreView__Done( &_this->_.Super );
}

/* 'C' function for method : 'Core::RectView.initLayoutContext()' */
void CoreRectView_initLayoutContext( CoreRectView _this, XRect aBounds, CoreOutline 
  aOutline )
{
  CoreLayoutContext context = EwNewObject( CoreLayoutContext, 0 );

  context->extent = _this->Bounds;
  context->bounds = aBounds;
  context->outline = aOutline;
  _this->Super1.layoutContext = context;
}

/* The method ArrangeView() is invoked automatically if the superior @Owner group 
   needs to re-arrange its views. For example, the changing of the owners size can 
   cause the enclosed views to adapt their position and size, so all views still 
   fit within the new owners area. This method provides the core functionality for 
   the automatic GUI layout mechanism.
   The arrangement is controlled primarily by the @Layout property of the view. 
   It specifies a set of alignment constraints and determines whether the view can 
   change its size. The bounds area where the view should be arranged, is passed 
   in the parameter aBounds. This is usually the current area of the views owner.
   The parameter aFormation defines the desired arrangement mode. Depending on the 
   value of this parameter, the views can be arranged in rows or columns. If aFormation 
   == Core::Formation.None, no automatic row/column arrangement is performed and 
   the view is moved and scaled only to fit inside the aBounds area.
   ArrangeView() is invoked automatically by the framework, so you never should 
   need to invoke it directly.
   The method returns the size of the view after it has been arranged. */
XPoint CoreRectView_ArrangeView( CoreRectView _this, XRect aBounds, XEnum aFormation )
{
  XSet layout = _this->Super1.Layout;
  CoreLayoutContext context = _this->Super1.layoutContext;
  XInt32 x1 = context->extent.Point1.X;
  XInt32 y1 = context->extent.Point1.Y;
  XInt32 x2 = context->extent.Point2.X;
  XInt32 y2 = context->extent.Point2.Y;
  XPoint dstSize = EwGetRectSize( aBounds );
  XInt32 w = x2 - x1;
  XInt32 h = y2 - y1;

  if ( aFormation == CoreFormationNone )
  {
    XPoint srcSize = EwGetRectSize( context->bounds );
    x1 = x1 - context->bounds.Point1.X;
    y1 = y1 - context->bounds.Point1.Y;

    if ( srcSize.X != dstSize.X )
    {
      XBool alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
      XBool resizeHorz = (( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz );

      if ( !alignToLeft && ( resizeHorz || !alignToRight ))
        x1 = ( x1 * dstSize.X ) / srcSize.X;

      if ( !alignToRight && ( resizeHorz || !alignToLeft ))
      {
        x2 = x2 - context->bounds.Point1.X;
        x2 = ( x2 * dstSize.X ) / srcSize.X;
        x2 = x2 - dstSize.X;
      }
      else
        x2 = x2 - context->bounds.Point2.X;

      x1 = x1 + aBounds.Point1.X;
      x2 = x2 + aBounds.Point2.X;

      if ( !resizeHorz )
      {
        if ( alignToLeft && !alignToRight )
          x2 = x1 + w;
        else
          if ( !alignToLeft && alignToRight )
            x1 = x2 - w;
          else
          {
            x1 = x1 + ((( x2 - x1 ) - w ) / 2 );
            x2 = x1 + w;
          }
      }
    }
    else
    {
      x2 = x2 - context->bounds.Point2.X;
      x1 = x1 + aBounds.Point1.X;
      x2 = x2 + aBounds.Point2.X;
    }

    if ( srcSize.Y != dstSize.Y )
    {
      XBool alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );
      XBool resizeVert = (( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert );

      if ( !alignToTop && ( resizeVert || !alignToBottom ))
        y1 = ( y1 * dstSize.Y ) / srcSize.Y;

      if ( !alignToBottom && ( resizeVert || !alignToTop ))
      {
        y2 = y2 - context->bounds.Point1.Y;
        y2 = ( y2 * dstSize.Y ) / srcSize.Y;
        y2 = y2 - dstSize.Y;
      }
      else
        y2 = y2 - context->bounds.Point2.Y;

      y1 = y1 + aBounds.Point1.Y;
      y2 = y2 + aBounds.Point2.Y;

      if ( !resizeVert )
      {
        if ( alignToTop && !alignToBottom )
          y2 = y1 + h;
        else
          if ( !alignToTop && alignToBottom )
            y1 = y2 - h;
          else
          {
            y1 = y1 + ((( y2 - y1 ) - h ) / 2 );
            y2 = y1 + h;
          }
      }
    }
    else
    {
      y2 = y2 - context->bounds.Point2.Y;
      y1 = y1 + aBounds.Point1.Y;
      y2 = y2 + aBounds.Point2.Y;
    }
  }
  else
  {
    switch ( aFormation )
    {
      case CoreFormationLeftToRight :
      {
        x1 = aBounds.Point1.X;
        x2 = x1 + w;
      }
      break;

      case CoreFormationRightToLeft :
      {
        x2 = aBounds.Point2.X;
        x1 = x2 - w;
      }
      break;

      case CoreFormationTopToBottom :
      {
        y1 = aBounds.Point1.Y;
        y2 = y1 + h;
      }
      break;

      case CoreFormationBottomToTop :
      {
        y2 = aBounds.Point2.Y;
        y1 = y2 - h;
      }
      break;

      default :; 
    }

    if (( aFormation == CoreFormationLeftToRight ) || ( aFormation == CoreFormationRightToLeft ))
    {
      XBool alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );
      XBool resizeVert = (( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert );

      if ( resizeVert )
      {
        y1 = aBounds.Point1.Y;
        y2 = aBounds.Point2.Y;
      }
      else
        if ( alignToTop && !alignToBottom )
        {
          y1 = aBounds.Point1.Y;
          y2 = y1 + h;
        }
        else
          if ( alignToBottom && !alignToTop )
          {
            y2 = aBounds.Point2.Y;
            y1 = y2 - h;
          }
          else
          {
            y1 = aBounds.Point1.Y + (( EwGetRectH( aBounds ) - h ) / 2 );
            y2 = y1 + h;
          }
    }

    if (( aFormation == CoreFormationTopToBottom ) || ( aFormation == CoreFormationBottomToTop ))
    {
      XBool alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
      XBool resizeHorz = (( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz );

      if ( resizeHorz )
      {
        x1 = aBounds.Point1.X;
        x2 = aBounds.Point2.X;
      }
      else
        if ( alignToLeft && !alignToRight )
        {
          x1 = aBounds.Point1.X;
          x2 = x1 + w;
        }
        else
          if ( alignToRight && !alignToLeft )
          {
            x2 = aBounds.Point2.X;
            x1 = x2 - w;
          }
          else
          {
            x1 = aBounds.Point1.X + (( EwGetRectW( aBounds ) - w ) / 2 );
            x2 = x1 + w;
          }
    }
  }

  context->isEmpty = (XBool)(( x1 >= x2 ) || ( y1 >= y2 ));

  if ((( _this->Super1.viewState & CoreViewStateFastReshape ) == CoreViewStateFastReshape ))
    _this->Bounds = EwNewRect( x1, y1, x2, y2 );
  else
  {
    CoreRectView__OnSetBounds( _this, EwNewRect( x1, y1, x2, y2 ));
    _this->Super1.layoutContext = context;
  }

  return EwNewPoint( x2 - x1, y2 - y1 );
}

/* The method MoveView() changes the position of the view by adding the value aOffset 
   to all corners of the view. For example, in case of a line view the value is 
   added to the both line end points.
   The parameter aFastMove serves for the optimization purpose. If it is 'true', 
   the corners are modified without performing any updates of the view and without 
   redrawing the screen. This is useful, when you wish to move or arrange a lot 
   of views at once. In this case it's up to you to request the finally screen update. 
   To do this you can use the method InvalidateArea() of the views @Owner.
   In the case aFastMove == false, the operation automatically requests the screen 
   redraw of the view areas before and after the movement. You don't need to take 
   care about it. */
void CoreRectView_MoveView( CoreRectView _this, XPoint aOffset, XBool aFastMove )
{
  if ( aFastMove )
    _this->Bounds = EwMoveRectPos( _this->Bounds, aOffset );
  else
    CoreRectView__OnSetBounds( _this, EwMoveRectPos( _this->Bounds, aOffset ));
}

/* The method GetExtent() returns the position and the size of the view relative 
   to the origin of its @Owner. In case of views with a non rectangular shape the 
   method returns the rectangular boundary area enclosing the entire shape. */
XRect CoreRectView_GetExtent( CoreRectView _this )
{
  return _this->Bounds;
}

/* 'C' function for method : 'Core::RectView.OnSetBounds()' */
void CoreRectView_OnSetBounds( CoreRectView _this, XRect value )
{
  if ( !EwCompRect( value, _this->Bounds ))
    return;

  if (( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super1.Owner, _this->Bounds );

  _this->Super1.layoutContext = 0;
  _this->Bounds = value;

  if (( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super1.Owner, _this->Bounds );

  if ((( _this->Super1.Owner != 0 ) && (( _this->Super1.viewState & CoreViewStateEmbedded ) 
      == CoreViewStateEmbedded )) && !(( _this->Super1.Owner->Super2.viewState & 
      CoreViewStateUpdatingLayout ) == CoreViewStateUpdatingLayout ))
  {
    _this->Super1.viewState = _this->Super1.viewState | CoreViewStateRequestLayout;
    _this->Super1.Owner->Super2.viewState = _this->Super1.Owner->Super2.viewState 
    | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this->Super1.Owner, CoreGroup_updateComponent ), ((XObject)_this ));
  }
}

/* Wrapper function for the virtual method : 'Core::RectView.OnSetBounds()' */
__declspec( naked ) void CoreRectView__OnSetBounds( void* _this, XRect value )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( value );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 92 ]
  }
}

/* Variants derived from the class : 'Core::RectView' */
EW_DEFINE_CLASS_VARIANTS( CoreRectView )
EW_END_OF_CLASS_VARIANTS( CoreRectView )

/* Virtual Method Table (VMT) for the class : 'Core::RectView' */
EW_DEFINE_CLASS( CoreRectView, CoreView, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 "Core::RectView" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreView_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( CoreRectView )

/* Initializer for the class 'Core::Group' */
void CoreGroup__Init( CoreGroup _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreGroup );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreGroup );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Super2.viewState = CoreViewStateAlphaBlended | CoreViewStateEnabled | CoreViewStateFocusable 
  | CoreViewStateTouchable | CoreViewStateVisible;
  _this->Opacity = 255;

  /* Call the user defined constructor */
  CoreGroup_Init( _this, aArg );
}

/* Re-Initializer for the class 'Core::Group' */
void CoreGroup__ReInit( CoreGroup _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::Group' */
void CoreGroup__Done( CoreGroup _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRectView );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void CoreGroup_Init( CoreGroup _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreGroup_InvalidateViewState( _this );
}

/* 'C' function for method : 'Core::Group.Draw()' */
void CoreGroup_Draw( CoreGroup _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  aOpacity = (( aOpacity + 1 ) * _this->Opacity ) >> 8;
  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended ) 
  == CoreViewStateAlphaBlended ));

  if ( _this->buffer == 0 )
    CoreGroup_drawContent( _this, aCanvas, aClip, EwMovePointPos( aOffset, _this->Super1.Bounds.Point1 ), 
    aOpacity, aBlend );
  else
  {
    XColor c = EwNewColor( 255, 255, 255, (XUInt8)aOpacity );
    ResourcesBitmap__Update( _this->buffer );
    GraphicsCanvas_CopyBitmap( aCanvas, aClip, ((ResourcesBitmap)_this->buffer ), 
    0, EwMoveRectPos( _this->Super1.Bounds, aOffset ), _Const0000, c, c, c, c, aBlend );
  }
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
CoreCursorHit CoreGroup_CursorHitTest( CoreGroup _this, XRect aArea, XInt32 aFinger, 
  XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
{
  CoreView view = _this->last;
  CoreCursorHit found = 0;
  XRect area = _Const0001;
  CoreView form = 0;
  XBool lock = (XBool)(( _this->fadersQueue != 0 ) && (( _this->fadersQueue->current 
    != 0 ) || ( _this->fadersQueue->first != 0 )));

  if ( EwIsRectEmpty( EwIntersectRect( aArea, _this->Super1.Bounds )))
    return 0;

  aArea = EwMoveRectNeg( aArea, _this->Super1.Bounds.Point1 );

  while ( view != 0 )
  {
    if ((( view->viewState & CoreViewStateEmbedded ) == CoreViewStateEmbedded ) 
        && ( form == 0 ))
    {
      form = view->prev;

      while (( form != 0 ) && !(( form->viewState & CoreViewStateIsOutline ) == 
             CoreViewStateIsOutline ))
        form = form->prev;

      if ( form != 0 )
        area = EwIntersectRect( aArea, CoreView__GetExtent( form ));
      else
        area = _Const0001;
    }

    if ( form == view )
    {
      form = 0;
      area = _Const0001;
    }

    if (((((( view->viewState & CoreViewStateTouchable ) == CoreViewStateTouchable ) 
        && (( view->viewState & CoreViewStateEnabled ) == CoreViewStateEnabled )) 
        && !(( view->viewState & CoreViewStateRunningFader ) == CoreViewStateRunningFader )) 
        && !(( view->viewState & CoreViewStatePendingFader ) == CoreViewStatePendingFader )) 
        && ( !(( view->viewState & CoreViewStateDialog ) == CoreViewStateDialog ) 
        || (((CoreView)_this->dialogStack->group == view ) && !lock )))
    {
      XRect extent = CoreView__GetExtent( view );
      CoreView dedicatedView = aDedicatedView;
      CoreCursorHit cursorHit = 0;

      if ( dedicatedView == view )
        dedicatedView = 0;

      if ((( view->viewState & CoreViewStateEmbedded ) == CoreViewStateEmbedded ))
      {
        if ( !EwIsRectEmpty( EwIntersectRect( extent, area )))
          cursorHit = CoreView__CursorHitTest( view, area, aFinger, aStrikeCount, 
          dedicatedView, aRetargetReason );
      }
      else
        if ( !EwIsRectEmpty( EwIntersectRect( extent, aArea )) || ( aDedicatedView 
            == view ))
          cursorHit = CoreView__CursorHitTest( view, aArea, aFinger, aStrikeCount, 
          dedicatedView, aRetargetReason );

      view = view->prev;

      if ( cursorHit != 0 )
      {
        if (( found == 0 ) || (( cursorHit->Deviation < found->Deviation ) && ( 
            cursorHit->Deviation >= 0 )))
          found = cursorHit;

        if ( cursorHit->Deviation == 0 )
          view = 0;
      }
    }
    else
      view = view->prev;
  }

  return found;
}

/* The method ChangeViewState() modifies the current state of the view. The state 
   is a set of switches determining whether a view is visible, whether it can react 
   to user inputs or whether it is just performing some update operations, etc.
   The modification is controlled by the the both parameters. The first aSetState 
   contains the switches to activate within the view state. The second aClearState 
   determines all switches to disable.
   Depending on the state alteration the method will perform different operations, 
   e.g. in response to the clearing of the visible state, the method will request 
   a screen redraw to make disappear the view from the screen.
   ChangeViewState() is invoked automatically by the framework, so you never should 
   need to invoke it directly. All relevant states are available as properties e.g. 
   the property Visible in derived classes reflects the visible state of the view. */
void CoreGroup_ChangeViewState( CoreGroup _this, XSet aSetState, XSet aClearState )
{
  XSet oldState = _this->Super2.viewState;
  XSet deltaState;

  CoreView_ChangeViewState((CoreView)_this, aSetState, aClearState );
  deltaState = _this->Super2.viewState ^ oldState;

  if (( _this->Focus != 0 ) && (( deltaState & CoreViewStateFocused ) == CoreViewStateFocused ))
  {
    if ((( _this->Super2.viewState & CoreViewStateFocused ) == CoreViewStateFocused ))
      CoreView__ChangeViewState( _this->Focus, CoreViewStateFocused, 0 );
    else
      CoreView__ChangeViewState( _this->Focus, 0, CoreViewStateFocused );
  }

  if (( _this->dialogStack != 0 ) && (( deltaState & CoreViewStateFocused ) == CoreViewStateFocused ))
  {
    if ((( _this->Super2.viewState & CoreViewStateFocused ) == CoreViewStateFocused ) 
        && (( _this->dialogStack->group->Super2.viewState & ( CoreViewStateEnabled 
        | CoreViewStateFocusable )) == ( CoreViewStateEnabled | CoreViewStateFocusable )))
      CoreView__ChangeViewState( _this->dialogStack->group, CoreViewStateFocused, 
      0 );
    else
      CoreView__ChangeViewState( _this->dialogStack->group, 0, CoreViewStateFocused );
  }

  if ( !!deltaState )
  {
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStatePendingViewState;
    EwPostSignal( EwNewSlot( _this, CoreGroup_updateComponent ), ((XObject)_this ));
  }
}

/* 'C' function for method : 'Core::Group.OnSetBounds()' */
void CoreGroup_OnSetBounds( CoreGroup _this, XRect value )
{
  XPoint oldSize;
  XPoint newSize;
  XBool resize;

  if ( !EwCompRect( value, _this->Super1.Bounds ))
    return;

  oldSize = EwGetRectSize( _this->Super1.Bounds );
  newSize = EwGetRectSize( value );
  resize = (XBool)EwCompPoint( oldSize, newSize );

  if ( resize && ( _this->buffer != 0 ))
  {
    ResourcesBitmap__OnSetFrameSize( _this->buffer, newSize );
    EwNotifyObjObservers((XObject)_this, 0 );
    EwNotifyObjObservers((XObject)_this->buffer, 0 );
  }

  CoreRectView_OnSetBounds((CoreRectView)_this, value );

  if (( resize && ( oldSize.X > 0 )) && ( oldSize.Y > 0 ))
  {
    XRect bounds = EwNewRect2Point( _Const0000, oldSize );
    CoreView view = _this->first;

    while ( view != 0 )
    {
      if ((( view->layoutContext == 0 ) && ( view->Layout != ( CoreLayoutAlignToLeft 
          | CoreLayoutAlignToTop ))) && !(( view->viewState & CoreViewStateEmbedded ) 
          == CoreViewStateEmbedded ))
        CoreView__initLayoutContext( view, bounds, 0 );

      view = view->next;
    }
  }

  if ( resize )
  {
    _this->Super2.viewState = _this->Super2.viewState | ( CoreViewStatePendingLayout 
    | CoreViewStateUpdateLayout );
    EwPostSignal( EwNewSlot( _this, CoreGroup_updateComponent ), ((XObject)_this ));
  }
}

/* 'C' function for method : 'Core::Group.processKeyHandlers()' */
XObject CoreGroup_processKeyHandlers( CoreGroup _this, CoreEvent aEvent )
{
  CoreKeyEvent keyEvent = EwCastObject( aEvent, CoreKeyEvent );
  CoreKeyPressHandler handler = _this->keyHandlers;

  if ( keyEvent == 0 )
    return 0;

  while (( handler != 0 ) && !CoreKeyPressHandler_HandleEvent( handler, keyEvent ))
    handler = handler->next;

  return ((XObject)handler );
}

/* 'C' function for method : 'Core::Group.updateBufferSlot()' */
void CoreGroup_updateBufferSlot( CoreGroup _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->buffer != 0 )
  {
    XBool fullOffScreenBufferUpdate = 0;
    fullOffScreenBufferUpdate = (XBool)EwFullOffScreenBufferUpdate;

    if ( !fullOffScreenBufferUpdate )
      GraphicsCanvas_FillRectangle( _this->buffer, _this->buffer->InvalidArea, _this->buffer->InvalidArea, 
      _Const0002, _Const0002, _Const0002, _Const0002, 0 );

    CoreGroup_drawContent( _this, _this->buffer, _this->buffer->InvalidArea, _Const0000, 
    255, 1 );
  }
}

/* 'C' function for method : 'Core::Group.drawContent()' */
void CoreGroup_drawContent( CoreGroup _this, GraphicsCanvas aCanvas, XRect aClip, 
  XPoint aOffset, XInt32 aOpacity, XBool aBlend )
{
  CoreView view = _this->first;
  XRect clip = _Const0001;
  XBool outlineVisible = 1;

  CoreGroup_DrawBackground( _this, aCanvas, aClip, aOffset, aOpacity, aBlend );

  while ( view != 0 )
  {
    if ((( view->viewState & CoreViewStateIsOutline ) == CoreViewStateIsOutline ))
    {
      CoreOutline outlineView = EwCastObject( view, CoreOutline );
      clip = EwIntersectRect( aClip, EwMoveRectPos( outlineView->Super1.Bounds, 
      aOffset ));
      outlineVisible = (( outlineView->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible );
    }

    if ((( view->viewState & CoreViewStateVisible ) == CoreViewStateVisible ))
    {
      if ((( view->viewState & CoreViewStateEmbedded ) == CoreViewStateEmbedded ))
      {
        if ( outlineVisible )
        {
          XRect area = EwIntersectRect( EwMoveRectPos( CoreView__GetExtent( view ), 
            aOffset ), clip );

          if ( !EwIsRectEmpty( area ))
            CoreView__Draw( view, aCanvas, area, aOffset, aOpacity, aBlend );
        }
      }
      else
      {
        XRect area = EwIntersectRect( EwMoveRectPos( CoreView__GetExtent( view ), 
          aOffset ), aClip );

        if ( !EwIsRectEmpty( area ))
          CoreView__Draw( view, aCanvas, area, aOffset, aOpacity, aBlend );
      }
    }

    view = view->next;
  }

  CoreGroup_DrawForeground( _this, aCanvas, aClip, aOffset, aOpacity, aBlend );
}

/* 'C' function for method : 'Core::Group.recalculateLayout()' */
void CoreGroup_recalculateLayout( CoreGroup _this )
{
  XBool groupLayout = (( _this->Super2.viewState & CoreViewStateUpdateLayout ) == 
    CoreViewStateUpdateLayout );
  XRect groupBounds = EwGetRectORect( _this->Super1.Bounds );
  XBool formLayout = 0;
  XRect formBounds = _Const0001;
  XRect formBounds2 = _Const0001;
  XPoint formOffset = _Const0000;
  XInt32 formSpaceH = 0;
  XInt32 formSpaceV = 0;
  XEnum formMode = CoreFormationNone;
  XEnum formMode2 = CoreFormationNone;
  CoreView view = _this->last;
  CoreOutline form = 0;
  CoreView lastView = 0;

  while ( view != 0 )
  {
    if ((( view->viewState & CoreViewStateRequestLayout ) == CoreViewStateRequestLayout ))
    {
      formLayout = 1;
      view->viewState = view->viewState & ~CoreViewStateRequestLayout;
    }

    if ( formLayout && (( view->viewState & CoreViewStateIsOutline ) == CoreViewStateIsOutline ))
    {
      formLayout = 0;

      if ( EwCastObject( view, CoreOutline )->Formation != CoreFormationNone )
        view->viewState = view->viewState | CoreViewStateUpdateLayout;
    }

    view = view->prev;
  }

  formLayout = 0;
  view = _this->first;

  if ( groupLayout )
  {
    _this->Super2.viewState = _this->Super2.viewState & ~CoreViewStateUpdateLayout;
    groupLayout = (XBool)!EwIsRectEmpty( groupBounds );
  }

  _this->Super2.viewState = _this->Super2.viewState | CoreViewStateUpdatingLayout;

  while ( view != 0 )
  {
    if (( lastView == 0 ) && ( formMode != formMode2 ))
    {
      CoreView viewI = view;
      XInt32 rowH = 0;
      XInt32 rowW = EwGetRectW( formBounds );
      XInt32 colH = EwGetRectH( formBounds );
      XInt32 colW = 0;
      XPoint viewS = _Const0000;

      do
        if ((( viewI->viewState & CoreViewStateIsOutline ) == CoreViewStateIsOutline ))
          viewI = 0;
        else
          if ((( viewI->viewState & ( CoreViewStateEmbedded | CoreViewStateVisible )) 
              == ( CoreViewStateEmbedded | CoreViewStateVisible )))
          {
            viewS = EwGetRectSize( CoreView__GetExtent( viewI ));

            if (( formMode2 == CoreFormationLeftToRight ) || ( formMode2 == CoreFormationRightToLeft ))
              rowW = rowW - viewS.X;

            if (( formMode2 == CoreFormationTopToBottom ) || ( formMode2 == CoreFormationBottomToTop ))
              colH = colH - viewS.Y;

            if (( lastView == 0 ) || (( rowW >= 0 ) && ( colH >= 0 )))
            {
              lastView = viewI;
              viewI = viewI->next;

              if (( formMode2 == CoreFormationLeftToRight ) || ( formMode2 == CoreFormationRightToLeft ))
              {
                rowW = rowW - formSpaceH;

                if ( viewS.Y > rowH )
                  rowH = viewS.Y;
              }

              if (( formMode2 == CoreFormationTopToBottom ) || ( formMode2 == CoreFormationBottomToTop ))
              {
                colH = colH - formSpaceV;

                if ( viewS.X > colW )
                  colW = viewS.X;
              }
            }
            else
              viewI = 0;
          }
          else
            viewI = viewI->next;
      while ( viewI != 0 );

      if ( lastView == 0 )
        lastView = ((CoreView)form );

      formBounds2 = formBounds;

      switch ( formMode )
      {
        case CoreFormationLeftToRight_TopToBottom :
        case CoreFormationRightToLeft_TopToBottom :
          formBounds2.Point2.Y = ( formBounds2.Point1.Y + rowH );
        break;

        case CoreFormationLeftToRight_BottomToTop :
        case CoreFormationRightToLeft_BottomToTop :
          formBounds2.Point1.Y = ( formBounds2.Point2.Y - rowH );
        break;

        case CoreFormationTopToBottom_LeftToRight :
        case CoreFormationBottomToTop_LeftToRight :
          formBounds2.Point2.X = ( formBounds2.Point1.X + colW );
        break;

        case CoreFormationTopToBottom_RightToLeft :
        case CoreFormationBottomToTop_RightToLeft :
          formBounds2.Point1.X = ( formBounds2.Point2.X - colW );
        break;

        default :; 
      }
    }

    if ((( view->viewState & CoreViewStateEmbedded ) == CoreViewStateEmbedded ))
    {
      if (( view->layoutContext != 0 ) && ( view->layoutContext->outline != form ))
        view->layoutContext = 0;

      if ((( view->layoutContext == 0 ) && formLayout ) && (( view->Layout != ( 
          CoreLayoutAlignToLeft | CoreLayoutAlignToTop )) || ( formMode2 != CoreFormationNone )))
        CoreView__initLayoutContext( view, formBounds2, form );
    }

    if ( view->layoutContext != 0 )
    {
      if ( groupLayout && !(( view->viewState & CoreViewStateEmbedded ) == CoreViewStateEmbedded ))
        CoreView__ArrangeView( view, groupBounds, CoreFormationNone );

      if ( formLayout && (( view->viewState & CoreViewStateEmbedded ) == CoreViewStateEmbedded ))
      {
        XPoint size = CoreView__ArrangeView( view, EwMoveRectPos( formBounds2, formOffset ), 
          formMode2 );

        if ((( view->viewState & CoreViewStateVisible ) == CoreViewStateVisible ))
        {
          XPoint ofs = _Const0000;

          switch ( formMode2 )
          {
            case CoreFormationLeftToRight :
              ofs.X = ( size.X + formSpaceH );
            break;

            case CoreFormationRightToLeft :
              ofs.X = ( -size.X - formSpaceH );
            break;

            case CoreFormationTopToBottom :
              ofs.Y = ( size.Y + formSpaceV );
            break;

            case CoreFormationBottomToTop :
              ofs.Y = ( -size.Y - formSpaceV );
            break;

            default :; 
          }

          formOffset = EwMovePointPos( formOffset, ofs );
        }
      }
    }

    if ((( view->viewState & CoreViewStateIsOutline ) == CoreViewStateIsOutline ))
    {
      formLayout = (( view->viewState & CoreViewStateUpdateLayout ) == CoreViewStateUpdateLayout );
      form = EwCastObject( view, CoreOutline );

      if ( formLayout )
      {
        view->viewState = view->viewState & ~CoreViewStateUpdateLayout;
        formBounds = EwMoveRectPos( form->Super1.Bounds, form->ScrollOffset );
        formBounds2 = formBounds;
        formOffset = _Const0000;
        formMode = form->Formation;
        formMode2 = formMode;
        formSpaceH = form->Space;
        formSpaceV = form->Space;
        formLayout = (XBool)!EwIsRectEmpty( formBounds );
        lastView = 0;

        switch ( formMode )
        {
          case CoreFormationLeftToRight_TopToBottom :
          case CoreFormationLeftToRight_BottomToTop :
            formMode2 = CoreFormationLeftToRight;
          break;

          case CoreFormationRightToLeft_TopToBottom :
          case CoreFormationRightToLeft_BottomToTop :
            formMode2 = CoreFormationRightToLeft;
          break;

          case CoreFormationTopToBottom_LeftToRight :
          case CoreFormationTopToBottom_RightToLeft :
            formMode2 = CoreFormationTopToBottom;
          break;

          case CoreFormationBottomToTop_LeftToRight :
          case CoreFormationBottomToTop_RightToLeft :
            formMode2 = CoreFormationBottomToTop;
          break;

          default :; 
        }
      }

      if ( formLayout )
        CoreGroup__InvalidateArea( _this, form->Super1.Bounds );
    }

    if ( view == lastView )
    {
      switch ( formMode )
      {
        case CoreFormationLeftToRight_TopToBottom :
        case CoreFormationRightToLeft_TopToBottom :
          formOffset = EwNewPoint( 0, ( formOffset.Y + EwGetRectH( formBounds2 )) 
          + formSpaceV );
        break;

        case CoreFormationLeftToRight_BottomToTop :
        case CoreFormationRightToLeft_BottomToTop :
          formOffset = EwNewPoint( 0, ( formOffset.Y - EwGetRectH( formBounds2 )) 
          - formSpaceV );
        break;

        case CoreFormationTopToBottom_LeftToRight :
        case CoreFormationBottomToTop_LeftToRight :
          formOffset = EwNewPoint(( formOffset.X + EwGetRectW( formBounds2 )) + 
          formSpaceH, 0 );
        break;

        case CoreFormationTopToBottom_RightToLeft :
        case CoreFormationBottomToTop_RightToLeft :
          formOffset = EwNewPoint(( formOffset.X - EwGetRectW( formBounds2 )) - 
          formSpaceH, 0 );
        break;

        default :; 
      }

      lastView = 0;
    }

    view = view->next;
  }

  _this->Super2.viewState = _this->Super2.viewState & ~CoreViewStateUpdatingLayout;
  CoreGroup__UpdateLayout( _this, EwGetRectSize( groupBounds ));
}

/* 'C' function for method : 'Core::Group.updateComponent()' */
void CoreGroup_updateComponent( CoreGroup _this, XObject sender )
{
  XBool updateLayout;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  updateLayout = (( _this->Super2.viewState & CoreViewStateUpdateLayout ) == CoreViewStateUpdateLayout );

  if ((( _this->Super2.viewState & CoreViewStatePendingLayout ) == CoreViewStatePendingLayout ))
  {
    _this->Super2.viewState = _this->Super2.viewState & ~CoreViewStatePendingLayout;
    CoreGroup_recalculateLayout( _this );
  }

  if ((( _this->Super2.viewState & CoreViewStatePendingViewState ) == CoreViewStatePendingViewState ) 
      || updateLayout )
  {
    _this->Super2.viewState = _this->Super2.viewState & ~CoreViewStatePendingViewState;
    CoreGroup__UpdateViewState( _this, _this->Super2.viewState );
  }
}

/* 'C' function for method : 'Core::Group.OnSetFocus()' */
void CoreGroup_OnSetFocus( CoreGroup _this, CoreView value )
{
  if (( value != 0 ) && ( value->Owner != _this ))
  {
    EwThrow( EwLoadString( &_Const0003 ));
    return;
  }

  if (( value != 0 ) && !(( value->viewState & ( CoreViewStateEnabled | CoreViewStateFocusable )) 
      == ( CoreViewStateEnabled | CoreViewStateFocusable )))
    value = 0;

  if (( value != 0 ) && (( value->viewState & CoreViewStateDialog ) == CoreViewStateDialog ))
    value = 0;

  if ( value == _this->Focus )
    return;

  if ( _this->Focus != 0 )
    CoreView__ChangeViewState( _this->Focus, 0, CoreViewStateFocused | CoreViewStateSelected );

  _this->Focus = value;

  if ( value != 0 )
  {
    if ((( _this->Super2.viewState & CoreViewStateFocused ) == CoreViewStateFocused ))
      CoreView__ChangeViewState( value, CoreViewStateFocused | CoreViewStateSelected, 
      0 );
    else
      CoreView__ChangeViewState( value, CoreViewStateSelected, 0 );
  }
}

/* Wrapper function for the virtual method : 'Core::Group.OnSetFocus()' */
__declspec( naked ) void CoreGroup__OnSetFocus( void* _this, CoreView value )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( value );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 96 ]
  }
}

/* 'C' function for method : 'Core::Group.OnGetBuffered()' */
XBool CoreGroup_OnGetBuffered( CoreGroup _this )
{
  return (XBool)( _this->buffer != 0 );
}

/* 'C' function for method : 'Core::Group.OnSetBuffered()' */
void CoreGroup_OnSetBuffered( CoreGroup _this, XBool value )
{
  if (( _this->buffer != 0 ) == value )
    return;

  if ( value )
  {
    _this->buffer = EwNewObject( GraphicsCanvas, 0 );
    ResourcesBitmap__OnSetFrameSize( _this->buffer, EwGetRectSize( _this->Super1.Bounds ));
    _this->buffer->OnDraw = EwNewSlot( _this, CoreGroup_updateBufferSlot );
  }
  else
  {
    _this->buffer->OnDraw = EwNullSlot;
    ResourcesBitmap__OnSetFrameSize( _this->buffer, _Const0000 );
    _this->buffer = 0;
  }

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Wrapper function for the virtual method : 'Core::Group.OnSetBuffered()' */
__declspec( naked ) void CoreGroup__OnSetBuffered( void* _this, XBool value )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( value );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 100 ]
  }
}

/* 'C' function for method : 'Core::Group.OnGetEnabled()' */
XBool CoreGroup_OnGetEnabled( CoreGroup _this )
{
  return (( _this->Super2.viewState & CoreViewStateEnabled ) == CoreViewStateEnabled );
}

/* 'C' function for method : 'Core::Group.OnSetEnabled()' */
void CoreGroup_OnSetEnabled( CoreGroup _this, XBool value )
{
  if ( value )
    CoreView__ChangeViewState( _this, CoreViewStateEnabled, 0 );
  else
    CoreView__ChangeViewState( _this, 0, CoreViewStateEnabled );
}

/* 'C' function for method : 'Core::Group.OnSetOpacity()' */
void CoreGroup_OnSetOpacity( CoreGroup _this, XInt32 value )
{
  if ( value > 255 )
    value = 255;

  if ( value < 0 )
    value = 0;

  if ( value == _this->Opacity )
    return;

  _this->Opacity = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* Wrapper function for the virtual method : 'Core::Group.OnSetOpacity()' */
__declspec( naked ) void CoreGroup__OnSetOpacity( void* _this, XInt32 value )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( value );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 104 ]
  }
}

/* 'C' function for method : 'Core::Group.OnSetEmbedded()' */
void CoreGroup_OnSetEmbedded( CoreGroup _this, XBool value )
{
  if ( value )
    CoreView__ChangeViewState( _this, CoreViewStateEmbedded, 0 );
  else
    CoreView__ChangeViewState( _this, 0, CoreViewStateEmbedded );
}

/* 'C' function for method : 'Core::Group.OnSetAlphaBlended()' */
void CoreGroup_OnSetAlphaBlended( CoreGroup _this, XBool value )
{
  if ( value )
    CoreView__ChangeViewState( _this, CoreViewStateAlphaBlended, 0 );
  else
    CoreView__ChangeViewState( _this, 0, CoreViewStateAlphaBlended );
}

/* 'C' function for method : 'Core::Group.OnGetVisible()' */
XBool CoreGroup_OnGetVisible( CoreGroup _this )
{
  return (( _this->Super2.viewState & CoreViewStateVisible ) == CoreViewStateVisible );
}

/* 'C' function for method : 'Core::Group.OnSetVisible()' */
void CoreGroup_OnSetVisible( CoreGroup _this, XBool value )
{
  if ( value )
    CoreView__ChangeViewState( _this, CoreViewStateVisible, 0 );
  else
    CoreView__ChangeViewState( _this, 0, CoreViewStateVisible );
}

/* The method DrawForeground() is invoked automatically if parts of the GUI component 
   should be redrawn on the screen. This can occur when e.g. the component has been 
   moved or the appearance of the enclosed views has changed before.
   DrawForeground() is invoked after all other views existing inside the component 
   are drawn. Thus it can be used to implement sophisticated foreground drawing 
   operations. By overriding this method in a descending class the desired drawing 
   operations can be implemented individually.
   This method is invoked by the framework, so you never will need to invoke this 
   method directly. However you can request an invocation of this method by calling 
   the method @InvalidateArea().
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the GUI component and the origin 
   of the canvas. You will need it to convert the drawing coordinates into these 
   of the canvas.
   The parameter aOpacity contains the resulting @Opacity value to apply on the 
   drawn contents. It lies in range 0 .. 255. The parameter aBlend contains the 
   resulting @AlphaBlended mode to apply. It determines, whether the drawing operations 
   should be performed with alpha-blending active or not. If aBlend is false, the 
   drawn contents should overwrite the corresponding pixel in the drawing destination 
   aCanvas. If aBlend is true, the outputs should be mixed with the pixel already 
   stored in aCanvas. For this purpose all Graphics Engine functions provide a parameter 
   to specify the mode for the respective drawing operation.
   Please note also the method @DrawBackground(), which is invoked before the views 
   belonging to the component have begun their drawing operations. */
void CoreGroup_DrawForeground( CoreGroup _this, GraphicsCanvas aCanvas, XRect aClip, 
  XPoint aOffset, XInt32 aOpacity, XBool aBlend )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aBlend );
  EW_UNUSED_ARG( aOpacity );
  EW_UNUSED_ARG( aOffset );
  EW_UNUSED_ARG( aClip );
  EW_UNUSED_ARG( aCanvas );
}

/* The method DrawBackground() is invoked automatically if parts of the GUI component 
   should be redrawn on the screen. This can occur when e.g. the component has been 
   moved or the appearance of the enclosed views has changed before.
   DrawBackground() is invoked before all other views existing inside the component 
   are drawn. Thus it can be used to implement sophisticated background filling 
   operations. By overriding this method in a descending class the desired drawing 
   operations can be implemented individually.
   This method is invoked by the framework, so you never will need to invoke this 
   method directly. However you can request an invocation of this method by calling 
   the method @InvalidateArea().
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the GUI component and the origin 
   of the canvas. You will need it to convert the drawing coordinates into these 
   of the canvas.
   The parameter aOpacity contains the resulting @Opacity value to apply on the 
   drawn contents. It lies in range 0 .. 255. The parameter aBlend contains the 
   resulting @AlphaBlended mode to apply. It determines, whether the drawing operations 
   should be performed with alpha-blending active or not. If aBlend is false, the 
   drawn contents should overwrite the corresponding pixel in the drawing destination 
   aCanvas. If aBlend is true, the outputs should be mixed with the pixel already 
   stored in aCanvas. For this purpose all Graphics Engine functions provide a parameter 
   to specify the mode for the respective drawing operation.
   Please note also the method @DrawForeground(), which is invoked after all views 
   belonging to the component have finalized their drawing operations. */
void CoreGroup_DrawBackground( CoreGroup _this, GraphicsCanvas aCanvas, XRect aClip, 
  XPoint aOffset, XInt32 aOpacity, XBool aBlend )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aBlend );
  EW_UNUSED_ARG( aOpacity );
  EW_UNUSED_ARG( aOffset );
  EW_UNUSED_ARG( aClip );
  EW_UNUSED_ARG( aCanvas );
}

/* The method GetMinimalSize() provides a common interface to ask the component 
   for the minimum possible size it can assume by still correctly displaying the 
   contents enclosed inside it. This information can thereupon be used in complex 
   layout application cases to equally adjust multiple components, etc.

   The default implementation of this method does nothing and returns <0,0> value. 
   If necessary, you can override the method and implement an algorithm to calculate 
   from the actual content of the GUI component its minimum size. For example, if 
   the component displays some text, the calculation can take in account the space 
   needed for this text. */
XPoint CoreGroup_GetMinimalSize( CoreGroup _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  return _Const0000;
}

/* Wrapper function for the non virtual method : 'Core::Group.GetMinimalSize()' */
__declspec( naked ) XPoint CoreGroup__GetMinimalSize( void* _this )
{
  EW_UNUSED_ARG( _this );

  __asm jmp CoreGroup_GetMinimalSize
}

/* The method SwitchToDialog() schedules an operation to show in context of 'this' 
   component another component passed in the parameter aDialogGroup. The operation 
   to show the component is performed with an animation specified in the parameter 
   aPresentTransition. If the parameter aPresentTransition is 'null', the show operation 
   uses the default transition presenting the new dialog component instantly in 
   the center of 'this' component without performing any smooth animation effects. 
   Calling the method SwitchToDialog() causes the new dialog component to replace 
   the entry on top of an internal stack containing all dialogs existing at the 
   moment in context of 'this' owner component. The dialog component on top of the 
   stack is considered as the active dialog - the dialog, the user may interact 
   with. Other dialogs lying in the background are automatically deactivated and 
   they are suppressed from being able to receive and process user inputs. If not 
   needed anymore, the dialog component can be hidden again by calling the method 
   @DismissDialog() or SwitchToDialog(), which causes the corresponding dialog stack 
   entry to be removed or replaced. Accordingly, with the method @PresentDialog() 
   new dialog component can be pushed on top of this stack overlaying all other 
   dialogs in the background. If there was already an active dialog component presented 
   in context of 'this' owner, this old component looses its active state and it 
   is dismissed.
   With the parameter aDismissTransition you can specify the animation to perform 
   when the just presented dialog component is dismissed again, which is caused 
   when calling the method @DismissDialog() or SwitchToDialog(). If the parameter 
   aDismissTransition is 'null', the dialog will disappear with the same transition 
   as used to show it (resulting from the parameter aPresentTransition).
   With the parameter aOverlayTransition you determine an optional animation to 
   apply on the just presented component when a further dialog component is presented 
   overlying it (by using the method @PresentDialog()). In this way you can control, 
   whether and how the component should disappear when a new component is presented 
   above it. With the parameter aRestoreTransition you specify the opposite animation 
   to perform when after dismissing the overlaying component, the component in the 
   background becomes active again.
   Usually, when presenting a new component by using the method SwitchToDialog(), 
   the previously presented component disappears with the dismiss transition specified 
   at its own presentation time (see the parameter aDismissTransition). This behavior 
   can be overridden by specifying in the parameter aOverrideDismissTransition other 
   animation to hide the old component.
   Switching the dialog in foreground may affect the visibility state of the dialog 
   component lying further in the background. In particular, the component in the 
   background will schedule a restore transition as expected to be after the dialog 
   in foreground is dismissed, and an overlay transition as resulting from the just 
   presented new dialog component. Which transitions are performed results primarily 
   from the parameters aOverlayTransition and aRestoreTransition specified at the 
   presentation time of the background dialog component and the parameter aOverrideRestoreTransition 
   specified at the presentation time of the overlaying (just dismissed) dialog 
   component. Furthermore, you can override this behavior by specifying other animations 
   in the parameters aOverrideOverlayTransition and aOverrideRestoreTransition in 
   the invocation of the method SwitchToDialog().
   The both parameters aComplete and aCancel can be provided with references to 
   slot methods, which are signaled as soon as the present operation is finished 
   (aComplete) or it has been canceled (aCancel) due to other transition being scheduled 
   for the same GUI component aDialogGroup making the actual operation obsolete.
   The present operation is enqueued, so calling SwitchToDialog(), @PresentDialog() 
   and @DismissDialog() several times in sequence for different components in context 
   of 'this' owner component causes the resulting transitions to be executed strictly 
   one after another. This behavior can be changed by passing the value 'true' in 
   the parameter aCombine. In this case, the new operation will be executed together 
   with last prepared but not yet started operation. In this manner several independent 
   transitions can run simultaneously. */
void CoreGroup_SwitchToDialog( CoreGroup _this, CoreGroup aDialogGroup, EffectsTransition 
  aPresentTransition, EffectsTransition aDismissTransition, EffectsTransition aOverlayTransition, 
  EffectsTransition aRestoreTransition, EffectsTransition aOverrideDismissTransition, 
  EffectsTransition aOverrideOverlayTransition, EffectsTransition aOverrideRestoreTransition, 
  XSlot aComplete, XSlot aCancel, XBool aCombine )
{
  CoreDialogContext oldDialog;
  CoreDialogContext nextDialog;
  CoreDialogContext newDialog;
  EffectsTransition dismissTransition;
  EffectsTransition restoreTransition;
  EffectsTransition overlayTransition;

  if ( _this->dialogStack == 0 )
  {
    CoreGroup_PresentDialog( _this, aDialogGroup, aPresentTransition, aDismissTransition, 
    aOverlayTransition, aRestoreTransition, 0, 0, aComplete, aCancel, aCombine );
    return;
  }

  oldDialog = _this->dialogStack;
  nextDialog = oldDialog->next;

  if ((( aDialogGroup->Super2.viewState & CoreViewStateDialog ) == CoreViewStateDialog ) 
      && ( _this->dialogStack->group != aDialogGroup ))
  {
    EwThrow( EwLoadString( &_Const0004 ));
    return;
  }

  newDialog = EwNewObject( CoreDialogContext, 0 );
  dismissTransition = oldDialog->dismissTransition;
  restoreTransition = 0;
  overlayTransition = 0;

  if ( nextDialog != 0 )
  {
    restoreTransition = nextDialog->restoreTransition;
    overlayTransition = nextDialog->overlayTransition;
  }

  if (( nextDialog != 0 ) && ( oldDialog->overrideRestoreTransition != 0 ))
    restoreTransition = oldDialog->overrideRestoreTransition;

  if (( nextDialog != 0 ) && ( aOverrideOverlayTransition != 0 ))
    overlayTransition = aOverrideOverlayTransition;

  if ( aOverrideDismissTransition != 0 )
    dismissTransition = aOverrideDismissTransition;

  if ( aPresentTransition == 0 )
    aPresentTransition = ((EffectsTransition)EwGetAutoObject( &EffectsShowHideCentered, 
    EffectsShowHideTransition ));

  if ( aDismissTransition == 0 )
    aDismissTransition = aPresentTransition;

  if ( aRestoreTransition == 0 )
    aRestoreTransition = aOverlayTransition;

  if ( aOverlayTransition == 0 )
    aOverlayTransition = aRestoreTransition;

  newDialog->dismissTransition = aDismissTransition;
  newDialog->overlayTransition = aOverlayTransition;
  newDialog->restoreTransition = aRestoreTransition;
  newDialog->overrideRestoreTransition = aOverrideRestoreTransition;
  newDialog->group = aDialogGroup;
  newDialog->next = _this->dialogStack->next;
  _this->dialogStack->next = 0;
  _this->dialogStack = newDialog;

  if ( _this->Focus == (CoreView)aDialogGroup )
    CoreGroup__OnSetFocus( _this, 0 );

  CoreView__ChangeViewState( oldDialog->group, 0, CoreViewStateDialog | CoreViewStateFocused );

  if ((( _this->Super2.viewState & CoreViewStateFocused ) == CoreViewStateFocused ) 
      && (( aDialogGroup->Super2.viewState & CoreViewStateFocusable ) == CoreViewStateFocusable ))
    CoreView__ChangeViewState( aDialogGroup, CoreViewStateDialog | CoreViewStateFocused, 
    0 );
  else
    CoreView__ChangeViewState( aDialogGroup, CoreViewStateDialog, 0 );

  if ( overlayTransition != 0 )
  {
    CoreGroup_FadeGroup( _this, nextDialog->group, EffectsTransition__CreateOverlayFader( 
    overlayTransition ), EwNullSlot, EwNullSlot, aCombine );
    CoreGroup_FadeGroup( _this, oldDialog->group, EffectsTransition__CreateDismissFader( 
    dismissTransition ), EwNullSlot, EwNullSlot, 1 );
    CoreGroup_FadeGroup( _this, newDialog->group, EffectsTransition__CreatePresentFader( 
    aPresentTransition ), aComplete, aCancel, 1 );
  }
  else
    if ( restoreTransition != 0 )
    {
      CoreGroup_FadeGroup( _this, nextDialog->group, EffectsTransition__CreateRestoreFader( 
      restoreTransition ), EwNullSlot, EwNullSlot, aCombine );
      CoreGroup_FadeGroup( _this, oldDialog->group, EffectsTransition__CreateDismissFader( 
      dismissTransition ), EwNullSlot, EwNullSlot, 1 );
      CoreGroup_FadeGroup( _this, newDialog->group, EffectsTransition__CreatePresentFader( 
      aPresentTransition ), aComplete, aCancel, 1 );
    }
    else
      if ( dismissTransition != 0 )
      {
        CoreGroup_FadeGroup( _this, oldDialog->group, EffectsTransition__CreateDismissFader( 
        dismissTransition ), EwNullSlot, EwNullSlot, aCombine );
        CoreGroup_FadeGroup( _this, newDialog->group, EffectsTransition__CreatePresentFader( 
        aPresentTransition ), aComplete, aCancel, 1 );
      }
      else
        CoreGroup_FadeGroup( _this, newDialog->group, EffectsTransition__CreatePresentFader( 
        aPresentTransition ), aComplete, aCancel, aCombine );
}

/* The method DismissDialog() schedules an operation to hide again the component 
   passed in the parameter aDialogGroup. The component has to be presented by a 
   preceding @PresentDialog() or @SwitchToDialog() method invocation. Calling the 
   method DismissDialog() causes the corresponding entry to be removed from the 
   internal stack containing all dialogs existing at the moment in context of 'this' 
   owner component. The dialog component on top of the stack is considered as the 
   active dialog - the dialog, the user may interact with. Other dialogs lying in 
   the background are automatically deactivated and they are suppressed from being 
   able to receive and process user inputs. Accordingly, applying the dismiss operation 
   on the actually active (top) dialog causes the dialog existing eventually behind 
   it to restore its active state.
   The operation to hide the component is performed with an animation specified 
   at its presentation time (in the parameter aDismissTransition of the method @PresentDialog() 
   or @SwitchToDialog()). Alternatively, other transition to hide the component 
   can be specified in the parameter aOverrideDismissTransition.
   Dismissing a dialog may affect the visibility state of the dialog component lying 
   further in the background. In particular, the component in the background will 
   schedule a restore transition as expected to be after the dialog overlaying it 
   is dismissed. When dismissing a dialog, which is not the active one (not on top 
   of the stack), the component in the background will also schedule an overlay 
   transition as resulting from the new overlaying dialog component. Which transitions 
   are performed results primarily from the parameters aOverlayTransition and aRestoreTransition 
   specified at the presentation time of the background dialog component and the 
   parameters aOverrideRestoreTransition specified at the presentation time of the 
   overlaying (just dismissed) dialog component. Furthermore, you can override this 
   behavior by specifying other animations in the parameters aOverrideOverlayTransition 
   and aOverrideRestoreTransition in the invocation of the method DismissDialog().
   The both parameters aComplete and aCancel can be provided with references to 
   slot methods, which are signaled as soon as the dismiss operation is finished 
   (aComplete) or it has been canceled (aCancel) due to other transition being scheduled 
   for the same GUI component aDialogGroup making the actual operation obsolete.
   The dismiss operation is enqueued, so calling @SwitchToDialog(), @PresentDialog() 
   and DismissDialog() several times in sequence for different components in context 
   of 'this' owner component causes the resulting transitions to be executed strictly 
   one after another. This behavior can be changed by passing the value 'true' in 
   the parameter aCombine. In this case, the new operation will be executed together 
   with last prepared but not yet started operation. In this manner several independent 
   transitions can run simultaneously. */
void CoreGroup_DismissDialog( CoreGroup _this, CoreGroup aDialogGroup, EffectsTransition 
  aOverrideDismissTransition, EffectsTransition aOverrideOverlayTransition, EffectsTransition 
  aOverrideRestoreTransition, XSlot aComplete, XSlot aCancel, XBool aCombine )
{
  CoreDialogContext dialog;
  CoreDialogContext nextDialog;
  CoreDialogContext prevDialog;
  EffectsTransition dismissTransition;
  EffectsTransition restoreTransition;
  EffectsTransition overlayTransition;

  if ( _this->dialogStack == 0 )
    return;

  if ( aDialogGroup == 0 )
    return;

  dialog = _this->dialogStack;
  nextDialog = _this->dialogStack->next;
  prevDialog = 0;

  while ((( dialog != 0 ) && ( dialog->group != aDialogGroup )) && ( dialog->next 
         != 0 ))
  {
    prevDialog = dialog;
    dialog = nextDialog;
    nextDialog = dialog->next;
  }

  if (( dialog == 0 ) || ( dialog->group != aDialogGroup ))
  {
    EwThrow( EwLoadString( &_Const0005 ));
    return;
  }

  if ( prevDialog == 0 )
  {
    _this->dialogStack = nextDialog;
    dialog->next = 0;
  }
  else
  {
    prevDialog->next = nextDialog;
    dialog->next = 0;
  }

  CoreView__ChangeViewState( dialog->group, 0, CoreViewStateDialog | CoreViewStateFocused );

  if ((((( _this->Super2.viewState & CoreViewStateFocused ) == CoreViewStateFocused ) 
      && ( nextDialog != 0 )) && ( prevDialog == 0 )) && (( nextDialog->group->Super2.viewState 
      & CoreViewStateFocusable ) == CoreViewStateFocusable ))
    CoreView__ChangeViewState( nextDialog->group, CoreViewStateFocused, 0 );

  dismissTransition = dialog->dismissTransition;
  restoreTransition = 0;
  overlayTransition = 0;

  if ( nextDialog != 0 )
    restoreTransition = nextDialog->restoreTransition;

  if (( nextDialog != 0 ) && ( dialog->overrideRestoreTransition != 0 ))
    restoreTransition = dialog->overrideRestoreTransition;

  if (( nextDialog != 0 ) && ( aOverrideRestoreTransition != 0 ))
    restoreTransition = aOverrideRestoreTransition;

  if (( prevDialog != 0 ) && ( nextDialog != 0 ))
    overlayTransition = nextDialog->overlayTransition;

  if ((( prevDialog != 0 ) && ( nextDialog != 0 )) && ( aOverrideOverlayTransition 
      != 0 ))
    overlayTransition = aOverrideOverlayTransition;

  if ( aOverrideDismissTransition != 0 )
    dismissTransition = aOverrideDismissTransition;

  if ( overlayTransition != 0 )
  {
    CoreGroup_FadeGroup( _this, nextDialog->group, EffectsTransition__CreateOverlayFader( 
    overlayTransition ), EwNullSlot, EwNullSlot, aCombine );
    CoreGroup_FadeGroup( _this, dialog->group, EffectsTransition__CreateDismissFader( 
    dismissTransition ), aComplete, aCancel, 1 );
  }
  else
    if ( restoreTransition != 0 )
    {
      CoreGroup_FadeGroup( _this, nextDialog->group, EffectsTransition__CreateRestoreFader( 
      restoreTransition ), EwNullSlot, EwNullSlot, aCombine );
      CoreGroup_FadeGroup( _this, dialog->group, EffectsTransition__CreateDismissFader( 
      dismissTransition ), aComplete, aCancel, 1 );
    }
    else
      CoreGroup_FadeGroup( _this, dialog->group, EffectsTransition__CreateDismissFader( 
      dismissTransition ), aComplete, aCancel, aCombine );
}

/* The method PresentDialog() schedules an operation to show in context of 'this' 
   component another component passed in the parameter aDialogGroup. The operation 
   to show the component is performed with an animation specified in the parameter 
   aPresentTransition. If the parameter aPresentTransition is 'null', the show operation 
   uses the default transition presenting the new dialog component instantly in 
   the center of 'this' component without performing any smooth animation effects. 
   Calling the method PresentDialog() causes the new dialog component to be pushed 
   on top of an internal stack containing all dialogs existing at the moment in 
   context of 'this' owner component. The dialog component on top of the stack is 
   considered as the active dialog - the dialog, the user may interact with. Other 
   dialogs lying in the background are automatically deactivated and they are suppressed 
   from being able to receive and process user inputs. If not needed anymore, the 
   dialog component can be hidden again by calling the method @DismissDialog() or 
   @SwitchToDialog(), which causes the corresponding dialog stack entry to be removed 
   or replaced. Accordingly, if there was already an active dialog component presented 
   in context of 'this' owner, this old component looses its active state and it 
   is overlaid by the new component.
   With the parameter aDismissTransition you can specify the animation to perform 
   when the just presented dialog component is dismissed again, which is caused 
   when calling the method @DismissDialog() or @SwitchToDialog(). If the parameter 
   aDismissTransition is 'null', the dialog will disappear with the same transition 
   as used to show it (resulting from the parameter aPresentTransition).
   With the parameter aOverlayTransition you determine an optional animation to 
   apply on the just presented component when a further dialog component is presented 
   overlying it. In this way you can control, whether and how the component should 
   disappear when a new component is presented above it. With the parameter aRestoreTransition 
   you specify the opposite animation to perform when after dismissing the overlaying 
   component, the component in the background becomes active again. When calling 
   PresentDialog(), you can override these originally specified transitions to overlay 
   and restore the component in the background. With the parameter aOverrideOverlayTransition 
   you can specify the animation to hide the component in the background instead 
   of using the animation specified at its own presentation time. Similarly, with 
   the parameter aOverrideRestoreTransition you can specify another animation to 
   use when the component in the background restores its active state again.
   The both parameters aComplete and aCancel can be provided with references to 
   slot methods, which are signaled as soon as the present operation is finished 
   (aComplete) or it has been canceled (aCancel) due to other transition being scheduled 
   for the same GUI component aDialogGroup making the actual operation obsolete.
   The present operation is enqueued, so calling PresentDialog(), @SwitchToDialog() 
   and @DismissDialog() several times in sequence for different components in context 
   of 'this' owner component causes the resulting transitions to be executed strictly 
   one after another. This behavior can be changed by passing the value 'true' in 
   the parameter aCombine. In this case, the new operation will be executed together 
   with last prepared but not yet started operation. In this manner several independent 
   transitions can run simultaneously. */
void CoreGroup_PresentDialog( CoreGroup _this, CoreGroup aDialogGroup, EffectsTransition 
  aPresentTransition, EffectsTransition aDismissTransition, EffectsTransition aOverlayTransition, 
  EffectsTransition aRestoreTransition, EffectsTransition aOverrideOverlayTransition, 
  EffectsTransition aOverrideRestoreTransition, XSlot aComplete, XSlot aCancel, 
  XBool aCombine )
{
  CoreDialogContext dialog;
  EffectsTransition overlayTransition;

  if ( aDialogGroup == 0 )
    return;

  if (( _this->dialogStack != 0 ) && ( _this->dialogStack->group == aDialogGroup ))
  {
    CoreGroup_SwitchToDialog( _this, aDialogGroup, aPresentTransition, aDismissTransition, 
    aOverlayTransition, aRestoreTransition, 0, aOverrideOverlayTransition, aOverrideRestoreTransition, 
    aComplete, aCancel, aCombine );
    return;
  }

  if ((( aDialogGroup->Super2.viewState & CoreViewStateDialog ) == CoreViewStateDialog ))
  {
    EwThrow( EwLoadString( &_Const0004 ));
    return;
  }

  dialog = EwNewObject( CoreDialogContext, 0 );

  if (( _this->dialogStack != 0 ) && ( _this->dialogStack->overlayTransition == 
      0 ))
  {
    if ( aOverrideRestoreTransition == 0 )
      aOverrideRestoreTransition = aOverrideOverlayTransition;

    if ( aOverrideOverlayTransition == 0 )
      aOverrideOverlayTransition = aOverrideRestoreTransition;
  }

  overlayTransition = 0;

  if ( _this->dialogStack != 0 )
    overlayTransition = _this->dialogStack->overlayTransition;

  if (( _this->dialogStack != 0 ) && ( aOverrideOverlayTransition != 0 ))
    overlayTransition = aOverrideOverlayTransition;

  if ( aPresentTransition == 0 )
    aPresentTransition = ((EffectsTransition)EwGetAutoObject( &EffectsShowHideCentered, 
    EffectsShowHideTransition ));

  if ( aDismissTransition == 0 )
    aDismissTransition = aPresentTransition;

  if ( aRestoreTransition == 0 )
    aRestoreTransition = aOverlayTransition;

  if ( aOverlayTransition == 0 )
    aOverlayTransition = aRestoreTransition;

  dialog->dismissTransition = aDismissTransition;
  dialog->overlayTransition = aOverlayTransition;
  dialog->restoreTransition = aRestoreTransition;
  dialog->overrideRestoreTransition = aOverrideRestoreTransition;

  if ( _this->Focus == (CoreView)aDialogGroup )
    CoreGroup__OnSetFocus( _this, 0 );

  if ( _this->dialogStack != 0 )
    CoreView__ChangeViewState( _this->dialogStack->group, 0, CoreViewStateFocused );

  if ((( _this->Super2.viewState & CoreViewStateFocused ) == CoreViewStateFocused ) 
      && (( aDialogGroup->Super2.viewState & CoreViewStateFocusable ) == CoreViewStateFocusable ))
    CoreView__ChangeViewState( aDialogGroup, CoreViewStateDialog | CoreViewStateFocused, 
    0 );
  else
    CoreView__ChangeViewState( aDialogGroup, CoreViewStateDialog, 0 );

  dialog->group = aDialogGroup;
  dialog->next = _this->dialogStack;
  _this->dialogStack = dialog;

  if ( overlayTransition != 0 )
  {
    CoreGroup_FadeGroup( _this, _this->dialogStack->next->group, EffectsTransition__CreateOverlayFader( 
    overlayTransition ), EwNullSlot, EwNullSlot, aCombine );
    CoreGroup_FadeGroup( _this, aDialogGroup, EffectsTransition__CreatePresentFader( 
    aPresentTransition ), aComplete, aCancel, 1 );
  }
  else
    CoreGroup_FadeGroup( _this, aDialogGroup, EffectsTransition__CreatePresentFader( 
    aPresentTransition ), aComplete, aCancel, aCombine );
}

/* The method ObtainFocus() establishes the focus path to this component by switching 
   the @Focus properties of all superior @Owner components. This ensures that the 
   component may receive user keyboard inputs. */
void CoreGroup_ObtainFocus( CoreGroup _this )
{
  if ((( _this->Super2.viewState & CoreViewStateFocused ) == CoreViewStateFocused ))
    return;

  if ((( _this->Super2.viewState & CoreViewStateModal ) == CoreViewStateModal ))
    return;

  if ((( _this->Super2.viewState & CoreViewStateDialog ) == CoreViewStateDialog ))
  {
    if ( _this->Super2.Owner != 0 )
      CoreGroup_ObtainFocus( _this->Super2.Owner );

    return;
  }

  if (( _this->Super2.Owner != 0 ) && ( _this->Super2.Owner->Focus != (CoreView)_this ))
    CoreGroup__OnSetFocus( _this->Super2.Owner, ((CoreView)_this ));

  if ( _this->Super2.Owner != 0 )
    CoreGroup_ObtainFocus( _this->Super2.Owner );
}

/* The method HasViewState() verifies whether the specified state aState is currently 
   valid for the component. It is useful e.g. if you need to test whether a component 
   is really focused and thus able to receive user keyboard inputs, etc. */
XBool CoreGroup_HasViewState( CoreGroup _this, XSet aState )
{
  return EwSetContains( _this->Super2.viewState, aState );
}

/* The method LocalPosition() converts the given position aPoint from the screen 
   coordinate space to the coordinate space of this component and returns the calculated 
   position. In the case the component isn't visible within the application, the 
   method can fail and return a wrong position. */
XPoint CoreGroup_LocalPosition( CoreGroup _this, XPoint aPoint )
{
  CoreGroup tmp = _this;

  while ( tmp != 0 )
  {
    aPoint = EwMovePointNeg( aPoint, tmp->Super1.Bounds.Point1 );
    tmp = tmp->Super2.Owner;
  }

  return aPoint;
}

/* The method DispatchEvent() feeds the component with the event passed in the parameter 
   aEvent and propagates it along the so-called focus path. This focus path leads 
   to the currently selected keyboard event receiver view. If the event is rejected 
   by the view, the same operation is repeated for the next superior view. This 
   permits the hierarchical event dispatching until a willing view has handled the 
   event or all views in the focus path have been evaluated. If the event remains 
   still unhandled, it will be passed to the component itself.
   The focus path is established by the property @Focus. 
   DispatchEvent() returns the value returned by the @HandleEvent() method of the 
   view which has handled the event. In the case, the event was not handled, the 
   method returns 'null'. */
XObject CoreGroup_DispatchEvent( CoreGroup _this, CoreEvent aEvent )
{
  CoreView view = _this->Focus;
  CoreGroup grp = EwCastObject( view, CoreGroup );
  XObject handled = 0;
  XBool lock = (XBool)(( _this->fadersQueue != 0 ) && (( _this->fadersQueue->current 
    != 0 ) || ( _this->fadersQueue->first != 0 )));

  if (( view != 0 ) && (((( view->viewState & CoreViewStateDialog ) == CoreViewStateDialog ) 
      || (( view->viewState & CoreViewStateRunningFader ) == CoreViewStateRunningFader )) 
      || (( view->viewState & CoreViewStatePendingFader ) == CoreViewStatePendingFader )))
  {
    view = 0;
    grp = 0;
  }

  if (( _this->dialogStack != 0 ) && !lock )
    handled = CoreGroup__DispatchEvent( _this->dialogStack->group, aEvent );

  if (( handled == 0 ) && ( grp != 0 ))
    handled = CoreGroup__DispatchEvent( grp, aEvent );
  else
    if (( handled == 0 ) && ( view != 0 ))
      handled = CoreView__HandleEvent( view, aEvent );

  if ( handled == 0 )
    handled = CoreView__HandleEvent( _this, aEvent );

  if ( handled == 0 )
    handled = CoreGroup_processKeyHandlers( _this, aEvent );

  return handled;
}

/* Wrapper function for the virtual method : 'Core::Group.DispatchEvent()' */
__declspec( naked ) XObject CoreGroup__DispatchEvent( void* _this, CoreEvent aEvent )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aEvent );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 108 ]
  }
}

/* The method BroadcastEventAtPosition() feeds the component with the event passed 
   in the parameter aEvent and propagates it to all views, which do exist within 
   the component and do enclose the given position aPosition until the event has 
   been handled or all affected views are evaluated. If the event remains still 
   unhandled, it will be passed to the component itself.
   Beside the position, the additional parameter aFilter can be used to limit the 
   operation to special views only, e.g. to visible and touchable views.
   BroadcastEventAtPosition() is very useful to provide views with one and the same 
   event in order e.g. to inform the views about an important global state alteration. 
   The parameters aPosition and aFilter limit the operation to particular views. 
   To send events to all views regardless of their position use the method @BroadcastEvent().
   BroadcastEventAtPosition() returns the value returned by the @HandleEvent() method 
   of the view which has handled the event. In the case, the event was not handled, 
   the method returns 'null'. */
XObject CoreGroup_BroadcastEventAtPosition( CoreGroup _this, CoreEvent aEvent, XPoint 
  aPosition, XSet aFilter )
{
  CoreView view = _this->last;
  XObject handled = 0;

  while (( view != 0 ) && ( handled == 0 ))
  {
    if (( !aFilter || EwSetContains( view->viewState, aFilter )) && EwIsPointInRect( 
        CoreView__GetExtent( view ), aPosition ))
    {
      CoreGroup grp = EwCastObject( view, CoreGroup );

      if ( grp != 0 )
        handled = CoreGroup_BroadcastEventAtPosition( grp, aEvent, EwMovePointNeg( 
        aPosition, grp->Super1.Bounds.Point1 ), aFilter );
      else
        handled = CoreView__HandleEvent( view, aEvent );
    }

    view = view->prev;
  }

  if ( handled == 0 )
    handled = CoreView__HandleEvent( _this, aEvent );

  return handled;
}

/* Wrapper function for the non virtual method : 'Core::Group.BroadcastEventAtPosition()' */
__declspec( naked ) XObject CoreGroup__BroadcastEventAtPosition( void* _this, CoreEvent 
  aEvent, XPoint aPosition, XSet aFilter )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aEvent );
  EW_UNUSED_ARG( aPosition );
  EW_UNUSED_ARG( aFilter );

  __asm jmp CoreGroup_BroadcastEventAtPosition
}

/* The method BroadcastEvent() feeds the component with the event passed in the 
   parameter aEvent and propagates it to all views enclosed within the component 
   until the event has been handled or all views are evaluated. If the event remains 
   still unhandled, it will be passed to the component itself.
   The additional parameter aFilter can be used to limit the operation to special 
   views only, e.g. to visible and touchable views. To broadcast the event to all 
   views pass in the parameter aFilter the value 'Core::ViewState[]'.
   BroadcastEvent() is very useful to provide all views with one and the same event 
   in order e.g. to inform all views about an important global state alteration. 
   To send events to views enclosing a given position use the method @BroadcastEventAtPosition().
   BroadcastEvent() returns the value returned by the @HandleEvent() method of the 
   view which has handled the event. In the case, the event was not handled, the 
   method returns 'null'. */
XObject CoreGroup_BroadcastEvent( CoreGroup _this, CoreEvent aEvent, XSet aFilter )
{
  CoreView view = _this->last;
  XObject handled = 0;

  while (( view != 0 ) && ( handled == 0 ))
  {
    if ( !aFilter || EwSetContains( view->viewState, aFilter ))
    {
      CoreGroup grp = EwCastObject( view, CoreGroup );

      if ( grp != 0 )
        handled = CoreGroup__BroadcastEvent( grp, aEvent, aFilter );
      else
        handled = CoreView__HandleEvent( view, aEvent );
    }

    view = view->prev;
  }

  if ( handled == 0 )
    handled = CoreView__HandleEvent( _this, aEvent );

  if ( handled == 0 )
    handled = CoreGroup_processKeyHandlers( _this, aEvent );

  return handled;
}

/* Wrapper function for the virtual method : 'Core::Group.BroadcastEvent()' */
__declspec( naked ) XObject CoreGroup__BroadcastEvent( void* _this, CoreEvent aEvent, 
  XSet aFilter )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aEvent );
  EW_UNUSED_ARG( aFilter );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 112 ]
  }
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void CoreGroup_UpdateLayout( CoreGroup _this, XPoint aSize )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aSize );
}

/* Wrapper function for the virtual method : 'Core::Group.UpdateLayout()' */
__declspec( naked ) void CoreGroup__UpdateLayout( void* _this, XPoint aSize )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aSize );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 116 ]
  }
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
void CoreGroup_UpdateViewState( CoreGroup _this, XSet aState )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aState );
}

/* Wrapper function for the virtual method : 'Core::Group.UpdateViewState()' */
__declspec( naked ) void CoreGroup__UpdateViewState( void* _this, XSet aState )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aState );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 120 ]
  }
}

/* The method InvalidateViewState() declares the state of this component as changed, 
   so its visual aspect possibly doesn't reflect its current state anymore. To update 
   the visual aspect, the framework will invoke the @UpdateViewState() method. */
void CoreGroup_InvalidateViewState( CoreGroup _this )
{
  _this->Super2.viewState = _this->Super2.viewState | CoreViewStatePendingViewState;
  EwPostSignal( EwNewSlot( _this, CoreGroup_updateComponent ), ((XObject)_this ));
}

/* The method InvalidateArea() declares the given area of the component as invalid, 
   this means this area should be redrawn at the next screen update. */
void CoreGroup_InvalidateArea( CoreGroup _this, XRect aArea )
{
  CoreGroup grp = _this;

  while (( grp != 0 ) && !EwIsRectEmpty( aArea ))
  {
    GraphicsCanvas buf = grp->buffer;

    if (( grp->Super2.Owner == 0 ) && ( grp != _this ))
    {
      CoreGroup__InvalidateArea( grp, aArea );
      return;
    }

    if ( buf != 0 )
    {
      XBool fullOffScreenBufferUpdate = 0;
      XRect oldInvalidArea = buf->InvalidArea;
      fullOffScreenBufferUpdate = (XBool)EwFullOffScreenBufferUpdate;

      if ( fullOffScreenBufferUpdate )
        buf->InvalidArea = EwGetRectORect( grp->Super1.Bounds );
      else
        buf->InvalidArea = EwUnionRect( buf->InvalidArea, aArea );

      if ( EwCompRect( oldInvalidArea, buf->InvalidArea ))
      {
        EwNotifyObjObservers((XObject)grp, 0 );
        EwNotifyObjObservers((XObject)buf, 0 );
      }
    }

    if ( !(( grp->Super2.viewState & CoreViewStateVisible ) == CoreViewStateVisible ))
      return;

    aArea = EwIntersectRect( EwMoveRectPos( aArea, grp->Super1.Bounds.Point1 ), 
    grp->Super1.Bounds );
    grp = grp->Super2.Owner;
  }
}

/* Wrapper function for the virtual method : 'Core::Group.InvalidateArea()' */
__declspec( naked ) void CoreGroup__InvalidateArea( void* _this, XRect aArea )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArea );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 124 ]
  }
}

/* The method FindSiblingView() searches for a sibling view of the view specified 
   in the parameter aView - aView itself will be excluded from the search operation.
   The method combines the functionality of @FindNextView() and @FindPrevView() 
   and tries to find any neighbor view (regarding the Z-order not the position).
   The additional parameter aFilter can be used to limit the search operation to 
   special views only, e.g. to visible and touchable views.
   If there are no other views complying the filter condition, the method returns 
   'null'. In contrast to other find methods, FindSiblingView() will fail, if it 
   has been invoked with aView == 'null'. */
CoreView CoreGroup_FindSiblingView( CoreGroup _this, CoreView aView, XSet aFilter )
{
  CoreView nextView;
  CoreView prevView;
  XSet notFilter;

  if (( aView == 0 ) || ( aView->Owner != _this ))
    return 0;

  nextView = aView->next;
  prevView = aView->prev;
  notFilter = CoreViewStateDialog;

  if ((( aFilter & CoreViewStateDialog ) == CoreViewStateDialog ))
    notFilter = 0;

  while (( nextView != 0 ) || ( prevView != 0 ))
  {
    if ((( nextView != 0 ) && ( !aFilter || EwSetContains( nextView->viewState, 
        aFilter ))) && ( !notFilter || !EwSetContains( nextView->viewState, notFilter )))
      return nextView;

    if ((( prevView != 0 ) && ( !aFilter || EwSetContains( prevView->viewState, 
        aFilter ))) && ( !notFilter || !EwSetContains( prevView->viewState, notFilter )))
      return prevView;

    if ( nextView != 0 )
      nextView = nextView->next;

    if ( prevView != 0 )
      prevView = prevView->prev;
  }

  return 0;
}

/* Wrapper function for the virtual method : 'Core::Group.FindSiblingView()' */
__declspec( naked ) CoreView CoreGroup__FindSiblingView( void* _this, CoreView aView, 
  XSet aFilter )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aView );
  EW_UNUSED_ARG( aFilter );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 128 ]
  }
}

/* The method FadeGroup() schedules an operation to fade-in or fade-out the GUI 
   component passed in the parameter aGroup in context of 'this' GUI component. 
   The kind of the fade-in/out animation is determined by the fader object specified 
   in the parameter aFader. In this manner, depending on the used fader, individual 
   transitions to show or hide the GUI component can be determined.
   The operation is enqueued, so calling FadeGroup() several times in sequence for 
   different groups in context of 'this' owner component causes the resulting transitions 
   to be executed strictly one after another. This behavior can be changed by passing 
   the value 'true' in the parameter aCombine. In this case, the new operation will 
   be executed together with last prepared but not yet started operation. In this 
   manner several independent transitions can run simultaneously.
   If the affected GUI component aGroup is already scheduled for an animation, but 
   this animation is not yet started, the new animation aFader replaces this old 
   one, so that always only one animation per affected GUI component is pending 
   for execution.
   The both parameters aComplete and aCancel can be provided with references to 
   slot methods, which are signaled as soon as the transition is finished (aComplete) 
   or it has been canceled (aCancel) because of a newer transition being scheduled 
   for the same GUI component aGroup. */
void CoreGroup_FadeGroup( CoreGroup _this, CoreGroup aGroup, EffectsFader aFader, 
  XSlot aComplete, XSlot aCancel, XBool aCombine )
{
  if ( aGroup == 0 )
    return;

  if ( aFader == 0 )
  {
    EwThrow( EwLoadString( &_Const0006 ));
    return;
  }

  if ((( aFader->Group != 0 ) || ( aFader->Owner != 0 )) || ( aFader->task != 0 ))
  {
    EwThrow( EwLoadString( &_Const0007 ));
    return;
  }

  if (( aGroup->Super2.Owner != 0 ) && ( aGroup->Super2.Owner != _this ))
  {
    EwThrow( EwLoadString( &_Const0008 ));
    return;
  }

  if ( _this->fadersQueue == 0 )
    _this->fadersQueue = EwNewObject( CoreTaskQueue, 0 );

  aFader->Owner = _this;
  aFader->Group = aGroup;
  aFader->onCancel = aCancel;
  aFader->onComplete = aComplete;

  if ( aGroup->pendingFader != 0 )
    EffectsFaderTask_RemoveFader( aGroup->pendingFader->task, aGroup->pendingFader );

  aGroup->pendingFader = aFader;
  aGroup->Super2.viewState = aGroup->Super2.viewState | CoreViewStatePendingFader;

  if (( aCombine && ( _this->fadersQueue->last != 0 )) && !CoreTask_IsCurrent( _this->fadersQueue->last ))
    EffectsFaderTask_AddFader( EwCastObject( _this->fadersQueue->last, EffectsFaderTask ), 
    aFader );
  else
  {
    EffectsFaderTask task = EwNewObject( EffectsFaderTask, 0 );
    EffectsFaderTask_AddFader( task, aFader );
    CoreTaskQueue_ScheduleTask( _this->fadersQueue, ((CoreTask)task ), 0 );
  }
}

/* The method RestackTop() elevates the view aView to the top of its component. 
   After this operation the view is usually not covered by any sibling views. This 
   method modifies the Z-order of the view. The effective stacking position of the 
   view can additionally be affected by the value of the view's property @StackingPriority. 
   Concrete, the view can't be be arranged in front of any sibling view configured 
   with higher @StackingPriority value. In such case calling the method RestackTop() 
   will arrange the view just behind the sibling view with next higher @StackingPriority 
   value.
   Please note, changing the Z-order of views within a component containing a Core::Outline 
   view can cause this outline to update its automatic row or column formation. */
void CoreGroup_RestackTop( CoreGroup _this, CoreView aView )
{
  CoreView after;
  XInt32 sg;

  if ( aView == 0 )
  {
    EwThrow( EwLoadString( &_Const0009 ));
    return;
  }

  if ( aView->Owner != _this )
  {
    EwThrow( EwLoadString( &_Const000A ));
    return;
  }

  if ( aView->next == 0 )
    return;

  after = _this->last;
  sg = aView->StackingPriority;

  while (( after != 0 ) && ( after->StackingPriority > sg ))
    after = after->prev;

  if ((( after == aView ) || ( after == 0 )) || ( after->next == aView ))
    return;

  if ((( aView->viewState & ( CoreViewStateEmbedded | CoreViewStateVisible )) == 
      ( CoreViewStateEmbedded | CoreViewStateVisible )))
  {
    if (( aView->prev != 0 ) && ( aView->layoutContext != 0 ))
      aView->prev->viewState = aView->prev->viewState | CoreViewStateRequestLayout;

    aView->viewState = aView->viewState | CoreViewStateRequestLayout;
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this, CoreGroup_updateComponent ), ((XObject)_this ));
  }

  if ((( aView->viewState & CoreViewStateIsOutline ) == CoreViewStateIsOutline ))
  {
    if ( aView->prev != 0 )
      aView->prev->viewState = aView->prev->viewState | CoreViewStateRequestLayout;

    _this->Super2.viewState = _this->Super2.viewState | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this, CoreGroup_updateComponent ), ((XObject)_this ));
  }

  if ( aView->prev != 0 )
    aView->prev->next = aView->next;
  else
    _this->first = aView->next;

  aView->next->prev = aView->prev;
  aView->prev = after;
  aView->next = after->next;
  after->next = aView;

  if ( aView->next != 0 )
    aView->next->prev = aView;
  else
    _this->last = aView;

  if ((( aView->viewState & CoreViewStateVisible ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this, CoreView__GetExtent( aView ));
}

/* Wrapper function for the virtual method : 'Core::Group.RestackTop()' */
__declspec( naked ) void CoreGroup__RestackTop( void* _this, CoreView aView )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aView );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 132 ]
  }
}

/* The method Restack() changes the Z-order of views in the component. Depending 
   on the parameter aOrder the method will elevate or lower the given view aView. 
   If aOrder is negative, the view will be lowered to the background. If aOrder 
   is positive, the view will be elevated to the foreground. If aOrder == 0, no 
   modification will take place.
   The absolute value of aOrder determines the maximum number of sibling views the 
   view has to skip over in order to reach its new Z-order. The effective stacking 
   position of the view can additionally be affected by the value of the view's 
   property @StackingPriority. Concrete, the view is prevented from being arranged 
   in front of any sibling view configured with a higher @StackingPriority value. 
   Similarly the view can't be arranged behind any sibling view having lower @StackingPriority 
   value.
   Please note, changing the Z-order of views within a component containing a Core::Outline 
   view can cause this outline to update its automatic row or column formation. */
void CoreGroup_Restack( CoreGroup _this, CoreView aView, XInt32 aOrder )
{
  CoreView after;
  CoreView before;
  XInt32 sg;

  if ( aView == 0 )
  {
    EwThrow( EwLoadString( &_Const0009 ));
    return;
  }

  if ( aView->Owner != _this )
  {
    EwThrow( EwLoadString( &_Const000A ));
    return;
  }

  after = aView;
  before = aView;
  sg = aView->StackingPriority;

  while ((( aOrder > 0 ) && ( after->next != 0 )) && ( after->next->StackingPriority 
         <= sg ))
  {
    after = after->next;
    aOrder = aOrder - 1;
  }

  while ((( aOrder < 0 ) && ( before->prev != 0 )) && ( before->prev->StackingPriority 
         >= sg ))
  {
    before = before->prev;
    aOrder = aOrder + 1;
  }

  if (( after == aView ) && ( before == aView ))
    return;

  if ((( aView->viewState & ( CoreViewStateEmbedded | CoreViewStateVisible )) == 
      ( CoreViewStateEmbedded | CoreViewStateVisible )))
  {
    if (( aView->prev != 0 ) && ( aView->layoutContext != 0 ))
      aView->prev->viewState = aView->prev->viewState | CoreViewStateRequestLayout;

    aView->viewState = aView->viewState | CoreViewStateRequestLayout;
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this, CoreGroup_updateComponent ), ((XObject)_this ));
  }

  if ((( aView->viewState & CoreViewStateIsOutline ) == CoreViewStateIsOutline ))
  {
    if ( aView->prev != 0 )
      aView->prev->viewState = aView->prev->viewState | CoreViewStateRequestLayout;

    aView->viewState = aView->viewState | CoreViewStateRequestLayout;
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this, CoreGroup_updateComponent ), ((XObject)_this ));
  }

  if ( aView->prev != 0 )
    aView->prev->next = aView->next;

  if ( aView->next != 0 )
    aView->next->prev = aView->prev;

  if ( _this->first == aView )
    _this->first = aView->next;

  if ( _this->last == aView )
    _this->last = aView->prev;

  if ( after != aView )
  {
    aView->next = after->next;
    aView->prev = after;
    after->next = aView;

    if ( aView->next != 0 )
      aView->next->prev = aView;
  }

  if ( before != aView )
  {
    aView->next = before;
    aView->prev = before->prev;
    before->prev = aView;

    if ( aView->prev != 0 )
      aView->prev->next = aView;
  }

  if ( aView->next == 0 )
    _this->last = aView;

  if ( aView->prev == 0 )
    _this->first = aView;

  if ((( aView->viewState & CoreViewStateVisible ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this, CoreView__GetExtent( aView ));
}

/* Wrapper function for the virtual method : 'Core::Group.Restack()' */
__declspec( naked ) void CoreGroup__Restack( void* _this, CoreView aView, XInt32 
  aOrder )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aView );
  EW_UNUSED_ARG( aOrder );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 136 ]
  }
}

/* The method Remove() removes the given view aView from the component. After this 
   operation the view doesn't belong anymore to the component - the view is not 
   visible and it can't receive any events.
   Please note, removing of views from a component containing a Core::Outline view 
   can cause this outline to update its automatic row or column formation.
   Please note, it the removed view is currently selected by the @Focus property, 
   the framework will automatically select other sibling view, which will be able 
   to react to keyboard events. */
void CoreGroup_Remove( CoreGroup _this, CoreView aView )
{
  if ( aView == 0 )
  {
    EwThrow( EwLoadString( &_Const000B ));
    return;
  }

  if ( aView->Owner != _this )
  {
    EwThrow( EwLoadString( &_Const000A ));
    return;
  }

  if (((( aView->viewState & ( CoreViewStateEmbedded | CoreViewStateVisible )) == 
      ( CoreViewStateEmbedded | CoreViewStateVisible )) && ( aView->prev != 0 )) 
      && ( aView->layoutContext != 0 ))
  {
    aView->prev->viewState = aView->prev->viewState | CoreViewStateRequestLayout;
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this, CoreGroup_updateComponent ), ((XObject)_this ));
  }

  if ((( aView->viewState & CoreViewStateIsOutline ) == CoreViewStateIsOutline ))
  {
    if ( aView->prev != 0 )
      aView->prev->viewState = aView->prev->viewState | CoreViewStateRequestLayout;

    _this->Super2.viewState = _this->Super2.viewState | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this, CoreGroup_updateComponent ), ((XObject)_this ));
  }

  aView->layoutContext = 0;

  if ( _this->Focus == aView )
    CoreGroup__OnSetFocus( _this, CoreGroup__FindSiblingView( _this, aView, CoreViewStateEnabled 
    | CoreViewStateFocusable ));

  if ( aView->prev != 0 )
    aView->prev->next = aView->next;

  if ( aView->next != 0 )
    aView->next->prev = aView->prev;

  if ( _this->first == aView )
    _this->first = aView->next;

  if ( _this->last == aView )
    _this->last = aView->prev;

  aView->Owner = 0;
  aView->next = 0;
  aView->prev = 0;

  if ((( aView->viewState & CoreViewStateVisible ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this, CoreView__GetExtent( aView ));
}

/* Wrapper function for the virtual method : 'Core::Group.Remove()' */
__declspec( naked ) void CoreGroup__Remove( void* _this, CoreView aView )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aView );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 140 ]
  }
}

/* The method Add() inserts the given view aView into this component and places 
   it at a Z-order position resulting primarily from the parameter aOrder. The parameter 
   determines the number of sibling views the view has to skip over starting with 
   the top most view. If aOrder == 0, the newly added view will obtain the top most 
   position. If the value is negative, the view will be lowered to the background 
   accordingly to the absolute value of aOrder. After this operation the view belongs 
   to the component - the view can appear on the screen and it can receive events.
   The effective stacking position of the view can additionally be affected by the 
   value of the view's property @StackingPriority. Concrete, the view is prevented 
   from being arranged in front of any sibling view configured with a higher @StackingPriority 
   value. Similarly the view can't be arranged behind any sibling view having lower 
   @StackingPriority value.
   Please note, adding of views to a component containing a Core::Outline view can 
   cause this outline to update its automatic row or column formation. */
void CoreGroup_Add( CoreGroup _this, CoreView aView, XInt32 aOrder )
{
  CoreView before;
  XInt32 sg;

  if ( aView == 0 )
  {
    EwThrow( EwLoadString( &_Const000C ));
    return;
  }

  if ( aView->Owner != 0 )
  {
    EwThrow( EwLoadString( &_Const000D ));
    return;
  }

  before = 0;
  sg = aView->StackingPriority;

  if ((( aOrder < 0 ) && ( _this->last != 0 )) && ( _this->last->StackingPriority 
      >= sg ))
  {
    before = _this->last;
    aOrder = aOrder + 1;
  }

  while (((( aOrder < 0 ) && ( before != 0 )) && ( before->prev != 0 )) && ( before->prev->StackingPriority 
         >= sg ))
  {
    before = before->prev;
    aOrder = aOrder + 1;
  }

  if ((( before == 0 ) && ( _this->last != 0 )) && ( _this->last->StackingPriority 
      > sg ))
    before = _this->last;

  while ((( before != 0 ) && ( before->prev != 0 )) && ( before->prev->StackingPriority 
         > sg ))
    before = before->prev;

  if ( before == 0 )
  {
    aView->Owner = _this;
    aView->prev = _this->last;

    if ( _this->last != 0 )
      _this->last->next = aView;

    if ( _this->first == 0 )
      _this->first = aView;

    _this->last = aView;
  }
  else
  {
    aView->Owner = _this;
    aView->prev = before->prev;
    aView->next = before;
    before->prev = aView;

    if ( aView->prev != 0 )
      aView->prev->next = aView;
    else
      _this->first = aView;
  }

  if ((( aView->viewState & CoreViewStateVisible ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this, CoreView__GetExtent( aView ));

  if (((( _this->Focus == 0 ) && (( aView->viewState & CoreViewStateFocusable ) 
      == CoreViewStateFocusable )) && (( aView->viewState & CoreViewStateEnabled ) 
      == CoreViewStateEnabled )) && !(( aView->viewState & CoreViewStateDialog ) 
      == CoreViewStateDialog ))
    CoreGroup__OnSetFocus( _this, aView );

  if ((( aView->viewState & ( CoreViewStateEmbedded | CoreViewStateVisible )) == 
      ( CoreViewStateEmbedded | CoreViewStateVisible )))
  {
    aView->viewState = aView->viewState | CoreViewStateRequestLayout;
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this, CoreGroup_updateComponent ), ((XObject)_this ));
  }

  if ((( aView->viewState & CoreViewStateIsOutline ) == CoreViewStateIsOutline ))
  {
    aView->viewState = aView->viewState | CoreViewStateRequestLayout;
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this, CoreGroup_updateComponent ), ((XObject)_this ));
  }
}

/* Wrapper function for the virtual method : 'Core::Group.Add()' */
__declspec( naked ) void CoreGroup__Add( void* _this, CoreView aView, XInt32 aOrder )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aView );
  EW_UNUSED_ARG( aOrder );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 144 ]
  }
}

/* Default onget method for the property 'Opacity' */
XInt32 CoreGroup_OnGetOpacity( CoreGroup _this )
{
  return _this->Opacity;
}

/* Variants derived from the class : 'Core::Group' */
EW_DEFINE_CLASS_VARIANTS( CoreGroup )
EW_END_OF_CLASS_VARIANTS( CoreGroup )

/* Virtual Method Table (VMT) for the class : 'Core::Group' */
EW_DEFINE_CLASS( CoreGroup, CoreRectView, first, Opacity, Opacity, Opacity, Opacity, 
                 Opacity, "Core::Group" )
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
  CoreGroup_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( CoreGroup )

/* Initializer for the class 'Core::Root' */
void CoreRoot__Init( CoreRoot _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreRoot );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->cursorHoldTimer, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreRoot );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Super3.viewState = CoreViewStateAlphaBlended | CoreViewStateEnabled | CoreViewStateFocusable 
  | CoreViewStateFocused | CoreViewStateSelected | CoreViewStateTouchable | CoreViewStateVisible;
  _this->hasRootFocus = 1;
  CoreTimer_OnSetPeriod( &_this->cursorHoldTimer, 50 );
  _this->cursorHoldTimer.OnTrigger = EwNewSlot( _this, CoreRoot_cursorHoldTimerProc );
}

/* Re-Initializer for the class 'Core::Root' */
void CoreRoot__ReInit( CoreRoot _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->cursorHoldTimer );
}

/* Finalizer method for the class 'Core::Root' */
void CoreRoot__Done( CoreRoot _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->cursorHoldTimer );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method GetRoot() delivers the application object, this view belongs to. The 
   application object represents the entire screen of the GUI application. Thus 
   in the views hierarchy, the application object serves as the root view.
   This method can fail and return null if the view still doesn't belong to any 
   owner group. */
CoreRoot CoreRoot_GetRoot( CoreRoot _this )
{
  return _this;
}

/* 'C' function for method : 'Core::Root.Draw()' */
void CoreRoot_Draw( CoreRoot _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XBool fullScreenUpdate = 0;

  fullScreenUpdate = (XBool)EwFullScreenUpdate;

  if ( !fullScreenUpdate )
    GraphicsCanvas_FillRectangle( aCanvas, aClip, EwMoveRectPos( EwMoveRectPos( 
    aClip, aOffset ), _this->Super2.Bounds.Point1 ), _Const0002, _Const0002, _Const0002, 
    _Const0002, 0 );

  CoreGroup_Draw((CoreGroup)_this, aCanvas, aClip, aOffset, aOpacity, aBlend );
}

/* The method ChangeViewState() modifies the current state of the view. The state 
   is a set of switches determining whether a view is visible, whether it can react 
   to user inputs or whether it is just performing some update operations, etc.
   The modification is controlled by the the both parameters. The first aSetState 
   contains the switches to activate within the view state. The second aClearState 
   determines all switches to disable.
   Depending on the state alteration the method will perform different operations, 
   e.g. in response to the clearing of the visible state, the method will request 
   a screen redraw to make disappear the view from the screen.
   ChangeViewState() is invoked automatically by the framework, so you never should 
   need to invoke it directly. All relevant states are available as properties e.g. 
   the property Visible in derived classes reflects the visible state of the view. */
void CoreRoot_ChangeViewState( CoreRoot _this, XSet aSetState, XSet aClearState )
{
  CoreGroup_ChangeViewState((CoreGroup)_this, aSetState, aClearState );

  if (( _this->Super3.Owner == 0 ) && ((( aSetState & CoreViewStateVisible ) == 
      CoreViewStateVisible ) || (( aClearState & CoreViewStateVisible ) == CoreViewStateVisible )))
    CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));

  if (( _this->Super3.Owner == 0 ) && ((( aSetState & CoreViewStateAlphaBlended ) 
      == CoreViewStateAlphaBlended ) || (( aClearState & CoreViewStateAlphaBlended ) 
      == CoreViewStateAlphaBlended )))
    CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Core::Root.OnSetFocus()' */
void CoreRoot_OnSetFocus( CoreRoot _this, CoreView value )
{
  if (( value != (CoreView)0 ) || ( value == 0 ))
    CoreGroup_OnSetFocus((CoreGroup)_this, value );
}

/* 'C' function for method : 'Core::Root.OnSetBuffered()' */
void CoreRoot_OnSetBuffered( CoreRoot _this, XBool value )
{
  ResourcesBitmap oldBuffer = ((ResourcesBitmap)_this->Super1.buffer );

  CoreGroup_OnSetBuffered((CoreGroup)_this, value );

  if ((((GraphicsCanvas)oldBuffer != _this->Super1.buffer ) && ( _this->Super3.Owner 
      == 0 )) && (( _this->Super3.viewState & CoreViewStateVisible ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Core::Root.OnSetOpacity()' */
void CoreRoot_OnSetOpacity( CoreRoot _this, XInt32 value )
{
  XInt32 oldValue = _this->Super1.Opacity;

  CoreGroup_OnSetOpacity((CoreGroup)_this, value );

  if ((( oldValue != _this->Super1.Opacity ) && ( _this->Super3.Owner == 0 )) && 
      (( _this->Super3.viewState & CoreViewStateVisible ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* The method DispatchEvent() feeds the component with the event passed in the parameter 
   aEvent and propagates it along the so-called focus path. This focus path leads 
   to the currently selected keyboard event receiver view. If the event is rejected 
   by the view, the same operation is repeated for the next superior view. This 
   permits the hierarchical event dispatching until a willing view has handled the 
   event or all views in the focus path have been evaluated. If the event remains 
   still unhandled, it will be passed to the component itself.
   The focus path is established by the property @Focus. 
   DispatchEvent() returns the value returned by the @HandleEvent() method of the 
   view which has handled the event. In the case, the event was not handled, the 
   method returns 'null'. */
XObject CoreRoot_DispatchEvent( CoreRoot _this, CoreEvent aEvent )
{
  XObject handled;

  if ( aEvent != 0 )
  {
    aEvent->IsTimeExact = (XBool)( _this->currentEventTimestamp != 0 );

    if ( _this->currentEventTimestamp != 0 )
      aEvent->Time = _this->currentEventTimestamp;
  }

  handled = CoreGroup_DispatchEvent((CoreGroup)_this, aEvent );
  _this->currentEventTimestamp = 0;
  return handled;
}

/* The method BroadcastEvent() feeds the component with the event passed in the 
   parameter aEvent and propagates it to all views enclosed within the component 
   until the event has been handled or all views are evaluated. If the event remains 
   still unhandled, it will be passed to the component itself.
   The additional parameter aFilter can be used to limit the operation to special 
   views only, e.g. to visible and touchable views. To broadcast the event to all 
   views pass in the parameter aFilter the value 'Core::ViewState[]'.
   BroadcastEvent() is very useful to provide all views with one and the same event 
   in order e.g. to inform all views about an important global state alteration. 
   To send events to views enclosing a given position use the method @BroadcastEventAtPosition().
   BroadcastEvent() returns the value returned by the @HandleEvent() method of the 
   view which has handled the event. In the case, the event was not handled, the 
   method returns 'null'. */
XObject CoreRoot_BroadcastEvent( CoreRoot _this, CoreEvent aEvent, XSet aFilter )
{
  XObject handled;

  if ( aEvent != 0 )
  {
    aEvent->IsTimeExact = (XBool)( _this->currentEventTimestamp != 0 );

    if ( _this->currentEventTimestamp != 0 )
      aEvent->Time = _this->currentEventTimestamp;
  }

  handled = CoreGroup_BroadcastEvent((CoreGroup)_this, aEvent, aFilter );
  _this->currentEventTimestamp = 0;
  return handled;
}

/* The method InvalidateArea() declares the given area of the component as invalid, 
   this means this area should be redrawn at the next screen update. */
void CoreRoot_InvalidateArea( CoreRoot _this, XRect aArea )
{
  XBool fullScreenUpdate;
  XInt32 i;
  XInt32 j;
  XInt32 k;
  XInt32 jj;
  XInt32 kk;
  XInt32 best;

  if ( _this->updateLock > 0 )
  {
    EwThrow( EwLoadString( &_Const000E ));
    return;
  }

  if (( _this->Super1.buffer != 0 ) && ( _this->Super3.Owner == 0 ))
  {
    XBool fullOffScreenBufferUpdate;

    if ( EwIsRectEmpty( _this->Super1.buffer->InvalidArea ))
    {
      EwNotifyObjObservers((XObject)_this, 0 );
      EwNotifyObjObservers((XObject)_this->Super1.buffer, 0 );
    }

    fullOffScreenBufferUpdate = 0;
    fullOffScreenBufferUpdate = (XBool)EwFullOffScreenBufferUpdate;

    if ( fullOffScreenBufferUpdate )
      _this->Super1.buffer->InvalidArea = EwGetRectORect( _this->Super2.Bounds );
    else
      _this->Super1.buffer->InvalidArea = EwUnionRect( _this->Super1.buffer->InvalidArea, 
      aArea );
  }

  fullScreenUpdate = 0;
  fullScreenUpdate = (XBool)EwFullScreenUpdate;

  if ( fullScreenUpdate )
    aArea = EwGetRectORect( _this->Super2.Bounds );

  if ( _this->Super3.Owner != 0 )
  {
    CoreGroup_InvalidateArea((CoreGroup)_this, aArea );
    return;
  }

  aArea = EwIntersectRect( EwMoveRectPos( aArea, _this->Super2.Bounds.Point1 ), 
  _this->Super2.Bounds );

  if ( EwIsRectEmpty( aArea ))
    return;

  for ( i = 0; i < _this->noOfRegions; i = i + 1 )
    if ( !EwIsRectEmpty( EwIntersectRect( _this->regions[ EwCheckIndex( i, 4 )], 
        aArea )))
    {
      _this->regions[ EwCheckIndex( i, 4 )] = EwUnionRect( _this->regions[ EwCheckIndex( 
      i, 4 )], aArea );
      _this->regionsArea[ EwCheckIndex( i, 4 )] = EwGetRectArea( _this->regions[ 
      EwCheckIndex( i, 4 )]);
      return;
    }

  if ( _this->noOfRegions < 3 )
  {
    _this->regions[ EwCheckIndex( _this->noOfRegions, 4 )] = aArea;
    _this->regionsArea[ EwCheckIndex( _this->noOfRegions, 4 )] = EwGetRectArea( 
    aArea );
    _this->noOfRegions = _this->noOfRegions + 1;
    return;
  }

  jj = 0;
  kk = 0;
  best = 2147483647;
  _this->regions[ EwCheckIndex( _this->noOfRegions, 4 )] = aArea;
  _this->regionsArea[ EwCheckIndex( _this->noOfRegions, 4 )] = EwGetRectArea( aArea );

  for ( j = 0; j <= _this->noOfRegions; j = j + 1 )
    for ( k = j + 1; k <= _this->noOfRegions; k = k + 1 )
    {
      XInt32 unionArea = EwGetRectArea( EwUnionRect( _this->regions[ EwCheckIndex( 
        j, 4 )], _this->regions[ EwCheckIndex( k, 4 )]));
      XInt32 overhead = ( unionArea << 8 ) / ( _this->regionsArea[ EwCheckIndex( 
        j, 4 )] + _this->regionsArea[ EwCheckIndex( k, 4 )]);

      if ( overhead < best )
      {
        best = overhead;
        jj = j;
        kk = k;
      }
    }

  _this->regions[ EwCheckIndex( jj, 4 )] = EwUnionRect( _this->regions[ EwCheckIndex( 
  jj, 4 )], _this->regions[ EwCheckIndex( kk, 4 )]);
  _this->regionsArea[ EwCheckIndex( jj, 4 )] = EwGetRectArea( _this->regions[ EwCheckIndex( 
  jj, 4 )]);

  if ( kk != _this->noOfRegions )
  {
    _this->regions[ EwCheckIndex( kk, 4 )] = _this->regions[ EwCheckIndex( _this->noOfRegions, 
    4 )];
    _this->regionsArea[ EwCheckIndex( kk, 4 )] = _this->regionsArea[ EwCheckIndex( 
    _this->noOfRegions, 4 )];
  }
}

/* 'C' function for method : 'Core::Root.createDragEvent()' */
CoreDragEvent CoreRoot_createDragEvent( CoreRoot _this )
{
  CoreDragEvent event = EwNewObject( CoreDragEvent, 0 );

  event->Super1.IsTimeExact = (XBool)( _this->currentEventTimestamp != 0 );

  if ( _this->currentEventTimestamp != 0 )
    event->Super1.Time = _this->currentEventTimestamp;

  return event;
}

/* 'C' function for method : 'Core::Root.createCursorEvent()' */
CoreCursorEvent CoreRoot_createCursorEvent( CoreRoot _this )
{
  CoreCursorEvent event = EwNewObject( CoreCursorEvent, 0 );

  event->Super1.IsTimeExact = (XBool)( _this->currentEventTimestamp != 0 );

  if ( _this->currentEventTimestamp != 0 )
    event->Super1.Time = _this->currentEventTimestamp;

  return event;
}

/* 'C' function for method : 'Core::Root.createCursorGrabEvent()' */
CoreCursorGrabEvent CoreRoot_createCursorGrabEvent( CoreRoot _this )
{
  CoreCursorGrabEvent event = EwNewObject( CoreCursorGrabEvent, 0 );

  event->Super1.IsTimeExact = (XBool)( _this->currentEventTimestamp != 0 );

  if ( _this->currentEventTimestamp != 0 )
    event->Super1.Time = _this->currentEventTimestamp;

  return event;
}

/* 'C' function for method : 'Core::Root.cursorHoldTimerProc()' */
void CoreRoot_cursorHoldTimerProc( CoreRoot _this, XObject sender )
{
  XInt32 i;
  XBool found;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  found = 0;

  for ( i = 0; i < 10; i = i + 1 )
    if ( _this->cursorTargetView[ EwCheckIndex( i, 10 )] != 0 )
    {
      XPoint pos = _this->cursorLastPos[ EwCheckIndex( i, 10 )];
      CoreGroup grp = _this->cursorTargetView[ EwCheckIndex( i, 10 )]->Owner;

      while (( grp != 0 ) && ((CoreRoot)grp != _this ))
      {
        pos = EwMovePointNeg( pos, grp->Super1.Bounds.Point1 );
        grp = grp->Super2.Owner;
      }

      if (( grp == 0 ) && ((CoreRoot)_this->cursorTargetView[ EwCheckIndex( i, 10 )] 
          != _this ))
      {
        CoreView tmp = _this->cursorTargetView[ EwCheckIndex( i, 10 )];
        _this->cursorFinger = i;
        _this->cursorTargetView[ EwCheckIndex( i, 10 )] = 0;
        CoreView__HandleEvent( tmp, ((CoreEvent)CoreCursorEvent_InitializeUp( CoreRoot_createCursorEvent( 
        _this ), i, _this->cursorCurrentPos[ EwCheckIndex( i, 10 )], _this->cursorHittingPos[ 
        EwCheckIndex( i, 10 )], _this->cursorHoldPeriod[ EwCheckIndex( i, 10 )], 
        _this->cursorSequelCounter[ EwCheckIndex( i, 10 )] + 1, _this->cursorHitOffset[ 
        EwCheckIndex( i, 10 )], 0, _this->cursorLastPos[ EwCheckIndex( i, 10 )], 
        _this->cursorFirstPos[ EwCheckIndex( i, 10 )])));
        CoreGroup__BroadcastEvent( _this, ((CoreEvent)CoreCursorGrabEvent_InitializeUp( 
        CoreRoot_createCursorGrabEvent( _this ), i, _this->cursorSequelCounter[ 
        EwCheckIndex( i, 10 )] + 1, 0, tmp, _this->cursorLastPos[ EwCheckIndex( 
        i, 10 )])), CoreViewStateEnabled | CoreViewStateTouchable );
      }
      else
      {
        _this->cursorHoldPeriod[ EwCheckIndex( i, 10 )] = (XInt32)( _this->cursorHoldTimer.Time 
        - _this->cursorHittingTime[ EwCheckIndex( i, 10 )]);

        if ( _this->cursorHoldPeriod[ EwCheckIndex( i, 10 )] < 10 )
          _this->cursorHoldPeriod[ EwCheckIndex( i, 10 )] = 10;

        _this->cursorFinger = i;
        CoreView__HandleEvent( _this->cursorTargetView[ EwCheckIndex( i, 10 )], 
        ((CoreEvent)CoreCursorEvent_InitializeHold( CoreRoot_createCursorEvent( 
        _this ), i, pos, _this->cursorHittingPos[ EwCheckIndex( i, 10 )], _this->cursorHoldPeriod[ 
        EwCheckIndex( i, 10 )], _this->cursorSequelCounter[ EwCheckIndex( i, 10 )] 
        + 1, _this->cursorHitOffset[ EwCheckIndex( i, 10 )], _this->cursorLastPos[ 
        EwCheckIndex( i, 10 )], _this->cursorFirstPos[ EwCheckIndex( i, 10 )])));
        found = 1;
      }
    }

  if ( !found )
    CoreTimer_OnSetEnabled( &_this->cursorHoldTimer, 0 );
}

/* The method GetFPS() returns the screen update performance expressed in frames 
   per second. The performance is estimated for the period between the current and 
   the preceding invocation of the GetFPS() method. */
XInt32 CoreRoot_GetFPS( CoreRoot _this )
{
  XUInt32 ticksCount = 0;
  XInt32 fps = 0;

  ticksCount = (XUInt32)EwGetTicks();

  if (( _this->fpsTime != 0 ) && ( ticksCount > _this->fpsTime ))
    fps = ( _this->fpsCounter * 1000 ) / (XInt32)( ticksCount - _this->fpsTime );

  _this->fpsCounter = 0;
  _this->fpsTime = ticksCount;
  return fps;
}

/* Wrapper function for the non virtual method : 'Core::Root.GetFPS()' */
__declspec( naked ) XInt32 CoreRoot__GetFPS( void* _this )
{
  EW_UNUSED_ARG( _this );

  __asm jmp CoreRoot_GetFPS
}

/* The method Update() exists for the integration purpose with the underlying target 
   system. You will never need to invoke this method directly from your GUI application. 
   The method is responsible for the redrawing of invalid screen areas.
   This method forces the redraw of all affected views and returns the position 
   and the size of the redrawn area. If there is no invalid area to redraw, */
XRect CoreRoot_Update( CoreRoot _this )
{
  if ( _this->canvas == 0 )
    _this->canvas = EwNewObject( GraphicsCanvas, 0 );

  ResourcesBitmap__OnSetFrameSize( _this->canvas, EwGetRectSize( _this->Super2.Bounds ));
  ResourcesBitmap__Update( _this->canvas );
  return CoreRoot_UpdateGE20( _this, _this->canvas );
}

/* Wrapper function for the non virtual method : 'Core::Root.Update()' */
__declspec( naked ) XRect CoreRoot__Update( void* _this )
{
  EW_UNUSED_ARG( _this );

  __asm jmp CoreRoot_Update
}

/* The method UpdateGE20() exists for the integration purpose with the underlying 
   target system. You will never need to invoke this method directly from your GUI 
   application. The method is responsible for the redrawing of invalid screen areas.
   This method forces the redraw of all affected views into the given drawing destination 
   aCanvas and returns the position and the size of the redrawn area. If there is 
   no invalid area to redraw, UpdateGE20() returns an empty rectangle. This method 
   is intended to work with the new Graphics Engine 2.0 only. */
XRect CoreRoot_UpdateGE20( CoreRoot _this, GraphicsCanvas aCanvas )
{
  XRect wholeArea;

  if ( CoreRoot_BeginUpdate( _this ) == 0 )
    return _Const0001;

  wholeArea = CoreRoot_UpdateCanvas( _this, aCanvas, _Const0000 );
  CoreRoot_EndUpdate( _this );
  return wholeArea;
}

/* Wrapper function for the non virtual method : 'Core::Root.UpdateGE20()' */
__declspec( naked ) XRect CoreRoot__UpdateGE20( void* _this, GraphicsCanvas aCanvas )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aCanvas );

  __asm jmp CoreRoot_UpdateGE20
}

/* The method EndUpdate() belongs to an interface required for integration purpose 
   with the underlying target system. You will never need to invoke this method 
   directly from your GUI application.
   Calling this method finalizes the screen update cycle initiated by the preceding 
   @BeginUpdate() invocation. */
void CoreRoot_EndUpdate( CoreRoot _this )
{
  if ( _this->noOfRegions > 0 )
  {
    _this->fpsCounter = _this->fpsCounter + 1;
    _this->noOfRegions = 0;
  }
}

/* Wrapper function for the non virtual method : 'Core::Root.EndUpdate()' */
__declspec( naked ) void CoreRoot__EndUpdate( void* _this )
{
  EW_UNUSED_ARG( _this );

  __asm jmp CoreRoot_EndUpdate
}

/* The method UpdateCanvas() belongs to an interface required for integration purpose 
   with the underlying target system. You will never need to invoke this method 
   directly from your GUI application.
   This method redraws all invalid screen regions into the canvas passed in the 
   parameter aCanvas. The parameter aOffset determines the origin where to map the 
   top-left corner of the canvas on the screen. All update areas lying outside the 
   canvas are clipped.
   The method returns the position and the size of the resulting area within the 
   canvas affected by the update. If there is no intersection between the canvas 
   and any of the invalid areas, UpdateCanvas() returns an empty rectangle. */
XRect CoreRoot_UpdateCanvas( CoreRoot _this, GraphicsCanvas aCanvas, XPoint aOffset )
{
  XRect wholeArea = _Const0001;
  XRect canvasArea = EwNewRect2Point( aOffset, EwMovePointPos( aCanvas->Super1.FrameSize, 
    aOffset ));
  XInt32 i;
  XInt32 j = _this->noOfRegions;

  _this->updateLock = _this->updateLock + 1;

  for ( i = 0; ( i < j ) && ( i < 4 ); i = i + 1 )
    if ( _this->regionsArea[ EwCheckIndex( i, 4 )] > 0 )
    {
      CoreView__Draw( _this, aCanvas, EwMoveRectNeg( _this->regions[ EwCheckIndex( 
      i, 4 )], aOffset ), EwNegPoint( aOffset ), 255, 1 );
      wholeArea = EwUnionRect( wholeArea, EwIntersectRect( canvasArea, _this->regions[ 
      EwCheckIndex( i, 4 )]));
    }
    else
      j = j + 1;

  _this->updateLock = _this->updateLock - 1;

  if ( !EwIsRectEmpty( wholeArea ))
    return EwMoveRectNeg( wholeArea, aOffset );
  else
    return wholeArea;
}

/* Wrapper function for the non virtual method : 'Core::Root.UpdateCanvas()' */
__declspec( naked ) XRect CoreRoot__UpdateCanvas( void* _this, GraphicsCanvas aCanvas, 
  XPoint aOffset )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aCanvas );
  EW_UNUSED_ARG( aOffset );

  __asm jmp CoreRoot_UpdateCanvas
}

/* The method GetUpdateRegion() belongs to an interface required for integration 
   purpose with the underlying target system. You will never need to invoke this 
   method directly from your GUI application.
   This method returns the position and the size of the invalid region with the 
   number specified in the parameter aRegionNo. If the desired region does not exist, 
   the method returns an empty area. */
XRect CoreRoot_GetUpdateRegion( CoreRoot _this, XInt32 aRegionNo )
{
  XInt32 i;
  XInt32 j = _this->noOfRegions;

  if ( aRegionNo < 0 )
    return _Const0001;

  for ( i = 0; ( i < j ) && ( i < 4 ); i = i + 1 )
    if ( _this->regionsArea[ EwCheckIndex( i, 4 )] == 0 )
    {
      j = j + 1;
      aRegionNo = aRegionNo + 1;
    }
    else
      if ( i == aRegionNo )
        return _this->regions[ EwCheckIndex( i, 4 )];

  return _Const0001;
}

/* Wrapper function for the non virtual method : 'Core::Root.GetUpdateRegion()' */
__declspec( naked ) XRect CoreRoot__GetUpdateRegion( void* _this, XInt32 aRegionNo )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aRegionNo );

  __asm jmp CoreRoot_GetUpdateRegion
}

/* The method BeginUpdate() belongs to an interface required for integration purpose 
   with the underlying target system. You will never need to invoke this method 
   directly from your GUI application.
   Calling this method initiates a new screen update cycle. Subsequently the method 
   @UpdateCanvas() can be called in order to perform all waiting drawing operations. 
   If necessary UpdateCanvas() can be called multiple times in order to draw multiple 
   screen areas individually. Finally the update cycle is terminated by calling 
   the method @EndUpdate().
   The method BeginUpdate() returns the number of invalid regions waiting currently 
   for the update. If there is nothing to update, the method returns 0 (zero). The 
   position and the size of the invalid regions can be queried by using the method 
   @GetUpdateRegion(). */
XInt32 CoreRoot_BeginUpdate( CoreRoot _this )
{
  XBool preserveFramebufferContent = 1;
  XBool fullScreenUpdate = 0;
  XInt32 i;
  XRect overlayArea;
  XBool par1;
  XInt32 j;
  XInt32 k;

  {
    preserveFramebufferContent = (XBool)EwPreserveFramebufferContent;
    fullScreenUpdate           = (XBool)EwFullScreenUpdate;
  }
  overlayArea = _Const0001;
  par1 = (XBool)( _this->noOfRegions > 0 );
  overlayArea = EwGetOverlayArea( par1, 1 );

  if ( !EwIsRectEmpty( overlayArea ))
    CoreGroup__InvalidateArea( _this, overlayArea );

  if (( !preserveFramebufferContent && !fullScreenUpdate ) && ( _this->noOfRegions 
      > 0 ))
  {
    XRect tmpRegions[ 3 ] = {0};
    XInt32 tmpNoOfRegions = _this->noOfRegions;

    for ( i = 0; i < tmpNoOfRegions; i = i + 1 )
      tmpRegions[ EwCheckIndex( i, 3 )] = _this->regions[ EwCheckIndex( i, 4 )];

    for ( i = 0; i < _this->noOfLastRegions; i = i + 1 )
      CoreGroup__InvalidateArea( _this, _this->lastRegions[ EwCheckIndex( i, 3 )]);

    for ( i = 0; i < tmpNoOfRegions; i = i + 1 )
      _this->lastRegions[ EwCheckIndex( i, 3 )] = tmpRegions[ EwCheckIndex( i, 3 )];

    _this->noOfLastRegions = tmpNoOfRegions;
  }

  for ( j = 0; j < ( _this->noOfRegions - 1 ); j = j + 1 )
    if ( _this->regionsArea[ EwCheckIndex( j, 4 )] > 0 )
      for ( k = j + 1; k < _this->noOfRegions; k = k + 1 )
        if ( _this->regionsArea[ EwCheckIndex( k, 4 )] > 0 )
        {
          XInt32 unionArea = EwGetRectArea( EwUnionRect( _this->regions[ EwCheckIndex( 
            j, 4 )], _this->regions[ EwCheckIndex( k, 4 )]));

          if ((( unionArea - _this->regionsArea[ EwCheckIndex( j, 4 )]) - _this->regionsArea[ 
              EwCheckIndex( k, 4 )]) < 0 )
          {
            _this->regions[ EwCheckIndex( j, 4 )] = EwUnionRect( _this->regions[ 
            EwCheckIndex( j, 4 )], _this->regions[ EwCheckIndex( k, 4 )]);
            _this->regionsArea[ EwCheckIndex( j, 4 )] = unionArea;
            _this->regionsArea[ EwCheckIndex( k, 4 )] = 0;
          }
        }

  for ( i = _this->noOfRegions - 1; i >= 0; i = i - 1 )
    if ( _this->regionsArea[ EwCheckIndex( i, 4 )] == 0 )
      _this->noOfRegions = _this->noOfRegions - 1;

  return _this->noOfRegions;
}

/* Wrapper function for the non virtual method : 'Core::Root.BeginUpdate()' */
__declspec( naked ) XInt32 CoreRoot__BeginUpdate( void* _this )
{
  EW_UNUSED_ARG( _this );

  __asm jmp CoreRoot_BeginUpdate
}

/* The method DoesNeedUpdate() returns a value indicating whether an area of the 
   application needs an update. If there is no invalid area to redraw, DoesNeedUpdate() 
   returns 'false'. */
XBool CoreRoot_DoesNeedUpdate( CoreRoot _this )
{
  XRect overlayArea;

  if ( _this->noOfRegions > 0 )
    return 1;

  overlayArea = _Const0001;
  overlayArea = EwGetOverlayArea( 0, 0 );

  if ( !EwIsRectEmpty( overlayArea ))
    return 1;

  return 0;
}

/* Wrapper function for the non virtual method : 'Core::Root.DoesNeedUpdate()' */
__declspec( naked ) XBool CoreRoot__DoesNeedUpdate( void* _this )
{
  EW_UNUSED_ARG( _this );

  __asm jmp CoreRoot_DoesNeedUpdate
}

/* The method Initialize() exists for the integration purpose with the underlying 
   target system. You will never need to invoke this method directly from your GUI 
   application. The method is responsible for the preparation of the application 
   object to work with a screen with the given size aSize. */
CoreRoot CoreRoot_Initialize( CoreRoot _this, XPoint aSize )
{
  CoreRectView__OnSetBounds( _this, EwNewRect2Point( _Const0000, aSize ));

  if ( _this->hasRootFocus )
    _this->Super3.viewState = _this->Super3.viewState | ( CoreViewStateFocused | 
    CoreViewStateSelected );
  else
    _this->Super3.viewState = _this->Super3.viewState | CoreViewStateSelected;

  CoreGroup__InvalidateArea( _this, _this->Super2.Bounds );
  return _this;
}

/* Wrapper function for the non virtual method : 'Core::Root.Initialize()' */
__declspec( naked ) CoreRoot CoreRoot__Initialize( void* _this, XPoint aSize )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aSize );

  __asm jmp CoreRoot_Initialize
}

/* 'C' function for method : 'Core::Root.SetRootFocus()' */
XBool CoreRoot_SetRootFocus( CoreRoot _this, XBool aHasRootFocus )
{
  if ( aHasRootFocus == _this->hasRootFocus )
    return 0;

  _this->hasRootFocus = aHasRootFocus;

  if ( !aHasRootFocus )
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocused );
  else
    CoreView__ChangeViewState( _this, CoreViewStateFocused, 0 );

  return 1;
}

/* Wrapper function for the non virtual method : 'Core::Root.SetRootFocus()' */
__declspec( naked ) XBool CoreRoot__SetRootFocus( void* _this, XBool aHasRootFocus )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aHasRootFocus );

  __asm jmp CoreRoot_SetRootFocus
}

/* The method 'SetUserInputTimestamp()' exists for optional purpose to provide the 
   exact timestamp when the last user interaction took place. With this exact information 
   the GUI application can calculate better interactions like touch screen gestures, 
   etc. The time is expressed in milliseconds.
   Usually the method will be invoked in response to user input events received 
   in the main() message loop from the target specific keyboard or touch screen 
   driver. The method should be called before the event is fed to the GUI system. */
void CoreRoot_SetUserInputTimestamp( CoreRoot _this, XUInt32 aTimestamp )
{
  _this->currentEventTimestamp = aTimestamp;
}

/* Wrapper function for the non virtual method : 'Core::Root.SetUserInputTimestamp()' */
__declspec( naked ) void CoreRoot__SetUserInputTimestamp( void* _this, XUInt32 aTimestamp )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aTimestamp );

  __asm jmp CoreRoot_SetUserInputTimestamp
}

/* The method DriveKeyboardHitting() exists for the integration purpose with the 
   underlying target system. Usually the method will be invoked in response to events 
   received in the main() message loop from the target specific hardware keyboard 
   driver.
   The parameters passed to the method determine the event. aDown determines whether 
   the user has pressed (== 'true') or released (== 'false') a key. The parameters 
   aCode and aCharCode are used exclusively. They determine the affected key. If 
   the method is called with a valid aCode then aCharCode should be '\0'. If the 
   method is called with a valid aCharCode then aCode should be Core::KeyCode.NoKey. */
XBool CoreRoot_DriveKeyboardHitting( CoreRoot _this, XEnum aCode, XChar aCharCode, 
  XBool aDown )
{
  XBool processed = (XBool)( _this->keyLastTarget != 0 );

  if (( _this->keyLastTarget != 0 ) && (( !aDown || ( _this->keyLastCode != aCode )) 
      || ( _this->keyLastCharCode != aCharCode )))
  {
    CoreKeyEvent event = 0;
    CoreView view = EwCastObject( _this->keyLastTarget, CoreView );
    CoreKeyPressHandler handler = EwCastObject( _this->keyLastTarget, CoreKeyPressHandler );

    if ( _this->keyLastCode != CoreKeyCodeNoKey )
      event = CoreKeyEvent_Initialize( EwNewObject( CoreKeyEvent, 0 ), _this->keyLastCode, 
      0 );

    if ( _this->keyLastCharCode != 0x0000 )
      event = CoreKeyEvent_Initialize2( EwNewObject( CoreKeyEvent, 0 ), _this->keyLastCharCode, 
      0 );

    if ( handler != 0 )
      CoreKeyPressHandler_HandleEvent( handler, event );
    else
      if ( view != 0 )
        CoreView__HandleEvent( view, ((CoreEvent)event ));

    _this->keyLastCode = CoreKeyCodeNoKey;
    _this->keyLastCharCode = 0x0000;
    _this->keyLastTarget = 0;
  }

  if ( _this->keyLastTarget != 0 )
  {
    CoreKeyEvent event = 0;
    CoreView view = EwCastObject( _this->keyLastTarget, CoreView );
    CoreKeyPressHandler handler = EwCastObject( _this->keyLastTarget, CoreKeyPressHandler );

    if ( aCode != CoreKeyCodeNoKey )
      event = CoreKeyEvent_Initialize( EwNewObject( CoreKeyEvent, 0 ), aCode, 1 );

    if ( _this->keyLastCharCode != 0x0000 )
      event = CoreKeyEvent_Initialize2( EwNewObject( CoreKeyEvent, 0 ), aCharCode, 
      1 );

    if ( handler != 0 )
      CoreKeyPressHandler_HandleEvent( handler, event );
    else
      if ( view != 0 )
        CoreView__HandleEvent( view, ((CoreEvent)event ));
  }

  if (( _this->keyLastTarget == 0 ) && aDown )
  {
    if ( aCode != CoreKeyCodeNoKey )
      _this->keyLastTarget = CoreGroup__DispatchEvent( _this, ((CoreEvent)CoreKeyEvent_Initialize( 
      EwNewObject( CoreKeyEvent, 0 ), aCode, 1 )));

    if ( aCharCode != 0x0000 )
      _this->keyLastTarget = CoreGroup__DispatchEvent( _this, ((CoreEvent)CoreKeyEvent_Initialize2( 
      EwNewObject( CoreKeyEvent, 0 ), aCharCode, 1 )));

    if (( EwCastObject( _this->keyLastTarget, CoreKeyPressHandler ) == 0 ) && ( 
        EwCastObject( _this->keyLastTarget, CoreView ) == 0 ))
      _this->keyLastTarget = 0;

    _this->keyLastCode = aCode;
    _this->keyLastCharCode = aCharCode;
    processed = (XBool)( processed || ( _this->keyLastTarget != 0 ));
  }

  _this->currentEventTimestamp = 0;
  return processed;
}

/* Wrapper function for the non virtual method : 'Core::Root.DriveKeyboardHitting()' */
__declspec( naked ) XBool CoreRoot__DriveKeyboardHitting( void* _this, XEnum aCode, 
  XChar aCharCode, XBool aDown )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aCode );
  EW_UNUSED_ARG( aCharCode );
  EW_UNUSED_ARG( aDown );

  __asm jmp CoreRoot_DriveKeyboardHitting
}

/* The method DriveCursorMovement() exists for the integration purpose with the 
   underlying target system. Usually the method will be invoked in response to to 
   drag events received in the main() message loop from the target specific touch 
   screen driver.
   The method expects only one parameter aPos. This parameter determines the current 
   cursor (or finger in the touch screen analogy) position. aPos lies relative to 
   the top-left corner of the application coordinate system.
   Please note, this method is limited to process a single touch (or mouse) event 
   at the same time. When integrating with a target system supporting multi-touch 
   please use the method @DriveMultiTouchMovement(). */
XBool CoreRoot_DriveCursorMovement( CoreRoot _this, XPoint aPos )
{
  return CoreRoot_DriveMultiTouchMovement( _this, _this->cursorFinger, aPos );
}

/* Wrapper function for the non virtual method : 'Core::Root.DriveCursorMovement()' */
__declspec( naked ) XBool CoreRoot__DriveCursorMovement( void* _this, XPoint aPos )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aPos );

  __asm jmp CoreRoot_DriveCursorMovement
}

/* The method DriveMultiTouchMovement() exists for the integration purpose with 
   the underlying target system. Usually the method will be invoked in response 
   to to drag events received in the main() message loop from the target specific 
   touch screen driver.
   The parameter aPos determines the current cursor (or finger in the touch screen 
   analogy) position. aPos lies relative to the top-left corner of the application 
   coordinate system. The number of the finger is specified in the parameter aFinger. 
   The first finger has the number 0, the second 1, and so far till 9.
   Please note, unlike the method @DriveCursorMovement() this method is able to 
   process and dispatch several multi-touch events simultaneously. */
XBool CoreRoot_DriveMultiTouchMovement( CoreRoot _this, XInt32 aFinger, XPoint aPos )
{
  XPoint offset;
  XPoint pos;
  CoreGroup grp;

  if (( aFinger < 0 ) || ( aFinger > 9 ))
  {
    _this->currentEventTimestamp = 0;
    return 0;
  }

  offset = EwMovePointNeg( aPos, _this->cursorLastPos[ EwCheckIndex( aFinger, 10 )]);
  _this->cursorLastPos[ EwCheckIndex( aFinger, 10 )] = aPos;

  if (( _this->cursorTargetView[ EwCheckIndex( aFinger, 10 )] == 0 ) || !EwCompPoint( 
      offset, _Const0000 ))
  {
    _this->currentEventTimestamp = 0;
    return 0;
  }

  pos = aPos;
  grp = _this->cursorTargetView[ EwCheckIndex( aFinger, 10 )]->Owner;

  while (( grp != 0 ) && ((CoreRoot)grp != _this ))
  {
    pos = EwMovePointNeg( pos, grp->Super1.Bounds.Point1 );
    grp = grp->Super2.Owner;
  }

  if (( grp == 0 ) && ((CoreRoot)_this->cursorTargetView[ EwCheckIndex( aFinger, 
      10 )] != _this ))
  {
    CoreView tmp = _this->cursorTargetView[ EwCheckIndex( aFinger, 10 )];
    _this->cursorFinger = aFinger;
    _this->cursorTargetView[ EwCheckIndex( aFinger, 10 )] = 0;
    CoreView__HandleEvent( tmp, ((CoreEvent)CoreCursorEvent_InitializeUp( CoreRoot_createCursorEvent( 
    _this ), aFinger, _this->cursorCurrentPos[ EwCheckIndex( aFinger, 10 )], _this->cursorHittingPos[ 
    EwCheckIndex( aFinger, 10 )], _this->cursorHoldPeriod[ EwCheckIndex( aFinger, 
    10 )], _this->cursorSequelCounter[ EwCheckIndex( aFinger, 10 )] + 1, _this->cursorHitOffset[ 
    EwCheckIndex( aFinger, 10 )], 0, _this->cursorLastPos[ EwCheckIndex( aFinger, 
    10 )], _this->cursorFirstPos[ EwCheckIndex( aFinger, 10 )])));
    CoreGroup__BroadcastEvent( _this, ((CoreEvent)CoreCursorGrabEvent_InitializeUp( 
    CoreRoot_createCursorGrabEvent( _this ), aFinger, _this->cursorSequelCounter[ 
    EwCheckIndex( aFinger, 10 )] + 1, 0, tmp, aPos )), CoreViewStateEnabled | CoreViewStateTouchable );
  }
  else
  {
    _this->cursorCurrentPos[ EwCheckIndex( aFinger, 10 )] = pos;
    _this->cursorFinger = aFinger;
    CoreView__HandleEvent( _this->cursorTargetView[ EwCheckIndex( aFinger, 10 )], 
    ((CoreEvent)CoreDragEvent_Initialize( CoreRoot_createDragEvent( _this ), aFinger, 
    pos, _this->cursorHittingPos[ EwCheckIndex( aFinger, 10 )], offset, _this->cursorHoldPeriod[ 
    EwCheckIndex( aFinger, 10 )], _this->cursorSequelCounter[ EwCheckIndex( aFinger, 
    10 )] + 1, _this->cursorHitOffset[ EwCheckIndex( aFinger, 10 )], aPos, _this->cursorFirstPos[ 
    EwCheckIndex( aFinger, 10 )])));
  }

  _this->currentEventTimestamp = 0;
  return 1;
}

/* Wrapper function for the non virtual method : 'Core::Root.DriveMultiTouchMovement()' */
__declspec( naked ) XBool CoreRoot__DriveMultiTouchMovement( void* _this, XInt32 
  aFinger, XPoint aPos )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aFinger );
  EW_UNUSED_ARG( aPos );

  __asm jmp CoreRoot_DriveMultiTouchMovement
}

/* The method DriveCursorHitting() exists for the integration purpose with the underlying 
   target system. Usually the method will be invoked in response to to touch events 
   received in the main() message loop from the target specific touch screen driver.
   The parameters passed to the method determine the event. aDown determines whether 
   the user has pressed (== 'true') or released (== 'false') his finger at the position 
   aPos relative to the top-left origin of the GUI application area. The parameter 
   aFinger specifies the finger (or mouse button) the user pressed for this operation. 
   The first finger (mouse button) has the number 0, the second 1, and so far.
   Please note, this method is limited to process a single touch (or mouse) event 
   at the same time. When integrating with a target system supporting multi-touch 
   please use the method @DriveMultiTouchHitting(). */
XBool CoreRoot_DriveCursorHitting( CoreRoot _this, XBool aDown, XInt32 aFinger, 
  XPoint aPos )
{
  return CoreRoot_DriveMultiTouchHitting( _this, aDown, aFinger, aPos );
}

/* Wrapper function for the non virtual method : 'Core::Root.DriveCursorHitting()' */
__declspec( naked ) XBool CoreRoot__DriveCursorHitting( void* _this, XBool aDown, 
  XInt32 aFinger, XPoint aPos )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aDown );
  EW_UNUSED_ARG( aFinger );
  EW_UNUSED_ARG( aPos );

  __asm jmp CoreRoot_DriveCursorHitting
}

/* The method DriveMultiTouchHitting() exists for the integration purpose with the 
   underlying target system. Usually the method will be invoked in response to touch 
   events received in the main() message loop from the target specific touch screen 
   driver.
   The parameters passed to the method determine the event. aDown determines whether 
   the user has pressed (== 'true') or released (== 'false') his finger at the position 
   aPos relative to the top-left origin of the GUI application area. The parameter 
   aFinger identifies the associated finger. The first finger has the number 0, 
   the second 1 and so far till 9. 
   Please note, unlike the method @DriveCursorHitting() this method is able to process 
   and dispatch several multi-touch events simultaneously. */
XBool CoreRoot_DriveMultiTouchHitting( CoreRoot _this, XBool aDown, XInt32 aFinger, 
  XPoint aPos )
{
  XUInt32 ticksCount;
  XUInt32 savedCurrentEventTimestamp;

  if (( aFinger < 0 ) || ( aFinger > 9 ))
  {
    _this->currentEventTimestamp = 0;
    return 0;
  }

  ticksCount = _this->currentEventTimestamp;

  if ( ticksCount == 0 )
    ticksCount = (XUInt32)EwGetTicks();

  savedCurrentEventTimestamp = _this->currentEventTimestamp;
  CoreRoot_DriveMultiTouchMovement( _this, aFinger, aPos );
  aPos = _this->cursorLastPos[ EwCheckIndex( aFinger, 10 )];
  _this->currentEventTimestamp = savedCurrentEventTimestamp;

  if ( aDown )
    _this->cursorFirstPos[ EwCheckIndex( aFinger, 10 )] = aPos;

  if ( aDown && ( _this->cursorTargetView[ EwCheckIndex( aFinger, 10 )] == 0 ))
  {
    CoreCursorHit hit;
    XPoint pos = aPos;
    CoreGroup grp;

    if ( EwIsPointInRect( _this->cursorSequelArea[ EwCheckIndex( aFinger, 10 )], 
        aPos ) && (( ticksCount - _this->cursorHittingTime[ EwCheckIndex( aFinger, 
        10 )]) <= 250 ))
      _this->cursorSequelCounter[ EwCheckIndex( aFinger, 10 )] = _this->cursorSequelCounter[ 
      EwCheckIndex( aFinger, 10 )] + 1;
    else
      _this->cursorSequelCounter[ EwCheckIndex( aFinger, 10 )] = 0;

    _this->cursorSequelArea[ EwCheckIndex( aFinger, 10 )] = EwMoveRectPos( _Const000F, 
    aPos );
    _this->cursorHittingTime[ EwCheckIndex( aFinger, 10 )] = ticksCount;
    hit = CoreView__CursorHitTest( _this, EwMoveRectPos( _Const000F, aPos ), aFinger, 
    _this->cursorSequelCounter[ EwCheckIndex( aFinger, 10 )] + 1, 0, 0 );

    if ( hit != 0 )
    {
      CoreGroup__BroadcastEvent( _this, ((CoreEvent)CoreCursorGrabEvent_InitializeDown( 
      CoreRoot_createCursorGrabEvent( _this ), aFinger, _this->cursorSequelCounter[ 
      EwCheckIndex( aFinger, 10 )] + 1, 0, hit->View, aPos )), CoreViewStateEnabled 
      | CoreViewStateTouchable );
      _this->cursorTargetView[ EwCheckIndex( aFinger, 10 )] = hit->View;
      _this->cursorHitOffset[ EwCheckIndex( aFinger, 10 )] = hit->Offset;
    }
    else
    {
      _this->cursorTargetView[ EwCheckIndex( aFinger, 10 )] = 0;
      _this->cursorHitOffset[ EwCheckIndex( aFinger, 10 )] = _Const0000;
      _this->currentEventTimestamp = 0;
      return 0;
    }

    grp = hit->View->Owner;

    while (( grp != 0 ) && ((CoreRoot)grp != _this ))
    {
      pos = EwMovePointNeg( pos, grp->Super1.Bounds.Point1 );
      grp = grp->Super2.Owner;
    }

    _this->cursorHittingPos[ EwCheckIndex( aFinger, 10 )] = pos;
    _this->cursorCurrentPos[ EwCheckIndex( aFinger, 10 )] = pos;
    _this->cursorHoldPeriod[ EwCheckIndex( aFinger, 10 )] = 0;
    CoreTimer_OnSetEnabled( &_this->cursorHoldTimer, 1 );
    _this->cursorFinger = aFinger;
    CoreView__HandleEvent( _this->cursorTargetView[ EwCheckIndex( aFinger, 10 )], 
    ((CoreEvent)CoreCursorEvent_InitializeDown( CoreRoot_createCursorEvent( _this ), 
    aFinger, pos, _this->cursorSequelCounter[ EwCheckIndex( aFinger, 10 )] + 1, 
    _this->cursorHitOffset[ EwCheckIndex( aFinger, 10 )], 0, aPos )));
    _this->currentEventTimestamp = 0;
    return 1;
  }

  if ( !aDown && ( _this->cursorTargetView[ EwCheckIndex( aFinger, 10 )] != 0 ))
  {
    XPoint pos = aPos;
    CoreGroup grp = _this->cursorTargetView[ EwCheckIndex( aFinger, 10 )]->Owner;
    CoreView tmp;

    while (( grp != 0 ) && ((CoreRoot)grp != _this ))
    {
      pos = EwMovePointNeg( pos, grp->Super1.Bounds.Point1 );
      grp = grp->Super2.Owner;
    }

    if ( grp == 0 )
      pos = _this->cursorCurrentPos[ EwCheckIndex( aFinger, 10 )];

    _this->cursorFinger = aFinger;
    tmp = _this->cursorTargetView[ EwCheckIndex( aFinger, 10 )];
    _this->cursorTargetView[ EwCheckIndex( aFinger, 10 )] = 0;
    CoreView__HandleEvent( tmp, ((CoreEvent)CoreCursorEvent_InitializeUp( CoreRoot_createCursorEvent( 
    _this ), aFinger, pos, _this->cursorHittingPos[ EwCheckIndex( aFinger, 10 )], 
    _this->cursorHoldPeriod[ EwCheckIndex( aFinger, 10 )], _this->cursorSequelCounter[ 
    EwCheckIndex( aFinger, 10 )] + 1, _this->cursorHitOffset[ EwCheckIndex( aFinger, 
    10 )], 0, aPos, _this->cursorFirstPos[ EwCheckIndex( aFinger, 10 )])));
    CoreGroup__BroadcastEvent( _this, ((CoreEvent)CoreCursorGrabEvent_InitializeUp( 
    CoreRoot_createCursorGrabEvent( _this ), aFinger, _this->cursorSequelCounter[ 
    EwCheckIndex( aFinger, 10 )] + 1, 0, tmp, aPos )), CoreViewStateEnabled | CoreViewStateTouchable );
    _this->currentEventTimestamp = 0;
    return 1;
  }

  _this->currentEventTimestamp = 0;
  return 0;
}

/* Wrapper function for the non virtual method : 'Core::Root.DriveMultiTouchHitting()' */
__declspec( naked ) XBool CoreRoot__DriveMultiTouchHitting( void* _this, XBool aDown, 
  XInt32 aFinger, XPoint aPos )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aDown );
  EW_UNUSED_ARG( aFinger );
  EW_UNUSED_ARG( aPos );

  __asm jmp CoreRoot_DriveMultiTouchHitting
}

/* The method RetargetCursorWithReason() changes the currently active cursor event 
   target view. Usually, the target view is determined when the user presses the 
   finger on the touch screen. Once determined, the target view remains active until 
   the user has released the finger. In the meantime the framework will provide 
   this target view with all cursor events. This entire cycle is called 'grab cycle'. 
   The method RetargetCursorWithReason() allows you to select a new target view 
   without the necessity to wait until the user has released the touch screen and 
   thus has finalized the grab cycle.
   Except the additional parameter aRetargetReason, this method works similarly 
   to @RetargetCursor(). At first the method asks the new potential target view 
   aNewTarget whether it or one of its sub-views is willing to continue processing 
   the cursor events for the gesture specified in aRetargetReason. If successful, 
   the method hands over the cursor event flow to this determined view. If there 
   is no view willing to handle these events, the method hands over the event flow 
   directly to the view specified in the parameter aFallbackTarget. If no willing 
   view could be found and no fall-back view was given, the current grab cycle is 
   finalized as if the user had released the touch screen.
   Unlike the method @DeflectCursor() this RetargetCursorWithReason() method performs 
   the cursor hit test for all views of the new potential target. This is as if 
   the user had tapped the screen and the framework tries to determine the view 
   affected by this interaction. This search operation is limited to views at the 
   current cursor position. Unlike @RetargetCursor(), this method limits additionally 
   to candidates willing to handle the gesture specified in the parameter aRetargetReason.
   When switching the target view, the framework provides the old and the new target 
   views with cursor events. The old view will receive a Core::CursorEvent with 
   variables Down == 'false' and AutoDeflected == 'true' - this simulates the release 
   operations. The new target view will receive a Core::CursorEvent with the variable 
   Down == 'true' as if it had been just touched by the user.
   If the application is running within a multi-touch environment, the invocation 
   of the RetargetCursor() method does affect the event flow corresponding only 
   to the finger which has lastly generated touch events. */
void CoreRoot_RetargetCursorWithReason( CoreRoot _this, CoreView aNewTarget, CoreView 
  aFallbackTarget, XSet aRetargetReason )
{
  CoreCursorHit hit;

  if ((CoreRoot)aNewTarget == _this )
    aNewTarget = 0;

  if ( _this->cursorTargetView[ EwCheckIndex( _this->cursorFinger, 10 )] == 0 )
    return;

  hit = CoreView__CursorHitTest( _this, EwMoveRectPos( _Const000F, _this->cursorLastPos[ 
  EwCheckIndex( _this->cursorFinger, 10 )]), _this->cursorFinger, 1, aNewTarget, 
  aRetargetReason );

  if (( hit != 0 ) && ( _this->cursorTargetView[ EwCheckIndex( _this->cursorFinger, 
      10 )] != hit->View ))
    CoreRoot_DeflectCursor( _this, hit->View, hit->Offset );

  if (( hit == 0 ) && ( _this->cursorTargetView[ EwCheckIndex( _this->cursorFinger, 
      10 )] != aFallbackTarget ))
    CoreRoot_DeflectCursor( _this, aFallbackTarget, _Const0000 );
}

/* The method DeflectCursor() changes the currently active cursor event target view. 
   Usually, the target view is determined when the user presses the finger on the 
   touch screen. Once determined, the target view remains active until the user 
   has released the finger. In the meantime the framework will provide this target 
   view with all cursor events. This entire cycle is called 'grab cycle'. The method 
   DeflectCursor() allows you to select a new target view without the necessity 
   to wait until the user has released the touch screen and thus has finalized the 
   grab cycle.
   Unlike the method @RetargetCursor() this @DeflectCursor() method hands over the 
   cursor event flow to the new target regardless its position or state. If no new 
   target view has been specified, the current grab cycle is finalized as if the 
   user had released the touch screen.
   When switching the target view, the framework provides the old and the new target 
   views with cursor events. The old view will receive a Core::CursorEvent with 
   variables Down == 'false' and AutoDeflected == 'true' - this simulates the release 
   operations. The new target view will receive a Core::CursorEvent with the variable 
   Down == 'true' as if it had been just touched by the user.
   If the application is running within a multi-touch environment, the invocation 
   of the DeflectCursor() method does affect the event flow corresponding only to 
   the finger which has lastly generated touch events. */
void CoreRoot_DeflectCursor( CoreRoot _this, CoreView aNewTarget, XPoint aHitOffset )
{
  CoreView tmp;
  XPoint pos;
  CoreGroup grp;
  XUInt32 ticksCount;

  if (( _this->cursorTargetView[ EwCheckIndex( _this->cursorFinger, 10 )] == 0 ) 
      || ( _this->cursorTargetView[ EwCheckIndex( _this->cursorFinger, 10 )] == 
      aNewTarget ))
    return;

  tmp = _this->cursorTargetView[ EwCheckIndex( _this->cursorFinger, 10 )];
  _this->cursorTargetView[ EwCheckIndex( _this->cursorFinger, 10 )] = 0;
  CoreView__HandleEvent( tmp, ((CoreEvent)CoreCursorEvent_InitializeUp( CoreRoot_createCursorEvent( 
  _this ), _this->cursorFinger, _this->cursorCurrentPos[ EwCheckIndex( _this->cursorFinger, 
  10 )], _this->cursorHittingPos[ EwCheckIndex( _this->cursorFinger, 10 )], _this->cursorHoldPeriod[ 
  EwCheckIndex( _this->cursorFinger, 10 )], _this->cursorSequelCounter[ EwCheckIndex( 
  _this->cursorFinger, 10 )] + 1, _this->cursorHitOffset[ EwCheckIndex( _this->cursorFinger, 
  10 )], 1, _this->cursorLastPos[ EwCheckIndex( _this->cursorFinger, 10 )], _this->cursorFirstPos[ 
  EwCheckIndex( _this->cursorFinger, 10 )])));
  CoreGroup__BroadcastEvent( _this, ((CoreEvent)CoreCursorGrabEvent_InitializeUp( 
  CoreRoot_createCursorGrabEvent( _this ), _this->cursorFinger, _this->cursorSequelCounter[ 
  EwCheckIndex( _this->cursorFinger, 10 )] + 1, 1, tmp, _this->cursorLastPos[ EwCheckIndex( 
  _this->cursorFinger, 10 )])), CoreViewStateEnabled | CoreViewStateTouchable );
  pos = _this->cursorLastPos[ EwCheckIndex( _this->cursorFinger, 10 )];
  grp = 0;

  if ( aNewTarget != 0 )
    grp = aNewTarget->Owner;

  while (( grp != 0 ) && ((CoreRoot)grp != _this ))
  {
    pos = EwMovePointNeg( pos, grp->Super1.Bounds.Point1 );
    grp = grp->Super2.Owner;
  }

  if (( grp == 0 ) && ((CoreRoot)aNewTarget != _this ))
  {
    _this->cursorTargetView[ EwCheckIndex( _this->cursorFinger, 10 )] = 0;
    return;
  }

  CoreGroup__BroadcastEvent( _this, ((CoreEvent)CoreCursorGrabEvent_InitializeDown( 
  CoreRoot_createCursorGrabEvent( _this ), _this->cursorFinger, _this->cursorSequelCounter[ 
  EwCheckIndex( _this->cursorFinger, 10 )] + 1, 1, aNewTarget, _this->cursorLastPos[ 
  EwCheckIndex( _this->cursorFinger, 10 )])), CoreViewStateEnabled | CoreViewStateTouchable );
  ticksCount = 0;
  ticksCount = (XUInt32)EwGetTicks();
  _this->cursorTargetView[ EwCheckIndex( _this->cursorFinger, 10 )] = aNewTarget;
  _this->cursorHitOffset[ EwCheckIndex( _this->cursorFinger, 10 )] = aHitOffset;
  _this->cursorHittingPos[ EwCheckIndex( _this->cursorFinger, 10 )] = pos;
  _this->cursorCurrentPos[ EwCheckIndex( _this->cursorFinger, 10 )] = pos;
  _this->cursorSequelCounter[ EwCheckIndex( _this->cursorFinger, 10 )] = 0;
  _this->cursorHoldPeriod[ EwCheckIndex( _this->cursorFinger, 10 )] = 0;
  _this->cursorHittingTime[ EwCheckIndex( _this->cursorFinger, 10 )] = ticksCount;
  _this->cursorFirstPos[ EwCheckIndex( _this->cursorFinger, 10 )] = _this->cursorLastPos[ 
  EwCheckIndex( _this->cursorFinger, 10 )];
  CoreView__HandleEvent( _this->cursorTargetView[ EwCheckIndex( _this->cursorFinger, 
  10 )], ((CoreEvent)CoreCursorEvent_InitializeDown( CoreRoot_createCursorEvent( 
  _this ), _this->cursorFinger, pos, _this->cursorSequelCounter[ EwCheckIndex( _this->cursorFinger, 
  10 )] + 1, _this->cursorHitOffset[ EwCheckIndex( _this->cursorFinger, 10 )], 1, 
  _this->cursorFirstPos[ EwCheckIndex( _this->cursorFinger, 10 )])));
}

/* Variants derived from the class : 'Core::Root' */
EW_DEFINE_CLASS_VARIANTS( CoreRoot )
EW_END_OF_CLASS_VARIANTS( CoreRoot )

/* Virtual Method Table (VMT) for the class : 'Core::Root' */
EW_DEFINE_CLASS( CoreRoot, CoreGroup, keyLastTarget, cursorHoldTimer, cursorHoldTimer, 
                 cursorHoldTimer, updateLock, updateLock, "Core::Root" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetBuffered,
  CoreRoot_OnSetOpacity,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( CoreRoot )

/* Initializer for the class 'Core::Event' */
void CoreEvent__Init( CoreEvent _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreEvent );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreEvent );

  /* Call the user defined constructor */
  CoreEvent_Init( _this, aArg );
}

/* Re-Initializer for the class 'Core::Event' */
void CoreEvent__ReInit( CoreEvent _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::Event' */
void CoreEvent__Done( CoreEvent _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Core::Event.Init()' */
void CoreEvent_Init( CoreEvent _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  _this->Time = CoreEvent_GetCurrentTime( _this );
}

/* The method 'GetCurrentTime()' returns the current time expressed in milliseconds. 
   The value can be used e.g. to calculate the time span elapsed since the event 
   was generated (see @Time). */
XUInt32 CoreEvent_GetCurrentTime( CoreEvent _this )
{
  XUInt32 ticksCount;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  ticksCount = 0;
  ticksCount = (XUInt32)EwGetTicks();
  return ticksCount;
}

/* Variants derived from the class : 'Core::Event' */
EW_DEFINE_CLASS_VARIANTS( CoreEvent )
EW_END_OF_CLASS_VARIANTS( CoreEvent )

/* Virtual Method Table (VMT) for the class : 'Core::Event' */
EW_DEFINE_CLASS( CoreEvent, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, "Core::Event" )
EW_END_OF_CLASS( CoreEvent )

/* Initializer for the class 'Core::KeyEvent' */
void CoreKeyEvent__Init( CoreKeyEvent _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreEvent__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreKeyEvent );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreKeyEvent );
}

/* Re-Initializer for the class 'Core::KeyEvent' */
void CoreKeyEvent__ReInit( CoreKeyEvent _this )
{
  /* At first re-initialize the super class ... */
  CoreEvent__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::KeyEvent' */
void CoreKeyEvent__Done( CoreKeyEvent _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreEvent );

  /* Don't forget to deinitialize the super class ... */
  CoreEvent__Done( &_this->_.Super );
}

/* The method Initialize2() initializes this Core::KeyEvent object with the given 
   parameters. This method stores the UNICODE character code aCode in the variable 
   @CharCode and returns this event object to the caller. The @Code variable will 
   be initialized with the Core::KeyCode.NoKey value unless a '0' .. '9', 'A' .. 
   'Z' character code is passed to this method. In this case the variable @Code 
   is initialized with the corresponding key code Key0 .. Key9 or KeyA .. KeyZ. */
CoreKeyEvent CoreKeyEvent_Initialize2( CoreKeyEvent _this, XChar aCode, XBool aDown )
{
  _this->Code = CoreKeyCodeNoKey;
  _this->CharCode = aCode;
  _this->Down = aDown;

  if (( aCode >= '0' ) && ( aCode <= '9' ))
    _this->Code = (XEnum)(( 10 + aCode ) - 48 );

  if (( aCode >= 'A' ) && ( aCode <= 'Z' ))
    _this->Code = (XEnum)(( 105 + aCode ) - 65 );

  if (( aCode >= 'a' ) && ( aCode <= 'z' ))
    _this->Code = (XEnum)(( 105 + aCode ) - 97 );

  if ( aCode == 0x0020 )
    _this->Code = CoreKeyCodeSpace;

  if ( _this->Code == CoreKeyCodeNoKey )
    switch ( aCode )
    {
      case '+' :
        _this->Code = CoreKeyCodePlus;
      break;

      case '-' :
        _this->Code = CoreKeyCodeMinus;
      break;

      case '*' :
        _this->Code = CoreKeyCodeMultiply;
      break;

      case '/' :
        _this->Code = CoreKeyCodeDivide;
      break;

      case '=' :
        _this->Code = CoreKeyCodeEquals;
      break;

      case '.' :
        _this->Code = CoreKeyCodePeriod;
      break;

      case ',' :
        _this->Code = CoreKeyCodeComma;
      break;

      case ':' :
        _this->Code = CoreKeyCodeColon;
      break;

      case ';' :
        _this->Code = CoreKeyCodeSemicolon;
      break;

      default :; 
    }

  return _this;
}

/* Wrapper function for the non virtual method : 'Core::KeyEvent.Initialize2()' */
__declspec( naked ) CoreKeyEvent CoreKeyEvent__Initialize2( void* _this, XChar aCode, 
  XBool aDown )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aCode );
  EW_UNUSED_ARG( aDown );

  __asm jmp CoreKeyEvent_Initialize2
}

/* The method Initialize() initializes this Core::KeyEvent object with the given 
   parameters. This method stores the key code aCode in the variable @Code and returns 
   this event object to the caller. The @CharCode variable will be initialized with 
   the zero character '\x0000' unless a Key0 .. Key9; KeyA .. KeyZ code is passed 
   to this method. In this case the variable @CharCode is initialized with the corresponding 
   UNICODE character code '0' .. '9' or 'A' .. 'Z'. */
CoreKeyEvent CoreKeyEvent_Initialize( CoreKeyEvent _this, XEnum aCode, XBool aDown )
{
  XInt32 cd;
  XInt32 ca;

  _this->Code = aCode;
  _this->Down = aDown;
  _this->CharCode = 0x0000;
  cd = aCode - 10;
  ca = aCode - 105;

  if (( cd >= 0 ) && ( cd <= 9 ))
    _this->CharCode = (XChar)( 48 + cd );

  if (( ca >= 0 ) && ( ca <= 25 ))
    _this->CharCode = (XChar)( 65 + ca );

  if ( aCode == CoreKeyCodeSpace )
    _this->CharCode = 0x0020;

  if ( _this->CharCode == 0x0000 )
    switch ( aCode )
    {
      case CoreKeyCodePlus :
        _this->CharCode = '+';
      break;

      case CoreKeyCodeMinus :
        _this->CharCode = '-';
      break;

      case CoreKeyCodeMultiply :
        _this->CharCode = '*';
      break;

      case CoreKeyCodeDivide :
        _this->CharCode = '/';
      break;

      case CoreKeyCodeEquals :
        _this->CharCode = '=';
      break;

      case CoreKeyCodePeriod :
        _this->CharCode = '.';
      break;

      case CoreKeyCodeComma :
        _this->CharCode = ',';
      break;

      case CoreKeyCodeColon :
        _this->CharCode = ':';
      break;

      case CoreKeyCodeSemicolon :
        _this->CharCode = ';';
      break;

      default :; 
    }

  return _this;
}

/* Wrapper function for the non virtual method : 'Core::KeyEvent.Initialize()' */
__declspec( naked ) CoreKeyEvent CoreKeyEvent__Initialize( void* _this, XEnum aCode, 
  XBool aDown )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aCode );
  EW_UNUSED_ARG( aDown );

  __asm jmp CoreKeyEvent_Initialize
}

/* The method IsCode() compares the key code stored within the event with the code 
   passed in the parameter aCodeOrCategory and returns 'true' or 'false' depending 
   on the result of this operation.
   The method is able to test whether a code does belong to a code category. Categories 
   are special codes defined in the Core::KeyCode enumeration, like AlphaKeys, DigitKeys 
   or CursorKeys. They stand for an entire range of key codes. */
XBool CoreKeyEvent_IsCode( CoreKeyEvent _this, XEnum aCodeOrCategory )
{
  switch ( aCodeOrCategory )
  {
    case CoreKeyCodeAlphaKeys :
      return (XBool)((( _this->CharCode >= 'A' ) && ( _this->CharCode <= 'Z' )) 
        || (( _this->CharCode >= 'a' ) && ( _this->CharCode <= 'z' )));

    case CoreKeyCodeAlphaOrDigitKeys :
      return (XBool)(((( _this->CharCode >= 'A' ) && ( _this->CharCode <= 'Z' )) 
        || (( _this->CharCode >= 'a' ) && ( _this->CharCode <= 'z' ))) || (( _this->CharCode 
        >= '0' ) && ( _this->CharCode <= '9' )));

    case CoreKeyCodeDigitKeys :
      return (XBool)(( _this->CharCode >= '0' ) && ( _this->CharCode <= '9' ));

    case CoreKeyCodeHexDigitKeys :
      return (XBool)(((( _this->CharCode >= 'A' ) && ( _this->CharCode <= 'F' )) 
        || (( _this->CharCode >= 'a' ) && ( _this->CharCode <= 'f' ))) || (( _this->CharCode 
        >= '0' ) && ( _this->CharCode <= '9' )));

    case CoreKeyCodeCharacterKeys :
      return (XBool)( _this->CharCode != 0x0000 );

    case CoreKeyCodeControlKeys :
      return (XBool)(( _this->CharCode == 0x0000 ) && ( _this->Code != CoreKeyCodeNoKey ));

    case CoreKeyCodeCursorKeys :
      return (XBool)(((( _this->Code == CoreKeyCodeLeft ) || ( _this->Code == CoreKeyCodeRight )) 
        || ( _this->Code == CoreKeyCodeUp )) || ( _this->Code == CoreKeyCodeDown ));

    case CoreKeyCodeAnyKey :
      return (XBool)(( _this->CharCode != 0x0000 ) || ( _this->Code != CoreKeyCodeNoKey ));

    default :; 
  }

  return (XBool)( aCodeOrCategory == _this->Code );
}

/* Variants derived from the class : 'Core::KeyEvent' */
EW_DEFINE_CLASS_VARIANTS( CoreKeyEvent )
EW_END_OF_CLASS_VARIANTS( CoreKeyEvent )

/* Virtual Method Table (VMT) for the class : 'Core::KeyEvent' */
EW_DEFINE_CLASS( CoreKeyEvent, CoreEvent, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 "Core::KeyEvent" )
EW_END_OF_CLASS( CoreKeyEvent )

/* Initializer for the class 'Core::CursorGrabEvent' */
void CoreCursorGrabEvent__Init( CoreCursorGrabEvent _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreEvent__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreCursorGrabEvent );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreCursorGrabEvent );
}

/* Re-Initializer for the class 'Core::CursorGrabEvent' */
void CoreCursorGrabEvent__ReInit( CoreCursorGrabEvent _this )
{
  /* At first re-initialize the super class ... */
  CoreEvent__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::CursorGrabEvent' */
void CoreCursorGrabEvent__Done( CoreCursorGrabEvent _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreEvent );

  /* Don't forget to deinitialize the super class ... */
  CoreEvent__Done( &_this->_.Super );
}

/* The method InitializeUp() simplifies the initialization of this Core::CursorGrabEvent 
   object. This method stores the given parameters in the variables of this event 
   object, sets its variable @Down 'false' and returns this event object to the 
   caller. */
CoreCursorGrabEvent CoreCursorGrabEvent_InitializeUp( CoreCursorGrabEvent _this, 
  XInt32 aFinger, XInt32 aStrikeCount, XBool aAutoDeflected, CoreView aTarget, XPoint 
  aGlobalCurrentPos )
{
  _this->Down = 0;
  _this->Finger = aFinger;
  _this->StrikeCount = aStrikeCount;
  _this->GlobalCurrentPos = aGlobalCurrentPos;
  _this->Target = aTarget;
  _this->AutoDeflected = aAutoDeflected;
  return _this;
}

/* Wrapper function for the non virtual method : 'Core::CursorGrabEvent.InitializeUp()' */
__declspec( naked ) CoreCursorGrabEvent CoreCursorGrabEvent__InitializeUp( void* _this, 
  XInt32 aFinger, XInt32 aStrikeCount, XBool aAutoDeflected, CoreView aTarget, XPoint 
  aGlobalCurrentPos )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aFinger );
  EW_UNUSED_ARG( aStrikeCount );
  EW_UNUSED_ARG( aAutoDeflected );
  EW_UNUSED_ARG( aTarget );
  EW_UNUSED_ARG( aGlobalCurrentPos );

  __asm jmp CoreCursorGrabEvent_InitializeUp
}

/* The method InitializeDown() simplifies the initialization of this Core::CursorGrabEvent 
   object. This method stores the given parameters in the variables of this event 
   object, sets its variable @Down 'true' and returns this event object to the caller. */
CoreCursorGrabEvent CoreCursorGrabEvent_InitializeDown( CoreCursorGrabEvent _this, 
  XInt32 aFinger, XInt32 aStrikeCount, XBool aAutoDeflected, CoreView aTarget, XPoint 
  aGlobalCurrentPos )
{
  _this->Down = 1;
  _this->Finger = aFinger;
  _this->StrikeCount = aStrikeCount;
  _this->GlobalCurrentPos = aGlobalCurrentPos;
  _this->Target = aTarget;
  _this->AutoDeflected = aAutoDeflected;
  return _this;
}

/* Wrapper function for the non virtual method : 'Core::CursorGrabEvent.InitializeDown()' */
__declspec( naked ) CoreCursorGrabEvent CoreCursorGrabEvent__InitializeDown( void* _this, 
  XInt32 aFinger, XInt32 aStrikeCount, XBool aAutoDeflected, CoreView aTarget, XPoint 
  aGlobalCurrentPos )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aFinger );
  EW_UNUSED_ARG( aStrikeCount );
  EW_UNUSED_ARG( aAutoDeflected );
  EW_UNUSED_ARG( aTarget );
  EW_UNUSED_ARG( aGlobalCurrentPos );

  __asm jmp CoreCursorGrabEvent_InitializeDown
}

/* Variants derived from the class : 'Core::CursorGrabEvent' */
EW_DEFINE_CLASS_VARIANTS( CoreCursorGrabEvent )
EW_END_OF_CLASS_VARIANTS( CoreCursorGrabEvent )

/* Virtual Method Table (VMT) for the class : 'Core::CursorGrabEvent' */
EW_DEFINE_CLASS( CoreCursorGrabEvent, CoreEvent, Target, GlobalCurrentPos, GlobalCurrentPos, 
                 GlobalCurrentPos, GlobalCurrentPos, GlobalCurrentPos, "Core::CursorGrabEvent" )
EW_END_OF_CLASS( CoreCursorGrabEvent )

/* Initializer for the class 'Core::CursorEvent' */
void CoreCursorEvent__Init( CoreCursorEvent _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreEvent__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreCursorEvent );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreCursorEvent );
}

/* Re-Initializer for the class 'Core::CursorEvent' */
void CoreCursorEvent__ReInit( CoreCursorEvent _this )
{
  /* At first re-initialize the super class ... */
  CoreEvent__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::CursorEvent' */
void CoreCursorEvent__Done( CoreCursorEvent _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreEvent );

  /* Don't forget to deinitialize the super class ... */
  CoreEvent__Done( &_this->_.Super );
}

/* The method InitializeHold() simplifies the initialization of this Core::CursorEvent 
   object. This method stores the given parameters in the variables of this event 
   object, sets its variable @Down 'true' and returns this event object to the caller. */
CoreCursorEvent CoreCursorEvent_InitializeHold( CoreCursorEvent _this, XInt32 aFinger, 
  XPoint aCurrentPos, XPoint aHittingPos, XInt32 aHoldPeriod, XInt32 aStrikeCount, 
  XPoint aHitOffset, XPoint aGlobalCurrentPos, XPoint aGlobalHittingPos )
{
  _this->Down = 1;
  _this->Finger = aFinger;
  _this->CurrentPos = EwMovePointPos( aCurrentPos, aHitOffset );
  _this->HittingPos = EwMovePointPos( aHittingPos, aHitOffset );
  _this->HoldPeriod = aHoldPeriod;
  _this->StrikeCount = aStrikeCount;
  _this->GlobalCurrentPos = aGlobalCurrentPos;
  _this->GlobalHittingPos = aGlobalHittingPos;
  return _this;
}

/* Wrapper function for the non virtual method : 'Core::CursorEvent.InitializeHold()' */
__declspec( naked ) CoreCursorEvent CoreCursorEvent__InitializeHold( void* _this, 
  XInt32 aFinger, XPoint aCurrentPos, XPoint aHittingPos, XInt32 aHoldPeriod, XInt32 
  aStrikeCount, XPoint aHitOffset, XPoint aGlobalCurrentPos, XPoint aGlobalHittingPos )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aFinger );
  EW_UNUSED_ARG( aCurrentPos );
  EW_UNUSED_ARG( aHittingPos );
  EW_UNUSED_ARG( aHoldPeriod );
  EW_UNUSED_ARG( aStrikeCount );
  EW_UNUSED_ARG( aHitOffset );
  EW_UNUSED_ARG( aGlobalCurrentPos );
  EW_UNUSED_ARG( aGlobalHittingPos );

  __asm jmp CoreCursorEvent_InitializeHold
}

/* The method InitializeUp() simplifies the initialization of this Core::CursorEvent 
   object. This method stores the given parameters in the variables of this event 
   object, sets its variable @Down 'false' and returns this event object to the 
   caller. */
CoreCursorEvent CoreCursorEvent_InitializeUp( CoreCursorEvent _this, XInt32 aFinger, 
  XPoint aCurrentPos, XPoint aHittingPos, XInt32 aHoldPeriod, XInt32 aStrikeCount, 
  XPoint aHitOffset, XBool aAutoDeflected, XPoint aGlobalCurrentPos, XPoint aGlobalHittingPos )
{
  _this->Down = 0;
  _this->Finger = aFinger;
  _this->CurrentPos = EwMovePointPos( aCurrentPos, aHitOffset );
  _this->HittingPos = EwMovePointPos( aHittingPos, aHitOffset );
  _this->HoldPeriod = aHoldPeriod;
  _this->StrikeCount = aStrikeCount;
  _this->AutoDeflected = aAutoDeflected;
  _this->GlobalCurrentPos = aGlobalCurrentPos;
  _this->GlobalHittingPos = aGlobalHittingPos;
  return _this;
}

/* Wrapper function for the non virtual method : 'Core::CursorEvent.InitializeUp()' */
__declspec( naked ) CoreCursorEvent CoreCursorEvent__InitializeUp( void* _this, 
  XInt32 aFinger, XPoint aCurrentPos, XPoint aHittingPos, XInt32 aHoldPeriod, XInt32 
  aStrikeCount, XPoint aHitOffset, XBool aAutoDeflected, XPoint aGlobalCurrentPos, 
  XPoint aGlobalHittingPos )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aFinger );
  EW_UNUSED_ARG( aCurrentPos );
  EW_UNUSED_ARG( aHittingPos );
  EW_UNUSED_ARG( aHoldPeriod );
  EW_UNUSED_ARG( aStrikeCount );
  EW_UNUSED_ARG( aHitOffset );
  EW_UNUSED_ARG( aAutoDeflected );
  EW_UNUSED_ARG( aGlobalCurrentPos );
  EW_UNUSED_ARG( aGlobalHittingPos );

  __asm jmp CoreCursorEvent_InitializeUp
}

/* The method InitializeDown() simplifies the initialization of this Core::CursorEvent 
   object. This method stores the given parameters in the variables of this event 
   object, sets its variable @Down 'true' and returns this event object to the caller. */
CoreCursorEvent CoreCursorEvent_InitializeDown( CoreCursorEvent _this, XInt32 aFinger, 
  XPoint aCurrentPos, XInt32 aStrikeCount, XPoint aHitOffset, XBool aAutoDeflected, 
  XPoint aGlobalCurrentPos )
{
  _this->Down = 1;
  _this->Finger = aFinger;
  _this->CurrentPos = EwMovePointPos( aCurrentPos, aHitOffset );
  _this->HittingPos = EwMovePointPos( aCurrentPos, aHitOffset );
  _this->HoldPeriod = 0;
  _this->StrikeCount = aStrikeCount;
  _this->AutoDeflected = aAutoDeflected;
  _this->GlobalCurrentPos = aGlobalCurrentPos;
  _this->GlobalHittingPos = aGlobalCurrentPos;
  return _this;
}

/* Wrapper function for the non virtual method : 'Core::CursorEvent.InitializeDown()' */
__declspec( naked ) CoreCursorEvent CoreCursorEvent__InitializeDown( void* _this, 
  XInt32 aFinger, XPoint aCurrentPos, XInt32 aStrikeCount, XPoint aHitOffset, XBool 
  aAutoDeflected, XPoint aGlobalCurrentPos )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aFinger );
  EW_UNUSED_ARG( aCurrentPos );
  EW_UNUSED_ARG( aStrikeCount );
  EW_UNUSED_ARG( aHitOffset );
  EW_UNUSED_ARG( aAutoDeflected );
  EW_UNUSED_ARG( aGlobalCurrentPos );

  __asm jmp CoreCursorEvent_InitializeDown
}

/* Variants derived from the class : 'Core::CursorEvent' */
EW_DEFINE_CLASS_VARIANTS( CoreCursorEvent )
EW_END_OF_CLASS_VARIANTS( CoreCursorEvent )

/* Virtual Method Table (VMT) for the class : 'Core::CursorEvent' */
EW_DEFINE_CLASS( CoreCursorEvent, CoreEvent, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Core::CursorEvent" )
EW_END_OF_CLASS( CoreCursorEvent )

/* Initializer for the class 'Core::DragEvent' */
void CoreDragEvent__Init( CoreDragEvent _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreEvent__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreDragEvent );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreDragEvent );
}

/* Re-Initializer for the class 'Core::DragEvent' */
void CoreDragEvent__ReInit( CoreDragEvent _this )
{
  /* At first re-initialize the super class ... */
  CoreEvent__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::DragEvent' */
void CoreDragEvent__Done( CoreDragEvent _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreEvent );

  /* Don't forget to deinitialize the super class ... */
  CoreEvent__Done( &_this->_.Super );
}

/* The method Initialize() simplifies the initialization of this Core::DragEvent 
   object. This method stores the given parameters in the variables of this event 
   object and returns this event object to the caller. */
CoreDragEvent CoreDragEvent_Initialize( CoreDragEvent _this, XInt32 aFinger, XPoint 
  aCurrentPos, XPoint aHittingPos, XPoint aOffset, XInt32 aHoldPeriod, XInt32 aSequelCount, 
  XPoint aHitOffset, XPoint aGlobalCurrentPos, XPoint aGlobalHittingPos )
{
  _this->Finger = aFinger;
  _this->CurrentPos = EwMovePointPos( aCurrentPos, aHitOffset );
  _this->HittingPos = EwMovePointPos( aHittingPos, aHitOffset );
  _this->Offset = aOffset;
  _this->HoldPeriod = aHoldPeriod;
  _this->StrikeCount = aSequelCount;
  _this->GlobalCurrentPos = aGlobalCurrentPos;
  _this->GlobalHittingPos = aGlobalHittingPos;
  return _this;
}

/* Wrapper function for the non virtual method : 'Core::DragEvent.Initialize()' */
__declspec( naked ) CoreDragEvent CoreDragEvent__Initialize( void* _this, XInt32 
  aFinger, XPoint aCurrentPos, XPoint aHittingPos, XPoint aOffset, XInt32 aHoldPeriod, 
  XInt32 aSequelCount, XPoint aHitOffset, XPoint aGlobalCurrentPos, XPoint aGlobalHittingPos )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aFinger );
  EW_UNUSED_ARG( aCurrentPos );
  EW_UNUSED_ARG( aHittingPos );
  EW_UNUSED_ARG( aOffset );
  EW_UNUSED_ARG( aHoldPeriod );
  EW_UNUSED_ARG( aSequelCount );
  EW_UNUSED_ARG( aHitOffset );
  EW_UNUSED_ARG( aGlobalCurrentPos );
  EW_UNUSED_ARG( aGlobalHittingPos );

  __asm jmp CoreDragEvent_Initialize
}

/* Variants derived from the class : 'Core::DragEvent' */
EW_DEFINE_CLASS_VARIANTS( CoreDragEvent )
EW_END_OF_CLASS_VARIANTS( CoreDragEvent )

/* Virtual Method Table (VMT) for the class : 'Core::DragEvent' */
EW_DEFINE_CLASS( CoreDragEvent, CoreEvent, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 "Core::DragEvent" )
EW_END_OF_CLASS( CoreDragEvent )

/* Initializer for the class 'Core::Outline' */
void CoreOutline__Init( CoreOutline _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreOutline );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreOutline );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Super2.viewState = CoreViewStateAlphaBlended | CoreViewStateIsOutline | 
  CoreViewStateVisible;
  _this->Formation = CoreFormationNone;
}

/* Re-Initializer for the class 'Core::Outline' */
void CoreOutline__ReInit( CoreOutline _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::Outline' */
void CoreOutline__Done( CoreOutline _this )
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
void CoreOutline_Draw( CoreOutline _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aBlend );
  EW_UNUSED_ARG( aOpacity );
  EW_UNUSED_ARG( aOffset );
  EW_UNUSED_ARG( aClip );
  EW_UNUSED_ARG( aCanvas );
}

/* 'C' function for method : 'Core::Outline.OnSetBounds()' */
void CoreOutline_OnSetBounds( CoreOutline _this, XRect value )
{
  XPoint oldSize;
  XPoint newSize;
  XBool resize;
  XPoint offset;

  if ( !EwCompRect( value, _this->Super1.Bounds ))
    return;

  oldSize = EwGetRectSize( _this->Super1.Bounds );
  newSize = EwGetRectSize( value );
  resize = (XBool)EwCompPoint( oldSize, newSize );
  offset = EwMovePointNeg( value.Point1, _this->Super1.Bounds.Point1 );

  if ( EwCompPoint( offset, _Const0000 ) && !resize )
  {
    CoreView view = _this->Super2.next;

    while (( view != 0 ) && !(( view->viewState & CoreViewStateIsOutline ) == CoreViewStateIsOutline ))
    {
      if ((( view->viewState & CoreViewStateEmbedded ) == CoreViewStateEmbedded ))
      {
        XBool tmp = (( view->viewState & CoreViewStateFastReshape ) == CoreViewStateFastReshape );
        CoreView__MoveView( view, offset, tmp );
      }

      view = view->next;
    }
  }

  if (( resize && ( oldSize.X > 0 )) && ( oldSize.Y > 0 ))
  {
    XRect bounds = EwMoveRectPos( _this->Super1.Bounds, _this->ScrollOffset );
    CoreView view = _this->Super2.next;

    while (( view != 0 ) && !(( view->viewState & CoreViewStateIsOutline ) == CoreViewStateIsOutline ))
    {
      if ((( view->viewState & CoreViewStateEmbedded ) == CoreViewStateEmbedded ))
      {
        if (( view->layoutContext != 0 ) && ( view->layoutContext->outline != _this ))
          view->layoutContext = 0;

        if (( view->layoutContext == 0 ) && (( view->Layout != ( CoreLayoutAlignToLeft 
            | CoreLayoutAlignToTop )) || ( _this->Formation != CoreFormationNone )))
          CoreView__initLayoutContext( view, bounds, _this );
      }

      view = view->next;
    }
  }

  CoreRectView_OnSetBounds((CoreRectView)_this, value );

  if (( _this->Super2.Owner != 0 ) && resize )
  {
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStateUpdateLayout;

    if ( !(( _this->Super2.Owner->Super2.viewState & CoreViewStateUpdatingLayout ) 
        == CoreViewStateUpdatingLayout ))
    {
      _this->Super2.Owner->Super2.viewState = _this->Super2.Owner->Super2.viewState 
      | CoreViewStatePendingLayout;
      EwPostSignal( EwNewSlot( _this->Super2.Owner, CoreGroup_updateComponent ), 
        ((XObject)_this ));
    }
  }
}

/* 'C' function for method : 'Core::Outline.onSlideSlot()' */
void CoreOutline_onSlideSlot( CoreOutline _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreOutline_OnSetScrollOffset( _this, _this->SlideHandler->Offset );
}

/* 'C' function for method : 'Core::Outline.onStartSlideSlot()' */
void CoreOutline_onStartSlideSlot( CoreOutline _this, XObject sender )
{
  XRect area;
  XPoint origin;
  XPoint offset;
  XPoint minOffset;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  area = CoreOutline_GetContentArea( _this, CoreViewStateVisible );
  origin = _this->Super1.Bounds.Point1;

  if ( EwGetRectW( area ) <= 0 )
  {
    area.Point1.X = origin.X;
    area.Point2.X = origin.X;
  }

  if ( EwGetRectH( area ) <= 0 )
  {
    area.Point1.Y = origin.Y;
    area.Point2.Y = origin.Y;
  }

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

/* 'C' function for method : 'Core::Outline.OnSetSlideHandler()' */
void CoreOutline_OnSetSlideHandler( CoreOutline _this, CoreSlideTouchHandler value )
{
  if ( value == _this->SlideHandler )
    return;

  if (( value != 0 ) && ( value->privateOnSlide.Object != 0 ))
  {
    EwTrace( "%s%*%s", EwLoadString( &_Const0010 ), value, EwLoadString( &_Const0011 ));

    {
      EwThrow( EwLoadString( &_Const0012 ));
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
    value->privateOnStart = EwNewSlot( _this, CoreOutline_onStartSlideSlot );
    value->privateOnSlide = EwNewSlot( _this, CoreOutline_onSlideSlot );
  }
}

/* 'C' function for method : 'Core::Outline.OnSetScrollOffset()' */
void CoreOutline_OnSetScrollOffset( CoreOutline _this, XPoint value )
{
  XPoint offset = EwMovePointNeg( value, _this->ScrollOffset );
  CoreView view;

  if ( !EwCompPoint( offset, _Const0000 ))
    return;

  _this->ScrollOffset = value;
  view = _this->Super2.next;

  while (( view != 0 ) && !(( view->viewState & CoreViewStateIsOutline ) == CoreViewStateIsOutline ))
  {
    if ((( view->viewState & CoreViewStateEmbedded ) == CoreViewStateEmbedded ))
    {
      XBool tmp = (( view->viewState & CoreViewStateFastReshape ) == CoreViewStateFastReshape );
      CoreView__MoveView( view, offset, tmp );
    }

    view = view->next;
  }

  if ( _this->Super2.Owner != 0 )
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Core::Outline.OnSetSpace()' */
void CoreOutline_OnSetSpace( CoreOutline _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value == _this->Space )
    return;

  _this->Space = value;

  if (( _this->Super2.Owner != 0 ) && ( _this->Formation != CoreFormationNone ))
  {
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStateUpdateLayout;
    _this->Super2.Owner->Super2.viewState = _this->Super2.Owner->Super2.viewState 
    | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this->Super2.Owner, CoreGroup_updateComponent ), ((XObject)_this ));
  }
}

/* 'C' function for method : 'Core::Outline.OnSetFormation()' */
void CoreOutline_OnSetFormation( CoreOutline _this, XEnum value )
{
  if ( value == _this->Formation )
    return;

  _this->Formation = value;

  if ( _this->Super2.Owner != 0 )
  {
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStateUpdateLayout;
    _this->Super2.Owner->Super2.viewState = _this->Super2.Owner->Super2.viewState 
    | CoreViewStatePendingLayout;
    EwPostSignal( EwNewSlot( _this->Super2.Owner, CoreGroup_updateComponent ), ((XObject)_this ));
  }
}

/* The method FindNextView() searches for the view lying in front of the view specified 
   in the parameter aView - aView itself will be excluded from the search operation. 
   This allows you to enumerate all affected views, view by view from the background 
   to the front. If the parameter aView == null, the search operations will start 
   with the first view of the outline.
   The additional parameter aFilter can be used to limit the search operation to 
   special views only, e.g. to visible and touchable views.
   If there is no other view lying above the start view aView, the method returns 
   'null'.
   Please note, this method is limited to the views embedded within the outline. 
   Other sibling views not belonging to the outline are simply ignored. */
CoreView CoreOutline_FindNextView( CoreOutline _this, CoreView aView, XSet aFilter )
{
  CoreView view;
  XSet notFilter;

  if (( aView != 0 ) && (( aView->Owner != _this->Super2.Owner ) || !(( aView->viewState 
      & CoreViewStateEmbedded ) == CoreViewStateEmbedded )))
    return 0;

  view = _this->Super2.next;
  notFilter = CoreViewStateDialog;

  if ((( aFilter & CoreViewStateDialog ) == CoreViewStateDialog ))
    notFilter = 0;

  if ( aView != 0 )
    view = aView->next;

  aFilter = aFilter | CoreViewStateEmbedded;

  while (( view != 0 ) && !(( view->viewState & CoreViewStateIsOutline ) == CoreViewStateIsOutline ))
  {
    if ( EwSetContains( view->viewState, aFilter ) && ( !notFilter || !EwSetContains( 
        view->viewState, notFilter )))
      return view;

    view = view->next;
  }

  return 0;
}

/* The method GetContentArea() determines a rectangular area occupied by the views 
   embedded within the outline. The additional parameter aFilter can be used to 
   limit the operation to special views only, e.g. to visible and touchable views.
   If there are no views complying the filter condition, the method returns an empty 
   area.
   Please note, this method is limited to the views embedded within the outline. 
   Other sibling views not belonging to the outline are simply ignored. */
XRect CoreOutline_GetContentArea( CoreOutline _this, XSet aFilter )
{
  CoreView view = _this->Super2.next;
  XRect area = _Const0001;
  XSet notFilter = CoreViewStateDialog;

  if ((( aFilter & CoreViewStateDialog ) == CoreViewStateDialog ))
    notFilter = 0;

  aFilter = aFilter | CoreViewStateEmbedded;

  while (( view != 0 ) && !(( view->viewState & CoreViewStateIsOutline ) == CoreViewStateIsOutline ))
  {
    if ( EwSetContains( view->viewState, aFilter ) && ( !notFilter || !EwSetContains( 
        view->viewState, notFilter )))
      area = EwUnionRect( area, CoreView__GetExtent( view ));

    view = view->next;
  }

  return area;
}

/* Variants derived from the class : 'Core::Outline' */
EW_DEFINE_CLASS_VARIANTS( CoreOutline )
EW_END_OF_CLASS_VARIANTS( CoreOutline )

/* Virtual Method Table (VMT) for the class : 'Core::Outline' */
EW_DEFINE_CLASS( CoreOutline, CoreRectView, SlideHandler, ScrollOffset, ScrollOffset, 
                 ScrollOffset, ScrollOffset, ScrollOffset, "Core::Outline" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreOutline_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreOutline_OnSetBounds,
EW_END_OF_CLASS( CoreOutline )

/* Initializer for the class 'Core::VerticalList' */
void CoreVerticalList__Init( CoreVerticalList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreVerticalList );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreVerticalList );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0013 );
  _this->invalidTail = -1;
  _this->validTail = -1;
  _this->Item = -1;
  _this->ItemHeight = 24;
  _this->ItemClass = EW_CLASS( ViewsText );
}

/* Re-Initializer for the class 'Core::VerticalList' */
void CoreVerticalList__ReInit( CoreVerticalList _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::VerticalList' */
void CoreVerticalList__Done( CoreVerticalList _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method DispatchEvent() feeds the component with the event passed in the parameter 
   aEvent and propagates it along the so-called focus path. This focus path leads 
   to the currently selected keyboard event receiver view. If the event is rejected 
   by the view, the same operation is repeated for the next superior view. This 
   permits the hierarchical event dispatching until a willing view has handled the 
   event or all views in the focus path have been evaluated. If the event remains 
   still unhandled, it will be passed to the component itself.
   The focus path is established by the property @Focus. 
   DispatchEvent() returns the value returned by the @HandleEvent() method of the 
   view which has handled the event. In the case, the event was not handled, the 
   method returns 'null'. */
XObject CoreVerticalList_DispatchEvent( CoreVerticalList _this, CoreEvent aEvent )
{
  XObject result;

  result = CoreGroup_DispatchEvent((CoreGroup)_this, aEvent );
  return result;
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
void CoreVerticalList_UpdateViewState( CoreVerticalList _this, XSet aState )
{
  XInt32 head;
  XInt32 tail;
  XInt32 count;
  XInt32 cache2;
  XInt32 cache3;
  XInt32 reuseHead;
  XInt32 reuseTail;
  XInt32 loadHead;
  XInt32 loadTail;
  CoreView item;
  XInt32 inx;
  XPoint pos;
  XInt32 h;
  XInt32 ih;
  CoreView fi;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aState );

  if ( _this->ItemClass == 0 )
    return;

  _this->loading = 1;
  head = ( 0 - _this->ScrollOffset ) / _this->ItemHeight;
  tail = (( EwGetRectH( _this->Super2.Bounds ) - _this->ScrollOffset ) - 1 ) / _this->ItemHeight;
  count = (( EwGetRectH( _this->Super2.Bounds ) + _this->ItemHeight ) - 1 ) / _this->ItemHeight;

  if ( count < 1 )
    count = 1;

  cache2 = count / 2;
  cache3 = count / 3;

  if ( cache2 == 0 )
    cache2 = 1;

  if ( cache3 == 0 )
    cache3 = 1;

  if ( head < _this->validHead )
  {
    head = head - cache2;
    tail = tail + cache3;
  }
  else
    if ( tail > _this->validTail )
    {
      head = head - cache3;
      tail = tail + cache2;
    }
    else
    {
      head = _this->validHead;
      tail = _this->validTail;
    }

  if ( head >= _this->NoOfItems )
  {
    head = 0;
    tail = -1;
  }
  else
    if ( tail < 0 )
    {
      head = 0;
      tail = -1;
    }

  if ( tail >= _this->NoOfItems )
    tail = _this->NoOfItems - 1;

  if ( head < 0 )
    head = 0;

  reuseHead = _this->validHead;
  reuseTail = _this->validTail;
  loadHead = 0;
  loadTail = -1;

  if ( head > reuseHead )
    reuseHead = head;

  if ( tail < reuseTail )
    reuseTail = tail;

  if ( reuseHead <= reuseTail )
  {
    while (( _this->validTail < tail ) && ( _this->validHead < reuseHead ))
    {
      CoreVerticalList_releaseHeadItem( _this );
      CoreVerticalList_confirmTailItem( _this );
    }

    while (( _this->validHead > head ) && ( _this->validTail > reuseTail ))
    {
      CoreVerticalList_releaseTailItem( _this );
      CoreVerticalList_confirmHeadItem( _this );
    }
  }
  else
  {
    _this->validTail = ( _this->validTail - _this->validHead ) + head;
    _this->validHead = head;
    loadHead = _this->validHead;
    loadTail = _this->validTail;
  }

  while ( _this->validHead < head )
    CoreVerticalList_releaseHeadItem( _this );

  while ( _this->validTail > tail )
    CoreVerticalList_releaseTailItem( _this );

  while ( _this->validHead > head )
    CoreVerticalList_confirmHeadItem( _this );

  while ( _this->validTail < tail )
    CoreVerticalList_confirmTailItem( _this );

  item = _this->Super1.first;
  inx = _this->validHead;
  pos = EwNewPoint( 0, _this->ScrollOffset + ( inx * _this->ItemHeight ));
  h = EwGetRectH( _this->Super2.Bounds );
  ih = _this->ItemHeight;
  fi = 0;

  while ( item != 0 )
  {
    XPoint ofs = EwMovePointNeg( pos, CoreView__GetExtent( item ).Point1 );
    XInt32 iy1 = pos.Y;
    XInt32 iy2 = pos.Y + ih;
    XInt32 inxN = inx;

    if ( EwCompPoint( ofs, _Const0000 ))
      CoreView__MoveView( item, ofs, 1 );

    if ((((( inxN >= _this->invalidHead ) && ( inxN <= _this->invalidTail )) || 
        (( inx >= loadHead ) && ( inx <= loadTail ))) && ( iy1 < h )) && ( iy2 > 
        0 ))
    {
      _this->View = item;
      _this->Item = inxN;
      EwSignal( _this->OnLoadItem, ((XObject)_this ));
    }

    item = item->next;
    inx = inx + 1;
    pos.Y = ( pos.Y + _this->ItemHeight );
  }

  inx = _this->validHead;
  item = _this->Super1.first;
  pos = EwNewPoint( 0, _this->ScrollOffset + ( inx * _this->ItemHeight ));

  while ( item != 0 )
  {
    XInt32 iy1 = pos.Y;
    XInt32 iy2 = pos.Y + ih;
    XInt32 inxN = inx;

    if (((( inxN >= _this->invalidHead ) && ( inxN <= _this->invalidTail )) || (( 
        inx >= loadHead ) && ( inx <= loadTail ))) && !(( iy1 < h ) && ( iy2 > 0 )))
    {
      _this->View = item;
      _this->Item = inxN;
      EwSignal( _this->OnLoadItem, ((XObject)_this ));
    }

    if ( inxN == -1 )
      fi = item;

    item = item->next;
    inx = inx + 1;
    pos.Y = ( pos.Y + _this->ItemHeight );
  }

  _this->invalidHead = 0;
  _this->invalidTail = -1;
  _this->View = 0;
  _this->Item = -1;
  CoreGroup__OnSetFocus( _this, fi );
  _this->loading = 0;
}

/* The method FindSiblingView() searches for a sibling view of the view specified 
   in the parameter aView - aView itself will be excluded from the search operation.
   The method combines the functionality of @FindNextView() and @FindPrevView() 
   and tries to find any neighbor view (regarding the Z-order not the position).
   The additional parameter aFilter can be used to limit the search operation to 
   special views only, e.g. to visible and touchable views.
   If there are no other views complying the filter condition, the method returns 
   'null'. In contrast to other find methods, FindSiblingView() will fail, if it 
   has been invoked with aView == 'null'. */
CoreView CoreVerticalList_FindSiblingView( CoreVerticalList _this, CoreView aView, 
  XSet aFilter )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aFilter );
  EW_UNUSED_ARG( aView );

  return 0;
}

/* The method RestackTop() elevates the view aView to the top of its component. 
   After this operation the view is usually not covered by any sibling views. This 
   method modifies the Z-order of the view. The effective stacking position of the 
   view can additionally be affected by the value of the view's property @StackingPriority. 
   Concrete, the view can't be be arranged in front of any sibling view configured 
   with higher @StackingPriority value. In such case calling the method RestackTop() 
   will arrange the view just behind the sibling view with next higher @StackingPriority 
   value.
   Please note, changing the Z-order of views within a component containing a Core::Outline 
   view can cause this outline to update its automatic row or column formation. */
void CoreVerticalList_RestackTop( CoreVerticalList _this, CoreView aView )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aView );

  {
    EwThrow( EwLoadString( &_Const0014 ));
    return;
  }
}

/* The method Restack() changes the Z-order of views in the component. Depending 
   on the parameter aOrder the method will elevate or lower the given view aView. 
   If aOrder is negative, the view will be lowered to the background. If aOrder 
   is positive, the view will be elevated to the foreground. If aOrder == 0, no 
   modification will take place.
   The absolute value of aOrder determines the maximum number of sibling views the 
   view has to skip over in order to reach its new Z-order. The effective stacking 
   position of the view can additionally be affected by the value of the view's 
   property @StackingPriority. Concrete, the view is prevented from being arranged 
   in front of any sibling view configured with a higher @StackingPriority value. 
   Similarly the view can't be arranged behind any sibling view having lower @StackingPriority 
   value.
   Please note, changing the Z-order of views within a component containing a Core::Outline 
   view can cause this outline to update its automatic row or column formation. */
void CoreVerticalList_Restack( CoreVerticalList _this, CoreView aView, XInt32 aOrder )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aOrder );
  EW_UNUSED_ARG( aView );

  {
    EwThrow( EwLoadString( &_Const0015 ));
    return;
  }
}

/* The method Remove() removes the given view aView from the component. After this 
   operation the view doesn't belong anymore to the component - the view is not 
   visible and it can't receive any events.
   Please note, removing of views from a component containing a Core::Outline view 
   can cause this outline to update its automatic row or column formation.
   Please note, it the removed view is currently selected by the @Focus property, 
   the framework will automatically select other sibling view, which will be able 
   to react to keyboard events. */
void CoreVerticalList_Remove( CoreVerticalList _this, CoreView aView )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aView );

  {
    EwThrow( EwLoadString( &_Const0016 ));
    return;
  }
}

/* The method Add() inserts the given view aView into this component and places 
   it at a Z-order position resulting primarily from the parameter aOrder. The parameter 
   determines the number of sibling views the view has to skip over starting with 
   the top most view. If aOrder == 0, the newly added view will obtain the top most 
   position. If the value is negative, the view will be lowered to the background 
   accordingly to the absolute value of aOrder. After this operation the view belongs 
   to the component - the view can appear on the screen and it can receive events.
   The effective stacking position of the view can additionally be affected by the 
   value of the view's property @StackingPriority. Concrete, the view is prevented 
   from being arranged in front of any sibling view configured with a higher @StackingPriority 
   value. Similarly the view can't be arranged behind any sibling view having lower 
   @StackingPriority value.
   Please note, adding of views to a component containing a Core::Outline view can 
   cause this outline to update its automatic row or column formation. */
void CoreVerticalList_Add( CoreVerticalList _this, CoreView aView, XInt32 aOrder )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aOrder );
  EW_UNUSED_ARG( aView );

  {
    EwThrow( EwLoadString( &_Const0017 ));
    return;
  }
}

/* 'C' function for method : 'Core::VerticalList.releaseTailItem()' */
CoreView CoreVerticalList_releaseTailItem( CoreVerticalList _this )
{
  CoreView item = _this->Super1.last;

  if ( item == 0 )
    return 0;

  if ( item == _this->Super1.Focus )
    CoreGroup__OnSetFocus( _this, 0 );

  _this->validTail = _this->validTail - 1;

  if ( item->prev != 0 )
    item->prev->next = 0;
  else
    _this->Super1.first = 0;

  _this->Super1.last = item->prev;
  item->prev = 0;
  item->Owner = 0;
  item->layoutContext = 0;

  if ( _this->itemsPoolSize < 8 )
  {
    _this->itemsPool[ EwCheckIndex( _this->itemsPoolSize, 8 )] = item;
    _this->itemsPoolSize = _this->itemsPoolSize + 1;
  }

  return item;
}

/* 'C' function for method : 'Core::VerticalList.confirmTailItem()' */
CoreView CoreVerticalList_confirmTailItem( CoreVerticalList _this )
{
  CoreView item = 0;
  XInt32 validTailN;

  if ( _this->itemsPoolSize == 0 )
  {
    item = EwCastObject( EwNewObjectIndirect( _this->ItemClass, 0 ), CoreView );
    CoreView_OnSetLayout( item, CoreLayoutAlignToLeft | CoreLayoutAlignToRight | 
    CoreLayoutAlignToTop | CoreLayoutResizeHorz );
  }
  else
  {
    _this->itemsPoolSize = _this->itemsPoolSize - 1;
    item = _this->itemsPool[ EwCheckIndex( _this->itemsPoolSize, 8 )];
  }

  _this->validTail = _this->validTail + 1;
  validTailN = _this->validTail;
  _this->Item = validTailN;
  _this->View = item;
  EwSignal( _this->OnLoadItem, ((XObject)_this ));
  _this->View = 0;
  _this->Item = -1;

  if ( _this->Super1.last != 0 )
    _this->Super1.last->next = item;

  item->Owner = ((CoreGroup)_this );
  item->prev = _this->Super1.last;
  _this->Super1.last = item;

  if ( _this->Super1.first == 0 )
    _this->Super1.first = item;

  if ( validTailN == -1 )
    CoreGroup__OnSetFocus( _this, item );

  return item;
}

/* 'C' function for method : 'Core::VerticalList.clearPool()' */
void CoreVerticalList_clearPool( CoreVerticalList _this )
{
  while ( _this->itemsPoolSize > 0 )
  {
    _this->itemsPoolSize = _this->itemsPoolSize - 1;
    _this->itemsPool[ EwCheckIndex( _this->itemsPoolSize, 8 )] = 0;
  }
}

/* 'C' function for method : 'Core::VerticalList.releaseHeadItem()' */
CoreView CoreVerticalList_releaseHeadItem( CoreVerticalList _this )
{
  CoreView item = _this->Super1.first;

  if ( item == 0 )
    return 0;

  if ( item == _this->Super1.Focus )
    CoreGroup__OnSetFocus( _this, 0 );

  _this->validHead = _this->validHead + 1;

  if ( item->next != 0 )
    item->next->prev = 0;
  else
    _this->Super1.last = 0;

  _this->Super1.first = item->next;
  item->next = 0;
  item->Owner = 0;
  item->layoutContext = 0;

  if ( _this->itemsPoolSize < 8 )
  {
    _this->itemsPool[ EwCheckIndex( _this->itemsPoolSize, 8 )] = item;
    _this->itemsPoolSize = _this->itemsPoolSize + 1;
  }

  return item;
}

/* 'C' function for method : 'Core::VerticalList.confirmHeadItem()' */
CoreView CoreVerticalList_confirmHeadItem( CoreVerticalList _this )
{
  CoreView item = 0;
  XInt32 validHeadN;

  if ( _this->itemsPoolSize == 0 )
  {
    item = EwCastObject( EwNewObjectIndirect( _this->ItemClass, 0 ), CoreView );
    CoreView_OnSetLayout( item, CoreLayoutAlignToLeft | CoreLayoutAlignToRight | 
    CoreLayoutAlignToTop | CoreLayoutResizeHorz );
  }
  else
  {
    _this->itemsPoolSize = _this->itemsPoolSize - 1;
    item = _this->itemsPool[ EwCheckIndex( _this->itemsPoolSize, 8 )];
  }

  _this->validHead = _this->validHead - 1;
  validHeadN = _this->validHead;
  _this->Item = validHeadN;
  _this->View = item;
  EwSignal( _this->OnLoadItem, ((XObject)_this ));
  _this->View = 0;
  _this->Item = -1;

  if ( _this->Super1.first != 0 )
    _this->Super1.first->prev = item;

  item->Owner = ((CoreGroup)_this );
  item->next = _this->Super1.first;
  _this->Super1.first = item;

  if ( _this->Super1.last == 0 )
    _this->Super1.last = item;

  if ( validHeadN == -1 )
    CoreGroup__OnSetFocus( _this, item );

  return item;
}

/* 'C' function for method : 'Core::VerticalList.onSlideSlot()' */
void CoreVerticalList_onSlideSlot( CoreVerticalList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetScrollOffset( _this, _this->SlideHandler->Offset.Y );
}

/* 'C' function for method : 'Core::VerticalList.onStartSlideSlot()' */
void CoreVerticalList_onStartSlideSlot( CoreVerticalList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  {
    XRect area = CoreVerticalList_GetItemsArea( _this, 0, _this->NoOfItems - 1 );
    XPoint origin = _this->Super2.Bounds.Point1;
    XInt32 offset;
    XInt32 minOffset;

    if ( area.Point1.X > origin.X )
      area.Point1.X = origin.X;

    if ( area.Point1.Y > origin.Y )
      area.Point1.Y = origin.Y;

    offset = area.Point1.Y - _this->Super2.Bounds.Point1.Y;
    minOffset = EwGetRectH( _this->Super2.Bounds ) - EwGetRectH( area );

    if ( minOffset > 0 )
      minOffset = 0;

    _this->SlideHandler->Offset = EwNewPoint( 0, _this->ScrollOffset );
    _this->SlideHandler->MinOffset = EwNewPoint( 0, ( _this->ScrollOffset + minOffset ) 
    - offset );
    _this->SlideHandler->MaxOffset = EwNewPoint( 0, _this->ScrollOffset - offset );
  }
}

/* 'C' function for method : 'Core::VerticalList.OnSetSlideHandler()' */
void CoreVerticalList_OnSetSlideHandler( CoreVerticalList _this, CoreSlideTouchHandler 
  value )
{
  if ( value == _this->SlideHandler )
    return;

  if (( value != 0 ) && ( value->privateOnSlide.Object != 0 ))
  {
    EwTrace( "%s%*%s", EwLoadString( &_Const0010 ), value, EwLoadString( &_Const0011 ));

    {
      EwThrow( EwLoadString( &_Const0012 ));
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
    value->privateOnStart = EwNewSlot( _this, CoreVerticalList_onStartSlideSlot );
    value->privateOnSlide = EwNewSlot( _this, CoreVerticalList_onSlideSlot );
  }
}

/* 'C' function for method : 'Core::VerticalList.OnSetScrollOffset()' */
void CoreVerticalList_OnSetScrollOffset( CoreVerticalList _this, XInt32 value )
{
  if ( value == _this->ScrollOffset )
    return;

  _this->ScrollOffset = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Core::VerticalList.OnSetItemHeight()' */
void CoreVerticalList_OnSetItemHeight( CoreVerticalList _this, XInt32 value )
{
  if ( value < 1 )
    value = 1;

  if ( value == _this->ItemHeight )
    return;

  _this->ItemHeight = value;

  while ( CoreVerticalList_releaseHeadItem( _this ) != 0 )
    ;

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Core::VerticalList.OnSetNoOfItems()' */
void CoreVerticalList_OnSetNoOfItems( CoreVerticalList _this, XInt32 value )
{
  XRect area;

  if ( value < 0 )
    value = 0;

  if ( value == _this->NoOfItems )
    return;

  area = EwGetRectORect( _this->Super2.Bounds );

  if ( value > _this->NoOfItems )
  {
    area.Point1.Y = ( _this->ScrollOffset + ( _this->NoOfItems * _this->ItemHeight ));
    area.Point2.Y = ( _this->ScrollOffset + ( value * _this->ItemHeight ));
  }
  else
  {
    area.Point1.Y = ( _this->ScrollOffset + ( value * _this->ItemHeight ));
    area.Point2.Y = ( _this->ScrollOffset + ( _this->NoOfItems * _this->ItemHeight ));
  }

  _this->NoOfItems = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreGroup__InvalidateArea( _this, area );
}

/* 'C' function for method : 'Core::VerticalList.OnSetItemClass()' */
void CoreVerticalList_OnSetItemClass( CoreVerticalList _this, XClass value )
{
  if ( value == _this->ItemClass )
    return;

  _this->ItemClass = value;

  while ( CoreVerticalList_releaseHeadItem( _this ) != 0 )
    ;

  CoreVerticalList_clearPool( _this );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* The method GetItemsArea() determines a rectangular area within the list view 
   occupied by one or more items. The index of the item to start the calculation 
   is specified in the parameter aFirstItem. The parameter aLastItem specifies the 
   index of the last affected item. The first item has the index 0, the second 1, 
   and so far. The determined area is expressed in coordinates relative to the top-left 
   corner of the view's @Owner. If none of the specified items does exist, the method 
   returns an empty area.
   Please note, if the list is configured with the property @Endless == 'true', 
   multiple copies of one and the same item may be displayed on the screen. In such 
   case the method returns the area corresponding to the first set of items lying 
   actually within the list view. */
XRect CoreVerticalList_GetItemsArea( CoreVerticalList _this, XInt32 aFirstItem, 
  XInt32 aLastItem )
{
  XRect area;
  XInt32 ofs;

  if ( aFirstItem < 0 )
    aFirstItem = 0;

  if ( aLastItem >= _this->NoOfItems )
    aLastItem = _this->NoOfItems - 1;

  if ( aFirstItem > aLastItem )
    return _Const0001;

  area = _this->Super2.Bounds;
  ofs = _this->ScrollOffset;
  area.Point1.Y = (( area.Point1.Y + ofs ) + ( aFirstItem * _this->ItemHeight ));
  area.Point2.Y = ( area.Point1.Y + ((( aLastItem - aFirstItem ) + 1 ) * _this->ItemHeight ));
  return area;
}

/* The method InvalidateItems() forces the list to reload one or more items. The 
   index of the item to start the reload operation is specified in the parameter 
   aFirstItem. The parameter aLastItem specifies the index of the last affected 
   item. The first item has the index 0, the second 1, and so far. The operation 
   can cause the list view to invoke the external @OnLoadItem slot method for each 
   affected item. */
void CoreVerticalList_InvalidateItems( CoreVerticalList _this, XInt32 aFirstItem, 
  XInt32 aLastItem )
{
  XRect area;

  if ( aFirstItem < 0 )
    aFirstItem = 0;

  if ( aFirstItem > aLastItem )
    return;

  if ( _this->invalidHead > _this->invalidTail )
  {
    _this->invalidHead = aFirstItem;
    _this->invalidTail = aLastItem;
  }
  else
  {
    if ( aFirstItem < _this->invalidHead )
      _this->invalidHead = aFirstItem;

    if ( aLastItem > _this->invalidTail )
      _this->invalidTail = aLastItem;
  }

  area = EwGetRectORect( _this->Super2.Bounds );
  area.Point1.Y = ( _this->ScrollOffset + ( aFirstItem * _this->ItemHeight ));
  area.Point2.Y = ( _this->ScrollOffset + (( aLastItem + 1 ) * _this->ItemHeight ));
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreGroup__InvalidateArea( _this, area );
}

/* Variants derived from the class : 'Core::VerticalList' */
EW_DEFINE_CLASS_VARIANTS( CoreVerticalList )
EW_END_OF_CLASS_VARIANTS( CoreVerticalList )

/* Virtual Method Table (VMT) for the class : 'Core::VerticalList' */
EW_DEFINE_CLASS( CoreVerticalList, CoreGroup, itemsPool, OnLoadItem, invalidTail, 
                 invalidTail, invalidTail, invalidTail, "Core::VerticalList" )
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
  CoreVerticalList_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  CoreVerticalList_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreVerticalList_FindSiblingView,
  CoreVerticalList_RestackTop,
  CoreVerticalList_Restack,
  CoreVerticalList_Remove,
  CoreVerticalList_Add,
EW_END_OF_CLASS( CoreVerticalList )

/* Initializer for the class 'Core::SimpleTouchHandler' */
void CoreSimpleTouchHandler__Init( CoreSimpleTouchHandler _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreQuadView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreSimpleTouchHandler );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreSimpleTouchHandler );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Super2.viewState = CoreViewStateAlphaBlended | CoreViewStateEnabled | CoreViewStateFastReshape 
  | CoreViewStateTouchable | CoreViewStateVisible;
  _this->MaxStrikeCount = 1;
}

/* Re-Initializer for the class 'Core::SimpleTouchHandler' */
void CoreSimpleTouchHandler__ReInit( CoreSimpleTouchHandler _this )
{
  /* At first re-initialize the super class ... */
  CoreQuadView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::SimpleTouchHandler' */
void CoreSimpleTouchHandler__Done( CoreSimpleTouchHandler _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreQuadView );

  /* Don't forget to deinitialize the super class ... */
  CoreQuadView__Done( &_this->_.Super );
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
void CoreSimpleTouchHandler_Draw( CoreSimpleTouchHandler _this, GraphicsCanvas aCanvas, 
  XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aBlend );
  EW_UNUSED_ARG( aOpacity );
  EW_UNUSED_ARG( aOffset );
  EW_UNUSED_ARG( aClip );
  EW_UNUSED_ARG( aCanvas );
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
XObject CoreSimpleTouchHandler_HandleEvent( CoreSimpleTouchHandler _this, CoreEvent 
  aEvent )
{
  CoreCursorEvent event1 = EwCastObject( aEvent, CoreCursorEvent );
  CoreDragEvent event2 = EwCastObject( aEvent, CoreDragEvent );
  XBool inside = _this->Inside;
  XBool press;
  XBool hold;
  XBool timeout;
  XBool release;
  XBool drag;

  if (( event1 == 0 ) && ( event2 == 0 ))
    return 0;

  press = (XBool)((( event1 != 0 ) && event1->Down ) && ( event1->HoldPeriod == 
  0 ));
  hold = (XBool)((( event1 != 0 ) && event1->Down ) && ( event1->HoldPeriod > 0 ));
  timeout = (XBool)((( event1 != 0 ) && event1->Down ) && ( event1->HoldPeriod > 
  50 ));
  release = (XBool)(( event1 != 0 ) && !event1->Down );
  drag = (XBool)( event2 != 0 );

  if (((( _this->RetargetCondition & CoreRetargetReasonForeignPress ) == CoreRetargetReasonForeignPress ) 
      && ( _this->state > 0 )) && ( _this->state < 33554432 ))
  {
    CoreCursorGrabEvent event3 = EwCastObject( aEvent, CoreCursorGrabEvent );

    if (((( event3 != 0 ) && event3->Down ) && ( event3->Target != (CoreView)_this )) 
        && EwIsPointInRect( CoreView__GetExtent( _this ), CoreGroup_LocalPosition( 
        _this->Super2.Owner, event3->GlobalCurrentPos )))
    {
      _this->stateRetargetReason = CoreRetargetReasonForeignPress;
      _this->state = _this->state | 67108864;
      return 0;
    }
  }

  if ( press )
  {
    XInt32 noOfFingers = 0;
    XUInt32 fingers;
    _this->state = _this->state | ( 1 << event1->Finger );

    for ( fingers = _this->state & 4095; fingers > 0; fingers = fingers >> 1 )
      if (( fingers & 1 ) != 0 )
        noOfFingers = noOfFingers + 1;

    if ( noOfFingers == 1 )
      _this->state = ( _this->state | 16777216 ) | ( 4096 << event1->Finger );
  }

  if ( release )
    _this->state = ( _this->state & ~( 1 << event1->Finger )) | 33554432;

  if ( timeout && ( _this->state < 16777216 ))
    _this->state = _this->state | 67108864;

  if ( release && event1->AutoDeflected )
    _this->state = _this->state | 67108864;

  if ( release && (( _this->state & 4095 ) == 0 ))
    _this->stateRetargetReason = 0;

  if ( release && (( _this->state & 16777215 ) == 0 ))
    _this->state = 0;

  if ( hold && ( _this->state >= 67108864 ))
    CoreRoot_RetargetCursorWithReason( CoreView__GetRoot( _this ), 0, 0, _this->stateRetargetReason );

  if (( hold && (( _this->state & 16777216 ) != 0 )) && (( _this->state & 33554432 ) 
      != 0 ))
  {
    hold = 0;
    release = 1;
  }

  if (( event1 != 0 ) && (( _this->state & ( 4096 << event1->Finger )) == 0 ))
    return ((XObject)_this );

  if (( event2 != 0 ) && (( _this->state & ( 4096 << event2->Finger )) == 0 ))
    return ((XObject)_this );

  if ( release && (( _this->state & 16777216 ) == 0 ))
    return ((XObject)_this );

  if ((( press || drag ) || hold ) && (( _this->state < 16777216 ) || ( _this->state 
      >= 33554432 )))
    return ((XObject)_this );

  if ( release )
    _this->state = _this->state & 3758100479U;

  if ( release && (( _this->state & 16777215 ) == 0 ))
    _this->state = 0;

  if ( event1 != 0 )
  {
    _this->Down = (XBool)( press || hold );
    _this->Inside = CoreQuadView_IsPointInside((CoreQuadView)_this, event1->CurrentPos );
    _this->HittingPos = event1->HittingPos;
    _this->CurrentPos = event1->CurrentPos;
    _this->Offset = _Const0000;
    _this->HoldPeriod = event1->HoldPeriod;
    _this->StrikeCount = event1->StrikeCount;
    _this->AutoDeflected = event1->AutoDeflected;
    _this->Finger = event1->Finger;
    _this->Time = event1->Super1.Time;

    if ( event1->Down && ( event1->HoldPeriod == 0 ))
      inside = 0;
  }

  if ( event2 != 0 )
  {
    _this->Down = 1;
    _this->Inside = CoreQuadView_IsPointInside((CoreQuadView)_this, event2->CurrentPos );
    _this->HittingPos = event2->HittingPos;
    _this->CurrentPos = event2->CurrentPos;
    _this->Offset = event2->Offset;
    _this->HoldPeriod = event2->HoldPeriod;
    _this->StrikeCount = event2->StrikeCount;
    _this->Finger = event2->Finger;
    _this->AutoDeflected = 0;
    _this->Time = event2->Super1.Time;
    EwSignal( _this->OnDrag, ((XObject)_this ));
  }

  if ((( event1 != 0 ) && _this->Down ) && ( _this->HoldPeriod == 0 ))
    EwSignal( _this->OnPress, ((XObject)_this ));

  if ((( event1 != 0 ) && _this->Down ) && ( _this->HoldPeriod > 0 ))
    EwSignal( _this->OnHold, ((XObject)_this ));

  if (( _this->Down && _this->Inside ) && !inside )
    EwSignal( _this->OnEnter, ((XObject)_this ));

  if ((( _this->Down && !_this->Inside ) && inside ) || (( !_this->Down && _this->Inside ) 
      && inside ))
    EwSignal( _this->OnLeave, ((XObject)_this ));

  if (( event1 != 0 ) && !_this->Down )
    EwSignal( _this->OnRelease, ((XObject)_this ));

  if ( !!_this->RetargetCondition )
  {
    XSet reason = 0;

    if ((((( _this->RetargetCondition & CoreRetargetReasonLongPress ) == CoreRetargetReasonLongPress ) 
        && ( event1 != 0 )) && event1->Down ) && ( event1->HoldPeriod >= 1000 ))
      reason = CoreRetargetReasonLongPress;

    if (((( _this->RetargetCondition & CoreRetargetReasonWipeUp ) == CoreRetargetReasonWipeUp ) 
        && ( event2 != 0 )) && (( event2->GlobalCurrentPos.Y - event2->GlobalHittingPos.Y ) 
        <= -8 ))
      reason = CoreRetargetReasonWipeUp;

    if (((( _this->RetargetCondition & CoreRetargetReasonWipeDown ) == CoreRetargetReasonWipeDown ) 
        && ( event2 != 0 )) && (( event2->GlobalCurrentPos.Y - event2->GlobalHittingPos.Y ) 
        >= 8 ))
      reason = CoreRetargetReasonWipeDown;

    if (((( _this->RetargetCondition & CoreRetargetReasonWipeLeft ) == CoreRetargetReasonWipeLeft ) 
        && ( event2 != 0 )) && (( event2->GlobalCurrentPos.X - event2->GlobalHittingPos.X ) 
        <= -8 ))
      reason = CoreRetargetReasonWipeLeft;

    if (((( _this->RetargetCondition & CoreRetargetReasonWipeRight ) == CoreRetargetReasonWipeRight ) 
        && ( event2 != 0 )) && (( event2->GlobalCurrentPos.X - event2->GlobalHittingPos.X ) 
        >= 8 ))
      reason = CoreRetargetReasonWipeRight;

    if ( !!reason )
    {
      _this->stateRetargetReason = reason;
      CoreRoot_RetargetCursorWithReason( CoreView__GetRoot( _this ), 0, ((CoreView)_this ), 
      reason );
    }
  }

  return ((XObject)_this );
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
CoreCursorHit CoreSimpleTouchHandler_CursorHitTest( CoreSimpleTouchHandler _this, 
  XRect aArea, XInt32 aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet 
  aRetargetReason )
{
  if (( aDedicatedView != 0 ) && ( aDedicatedView != (CoreView)_this ))
    return 0;

  if (( aStrikeCount < 1 ) || ( aStrikeCount > _this->MaxStrikeCount ))
    return 0;

  if ( _this->state >= 33554432 )
    return 0;

  if (( _this->state >= 16777216 ) && (( _this->state & ( 4096 << aFinger )) == 
      0 ))
    return 0;

  if ( !!( aRetargetReason & _this->RetargetCondition ))
    return 0;

  if ( CoreQuadView_HasRectShape((CoreQuadView)_this ))
  {
    XRect r = EwIntersectRect( aArea, CoreView__GetExtent( _this ));

    if ( !EwIsRectEmpty( r ))
    {
      XPoint center = EwGetRectCenter( aArea );
      XPoint offset = _Const0000;

      if ( center.X < r.Point1.X )
        offset.X = ( r.Point1.X - center.X );

      if ( center.X >= r.Point2.X )
        offset.X = (( r.Point2.X - center.X ) - 1 );

      if ( center.Y < r.Point1.Y )
        offset.Y = ( r.Point1.Y - center.Y );

      if ( center.Y >= r.Point2.Y )
        offset.Y = (( r.Point2.Y - center.Y ) - 1 );

      return CoreCursorHit_Initialize( EwNewObject( CoreCursorHit, 0 ), ((CoreView)_this ), 
        offset );
    }
  }
  else
  {
    XPoint points[ 9 ] = {0};
    XInt32 i;
    points[ 0 ] = EwGetRectCenter( aArea );
    points[ 1 ] = points[ 0 ];
    points[ 2 ] = points[ 0 ];
    points[ 3 ] = points[ 0 ];
    points[ 4 ] = points[ 0 ];
    points[ 1 ].X = aArea.Point1.X;
    points[ 2 ].Y = aArea.Point1.Y;
    points[ 3 ].X = aArea.Point2.X;
    points[ 4 ].Y = aArea.Point2.Y;
    points[ 5 ] = aArea.Point1;
    points[ 6 ] = EwNewPoint( aArea.Point2.X, aArea.Point1.Y );
    points[ 7 ] = EwNewPoint( aArea.Point1.X, aArea.Point2.Y );
    points[ 8 ] = aArea.Point2;

    for ( i = 0; i < 9; i = i + 1 )
      if ( CoreQuadView_IsPointInside((CoreQuadView)_this, points[ EwCheckIndex( 
          i, 9 )]))
        return CoreCursorHit_Initialize( EwNewObject( CoreCursorHit, 0 ), ((CoreView)_this ), 
          EwMovePointNeg( points[ EwCheckIndex( i, 9 )], points[ 0 ]));
  }

  return 0;
}

/* 'C' function for method : 'Core::SimpleTouchHandler.OnSetMaxStrikeCount()' */
void CoreSimpleTouchHandler_OnSetMaxStrikeCount( CoreSimpleTouchHandler _this, XInt32 
  value )
{
  if ( value < 1 )
    value = 1;

  _this->MaxStrikeCount = value;
}

/* Variants derived from the class : 'Core::SimpleTouchHandler' */
EW_DEFINE_CLASS_VARIANTS( CoreSimpleTouchHandler )
EW_END_OF_CLASS_VARIANTS( CoreSimpleTouchHandler )

/* Virtual Method Table (VMT) for the class : 'Core::SimpleTouchHandler' */
EW_DEFINE_CLASS( CoreSimpleTouchHandler, CoreQuadView, OnDrag, OnDrag, stateRetargetReason, 
                 stateRetargetReason, stateRetargetReason, stateRetargetReason, 
                 "Core::SimpleTouchHandler" )
  CoreQuadView_initLayoutContext,
  CoreView_GetRoot,
  CoreSimpleTouchHandler_Draw,
  CoreSimpleTouchHandler_HandleEvent,
  CoreSimpleTouchHandler_CursorHitTest,
  CoreQuadView_ArrangeView,
  CoreQuadView_MoveView,
  CoreQuadView_GetExtent,
  CoreView_ChangeViewState,
  CoreQuadView_OnSetPoint4,
  CoreQuadView_OnSetPoint3,
  CoreQuadView_OnSetPoint2,
  CoreQuadView_OnSetPoint1,
EW_END_OF_CLASS( CoreSimpleTouchHandler )

/* Initializer for the class 'Core::SlideTouchHandler' */
void CoreSlideTouchHandler__Init( CoreSlideTouchHandler _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreSlideTouchHandler );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreSlideTouchHandler );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Super2.viewState = CoreViewStateAlphaBlended | CoreViewStateEnabled | CoreViewStateFastReshape 
  | CoreViewStateTouchable | CoreViewStateVisible;
  _this->frictFactor = 5000.000000f;
  _this->SlideHorz = 1;
  _this->Friction = 0.500000f;
}

/* Re-Initializer for the class 'Core::SlideTouchHandler' */
void CoreSlideTouchHandler__ReInit( CoreSlideTouchHandler _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::SlideTouchHandler' */
void CoreSlideTouchHandler__Done( CoreSlideTouchHandler _this )
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
void CoreSlideTouchHandler_Draw( CoreSlideTouchHandler _this, GraphicsCanvas aCanvas, 
  XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aBlend );
  EW_UNUSED_ARG( aOpacity );
  EW_UNUSED_ARG( aOffset );
  EW_UNUSED_ARG( aClip );
  EW_UNUSED_ARG( aCanvas );
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
XObject CoreSlideTouchHandler_HandleEvent( CoreSlideTouchHandler _this, CoreEvent 
  aEvent )
{
  CoreCursorEvent event1 = EwCastObject( aEvent, CoreCursorEvent );
  CoreDragEvent event2 = EwCastObject( aEvent, CoreDragEvent );
  CoreCursorGrabEvent event3 = EwCastObject( aEvent, CoreCursorGrabEvent );
  XBool press;
  XBool hold;
  XBool timeout;
  XBool release;
  XBool drag;

  press = (XBool)((( event1 != 0 ) && event1->Down ) && ( event1->HoldPeriod == 
  0 ));
  hold = (XBool)((( event1 != 0 ) && event1->Down ) && ( event1->HoldPeriod > 0 ));
  timeout = (XBool)((( event1 != 0 ) && event1->Down ) && ( event1->HoldPeriod > 
  50 ));
  release = (XBool)(( event1 != 0 ) && !event1->Down );
  drag = (XBool)( event2 != 0 );

  if ( press )
  {
    XInt32 noOfFingers = 0;
    XUInt32 fingers;
    _this->state = _this->state | ( 1 << event1->Finger );

    for ( fingers = _this->state & 4095; fingers > 0; fingers = fingers >> 1 )
      if (( fingers & 1 ) != 0 )
        noOfFingers = noOfFingers + 1;

    if ( noOfFingers == 1 )
      _this->state = ( _this->state | 16777216 ) | ( 4096 << event1->Finger );
  }

  if ( release )
    _this->state = ( _this->state & ~( 1 << event1->Finger )) | 33554432;

  if ( timeout && ( _this->state < 16777216 ))
    _this->state = _this->state | 67108864;

  if ( release && event1->AutoDeflected )
    _this->state = _this->state | 67108864;

  if ( release && (( _this->state & 16777215 ) == 0 ))
    _this->state = 0;

  if ( hold && ( _this->state >= 67108864 ))
    CoreRoot_RetargetCursorWithReason( CoreView__GetRoot( _this ), 0, 0, 0 );

  if (( hold && (( _this->state & 16777216 ) != 0 )) && (( _this->state & 33554432 ) 
      != 0 ))
  {
    hold = 0;
    release = 1;
  }

  if (( event1 != 0 ) && (( _this->state & ( 4096 << event1->Finger )) == 0 ))
    return ((XObject)_this );

  if (( event2 != 0 ) && (( _this->state & ( 4096 << event2->Finger )) == 0 ))
    return ((XObject)_this );

  if ( release && (( _this->state & 16777216 ) == 0 ))
    return ((XObject)_this );

  if ((( press || drag ) || hold ) && (( _this->state < 16777216 ) || ( _this->state 
      >= 33554432 )))
    return ((XObject)_this );

  if ( release )
    _this->state = _this->state & 3758100479U;

  if ( release && (( _this->state & 16777215 ) == 0 ))
    _this->state = 0;

  if (( event3 != 0 ) && ( event3->Target == (CoreView)_this ))
    return 0;

  if ((( event3 != 0 ) && event3->Down ) && ( _this->active || !_this->Sliding ))
    return 0;

  if ((( event3 != 0 ) && event3->Down ) && !EwIsPointInRect( _this->Super1.Bounds, 
      CoreGroup_LocalPosition( _this->Super2.Owner, event3->GlobalCurrentPos )))
    return 0;

  if ((( event3 != 0 ) && !event3->Down ) && ( !_this->active || ( _this->activeFinger 
      != event3->Finger )))
    return 0;

  if ((( event1 == 0 ) && ( event2 == 0 )) && ( event3 == 0 ))
    return 0;

  if ( event1 != 0 )
  {
    _this->active = (XBool)( press || hold );
    _this->activeFinger = event1->Finger;
    _this->HittingPos = event1->HittingPos;
  }

  if ( event2 != 0 )
    _this->activeFinger = event2->Finger;

  if ( event3 != 0 )
  {
    _this->active = event3->Down;
    _this->activeFinger = event3->Finger;
  }

  if (( event3 != 0 ) && event3->Down )
  {
    CoreSlideTouchHandler_stopAnimation( _this );
    _this->speedX = (((XFloat)( event3->Super1.Time - _this->startTimeX ) * 0.001000f ) 
    * _this->accelerationX ) + _this->speedX;
    _this->speedY = (((XFloat)( event3->Super1.Time - _this->startTimeY ) * 0.001000f ) 
    * _this->accelerationY ) + _this->speedY;

    if ( _this->parkingX )
      _this->speedX = 0.000000f;

    if ( _this->parkingY )
      _this->speedY = 0.000000f;

    _this->accelerationX = 0.000000f;
    _this->accelerationY = 0.000000f;
    _this->parkingX = 0;
    _this->parkingY = 0;
    _this->initOffset = _this->Offset;
    _this->refTime = event3->Super1.Time;
    return ((XObject)_this );
  }

  if ( press )
  {
    CoreSlideTouchHandler_stopAnimation( _this );
    _this->speedX = (((XFloat)( event1->Super1.Time - _this->startTimeX ) * 0.001000f ) 
    * _this->accelerationX ) + _this->speedX;
    _this->speedY = (((XFloat)( event1->Super1.Time - _this->startTimeY ) * 0.001000f ) 
    * _this->accelerationY ) + _this->speedY;

    if ( _this->parkingX || !_this->Sliding )
      _this->speedX = 0.000000f;

    if ( _this->parkingY || !_this->Sliding )
      _this->speedY = 0.000000f;

    _this->accelerationX = 0.000000f;
    _this->accelerationY = 0.000000f;
    _this->parkingX = 0;
    _this->parkingY = 0;

    if ( !_this->Sliding )
    {
      _this->Sliding = 1;
      EwSignal( _this->privateOnStart, ((XObject)_this ));
    }

    _this->initOffset = _this->Offset;
    _this->refTime = event1->Super1.Time;
  }

  if ( event2 != 0 )
  {
    XPoint delta = EwMovePointNeg( event2->CurrentPos, event2->HittingPos );
    XPoint newOffset = _this->Offset;

    if ( _this->SlideHorz )
      newOffset.X = ( _this->initOffset.X + delta.X );

    newOffset.Y = ( _this->initOffset.Y + delta.Y );

    if ( newOffset.X < _this->MinOffset.X )
      newOffset.X = ( _this->MinOffset.X + (( newOffset.X - _this->MinOffset.X ) 
      / 2 ));
    else
      if ( newOffset.X > _this->MaxOffset.X )
        newOffset.X = ( _this->MaxOffset.X + (( newOffset.X - _this->MaxOffset.X ) 
        / 2 ));

    if ( newOffset.Y < _this->MinOffset.Y )
      newOffset.Y = ( _this->MinOffset.Y + (( newOffset.Y - _this->MinOffset.Y ) 
      / 2 ));
    else
      if ( newOffset.Y > _this->MaxOffset.Y )
        newOffset.Y = ( _this->MaxOffset.Y + (( newOffset.Y - _this->MaxOffset.Y ) 
        / 2 ));

    if ( EwCompPoint( newOffset, _this->Offset ))
    {
      _this->Delta = EwMovePointNeg( newOffset, _this->Offset );
      _this->Offset = newOffset;
      EwSignal( _this->privateOnSlide, ((XObject)_this ));
    }
  }

  if ((( event3 != 0 ) && !event3->Down ) && (( event3->Super1.Time - _this->refTime ) 
      >= 200 ))
  {
    _this->speedX = 0.000000f;
    _this->speedY = 0.000000f;
  }

  if ( hold && (( event1->Super1.Time - _this->refTime ) >= 200 ))
  {
    _this->speedX = 0.000000f;
    _this->speedY = 0.000000f;
  }

  if (( event2 != 0 ) && ( event2->Super1.Time > _this->refTime ))
  {
    XPoint delta = event2->Offset;
    XFloat invTime = 1000.000000f / (XFloat)( event2->Super1.Time - _this->refTime );
    XFloat newSpeedX = 0.000000f;
    XFloat newSpeedY;

    if ( _this->SlideHorz )
      newSpeedX = (XFloat)delta.X * invTime;

    newSpeedY = (XFloat)delta.Y * invTime;

    if (( newSpeedX * _this->speedX ) < 0.000000f )
      _this->speedX = 0.000000f;

    if (( newSpeedY * _this->speedY ) < 0.000000f )
      _this->speedY = 0.000000f;

    _this->speedX = ( _this->speedX + newSpeedX ) * 0.500000f;
    _this->speedY = ( _this->speedY + newSpeedY ) * 0.500000f;
    _this->refTime = event2->Super1.Time;
  }

  if ( !release && ( event3 == 0 ))
    return ((XObject)_this );

  if (( event1 != 0 ) && event1->AutoDeflected )
  {
    _this->speedX = 0.000000f;
    _this->speedY = 0.000000f;
  }

  if (( _this->Offset.X <= _this->MinOffset.X ) || ( _this->Offset.X >= _this->MaxOffset.X ))
    _this->speedX = 0.000000f;
  else
    if ( _this->speedX == 0.000000f )
    {
      XInt32 targetX = _this->Offset.X;
      XInt32 snapN = _this->MinOffset.X;
      XInt32 snapP = _this->MaxOffset.X;

      if ( targetX < snapN )
        snapP = _this->MinOffset.X;
      else
        if ( targetX > snapP )
          snapN = _this->MaxOffset.X;
        else
          if ( _this->SnapNext.X <= 1 )
          {
            snapN = targetX;
            snapP = targetX;
          }
          else
          {
            XInt32 modDiv = ( snapP - targetX ) % _this->SnapNext.X;
            snapP = ( targetX - _this->SnapNext.X ) + modDiv;
            snapN = targetX + modDiv;

            if ( snapP < _this->MinOffset.X )
              snapP = _this->MinOffset.X;

            if ( snapN > _this->MaxOffset.X )
              snapN = _this->MaxOffset.X;
          }

      if (( snapN - targetX ) <= ( targetX - snapP ))
        targetX = snapN;
      else
        targetX = snapP;

      if ( targetX != _this->Offset.X )
      {
        XFloat distance = (XFloat)( targetX - _this->Offset.X );

        if ( distance > 0.000000f )
          _this->speedX = EwMathSqrt(( distance * 2.000000f ) * _this->frictFactor ) 
          + 20.000000f;

        if ( distance < 0.000000f )
          _this->speedX = -EwMathSqrt(( -distance * 2.000000f ) * _this->frictFactor ) 
          - 20.000000f;

        _this->accelerationX = ( 400.000000f - ( _this->speedX * _this->speedX )) 
        / ( 2.000000f * distance );
        _this->endX = targetX;
      }
    }
    else
    {
      XFloat speedX2 = _this->speedX * _this->speedX;
      XFloat distance = speedX2 / ( 2.000000f * _this->frictFactor );
      XInt32 targetX = _this->Offset.X;
      XInt32 targetX0;
      XInt32 snapN;
      XInt32 snapP;

      if ( _this->speedX > 0.000000f )
        targetX = targetX + (XInt32)distance;

      if ( _this->speedX < 0.000000f )
        targetX = targetX - (XInt32)distance;

      if ( targetX > _this->MaxOffset.X )
        targetX = _this->MaxOffset.X;
      else
        if ( targetX < _this->MinOffset.X )
          targetX = _this->MinOffset.X;

      targetX0 = targetX;
      snapN = _this->MinOffset.X;
      snapP = _this->MaxOffset.X;

      if ( targetX < snapN )
        snapP = _this->MinOffset.X;
      else
        if ( targetX > snapP )
          snapN = _this->MaxOffset.X;
        else
          if ( _this->SnapNext.X <= 1 )
          {
            snapN = targetX;
            snapP = targetX;
          }
          else
          {
            XInt32 modDiv = ( snapP - targetX ) % _this->SnapNext.X;
            snapP = ( targetX - _this->SnapNext.X ) + modDiv;
            snapN = targetX + modDiv;

            if ( snapP < _this->MinOffset.X )
              snapP = _this->MinOffset.X;

            if ( snapN > _this->MaxOffset.X )
              snapN = _this->MaxOffset.X;
          }

      if ( _this->speedX > 0.000000f )
      {
        if ( snapP <= _this->Offset.X )
          targetX = snapN;
        else
          if (( targetX - snapP ) < ( snapN - targetX ))
            targetX = snapP;
          else
            targetX = snapN;
      }
      else
        if ( snapN >= _this->Offset.X )
          targetX = snapP;
        else
          if (( targetX - snapP ) > ( snapN - targetX ))
            targetX = snapN;
          else
            targetX = snapP;

      if ( targetX != _this->Offset.X )
      {
        distance = (XFloat)( targetX - _this->Offset.X );

        if ( targetX != targetX0 )
        {
          XFloat snapDist = (XFloat)( targetX - targetX0 );

          if ( snapDist > 0.000000f )
            _this->speedX = _this->speedX + EwMathSqrt(( snapDist * 2.000000f ) 
            * _this->frictFactor );

          if ( snapDist < 0.000000f )
            _this->speedX = _this->speedX - EwMathSqrt(( -snapDist * 2.000000f ) 
            * _this->frictFactor );
        }

        if ( _this->speedX > 0.000000f )
          _this->speedX = _this->speedX + 20.000000f;

        if ( _this->speedX < 0.000000f )
          _this->speedX = _this->speedX - 20.000000f;

        _this->accelerationX = ( 400.000000f - ( _this->speedX * _this->speedX )) 
        / ( 2.000000f * distance );
        _this->endX = targetX;
      }
      else
        _this->speedX = 0.000000f;
    }

  if (( _this->Offset.Y <= _this->MinOffset.Y ) || ( _this->Offset.Y >= _this->MaxOffset.Y ))
    _this->speedY = 0.000000f;
  else
    if ( _this->speedY == 0.000000f )
    {
      XInt32 targetY = _this->Offset.Y;
      XInt32 snapN = _this->MinOffset.Y;
      XInt32 snapP = _this->MaxOffset.Y;

      if ( targetY < snapN )
        snapP = _this->MinOffset.Y;
      else
        if ( targetY > snapP )
          snapN = _this->MaxOffset.Y;
        else
          if ( _this->SnapNext.Y <= 1 )
          {
            snapN = targetY;
            snapP = targetY;
          }
          else
          {
            XInt32 modDiv = ( snapP - targetY ) % _this->SnapNext.Y;
            snapP = ( targetY - _this->SnapNext.Y ) + modDiv;
            snapN = targetY + modDiv;

            if ( snapP < _this->MinOffset.Y )
              snapP = _this->MinOffset.Y;

            if ( snapN > _this->MaxOffset.Y )
              snapN = _this->MaxOffset.Y;
          }

      if (( snapN - targetY ) <= ( targetY - snapP ))
        targetY = snapN;
      else
        targetY = snapP;

      if ( targetY != _this->Offset.Y )
      {
        XFloat distance = (XFloat)( targetY - _this->Offset.Y );

        if ( distance > 0.000000f )
          _this->speedY = EwMathSqrt(( distance * 2.000000f ) * _this->frictFactor ) 
          + 20.000000f;

        if ( distance < 0.000000f )
          _this->speedY = -EwMathSqrt(( -distance * 2.000000f ) * _this->frictFactor ) 
          - 20.000000f;

        _this->accelerationY = ( 400.000000f - ( _this->speedY * _this->speedY )) 
        / ( 2.000000f * distance );
        _this->endY = targetY;
      }
    }
    else
    {
      XFloat speedY2 = _this->speedY * _this->speedY;
      XFloat distance = speedY2 / ( 2.000000f * _this->frictFactor );
      XInt32 targetY = _this->Offset.Y;
      XInt32 targetY0;
      XInt32 snapN;
      XInt32 snapP;

      if ( _this->speedY > 0.000000f )
        targetY = targetY + (XInt32)distance;

      if ( _this->speedY < 0.000000f )
        targetY = targetY - (XInt32)distance;

      if ( targetY > _this->MaxOffset.Y )
        targetY = _this->MaxOffset.Y;
      else
        if ( targetY < _this->MinOffset.Y )
          targetY = _this->MinOffset.Y;

      targetY0 = targetY;
      snapN = _this->MinOffset.Y;
      snapP = _this->MaxOffset.Y;

      if ( targetY < snapN )
        snapP = _this->MinOffset.Y;
      else
        if ( targetY > snapP )
          snapN = _this->MaxOffset.Y;
        else
          if ( _this->SnapNext.Y <= 1 )
          {
            snapN = targetY;
            snapP = targetY;
          }
          else
          {
            XInt32 modDiv = ( snapP - targetY ) % _this->SnapNext.Y;
            snapP = ( targetY - _this->SnapNext.Y ) + modDiv;
            snapN = targetY + modDiv;

            if ( snapP < _this->MinOffset.Y )
              snapP = _this->MinOffset.Y;

            if ( snapN > _this->MaxOffset.Y )
              snapN = _this->MaxOffset.Y;
          }

      if ( _this->speedY > 0.000000f )
      {
        if ( snapP <= _this->Offset.Y )
          targetY = snapN;
        else
          if (( targetY - snapP ) < ( snapN - targetY ))
            targetY = snapP;
          else
            targetY = snapN;
      }
      else
        if ( snapN >= _this->Offset.Y )
          targetY = snapP;
        else
          if (( targetY - snapP ) > ( snapN - targetY ))
            targetY = snapN;
          else
            targetY = snapP;

      if ( targetY != _this->Offset.Y )
      {
        distance = (XFloat)( targetY - _this->Offset.Y );

        if ( targetY != targetY0 )
        {
          XFloat snapDist = (XFloat)( targetY - targetY0 );

          if ( snapDist > 0.000000f )
            _this->speedY = _this->speedY + EwMathSqrt(( snapDist * 2.000000f ) 
            * _this->frictFactor );

          if ( snapDist < 0.000000f )
            _this->speedY = _this->speedY - EwMathSqrt(( -snapDist * 2.000000f ) 
            * _this->frictFactor );
        }

        if ( _this->speedY > 0.000000f )
          _this->speedY = _this->speedY + 20.000000f;

        if ( _this->speedY < 0.000000f )
          _this->speedY = _this->speedY - 20.000000f;

        _this->accelerationY = ( 400.000000f - ( _this->speedY * _this->speedY )) 
        / ( 2.000000f * distance );
        _this->endY = targetY;
      }
      else
        _this->speedY = 0.000000f;
    }

  if ( event1 != 0 )
    _this->startTimeX = event1->Super1.Time;

  if ( event3 != 0 )
    _this->startTimeX = event3->Super1.Time;

  _this->startTimeY = _this->startTimeX;
  _this->startX = (XFloat)_this->Offset.X;
  _this->startY = (XFloat)_this->Offset.Y;
  CoreSlideTouchHandler_startAnimation( _this );
  return ((XObject)_this );
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
CoreCursorHit CoreSlideTouchHandler_CursorHitTest( CoreSlideTouchHandler _this, 
  XRect aArea, XInt32 aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet 
  aRetargetReason )
{
  XRect r;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aStrikeCount );

  if (( aDedicatedView != 0 ) && ( aDedicatedView != (CoreView)_this ))
    return 0;

  if ( _this->state >= 33554432 )
    return 0;

  if (( _this->state >= 16777216 ) && (( _this->state & ( 4096 << aFinger )) == 
      0 ))
    return 0;

  if ( !_this->SlideHorz && !!( aRetargetReason & ( CoreRetargetReasonWipeLeft | 
      CoreRetargetReasonWipeRight )))
    return 0;

  r = EwIntersectRect( aArea, _this->Super1.Bounds );

  if ( !EwIsRectEmpty( r ))
  {
    XPoint center = EwGetRectCenter( aArea );
    XPoint offset = _Const0000;

    if ( center.X < r.Point1.X )
      offset.X = ( r.Point1.X - center.X );

    if ( center.X >= r.Point2.X )
      offset.X = (( r.Point2.X - center.X ) - 1 );

    if ( center.Y < r.Point1.Y )
      offset.Y = ( r.Point1.Y - center.Y );

    if ( center.Y >= r.Point2.Y )
      offset.Y = (( r.Point2.Y - center.Y ) - 1 );

    return CoreCursorHit_Initialize( EwNewObject( CoreCursorHit, 0 ), ((CoreView)_this ), 
      offset );
  }

  return 0;
}

/* 'C' function for method : 'Core::SlideTouchHandler.stopAnimation()' */
void CoreSlideTouchHandler_stopAnimation( CoreSlideTouchHandler _this )
{
  if ( _this->timer != 0 )
  {
    EwDetachObjObserver( EwNewSlot( _this, CoreSlideTouchHandler_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
  }
}

/* 'C' function for method : 'Core::SlideTouchHandler.startAnimation()' */
void CoreSlideTouchHandler_startAnimation( CoreSlideTouchHandler _this )
{
  _this->timer = ((CoreTimer)EwGetAutoObject( &EffectsEffectTimer, EffectsEffectTimerClass ));
  EwAttachObjObserver( EwNewSlot( _this, CoreSlideTouchHandler_timerSlot ), (XObject)_this->timer, 
    0 );
}

/* 'C' function for method : 'Core::SlideTouchHandler.timerSlot()' */
void CoreSlideTouchHandler_timerSlot( CoreSlideTouchHandler _this, XObject sender )
{
  XFloat timeX;
  XFloat timeY;
  XFloat timeX2;
  XFloat timeY2;
  XFloat newSpeedX;
  XFloat newSpeedY;
  XPoint newOffset;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->timer == 0 )
    return;

  timeX = (XFloat)( _this->timer->Time - _this->startTimeX ) * 0.001000f;
  timeY = (XFloat)( _this->timer->Time - _this->startTimeY ) * 0.001000f;
  timeX2 = timeX * timeX;
  timeY2 = timeY * timeY;
  newSpeedX = ( _this->accelerationX * timeX ) + _this->speedX;
  newSpeedY = ( _this->accelerationY * timeY ) + _this->speedY;
  newOffset = EwNewPoint((XInt32)(((( _this->accelerationX * 0.500000f ) * timeX2 ) 
  + ( _this->speedX * timeX )) + _this->startX ), (XInt32)(((( _this->accelerationY 
  * 0.500000f ) * timeY2 ) + ( _this->speedY * timeY )) + _this->startY ));

  if ( _this->parkingX && ( timeX >= 0.500000f ))
  {
    newOffset.X = _this->endX;
    _this->speedX = 0.000000f;
    _this->accelerationX = 0.000000f;
    _this->startX = (XFloat)newOffset.X;
    _this->parkingX = 0;
  }
  else
    if ( _this->parkingX )
    {
      XFloat f = 1.000000f - EwMathPow( 1.000000f - ( timeX / 0.500000f ), 5.000000f );
      newOffset.X = (XInt32)( _this->startX + (((XFloat)_this->endX - _this->startX ) 
      * f ));
    }

  if ( _this->parkingY && ( timeY >= 0.500000f ))
  {
    newOffset.Y = _this->endY;
    _this->speedY = 0.000000f;
    _this->accelerationY = 0.000000f;
    _this->startY = (XFloat)newOffset.Y;
    _this->parkingY = 0;
  }
  else
    if ( _this->parkingY )
    {
      XFloat f = 1.000000f - EwMathPow( 1.000000f - ( timeY / 0.500000f ), 5.000000f );
      newOffset.Y = (XInt32)( _this->startY + (((XFloat)_this->endY - _this->startY ) 
      * f ));
    }

  if ((( _this->speedX > 0.000000f ) && ( newSpeedX < 0.000000f )) || (( _this->speedX 
      < 0.000000f ) && ( newSpeedX > 0.000000f )))
  {
    newSpeedX = 0.000000f;
    newOffset.X = _this->Offset.X;
  }

  if ((( _this->speedY > 0.000000f ) && ( newSpeedY < 0.000000f )) || (( _this->speedY 
      < 0.000000f ) && ( newSpeedY > 0.000000f )))
  {
    newSpeedY = 0.000000f;
    newOffset.Y = _this->Offset.Y;
  }

  if ( !_this->parkingX && ( newOffset.X < _this->MinOffset.X ))
  {
    _this->startX = (XFloat)newOffset.X;
    _this->endX = _this->MinOffset.X;
    _this->startTimeX = _this->timer->Time;
    _this->parkingX = 1;
  }
  else
    if ( !_this->parkingX && ( newOffset.X > _this->MaxOffset.X ))
    {
      _this->startX = (XFloat)newOffset.X;
      _this->endX = _this->MaxOffset.X;
      _this->startTimeX = _this->timer->Time;
      _this->parkingX = 1;
    }

  if ( !_this->parkingY && ( newOffset.Y < _this->MinOffset.Y ))
  {
    _this->startY = (XFloat)newOffset.Y;
    _this->endY = _this->MinOffset.Y;
    _this->startTimeY = _this->timer->Time;
    _this->parkingY = 1;
  }
  else
    if ( !_this->parkingY && ( newOffset.Y > _this->MaxOffset.Y ))
    {
      _this->startY = (XFloat)newOffset.Y;
      _this->endY = _this->MaxOffset.Y;
      _this->startTimeY = _this->timer->Time;
      _this->parkingY = 1;
    }

  if ((( !_this->parkingX && ( _this->speedX != 0.000000f )) && ( newSpeedX > -20.000000f )) 
      && ( newSpeedX < 20.000000f ))
  {
    newOffset.X = _this->endX;
    _this->speedX = 0.000000f;
    _this->accelerationX = 0.000000f;
    _this->startX = (XFloat)newOffset.X;
  }

  if ((( !_this->parkingY && ( _this->speedY != 0.000000f )) && ( newSpeedY > -20.000000f )) 
      && ( newSpeedY < 20.000000f ))
  {
    newOffset.Y = _this->endY;
    _this->speedY = 0.000000f;
    _this->accelerationY = 0.000000f;
    _this->startY = (XFloat)newOffset.Y;
  }

  if ( EwCompPoint( newOffset, _this->Offset ))
  {
    _this->Delta = EwMovePointNeg( newOffset, _this->Offset );
    _this->Offset = newOffset;
    EwSignal( _this->privateOnSlide, ((XObject)_this ));
  }

  if (((( _this->speedX == 0.000000f ) && ( _this->speedY == 0.000000f )) && !_this->parkingX ) 
      && !_this->parkingY )
  {
    CoreSlideTouchHandler_stopAnimation( _this );
    _this->Sliding = 0;
  }
}

/* 'C' function for method : 'Core::SlideTouchHandler.OnSetSnapNext()' */
void CoreSlideTouchHandler_OnSetSnapNext( CoreSlideTouchHandler _this, XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  _this->SnapNext = value;
}

/* 'C' function for method : 'Core::SlideTouchHandler.OnSetFriction()' */
void CoreSlideTouchHandler_OnSetFriction( CoreSlideTouchHandler _this, XFloat value )
{
  if ( value < 0.000000f )
    value = 0.000000f;

  if ( value > 1.000000f )
    value = 1.000000f;

  if ( value == _this->Friction )
    return;

  _this->Friction = value;

  if ( value < 0.000000f )
    value = 0.000000f;

  _this->frictFactor = value * 10000.000000f;
}

/* Variants derived from the class : 'Core::SlideTouchHandler' */
EW_DEFINE_CLASS_VARIANTS( CoreSlideTouchHandler )
EW_END_OF_CLASS_VARIANTS( CoreSlideTouchHandler )

/* Virtual Method Table (VMT) for the class : 'Core::SlideTouchHandler' */
EW_DEFINE_CLASS( CoreSlideTouchHandler, CoreRectView, timer, privateOnStart, state, 
                 state, state, state, "Core::SlideTouchHandler" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreSlideTouchHandler_Draw,
  CoreSlideTouchHandler_HandleEvent,
  CoreSlideTouchHandler_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( CoreSlideTouchHandler )

/* Initializer for the class 'Core::KeyPressHandler' */
void CoreKeyPressHandler__Init( CoreKeyPressHandler _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreKeyPressHandler );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreKeyPressHandler );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Filter = CoreKeyCodeAnyKey;

  /* Call the user defined constructor */
  CoreKeyPressHandler_Init( _this, aArg );
}

/* Re-Initializer for the class 'Core::KeyPressHandler' */
void CoreKeyPressHandler__ReInit( CoreKeyPressHandler _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::KeyPressHandler' */
void CoreKeyPressHandler__Done( CoreKeyPressHandler _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Core::KeyPressHandler.Init()' */
void CoreKeyPressHandler_Init( CoreKeyPressHandler _this, XHandle aArg )
{
  CoreGroup group;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  group = EwCastObject( _this->_.XObject._.Link, CoreGroup );

  if ( group == 0 )
  {
    EwThrow( EwLoadString( &_Const0018 ));
    return;
  }

  _this->next = group->keyHandlers;
  group->keyHandlers = _this;
}

/* 'C' function for method : 'Core::KeyPressHandler.HandleEvent()' */
XBool CoreKeyPressHandler_HandleEvent( CoreKeyPressHandler _this, CoreKeyEvent aEvent )
{
  if (( aEvent != 0 ) && CoreKeyEvent_IsCode( aEvent, _this->Filter ))
  {
    _this->Down = aEvent->Down;
    _this->Code = aEvent->Code;
    _this->CharCode = aEvent->CharCode;
    _this->Time = aEvent->Super1.Time;

    if ( aEvent->Down )
    {
      _this->RepetitionCount = _this->pressCounter;
      _this->Repetition = (XBool)( _this->pressCounter > 0 );

      if ( _this->Repetition )
        EwSignal( _this->OnHold, ((XObject)_this ));
      else
        EwSignal( _this->OnPress, ((XObject)_this ));

      _this->pressCounter = _this->pressCounter + 1;
      return 1;
    }

    if ( !aEvent->Down )
    {
      _this->Repetition = (XBool)( _this->pressCounter > 1 );
      _this->RepetitionCount = _this->pressCounter - 1;
      _this->pressCounter = 0;
      return 1;
    }
  }

  return 0;
}

/* Variants derived from the class : 'Core::KeyPressHandler' */
EW_DEFINE_CLASS_VARIANTS( CoreKeyPressHandler )
EW_END_OF_CLASS_VARIANTS( CoreKeyPressHandler )

/* Virtual Method Table (VMT) for the class : 'Core::KeyPressHandler' */
EW_DEFINE_CLASS( CoreKeyPressHandler, XObject, next, OnPress, pressCounter, pressCounter, 
                 pressCounter, pressCounter, "Core::KeyPressHandler" )
EW_END_OF_CLASS( CoreKeyPressHandler )

/* Initializer for the class 'Core::CursorHit' */
void CoreCursorHit__Init( CoreCursorHit _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreCursorHit );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreCursorHit );
}

/* Re-Initializer for the class 'Core::CursorHit' */
void CoreCursorHit__ReInit( CoreCursorHit _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::CursorHit' */
void CoreCursorHit__Done( CoreCursorHit _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* The method Initialize() initializes this Core::CursorHit object with the given 
   parameter. The value offset stores an optional displacement if the user has touched 
   the view outside its boundary area. This can occur when the user tries to hit 
   a small GUI component with a thick finger. This offset value determines the number 
   of pixel to correct all cursor coordinates delivered in the following Core::CursorEvent 
   and Core::DragEvent events. In this manner the target view will receive coordinates 
   lying correctly within its boundary area. */
CoreCursorHit CoreCursorHit_Initialize( CoreCursorHit _this, CoreView aView, XPoint 
  aOffset )
{
  _this->View = aView;
  _this->Offset = aOffset;
  _this->Deviation = ( aOffset.X * aOffset.X ) + ( aOffset.Y * aOffset.Y );
  return _this;
}

/* Variants derived from the class : 'Core::CursorHit' */
EW_DEFINE_CLASS_VARIANTS( CoreCursorHit )
EW_END_OF_CLASS_VARIANTS( CoreCursorHit )

/* Virtual Method Table (VMT) for the class : 'Core::CursorHit' */
EW_DEFINE_CLASS( CoreCursorHit, XObject, View, Deviation, Deviation, Deviation, 
                 Deviation, Deviation, "Core::CursorHit" )
EW_END_OF_CLASS( CoreCursorHit )

/* Initializer for the class 'Core::LayoutContext' */
void CoreLayoutContext__Init( CoreLayoutContext _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreLayoutContext );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreLayoutContext );
}

/* Re-Initializer for the class 'Core::LayoutContext' */
void CoreLayoutContext__ReInit( CoreLayoutContext _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::LayoutContext' */
void CoreLayoutContext__Done( CoreLayoutContext _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Core::LayoutContext' */
EW_DEFINE_CLASS_VARIANTS( CoreLayoutContext )
EW_END_OF_CLASS_VARIANTS( CoreLayoutContext )

/* Virtual Method Table (VMT) for the class : 'Core::LayoutContext' */
EW_DEFINE_CLASS( CoreLayoutContext, XObject, outline, extent, extent, extent, extent, 
                 extent, "Core::LayoutContext" )
EW_END_OF_CLASS( CoreLayoutContext )

/* Initializer for the class 'Core::LayoutLineContext' */
void CoreLayoutLineContext__Init( CoreLayoutLineContext _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreLayoutContext__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreLayoutLineContext );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreLayoutLineContext );
}

/* Re-Initializer for the class 'Core::LayoutLineContext' */
void CoreLayoutLineContext__ReInit( CoreLayoutLineContext _this )
{
  /* At first re-initialize the super class ... */
  CoreLayoutContext__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::LayoutLineContext' */
void CoreLayoutLineContext__Done( CoreLayoutLineContext _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreLayoutContext );

  /* Don't forget to deinitialize the super class ... */
  CoreLayoutContext__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Core::LayoutLineContext' */
EW_DEFINE_CLASS_VARIANTS( CoreLayoutLineContext )
EW_END_OF_CLASS_VARIANTS( CoreLayoutLineContext )

/* Virtual Method Table (VMT) for the class : 'Core::LayoutLineContext' */
EW_DEFINE_CLASS( CoreLayoutLineContext, CoreLayoutContext, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Core::LayoutLineContext" )
EW_END_OF_CLASS( CoreLayoutLineContext )

/* Initializer for the class 'Core::LayoutQuadContext' */
void CoreLayoutQuadContext__Init( CoreLayoutQuadContext _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreLayoutContext__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreLayoutQuadContext );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreLayoutQuadContext );
}

/* Re-Initializer for the class 'Core::LayoutQuadContext' */
void CoreLayoutQuadContext__ReInit( CoreLayoutQuadContext _this )
{
  /* At first re-initialize the super class ... */
  CoreLayoutContext__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::LayoutQuadContext' */
void CoreLayoutQuadContext__Done( CoreLayoutQuadContext _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreLayoutContext );

  /* Don't forget to deinitialize the super class ... */
  CoreLayoutContext__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Core::LayoutQuadContext' */
EW_DEFINE_CLASS_VARIANTS( CoreLayoutQuadContext )
EW_END_OF_CLASS_VARIANTS( CoreLayoutQuadContext )

/* Virtual Method Table (VMT) for the class : 'Core::LayoutQuadContext' */
EW_DEFINE_CLASS( CoreLayoutQuadContext, CoreLayoutContext, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Core::LayoutQuadContext" )
EW_END_OF_CLASS( CoreLayoutQuadContext )

/* Initializer for the class 'Core::DialogContext' */
void CoreDialogContext__Init( CoreDialogContext _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreDialogContext );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreDialogContext );
}

/* Re-Initializer for the class 'Core::DialogContext' */
void CoreDialogContext__ReInit( CoreDialogContext _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::DialogContext' */
void CoreDialogContext__Done( CoreDialogContext _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Core::DialogContext' */
EW_DEFINE_CLASS_VARIANTS( CoreDialogContext )
EW_END_OF_CLASS_VARIANTS( CoreDialogContext )

/* Virtual Method Table (VMT) for the class : 'Core::DialogContext' */
EW_DEFINE_CLASS( CoreDialogContext, XObject, group, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Core::DialogContext" )
EW_END_OF_CLASS( CoreDialogContext )

/* Initializer for the class 'Core::TaskQueue' */
void CoreTaskQueue__Init( CoreTaskQueue _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreTaskQueue );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreTaskQueue );
}

/* Re-Initializer for the class 'Core::TaskQueue' */
void CoreTaskQueue__ReInit( CoreTaskQueue _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::TaskQueue' */
void CoreTaskQueue__Done( CoreTaskQueue _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Core::TaskQueue.completeTask()' */
void CoreTaskQueue_completeTask( CoreTaskQueue _this )
{
  CoreTask task;

  if ( _this->current == 0 )
    return;

  task = _this->current;
  _this->current->queue = 0;
  _this->current = 0;
  EwPostSignal( EwNewSlot( _this, CoreTaskQueue_onPreDispatchNext1 ), ((XObject)_this ));
  CoreTask__OnComplete( task, _this );
}

/* 'C' function for method : 'Core::TaskQueue.onDispatchNext()' */
void CoreTaskQueue_onDispatchNext( CoreTaskQueue _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->current != 0 )
    return;

  if ( _this->first == 0 )
    return;

  _this->current = _this->first;
  _this->first = _this->first->next;

  if ( _this->first != 0 )
    _this->first->prev = 0;
  else
    _this->last = 0;

  _this->current->next = 0;
  _this->isInOnStart = 1;
  CoreTask__OnStart( _this->current, _this );
  _this->isInOnStart = 0;
}

/* 'C' function for method : 'Core::TaskQueue.onPreDispatchNext3()' */
void CoreTaskQueue_onPreDispatchNext3( CoreTaskQueue _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, CoreTaskQueue_onDispatchNext ), ((XObject)_this ));
}

/* 'C' function for method : 'Core::TaskQueue.onPreDispatchNext2()' */
void CoreTaskQueue_onPreDispatchNext2( CoreTaskQueue _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, CoreTaskQueue_onPreDispatchNext3 ), ((XObject)_this ));
}

/* 'C' function for method : 'Core::TaskQueue.onPreDispatchNext1()' */
void CoreTaskQueue_onPreDispatchNext1( CoreTaskQueue _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, CoreTaskQueue_onPreDispatchNext2 ), ((XObject)_this ));
}

/* The method CancelTask() allows the application to remove a previously registered 
   task from the task queue. The affected task is determined by the parameter aTask.
   If the affected task is currently executed, the task is notified to immediately 
   finalize its work. Afterwards the queue starts the next available task. The method 
   will throw an error if you try to cancel a task not belonging to this queue. */
void CoreTaskQueue_CancelTask( CoreTaskQueue _this, CoreTask aTask )
{
  XBool wasStarted;

  if (( aTask == 0 ) || ( aTask->queue == 0 ))
    return;

  if ( aTask->queue != _this )
  {
    EwThrow( EwLoadString( &_Const0019 ));
    return;
  }

  wasStarted = 0;

  if ( _this->current == aTask )
  {
    _this->current = 0;
    wasStarted = 1;
    EwPostSignal( EwNewSlot( _this, CoreTaskQueue_onPreDispatchNext1 ), ((XObject)_this ));
  }
  else
  {
    if ( aTask->next != 0 )
      aTask->next->prev = aTask->prev;
    else
      _this->last = aTask->prev;

    if ( aTask->prev != 0 )
      aTask->prev->next = aTask->next;
    else
      _this->first = aTask->next;

    aTask->prev = 0;
    aTask->next = 0;
  }

  aTask->queue = 0;

  if ( wasStarted )
    CoreTask__OnCancel( aTask, _this );
}

/* The method ScheduleTask() registers the task passed in the parameter aTask for 
   later execution.
   The tasks are executed in the order in which they have been previously scheduled. 
   If the parameter aWithPriority is false, the new task will be arranged at the 
   end of the list with waiting tasks. If the parameter is true, the task is enqueued 
   in front of all waiting tasks.
   The method will throw an error if you try to schedule the same task twice. */
void CoreTaskQueue_ScheduleTask( CoreTaskQueue _this, CoreTask aTask, XBool aWithPriority )
{
  if ( aTask == 0 )
    return;

  if ( aTask->queue != 0 )
  {
    EwThrow( EwLoadString( &_Const001A ));
    return;
  }

  aTask->queue = _this;

  if ( aWithPriority )
  {
    aTask->next = _this->first;

    if ( _this->first != 0 )
      _this->first->prev = aTask;
    else
      _this->last = aTask;

    _this->first = aTask;
  }
  else
  {
    aTask->prev = _this->last;

    if ( _this->last != 0 )
      _this->last->next = aTask;
    else
      _this->first = aTask;

    _this->last = aTask;
  }

  if ( _this->current == 0 )
    EwPostSignal( EwNewSlot( _this, CoreTaskQueue_onPreDispatchNext1 ), ((XObject)_this ));
}

/* Variants derived from the class : 'Core::TaskQueue' */
EW_DEFINE_CLASS_VARIANTS( CoreTaskQueue )
EW_END_OF_CLASS_VARIANTS( CoreTaskQueue )

/* Virtual Method Table (VMT) for the class : 'Core::TaskQueue' */
EW_DEFINE_CLASS( CoreTaskQueue, XObject, current, isInOnStart, isInOnStart, isInOnStart, 
                 isInOnStart, isInOnStart, "Core::TaskQueue" )
EW_END_OF_CLASS( CoreTaskQueue )

/* Initializer for the class 'Core::Task' */
void CoreTask__Init( CoreTask _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreTask );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreTask );
}

/* Re-Initializer for the class 'Core::Task' */
void CoreTask__ReInit( CoreTask _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::Task' */
void CoreTask__Done( CoreTask _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* The method OnComplete() is called when the task is done with its work. The default 
   implementation of this method does nothing. You can override this method in derived 
   task classes and implement what to do when the task is finished. For example, 
   you can release resources used temporarily during animations.
   To complete a task you should call explicitly the method @Complete(). The parameter 
   aQueue refers to the queue this task belonged to. It can be used e.g. to schedule 
   again a task to the same queue, etc. */
void CoreTask_OnComplete( CoreTask _this, CoreTaskQueue aQueue )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aQueue );
}

/* Wrapper function for the virtual method : 'Core::Task.OnComplete()' */
__declspec( naked ) void CoreTask__OnComplete( void* _this, CoreTaskQueue aQueue )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aQueue );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 56 ]
  }
}

/* The method OnCancel() is called when the task is canceled after being started. 
   The default implementation of this method does nothing. You can override this 
   method in derived task classes and implement what to do when the task is prematurely 
   aborted. For example, you can stop running timers and effects started in the 
   preceding @OnStart() method.
   To cancel a task you should call explicitly the method @Cancel(). The parameter 
   aQueue refers to the queue this task belonged to. It can be used e.g. to schedule 
   again a task to the same queue, etc. */
void CoreTask_OnCancel( CoreTask _this, CoreTaskQueue aQueue )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aQueue );
}

/* Wrapper function for the virtual method : 'Core::Task.OnCancel()' */
__declspec( naked ) void CoreTask__OnCancel( void* _this, CoreTaskQueue aQueue )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aQueue );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 60 ]
  }
}

/* The method OnStart() is called at the begin of the execution of this task. The 
   default implementation of the method simply cancels the task causing the next 
   available task in the task queue to be started. You should override this method 
   in derived task classes to implement what the task should do.
   There are three typical application cases how to implement the OnStart() method:
   - In its simplest case the entire task algorithm is implemented in the OnStart() 
   method. In this case the method @Complete() should be called before leaving OnStart().
   - If the task does take long time for execution by using timers or effects, you 
   should put in OnStart() the code necessary to start the timers/effects. Don't 
   forget to call @Complete() when all timers/effects are done.
   - If the task is divided in many small execution steps, the OnStart() method 
   should call @Continue() to request the @OnContinue() method to be executed after 
   a short delay (usually after the next screen update). In @OnContinue() you can 
   perform the next step of the task. If necessary, @OnContinue() can also request 
   to be called again after a short delay. At the end of the task, after the last 
   step is terminated, don't forget to call @Complete().
   The parameter aQueue refers to the queue this task belongs to. It can be used 
   to schedule more task to execute later. */
void CoreTask_OnStart( CoreTask _this, CoreTaskQueue aQueue )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aQueue );

  CoreTask_Cancel( _this );
}

/* Wrapper function for the virtual method : 'Core::Task.OnStart()' */
__declspec( naked ) void CoreTask__OnStart( void* _this, CoreTaskQueue aQueue )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aQueue );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 64 ]
  }
}

/* The method Complete() informs the task queue about the completion of this task. 
   Thereupon the next available task in the queue can be executed. This method is 
   usually called in context of the @OnStart() or @OnContinue() method when the 
   task has finalized its work. Calling the method for a not current task has no 
   effect. */
void CoreTask_Complete( CoreTask _this )
{
  if (( _this->queue != 0 ) && ( _this->queue->current == _this ))
    CoreTaskQueue_completeTask( _this->queue );
}

/* Wrapper function for the virtual method : 'Core::Task.Complete()' */
__declspec( naked ) void CoreTask__Complete( void* _this )
{
  EW_UNUSED_ARG( _this );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 68 ]
  }
}

/* The method Cancel() removes this task from the task queue where the task has 
   been previously scheduled. In the case the task is already in progress, the queue 
   will advise the task to abort its work immediately before the task is removed 
   from the queue (see @OnCancel()).
   Whether a task is waiting for execution can be determined by @IsScheduled(). 
   Whether a task is in progress can be determined by @IsCurrent().
   Canceling a running task will cause the task queue to start the next available 
   task. */
void CoreTask_Cancel( CoreTask _this )
{
  if ( _this->queue != 0 )
    CoreTaskQueue_CancelTask( _this->queue, _this );
}

/* The method IsCurrent() returns 'true' if the affected task is currently performed. 
   The method returns 'false' if the task is done, waiting for execution or it simply 
   doesn't belong to any task queue. */
XBool CoreTask_IsCurrent( CoreTask _this )
{
  return (XBool)(( _this->queue != 0 ) && ( _this->queue->current == _this ));
}

/* Variants derived from the class : 'Core::Task' */
EW_DEFINE_CLASS_VARIANTS( CoreTask )
EW_END_OF_CLASS_VARIANTS( CoreTask )

/* Virtual Method Table (VMT) for the class : 'Core::Task' */
EW_DEFINE_CLASS( CoreTask, XObject, queue, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, "Core::Task" )
  CoreTask_OnComplete,
  CoreTask_OnCancel,
  CoreTask_OnStart,
  CoreTask_Complete,
EW_END_OF_CLASS( CoreTask )

/* Initializer for the class 'Core::Resource' */
void CoreResource__Init( CoreResource _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreResource );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreResource );

  /* Call the user defined constructor */
  CoreResource_Init( _this, aArg );
}

/* Re-Initializer for the class 'Core::Resource' */
void CoreResource__ReInit( CoreResource _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::Resource' */
void CoreResource__Done( CoreResource _this )
{
  /* Call the user defined destructor of the class */
  CoreResource_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Core::Resource.Done()' */
void CoreResource_Done( CoreResource _this )
{
  if ( _this->resource != 0 )
    {
      #define this _this

      /* Remove 'this' resource object from the Resource Manager. */
      EwDeregisterResource((XObject)this );

      #undef this
    }

  _this->resource = 0;
}

/* 'C' function for method : 'Core::Resource.Init()' */
void CoreResource_Init( CoreResource _this, XHandle aArg )
{
  {
    #define this _this

    /* aArg is a pointer to the area in the ROM where the resources code is
       stored. Register 'this' object by the Resource Manager. */
    if ( aArg )
      EwRegisterResource((XObject)this, (const void*)aArg );

    #undef this
  }
  _this->resource = aArg;
}

/* Variants derived from the class : 'Core::Resource' */
EW_DEFINE_CLASS_VARIANTS( CoreResource )
EW_END_OF_CLASS_VARIANTS( CoreResource )

/* Virtual Method Table (VMT) for the class : 'Core::Resource' */
EW_DEFINE_CLASS( CoreResource, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 "Core::Resource" )
EW_END_OF_CLASS( CoreResource )

/* User defined inline code: 'Core::TimerProc' */
  /* This local procedure will be called when the OS timer is expired, so 
     the routine invokes the Core::Timer.Trigger() method of the timer 
     object. */
  static void TimerProc( XHandle aArg )
  {
    CoreTimer__Trigger((CoreTimer)aArg );
  }


/* Initializer for the class 'Core::Timer' */
void CoreTimer__Init( CoreTimer _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreTimer );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreTimer );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Period = 1000;
}

/* Re-Initializer for the class 'Core::Timer' */
void CoreTimer__ReInit( CoreTimer _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::Timer' */
void CoreTimer__Done( CoreTimer _this )
{
  /* Call the user defined destructor of the class */
  CoreTimer_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Core::Timer.Done()' */
void CoreTimer_Done( CoreTimer _this )
{
  XHandle tmp = _this->timer;

  if ( tmp != 0 )
    EwDestroyTimer((XTimer*)tmp );

  _this->timer = 0;
}

/* 'C' function for method : 'Core::Timer.restart()' */
void CoreTimer_restart( CoreTimer _this, XInt32 aBegin, XInt32 aPeriod )
{
  XHandle tmp;

  if ( aBegin < 0 )
    aBegin = 0;

  if ( aPeriod < 0 )
    aPeriod = 0;

  tmp = _this->timer;

  if (( tmp == 0 ) && (( aBegin > 0 ) || ( aPeriod > 0 )))
    {
      #define this _this

      tmp = (XHandle)(void*)EwCreateTimer( TimerProc, (XHandle)(void*)this );

      #undef this
    }

  if ( tmp != 0 )
    {
      /* At first stop the timer ... */
      EwResetTimer((XTimer*)tmp );

      /* and then restart it again. */
      EwStartTimer((XTimer*)tmp, aBegin, aPeriod );
    }

  _this->timer = tmp;
}

/* 'C' function for method : 'Core::Timer.OnSetPeriod()' */
void CoreTimer_OnSetPeriod( CoreTimer _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value == _this->Period )
    return;

  _this->Period = value;

  if ( _this->Enabled )
    CoreTimer_restart( _this, _this->Begin, value );
}

/* 'C' function for method : 'Core::Timer.OnSetBegin()' */
void CoreTimer_OnSetBegin( CoreTimer _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value == _this->Begin )
    return;

  _this->Begin = value;

  if ( _this->Enabled )
    CoreTimer_restart( _this, value, _this->Period );
}

/* 'C' function for method : 'Core::Timer.OnSetEnabled()' */
void CoreTimer_OnSetEnabled( CoreTimer _this, XBool value )
{
  if ( value == _this->Enabled )
    return;

  _this->Enabled = value;

  if ( value )
    CoreTimer_restart( _this, _this->Begin, _this->Period );
  else
    CoreTimer_restart( _this, 0, 0 );

  _this->Time = CoreTimer_GetCurrentTime( _this );
}

/* The method 'GetCurrentTime()' returns the current time expressed in milliseconds. 
   The value can be used e.g. to calculate the time span elapsed since the timer 
   was expired (see @Time). */
XUInt32 CoreTimer_GetCurrentTime( CoreTimer _this )
{
  XUInt32 ticksCount;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  ticksCount = 0;
  ticksCount = (XUInt32)EwGetTicks();
  return ticksCount;
}

/* The method Trigger() will be invoked when the timer is expired (when the interval 
   defined in @Begin or @Period is elapsed). The method can be overridden and implemented 
   in derived classes. The default implementation of this method sends a signal 
   to the slot method stored in the @OnTrigger property. */
void CoreTimer_Trigger( CoreTimer _this )
{
  _this->Time = CoreTimer_GetCurrentTime( _this );

  if ( _this->Period == 0 )
    CoreTimer_OnSetEnabled( _this, 0 );

  EwSignal( _this->OnTrigger, ((XObject)_this ));
}

/* Wrapper function for the virtual method : 'Core::Timer.Trigger()' */
__declspec( naked ) void CoreTimer__Trigger( void* _this )
{
  EW_UNUSED_ARG( _this );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 56 ]
  }
}

/* The slot method 'StartTimer' will re-start the timer if a signal is sent to this 
   slot method. The timer will start with the interval specified in @Begin. After 
   the interval is elapsed, the timer continue running with the interval defined 
   in @Period. */
void CoreTimer_StartTimer( CoreTimer _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Enabled )
    CoreTimer_OnSetEnabled( _this, 0 );

  CoreTimer_OnSetEnabled( _this, 1 );
}

/* Variants derived from the class : 'Core::Timer' */
EW_DEFINE_CLASS_VARIANTS( CoreTimer )
EW_END_OF_CLASS_VARIANTS( CoreTimer )

/* Virtual Method Table (VMT) for the class : 'Core::Timer' */
EW_DEFINE_CLASS( CoreTimer, XObject, OnTrigger, OnTrigger, timer, timer, timer, 
                 timer, "Core::Timer" )
  CoreTimer_Trigger,
EW_END_OF_CLASS( CoreTimer )

/* Initializer for the class 'Core::Time' */
void CoreTime__Init( CoreTime _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreTime );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreTime );
}

/* Re-Initializer for the class 'Core::Time' */
void CoreTime__ReInit( CoreTime _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::Time' */
void CoreTime__Done( CoreTime _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Core::Time.getMonthName()' */
XString CoreTime_getMonthName( CoreTime _this, XInt32 aMonth, XBool aAbbreviated )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  if ( aAbbreviated )
    switch ( aMonth )
    {
      case 1 :
        return EwLoadString( &ResourcesJanuaryAbbr );

      case 2 :
        return EwLoadString( &ResourcesFebruaryAbbr );

      case 3 :
        return EwLoadString( &ResourcesMarchAbbr );

      case 4 :
        return EwLoadString( &ResourcesAprilAbbr );

      case 5 :
        return EwLoadString( &ResourcesMayAbbr );

      case 6 :
        return EwLoadString( &ResourcesJuneAbbr );

      case 7 :
        return EwLoadString( &ResourcesJulyAbbr );

      case 8 :
        return EwLoadString( &ResourcesAugustAbbr );

      case 9 :
        return EwLoadString( &ResourcesSeptemberAbbr );

      case 10 :
        return EwLoadString( &ResourcesOctoberAbbr );

      case 11 :
        return EwLoadString( &ResourcesNovemberAbbr );

      case 12 :
        return EwLoadString( &ResourcesDecemberAbbr );

      default : 
        return 0;
    }
  else
    switch ( aMonth )
    {
      case 1 :
        return EwLoadString( &ResourcesJanuary );

      case 2 :
        return EwLoadString( &ResourcesFebruary );

      case 3 :
        return EwLoadString( &ResourcesMarch );

      case 4 :
        return EwLoadString( &ResourcesApril );

      case 5 :
        return EwLoadString( &ResourcesMay );

      case 6 :
        return EwLoadString( &ResourcesJune );

      case 7 :
        return EwLoadString( &ResourcesJuly );

      case 8 :
        return EwLoadString( &ResourcesAugust );

      case 9 :
        return EwLoadString( &ResourcesSeptember );

      case 10 :
        return EwLoadString( &ResourcesOctober );

      case 11 :
        return EwLoadString( &ResourcesNovember );

      case 12 :
        return EwLoadString( &ResourcesDecember );

      default : 
        return 0;
    }
}

/* 'C' function for method : 'Core::Time.getDayOfWeekName()' */
XString CoreTime_getDayOfWeekName( CoreTime _this, XInt32 aDayOfWeek, XBool aAbbreviated )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  if ( aAbbreviated )
    switch ( aDayOfWeek )
    {
      case 1 :
        return EwLoadString( &ResourcesMondayAbbr );

      case 2 :
        return EwLoadString( &ResourcesTuesdayAbbr );

      case 3 :
        return EwLoadString( &ResourcesWednesdayAbbr );

      case 4 :
        return EwLoadString( &ResourcesThursdayAbbr );

      case 5 :
        return EwLoadString( &ResourcesFridayAbbr );

      case 6 :
        return EwLoadString( &ResourcesSaturdayAbbr );

      case 0 :
        return EwLoadString( &ResourcesSundayAbbr );

      default : 
        return 0;
    }
  else
    switch ( aDayOfWeek )
    {
      case 1 :
        return EwLoadString( &ResourcesMonday );

      case 2 :
        return EwLoadString( &ResourcesTuesday );

      case 3 :
        return EwLoadString( &ResourcesWednesday );

      case 4 :
        return EwLoadString( &ResourcesThursday );

      case 5 :
        return EwLoadString( &ResourcesFriday );

      case 6 :
        return EwLoadString( &ResourcesSaturday );

      case 0 :
        return EwLoadString( &ResourcesSunday );

      default : 
        return 0;
    }
}

/* 'C' function for method : 'Core::Time.getCurrentTime()' */
XInt64 CoreTime_getCurrentTime( CoreTime _this )
{
  XInt64 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  result = 0;
  result = EwGetTime();
  return result;
}

/* 'C' function for method : 'Core::Time.OnGetTime()' */
XInt64 CoreTime_OnGetTime( CoreTime _this )
{
  XInt32 d = _this->Day;
  XInt32 m = _this->Month;
  XInt32 y = _this->Year - (( m <= 2 )? 1 : 0 );
  XInt32 era = (( y >= 0 )? y : y - 399 ) / 400;
  XInt32 yoe = y - ( era * 400 );
  XInt32 doy = (((( 153 * ( m + (( m > 2 )? -3 : 9 ))) + 2 ) / 5 ) + d ) - 1;
  XInt32 doe = ((( yoe * 365 ) + ( yoe / 4 )) - ( yoe / 100 )) + doy;
  XInt32 days = (( era * 146097 ) + doe ) - 719468;

  return ((((XInt64)days * 86400 ) + ((XInt64)_this->Hour * 3600 )) + ((XInt64)_this->Minute 
    * 60 )) + (XInt64)_this->Second;
}

/* 'C' function for method : 'Core::Time.OnSetTime()' */
void CoreTime_OnSetTime( CoreTime _this, XInt64 value )
{
  XInt32 z;
  XInt32 era;
  XInt32 doe;
  XInt32 yoe;
  XInt32 y;
  XInt32 doy;
  XInt32 mp;
  XInt32 d;
  XInt32 m;
  XInt32 h;
  XInt32 i;
  XInt32 s;

  value += 62162035200LL;

  if ( value < 0 )
    value = 0;

  z = (XInt32)( value / 86400 );
  era = (( z >= 0 )? z : z - 146096 ) / 146097;
  doe = z - ( era * 146097 );
  yoe = ((( doe - ( doe / 1460 )) + ( doe / 36524 )) - ( doe / 146096 )) / 365;
  y = yoe + ( era * 400 );
  doy = doe - ((( 365 * yoe ) + ( yoe / 4 )) - ( yoe / 100 ));
  mp = (( 5 * doy ) + 2 ) / 153;
  d = ( doy - ((( 153 * mp ) + 2 ) / 5 )) + 1;
  m = mp + (( mp < 10 )? 3 : -9 );
  h = (XInt32)(( value / 3600 ) % 24 );
  i = (XInt32)(( value / 60 ) % 60 );
  s = (XInt32)( value % 60 );
  _this->Year = y + (( m <= 2 )? 1 : 0 );
  CoreTime_OnSetMonth( _this, m );
  CoreTime_OnSetDay( _this, d );
  CoreTime_OnSetHour( _this, h + (( h < 0 )? 24 : 0 ));
  CoreTime_OnSetMinute( _this, i + (( i < 0 )? 60 : 0 ));
  CoreTime_OnSetSecond( _this, s + (( s < 0 )? 60 : 0 ));
}

/* 'C' function for method : 'Core::Time.OnGetCurrentTime()' */
CoreTime CoreTime_OnGetCurrentTime( CoreTime _this )
{
  return CoreTime_Initialize( EwNewObject( CoreTime, 0 ), CoreTime_getCurrentTime( 
    _this ));
}

/* 'C' function for method : 'Core::Time.OnGetWeekOfYear()' */
XInt32 CoreTime_OnGetWeekOfYear( CoreTime _this )
{
  XInt32 doy = CoreTime_OnGetDayOfYear( _this ) - 1;
  XInt32 dow = ( 6 + CoreTime_OnGetDayOfWeek( _this )) % 7;
  XInt32 dow1Jan = (( 371 + dow ) - doy ) % 7;

  if ( _this->Month == 12 )
  {
    XInt32 d = _this->Day;

    if (( d == 31 ) && ( dow < 3 ))
      return 0;

    if (( d == 30 ) && ( dow < 2 ))
      return 0;

    if (( d == 29 ) && ( dow < 1 ))
      return 0;
  }

  if ( dow1Jan <= 3 )
    doy += dow1Jan;
  else
    doy -= ( 7 - dow1Jan );

  if ( doy < 0 )
  {
    XInt32 d = _this->Day;
    XInt32 m = _this->Month;
    _this->Year--;
    CoreTime_OnSetDay( _this, 31 );
    CoreTime_OnSetMonth( _this, 12 );
    doy = CoreTime_OnGetDayOfYear( _this ) - 1;
    dow = ( 6 + CoreTime_OnGetDayOfWeek( _this )) % 7;
    dow1Jan = (( 371 + dow ) - doy ) % 7;

    if ( dow1Jan <= 3 )
      doy += dow1Jan;
    else
      doy -= dow1Jan;

    _this->Year++;
    CoreTime_OnSetDay( _this, d );
    CoreTime_OnSetMonth( _this, m );
  }

  return doy / 7;
}

/* 'C' function for method : 'Core::Time.OnGetDayOfYear()' */
XInt32 CoreTime_OnGetDayOfYear( CoreTime _this )
{
  XInt32 d = _this->Day;
  XInt32 m = _this->Month;
  XInt32 y = _this->Year;
  XInt32 ly = (( !!!( y % 4 ) && ( !!( y % 100 ) || !!!( y % 400 )))? 1 : 0 );

  switch ( m )
  {
    case 2 :
      d += 31;
    break;

    case 3 :
      d += ( 59 + ly );
    break;

    case 4 :
      d += ( 90 + ly );
    break;

    case 5 :
      d += ( 120 + ly );
    break;

    case 6 :
      d += ( 151 + ly );
    break;

    case 7 :
      d += ( 181 + ly );
    break;

    case 8 :
      d += ( 212 + ly );
    break;

    case 9 :
      d += ( 243 + ly );
    break;

    case 10 :
      d += ( 273 + ly );
    break;

    case 11 :
      d += ( 304 + ly );
    break;

    case 12 :
      d += ( 334 + ly );
    break;

    default :; 
  }

  return d;
}

/* 'C' function for method : 'Core::Time.OnGetDayOfWeek()' */
XInt32 CoreTime_OnGetDayOfWeek( CoreTime _this )
{
  XInt32 d = _this->Day;
  XInt32 m = _this->Month + (( _this->Month > 2 )? -2 : 10 );
  XInt32 y = _this->Year - (( _this->Month <= 2 )? 1 : 0 );
  XInt32 c = y / 100;

  y %= 100;
  d += ((((((( 26 * m ) - 2 ) / 10 ) + y ) + ( y / 4 )) + ( c / 4 )) - ( 2 * c ));

  if ( d >= 0 )
    return d % 7;
  else
    return ( 7 - ( -d % 7 )) % 7;
}

/* 'C' function for method : 'Core::Time.OnSetSecond()' */
void CoreTime_OnSetSecond( CoreTime _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 59 )
    value = 59;

  _this->Second = value;
}

/* 'C' function for method : 'Core::Time.OnSetMinute()' */
void CoreTime_OnSetMinute( CoreTime _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 59 )
    value = 59;

  _this->Minute = value;
}

/* 'C' function for method : 'Core::Time.OnSetHour()' */
void CoreTime_OnSetHour( CoreTime _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 23 )
    value = 23;

  _this->Hour = value;
}

/* 'C' function for method : 'Core::Time.OnSetDay()' */
void CoreTime_OnSetDay( CoreTime _this, XInt32 value )
{
  if ( value < 1 )
    value = 1;

  if ( value > 31 )
    value = 31;

  _this->Day = value;
}

/* 'C' function for method : 'Core::Time.OnSetMonth()' */
void CoreTime_OnSetMonth( CoreTime _this, XInt32 value )
{
  if ( value < 1 )
    value = 1;

  if ( value > 12 )
    value = 12;

  _this->Month = value;
}

/* The method Format() converts the stored date and time accordingly to the supplied 
   aFormat parameter in a string. The aFormat parameter consists of format codes, 
   preceded by the percent sign '%'. At the runtime the codes are replaced with 
   their corresponding content. All other signs that do not begin with % are simply 
   taken over from aFormat to the output string. Following codes are available:
   -%d Day of month as decimal number (01-31)
   -%H Hour in 24-hour format (00-23)
   -%I Hour in 12-hour format (01-12)
   -%m Month as decimal number (01-12)
   -%M Minute as decimal number (00-59)
   -%p AM / PM indicator
   -%S Second as decimal number (00-59)
   -%w Weekday as decimal number (0-6; Sunday is 0)
   -%y Year without century, as decimal number (00-99)
   -%Y Year with century as decimal number
   -%j Day of year as decimal number (001-366)
   -%W Week of year as decimal number with Monday as first day of week (00-53)
   -%a Abbreviated weekday name
   -%A Weekday name
   -%b Abbreviated month name
   -%B Month name
   To remove the leading zeros, the '#' sign may prefix the following format code. 
   For example '%#m' will format the month as a decimal number in the range 1-12. 
   In contrast to it, '%m' formats the number with the leading zero sign 01-12.
   The month and weekday names are stored in constants within the unit @Resources. 
   To adapt them to a new language, you can create variants of these constants. */
XString CoreTime_Format( CoreTime _this, XString aFormat )
{
  XString result = 0;
  XInt32 inx = 0;

  while ( EwGetStringChar( aFormat, inx ) != 0 )
    if ( EwGetStringChar( aFormat, inx ) == '%' )
    {
      XInt32 leadingZeros = 1;
      inx = inx + 1;

      if ( EwGetStringChar( aFormat, inx ) == '#' )
      {
        inx = inx + 1;
        leadingZeros = 0;
      }

      switch ( EwGetStringChar( aFormat, inx ))
      {
        case 'd' :
          result = EwConcatString( result, EwNewStringInt( _this->Day, 2 * leadingZeros, 
          10 ));
        break;

        case 'H' :
          result = EwConcatString( result, EwNewStringInt( _this->Hour, 2 * leadingZeros, 
          10 ));
        break;

        case 'I' :
          if (( _this->Hour % 12 ) == 0 )
            result = EwConcatString( result, EwLoadString( &_Const001B ));
          else
            result = EwConcatString( result, EwNewStringInt( _this->Hour % 12, 2 
            * leadingZeros, 10 ));
        break;

        case 'm' :
          result = EwConcatString( result, EwNewStringInt( _this->Month, 2 * leadingZeros, 
          10 ));
        break;

        case 'M' :
          result = EwConcatString( result, EwNewStringInt( _this->Minute, 2 * leadingZeros, 
          10 ));
        break;

        case 'p' :
          if ( _this->Hour < 12 )
            result = EwConcatString( result, EwLoadString( &ResourcesAM ));
          else
            result = EwConcatString( result, EwLoadString( &ResourcesPM ));
        break;

        case 'S' :
          result = EwConcatString( result, EwNewStringInt( _this->Second, 2 * leadingZeros, 
          10 ));
        break;

        case 'w' :
          result = EwConcatString( result, EwNewStringInt( CoreTime_OnGetDayOfWeek( 
          _this ), leadingZeros, 10 ));
        break;

        case 'y' :
          result = EwConcatString( result, EwNewStringInt( _this->Year % 100, 2 
          * leadingZeros, 10 ));
        break;

        case 'Y' :
          result = EwConcatString( result, EwNewStringInt( _this->Year, 4 * leadingZeros, 
          10 ));
        break;

        case '%' :
          result = EwConcatString( result, EwLoadString( &_Const001C ));
        break;

        case 'j' :
          result = EwConcatString( result, EwNewStringInt( CoreTime_OnGetDayOfYear( 
          _this ), 3 * leadingZeros, 10 ));
        break;

        case 'W' :
          result = EwConcatString( result, EwNewStringInt( CoreTime_OnGetWeekOfYear( 
          _this ), 2 * leadingZeros, 10 ));
        break;

        case 'a' :
          result = EwConcatString( result, CoreTime_getDayOfWeekName( _this, CoreTime_OnGetDayOfWeek( 
          _this ), 1 ));
        break;

        case 'A' :
          result = EwConcatString( result, CoreTime_getDayOfWeekName( _this, CoreTime_OnGetDayOfWeek( 
          _this ), 0 ));
        break;

        case 'b' :
          result = EwConcatString( result, CoreTime_getMonthName( _this, _this->Month, 
          1 ));
        break;

        case 'B' :
          result = EwConcatString( result, CoreTime_getMonthName( _this, _this->Month, 
          0 ));
        break;

        default :; 
      }

      inx = inx + 1;
    }
    else
    {
      result = EwConcatStringChar( result, EwGetStringChar( aFormat, inx ));
      inx = inx + 1;
    }

  return result;
}

/* The method Initialize() initializes this Core::Time object with the given time 
   as number of seconds since 1.1.1970 and returns this object. */
CoreTime CoreTime_Initialize( CoreTime _this, XInt64 aTime )
{
  CoreTime_OnSetTime( _this, aTime );
  return _this;
}

/* The method Difference() calculates a delta value between this time object and 
   the object passed in the parameter aTime. The method creates and initializes 
   a new Core::TimeSpan object with the calculated difference. */
CoreTimeSpan CoreTime_Difference( CoreTime _this, CoreTime aTime )
{
  if ( aTime == 0 )
    return CoreTimeSpan_Initialize( EwNewObject( CoreTimeSpan, 0 ), CoreTime_OnGetTime( 
      _this ));

  return CoreTimeSpan_Initialize( EwNewObject( CoreTimeSpan, 0 ), CoreTime_OnGetTime( 
    _this ) - CoreTime_OnGetTime( aTime ));
}

/* Variants derived from the class : 'Core::Time' */
EW_DEFINE_CLASS_VARIANTS( CoreTime )
EW_END_OF_CLASS_VARIANTS( CoreTime )

/* Virtual Method Table (VMT) for the class : 'Core::Time' */
EW_DEFINE_CLASS( CoreTime, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, "Core::Time" )
EW_END_OF_CLASS( CoreTime )

/* Initializer for the class 'Core::TimeSpan' */
void CoreTimeSpan__Init( CoreTimeSpan _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( CoreTimeSpan );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( CoreTimeSpan );
}

/* Re-Initializer for the class 'Core::TimeSpan' */
void CoreTimeSpan__ReInit( CoreTimeSpan _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Core::TimeSpan' */
void CoreTimeSpan__Done( CoreTimeSpan _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Core::TimeSpan.OnGetTime()' */
XInt64 CoreTimeSpan_OnGetTime( CoreTimeSpan _this )
{
  return ((((XInt64)_this->Days * 86400 ) + ((XInt64)_this->Hours * 3600 )) + ((XInt64)_this->Minutes 
    * 60 )) + _this->Seconds;
}

/* 'C' function for method : 'Core::TimeSpan.OnSetTime()' */
void CoreTimeSpan_OnSetTime( CoreTimeSpan _this, XInt64 value )
{
  XInt32 sign = 1;

  _this->Days = (XInt32)( value / 86400 );

  if ( value < 0 )
  {
    value = -value;
    sign = -1;
  }

  _this->Hours = sign * (XInt32)(( value / 3600 ) % 24 );
  _this->Minutes = sign * (XInt32)(( value / 60 ) % 60 );
  _this->Seconds = sign * (XInt32)( value % 60 );
}

/* 'C' function for method : 'Core::TimeSpan.OnGetTotalMinutes()' */
XInt32 CoreTimeSpan_OnGetTotalMinutes( CoreTimeSpan _this )
{
  return (XInt32)( CoreTimeSpan_OnGetTime( _this ) / 60 );
}

/* 'C' function for method : 'Core::TimeSpan.OnGetTotalHours()' */
XInt32 CoreTimeSpan_OnGetTotalHours( CoreTimeSpan _this )
{
  return (XInt32)( CoreTimeSpan_OnGetTime( _this ) / 3600 );
}

/* The method Format() converts the stored time span accordingly to the supplied 
   aFormat parameter in a string. The aFormat parameter consists of format codes, 
   preceded by the percent sign '%'. At the runtime the codes are replaced with 
   their corresponding content. All other signs that do not begin with % are simply 
   taken over from aFormat to the output string. Following codes are available:
   -%d Days as decimal number
   -%h Total hours as decimal number
   -%m Total minutes as decimal number
   -%s Total seconds as decimal number
   -%H Hours in 24-hour format (00-23)
   -%M Minutes as decimal number (00-59)
   -%S Seconds as decimal number (00-59)
   -%- '-' for negative time span and a ' ' for a positive
   -%+ '-' for negative time span and a '+' for a positive
   To remove the leading zeros, the '#' sign may prefix the following format code. 
   For example '%#M' will format the number of minutes as a decimal number in the 
   range 0-59. In contrast to it, '%M' formats the number with the leading zero 
   sign 00-59. If the '#' sign is used together with the format code '%-', no blank 
   is used for positive time span. */
XString CoreTimeSpan_Format( CoreTimeSpan _this, XString aFormat )
{
  XString result = 0;
  XInt32 inx = 0;
  XInt32 sign = 1;

  if ( CoreTimeSpan_OnGetTime( _this ) < 0 )
    sign = -1;

  while ( EwGetStringChar( aFormat, inx ) != 0 )
    if ( EwGetStringChar( aFormat, inx ) == '%' )
    {
      XInt32 leadingZeros = 1;
      inx = inx + 1;

      if ( EwGetStringChar( aFormat, inx ) == '#' )
      {
        inx = inx + 1;
        leadingZeros = 0;
      }

      switch ( EwGetStringChar( aFormat, inx ))
      {
        case 'd' :
          result = EwConcatString( result, EwNewStringInt( sign * _this->Days, 0, 
          10 ));
        break;

        case 'h' :
          result = EwConcatString( result, EwNewStringInt( sign * CoreTimeSpan_OnGetTotalHours( 
          _this ), 0, 10 ));
        break;

        case 'm' :
          result = EwConcatString( result, EwNewStringInt( sign * CoreTimeSpan_OnGetTotalMinutes( 
          _this ), 0, 10 ));
        break;

        case 's' :
          result = EwConcatString( result, EwNewStringInt64( sign * CoreTimeSpan_OnGetTime( 
          _this ), 0, 10 ));
        break;

        case 'H' :
          result = EwConcatString( result, EwNewStringInt( sign * _this->Hours, 
          leadingZeros * 2, 10 ));
        break;

        case 'M' :
          result = EwConcatString( result, EwNewStringInt( sign * _this->Minutes, 
          leadingZeros * 2, 10 ));
        break;

        case 'S' :
          result = EwConcatString( result, EwNewStringInt( sign * _this->Seconds, 
          leadingZeros * 2, 10 ));
        break;

        case '+' :
          if ( sign == -1 )
            result = EwConcatStringChar( result, '-' );
          else
            result = EwConcatStringChar( result, '+' );
        break;

        case '-' :
          if ( sign == -1 )
            result = EwConcatStringChar( result, '-' );
          else
            if ( leadingZeros != 0 )
              result = EwConcatStringChar( result, 0x0020 );
        break;

        default :; 
      }

      inx = inx + 1;
    }
    else
    {
      result = EwConcatStringChar( result, EwGetStringChar( aFormat, inx ));
      inx = inx + 1;
    }

  return result;
}

/* The method Initialize() initializes this Core::TimeSpan object with a time span 
   expressed in seconds and returns this object. */
CoreTimeSpan CoreTimeSpan_Initialize( CoreTimeSpan _this, XInt64 aTime )
{
  CoreTimeSpan_OnSetTime( _this, aTime );
  return _this;
}

/* Variants derived from the class : 'Core::TimeSpan' */
EW_DEFINE_CLASS_VARIANTS( CoreTimeSpan )
EW_END_OF_CLASS_VARIANTS( CoreTimeSpan )

/* Virtual Method Table (VMT) for the class : 'Core::TimeSpan' */
EW_DEFINE_CLASS( CoreTimeSpan, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 "Core::TimeSpan" )
EW_END_OF_CLASS( CoreTimeSpan )

/* Embedded Wizard */
