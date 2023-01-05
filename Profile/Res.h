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

#ifndef Res_H
#define Res_H

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

/* Font resource : 'Res::TitileFont32' */
EW_DECLARE_FONT_RES( ResTitileFont32 )

/* Font resource : 'Res::ContactFont15' */
EW_DECLARE_FONT_RES( ResContactFont15 )

/* Font resource : 'Res::ContactFontBold15' */
EW_DECLARE_FONT_RES( ResContactFontBold15 )

/* Font resource : 'Res::IconsFont25' */
EW_DECLARE_FONT_RES( ResIconsFont25 )

/* Font resource : 'Res::TitileFont29' */
EW_DECLARE_FONT_RES( ResTitileFont29 )

/* Font resource : 'Res::IconsFont30' */
EW_DECLARE_FONT_RES( ResIconsFont30 )

/* Font resource : 'Res::IconsFont20' */
EW_DECLARE_FONT_RES( ResIconsFont20 )

/* Font resource : 'Res::TitileFont25' */
EW_DECLARE_FONT_RES( ResTitileFont25 )

/* Font resource : 'Res::ContactFont12' */
EW_DECLARE_FONT_RES( ResContactFont12 )

/* Bitmap resource : 'Res::ButtonRoundMedium' */
EW_DECLARE_BITMAP_RES( ResButtonRoundMedium )

/* Bitmap resource : 'Res::ButtonRoundBig' */
EW_DECLARE_BITMAP_RES( ResButtonRoundBig )

/* Bitmap resource : 'Res::ButtonRoundSmall' */
EW_DECLARE_BITMAP_RES( ResButtonRoundSmall )

/* Bitmap resource : 'Res::ButtonRoundMedium1' */
EW_DECLARE_BITMAP_RES( ResButtonRoundMedium1 )

/* Bitmap resource : 'Res::SearchButton' */
EW_DECLARE_BITMAP_RES( ResSearchButton )

/* Bitmap resource : 'Res::ChatRight' */
EW_DECLARE_BITMAP_RES( ResChatRight )

/* Bitmap resource : 'Res::ChatLeft' */
EW_DECLARE_BITMAP_RES( ResChatLeft )

/* Font resource : 'Res::IconsFont12' */
EW_DECLARE_FONT_RES( ResIconsFont12 )

/* Bitmap resource : 'Res::SuqareButton' */
EW_DECLARE_BITMAP_RES( ResSuqareButton )

/* Bitmap resource : 'Res::background' */
EW_DECLARE_BITMAP_RES( Resbackground )

/* Bitmap resource : 'Res::logog' */
EW_DECLARE_BITMAP_RES( Reslogog )

/* Forward declaration of the class Effects::FadeInOutTransition */
#ifndef _EffectsFadeInOutTransition_
  EW_DECLARE_CLASS( EffectsFadeInOutTransition )
#define _EffectsFadeInOutTransition_
#endif

/* Forward declaration of the class Effects::SlideTransition */
#ifndef _EffectsSlideTransition_
  EW_DECLARE_CLASS( EffectsSlideTransition )
#define _EffectsSlideTransition_
#endif

/* User defined constant: 'Res::CallIcon' */
extern const XStringRes ResCallIcon;

/* User defined constant: 'Res::MessageIcon' */
extern const XStringRes ResMessageIcon;

/* User defined constant: 'Res::BackIcon' */
extern const XStringRes ResBackIcon;

/* User defined constant: 'Res::EditIcon' */
extern const XStringRes ResEditIcon;

/* User defined constant: 'Res::UserIcon' */
extern const XStringRes ResUserIcon;

/* User defined constant: 'Res::PlusIcon' */
extern const XStringRes ResPlusIcon;

/* User defined constant: 'Res::SerachIcon' */
extern const XStringRes ResSerachIcon;

/* User defined constant: 'Res::CkeckIcon' */
extern const XStringRes ResCkeckIcon;

/* User defined constant: 'Res::CloseIcon' */
extern const XStringRes ResCloseIcon;

/* The global autoobject Res::SlideDownCentered represents the fade-in/out operation 
   affecting the position and the opacity of the given GUI component. When using 
   the transition for the fade-in operation, the GUI component slides from the top 
   edge of its owner component and continues moving vertically until it reaches 
   the owner's center position. When using the transition for the fade-out operation, 
   the component slides down until it leaves the visible area of its owner component. 
   Additionally, while the transitions are performed, the opacity of the GUI component 
   fades-in or fades-out accordingly. This transition is thus ideal wherever one 
   GUI component should smoothly slide-in/out in context of another component. The 
   duration of the transition is configured per default to take 500 ms and the timing 
   is configured to start fast and then slow down the animation (FastIn_EaseOut).
   This object exists for your convenience permitting you to simply refer the transition 
   wherever it is required in your implementation without having to take care of 
   the creation and configuration of the object. If you require the transition to 
   run with other configuration (e.g. other timing parameters), create a copy of 
   this object and adapt its properties accordingly. */
EW_DECLARE_AUTOOBJECT( ResSlideDownCentered, EffectsSlideTransition )

/* The global autoobject Res::SlideUpCentered represents the fade-in/out operation 
   affecting the position and the opacity of the given GUI component. When using 
   the transition for the fade-in operation, the GUI component slides from the bottom 
   edge of its owner component and continues moving vertically until it reaches 
   the owner's center position. When using the transition for the fade-out operation, 
   the component slides up until it leaves the visible area of its owner component. 
   Additionally, while the transitions are performed, the opacity of the GUI component 
   fades-in or fades-out accordingly. This transition is thus ideal wherever one 
   GUI component should smoothly slide-in/out in context of another component. The 
   duration of the transition is configured per default to take 500 ms and the timing 
   is configured to start fast and then slow down the animation (FastIn_EaseOut).
   This object exists for your convenience permitting you to simply refer the transition 
   wherever it is required in your implementation without having to take care of 
   the creation and configuration of the object. If you require the transition to 
   run with other configuration (e.g. other timing parameters), create a copy of 
   this object and adapt its properties accordingly. */
EW_DECLARE_AUTOOBJECT( ResSlideUpCentered, EffectsSlideTransition )

/* The global autoobject Res::SlideRightCentered represents the fade-in/out operation 
   affecting the position and the opacity of the given GUI component. When using 
   the transition for the fade-in operation, the GUI component slides from the left 
   edge of its owner component and continues moving horizontally until it reaches 
   the owner's center position. When using the transition for the fade-out operation, 
   the component slides to the right until it leaves the visible area of its owner 
   component. Additionally, while the transitions are performed, the opacity of 
   the GUI component fades-in or fades-out accordingly. This transition is thus 
   ideal wherever one GUI component should smoothly slide-in/out in context of another 
   component. The duration of the transition is configured per default to take 500 
   ms and the timing is configured to start fast and then slow down the animation 
   (FastIn_EaseOut).
   This object exists for your convenience permitting you to simply refer the transition 
   wherever it is required in your implementation without having to take care of 
   the creation and configuration of the object. If you require the transition to 
   run with other configuration (e.g. other timing parameters), create a copy of 
   this object and adapt its properties accordingly. */
EW_DECLARE_AUTOOBJECT( ResSlideRightCentered, EffectsSlideTransition )

/* User defined constant: 'Res::BlueLight' */
extern const XColor ResBlueLight;

/* User defined constant: 'Res::Grey' */
extern const XColor ResGrey;

/* User defined constant: 'Res::MicOffIcon' */
extern const XStringRes ResMicOffIcon;

/* User defined constant: 'Res::KeypadIcon' */
extern const XStringRes ResKeypadIcon;

/* User defined constant: 'Res::GreyLight' */
extern const XColor ResGreyLight;

/* User defined constant: 'Res::SpeakerIcon' */
extern const XStringRes ResSpeakerIcon;

/* User defined constant: 'Res::Black' */
extern const XColor ResBlack;

/* User defined constant: 'Res::EndCallIcon' */
extern const XStringRes ResEndCallIcon;

/* User defined constant: 'Res::VideoCallIcon' */
extern const XStringRes ResVideoCallIcon;

/* User defined constant: 'Res::WhiteTransparent' */
extern const XColor ResWhiteTransparent;

/* User defined constant: 'Res::Red' */
extern const XColor ResRed;

/* User defined constant: 'Res::Blue' */
extern const XColor ResBlue;

/* User defined constant: 'Res::DownIcon' */
extern const XStringRes ResDownIcon;

/* User defined constant: 'Res::UpIcon' */
extern const XStringRes ResUpIcon;

/* User defined constant: 'Res::RedLight' */
extern const XColor ResRedLight;

/* User defined constant: 'Res::WhiteSemiTransparent' */
extern const XColor ResWhiteSemiTransparent;

/* User defined constant: 'Res::White' */
extern const XColor ResWhite;

/* User defined constant: 'Res::Green' */
extern const XColor ResGreen;

/* User defined constant: 'Res::GreenDark' */
extern const XColor ResGreenDark;

/* User defined constant: 'Res::Transparent' */
extern const XColor ResTransparent;

/* The global autoobject Res::FadeInOutCentered represents the fade-in/out operation 
   affecting the opacity of a given GUI component. When using the transition for 
   the fade-in operation, the GUI component is automatically arranged to appear 
   centered within the area of its owner component. This transition is thus ideal 
   wherever one GUI component should smoothly appear or disappear in context of 
   another component. The duration of the transition is configured per default to 
   take 500 ms.
   This object exists for your convenience permitting you to simply refer the transition 
   wherever it is required in your implementation without having to take care of 
   the creation and configuration of the object. If you require the transition to 
   run with other configuration (e.g. other timing parameters), create a copy of 
   this object and adapt its properties accordingly. */
EW_DECLARE_AUTOOBJECT( ResFadeInOutCentered, EffectsFadeInOutTransition )

/* The global autoobject Res::SlideLeftCentered represents the fade-in/out operation 
   affecting the position and the opacity of the given GUI component. When using 
   the transition for the fade-in operation, the GUI component slides from the right 
   edge of its owner component and continues moving horizontally until it reaches 
   the owner's center position. When using the transition for the fade-out operation, 
   the component slides to the left until it leaves the visible area of its owner 
   component. Additionally, while the transitions are performed, the opacity of 
   the GUI component fades-in or fades-out accordingly. This transition is thus 
   ideal wherever one GUI component should smoothly slide-in/out in context of another 
   component. The duration of the transition is configured per default to take 500 
   ms and the timing is configured to start fast and then slow down the animation 
   (FastIn_EaseOut).
   This object exists for your convenience permitting you to simply refer the transition 
   wherever it is required in your implementation without having to take care of 
   the creation and configuration of the object. If you require the transition to 
   run with other configuration (e.g. other timing parameters), create a copy of 
   this object and adapt its properties accordingly. */
EW_DECLARE_AUTOOBJECT( ResSlideLeftCentered, EffectsSlideTransition )

/* User defined constant: 'Res::HeartIcon' */
extern const XStringRes ResHeartIcon;

/* User defined constant: 'Res::BackspaceIcon' */
extern const XStringRes ResBackspaceIcon;

/* User defined constant: 'Res::PressColor' */
extern const XColor ResPressColor;

/* User defined constant: 'Res::OutgoingCallIcon' */
extern const XStringRes ResOutgoingCallIcon;

/* User defined constant: 'Res::RemoveIcon' */
extern const XStringRes ResRemoveIcon;

/* User defined constant: 'Res::InfoIcon' */
extern const XStringRes ResInfoIcon;

/* User defined constant: 'Res::MenuIcon' */
extern const XStringRes ResMenuIcon;

/* The global autoobject Res::SlideUpCentered1 represents the fade-in/out operation 
   affecting the position and the opacity of the given GUI component. When using 
   the transition for the fade-in operation, the GUI component slides from the bottom 
   edge of its owner component and continues moving vertically until it reaches 
   the owner's center position. When using the transition for the fade-out operation, 
   the component slides up until it leaves the visible area of its owner component. 
   Additionally, while the transitions are performed, the opacity of the GUI component 
   fades-in or fades-out accordingly. This transition is thus ideal wherever one 
   GUI component should smoothly slide-in/out in context of another component. The 
   duration of the transition is configured per default to take 500 ms and the timing 
   is configured to start fast and then slow down the animation (FastIn_EaseOut).
   This object exists for your convenience permitting you to simply refer the transition 
   wherever it is required in your implementation without having to take care of 
   the creation and configuration of the object. If you require the transition to 
   run with other configuration (e.g. other timing parameters), create a copy of 
   this object and adapt its properties accordingly. */
EW_DECLARE_AUTOOBJECT( ResSlideUpCenteredLimit, EffectsSlideTransition )

/* User defined constant: 'Res::IncomingCallIcon' */
extern const XStringRes ResIncomingCallIcon;

/* User defined constant: 'Res::CheckIcon' */
extern const XStringRes ResCheckIcon;

/* User defined constant: 'Res::WriteIcon' */
extern const XStringRes ResWriteIcon;

/* User defined constant: 'Res::SendIcon' */
extern const XStringRes ResSendIcon;

/* User defined constant: 'Res::ForwardIcon' */
extern const XStringRes ResForwardIcon;

/* User defined constant: 'Res::SettingsIcon' */
extern const XStringRes ResSettingsIcon;

/* User defined constant: 'Res::BlueLight1' */
extern const XColor ResBlueLight1;

/* User defined constant: 'Res::CircleFillIcon' */
extern const XStringRes ResCircleFillIcon;

/* User defined constant: 'Res::XIcon' */
extern const XStringRes ResXIcon;

#ifdef __cplusplus
  }
#endif

#endif /* Res_H */

/* Embedded Wizard */
