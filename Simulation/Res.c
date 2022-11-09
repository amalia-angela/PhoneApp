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
#include "_EffectsFadeInOutTransition.h"
#include "_EffectsSlideTransition.h"
#include "Core.h"
#include "Effects.h"
#include "Res.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x000000AC, /* ratio 55.81 % */
  0xB8000900, 0x38160452, 0x12040000, 0xA10E229C, 0xCAE022C2, 0x24581C39, 0x0B89B8D9,
  0x522C61D1, 0x5B46DC24, 0xB452131A, 0x3361F213, 0xAE092289, 0x88B29838, 0xA12D8B86,
  0x6B187CB0, 0x3625C526, 0xF9433E09, 0x8A4F19D0, 0x54524A7D, 0x96E5B1E2, 0x091D0FA2,
  0x250D2825, 0x01018442, 0x00000000
};

/* User defined constant: 'Res::CallTxt' */
const XStringRes ResCallTxt = { _StringsDefault0, 0x0002 };

/* User defined constant: 'Res::MessageIconTxt' */
const XStringRes ResMessageIconTxt = { _StringsDefault0, 0x0006 };

/* User defined constant: 'Res::BackIconTxt' */
const XStringRes ResBackIconTxt = { _StringsDefault0, 0x000A };

/* User defined constant: 'Res::EditIconTxt' */
const XStringRes ResEditIconTxt = { _StringsDefault0, 0x000E };

/* User defined constant: 'Res::UserIconTxt' */
const XStringRes ResUserIconTxt = { _StringsDefault0, 0x0012 };

/* User defined constant: 'Res::PlusIconTxt' */
const XStringRes ResPlusIconTxt = { _StringsDefault0, 0x0016 };

/* User defined constant: 'Res::SerachIconTxt' */
const XStringRes ResSerachIconTxt = { _StringsDefault0, 0x001A };

/* User defined constant: 'Res::CkeckIconTxt' */
const XStringRes ResCkeckIconTxt = { _StringsDefault0, 0x001E };

/* User defined constant: 'Res::CloseIconTxt' */
const XStringRes ResCloseIconTxt = { _StringsDefault0, 0x0022 };

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
EW_DEFINE_AUTOOBJECT( ResSlideDownCentered, EffectsSlideTransition )

/* Initializer for the auto object 'Res::SlideDownCentered' */
void ResSlideDownCentered__Init( EffectsSlideTransition _this )
{
  _this->Duration = 200;
  _this->Direction = CoreDirectionBottom;
}

/* Table with links to derived variants of the auto object : 'Res::SlideDownCentered' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ResSlideDownCentered )
EW_END_OF_AUTOOBJECT_VARIANTS( ResSlideDownCentered )

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
EW_DEFINE_AUTOOBJECT( ResSlideUpCentered, EffectsSlideTransition )

/* Initializer for the auto object 'Res::SlideUpCentered' */
void ResSlideUpCentered__Init( EffectsSlideTransition _this )
{
  _this->Duration = 200;
  _this->Direction = CoreDirectionTop;
}

/* Table with links to derived variants of the auto object : 'Res::SlideUpCentered' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ResSlideUpCentered )
EW_END_OF_AUTOOBJECT_VARIANTS( ResSlideUpCentered )

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
EW_DEFINE_AUTOOBJECT( ResSlideRightCentered, EffectsSlideTransition )

/* Initializer for the auto object 'Res::SlideRightCentered' */
void ResSlideRightCentered__Init( EffectsSlideTransition _this )
{
  _this->Duration = 200;
  _this->Direction = CoreDirectionRight;
}

/* Table with links to derived variants of the auto object : 'Res::SlideRightCentered' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ResSlideRightCentered )
EW_END_OF_AUTOOBJECT_VARIANTS( ResSlideRightCentered )

/* Include a file containing the font resource : 'Res::TitileFont32' */
#include "_ResTitileFont32.h"

/* Table with links to derived variants of the font resource : 'Res::TitileFont32' */
EW_RES_WITHOUT_VARIANTS( ResTitileFont32 )

/* Include a file containing the font resource : 'Res::ContactFont15' */
#include "_ResContactFont15.h"

/* Table with links to derived variants of the font resource : 'Res::ContactFont15' */
EW_RES_WITHOUT_VARIANTS( ResContactFont15 )

/* Include a file containing the font resource : 'Res::ContactFontBold15' */
#include "_ResContactFontBold15.h"

/* Table with links to derived variants of the font resource : 'Res::ContactFontBold15' */
EW_RES_WITHOUT_VARIANTS( ResContactFontBold15 )

/* Include a file containing the font resource : 'Res::IconsFont25' */
#include "_ResIconsFont25.h"

/* Table with links to derived variants of the font resource : 'Res::IconsFont25' */
EW_RES_WITHOUT_VARIANTS( ResIconsFont25 )

/* User defined constant: 'Res::BlueLight' */
const XColor ResBlueLight = { 0x7C, 0x8F, 0xFF, 0xF4 };

/* User defined constant: 'Res::Grey' */
const XColor ResGrey = { 0xBC, 0xBC, 0xBC, 0xFD };

/* User defined constant: 'Res::MicOffTxt' */
const XStringRes ResMicOffTxt = { _StringsDefault0, 0x0026 };

/* User defined constant: 'Res::KeypadTxt' */
const XStringRes ResKeypadTxt = { _StringsDefault0, 0x002A };

/* User defined constant: 'Res::GreyLight' */
const XColor ResGreyLight = { 0xF0, 0xF0, 0xF0, 0xFD };

/* User defined constant: 'Res::SpeakerTxt' */
const XStringRes ResSpeakerTxt = { _StringsDefault0, 0x002E };

/* User defined constant: 'Res::Black' */
const XColor ResBlack = { 0x18, 0x18, 0x18, 0xFF };

/* User defined constant: 'Res::EndCallTxt' */
const XStringRes ResEndCallTxt = { _StringsDefault0, 0x0032 };

/* Include a file containing the font resource : 'Res::TitileFont29' */
#include "_ResTitileFont29.h"

/* Table with links to derived variants of the font resource : 'Res::TitileFont29' */
EW_RES_WITHOUT_VARIANTS( ResTitileFont29 )

/* User defined constant: 'Res::VideoCallTxt' */
const XStringRes ResVideoCallTxt = { _StringsDefault0, 0x0036 };

/* Include a file containing the font resource : 'Res::IconsFont30' */
#include "_ResIconsFont30.h"

/* Table with links to derived variants of the font resource : 'Res::IconsFont30' */
EW_RES_WITHOUT_VARIANTS( ResIconsFont30 )

/* Include a file containing the font resource : 'Res::IconsFont20' */
#include "_ResIconsFont20.h"

/* Table with links to derived variants of the font resource : 'Res::IconsFont20' */
EW_RES_WITHOUT_VARIANTS( ResIconsFont20 )

/* Include a file containing the font resource : 'Res::TitileFont25' */
#include "_ResTitileFont25.h"

/* Table with links to derived variants of the font resource : 'Res::TitileFont25' */
EW_RES_WITHOUT_VARIANTS( ResTitileFont25 )

/* User defined constant: 'Res::WhiteTransparent' */
const XColor ResWhiteTransparent = { 0xFF, 0xFF, 0xFF, 0x26 };

/* User defined constant: 'Res::Red' */
const XColor ResRed = { 0xB5, 0x28, 0x0F, 0xFF };

/* User defined constant: 'Res::Blue' */
const XColor ResBlue = { 0x1B, 0x0B, 0xFF, 0xFF };

/* User defined constant: 'Res::DownTxt' */
const XStringRes ResDownTxt = { _StringsDefault0, 0x003A };

/* User defined constant: 'Res::Uptxt' */
const XStringRes ResUptxt = { _StringsDefault0, 0x003E };

/* User defined constant: 'Res::RedLight' */
const XColor ResRedLight = { 0xE8, 0x3C, 0x32, 0xEE };

/* Include a file containing the font resource : 'Res::ContactFont12' */
#include "_ResContactFont12.h"

/* Table with links to derived variants of the font resource : 'Res::ContactFont12' */
EW_RES_WITHOUT_VARIANTS( ResContactFont12 )

/* User defined constant: 'Res::WhiteSemiTransparent' */
const XColor ResWhiteSemiTransparent = { 0xFF, 0xFF, 0xFF, 0x73 };

/* User defined constant: 'Res::White' */
const XColor ResWhite = { 0xFF, 0xFF, 0xFF, 0xF9 };

/* User defined constant: 'Res::Green' */
const XColor ResGreen = { 0x12, 0x99, 0x15, 0xFF };

/* User defined constant: 'Res::GreenDark' */
const XColor ResGreenDark = { 0x0C, 0x6B, 0x0E, 0xFF };

/* User defined constant: 'Res::Transparent' */
const XColor ResTransparent = { 0xFF, 0xFF, 0xFF, 0x00 };

/* Include a file containing the bitmap resource : 'Res::ButtonRoundMedium' */
#include "_ResButtonRoundMedium.h"

/* Table with links to derived variants of the bitmap resource : 'Res::ButtonRoundMedium' */
EW_RES_WITHOUT_VARIANTS( ResButtonRoundMedium )

/* Include a file containing the bitmap resource : 'Res::ButtonRoundBig' */
#include "_ResButtonRoundBig.h"

/* Table with links to derived variants of the bitmap resource : 'Res::ButtonRoundBig' */
EW_RES_WITHOUT_VARIANTS( ResButtonRoundBig )

/* Include a file containing the bitmap resource : 'Res::ButtonRoundSmall' */
#include "_ResButtonRoundSmall.h"

/* Table with links to derived variants of the bitmap resource : 'Res::ButtonRoundSmall' */
EW_RES_WITHOUT_VARIANTS( ResButtonRoundSmall )

/* Include a file containing the bitmap resource : 'Res::SearchButton' */
#include "_ResSearchButton.h"

/* Table with links to derived variants of the bitmap resource : 'Res::SearchButton' */
EW_RES_WITHOUT_VARIANTS( ResSearchButton )

/* Include a file containing the bitmap resource : 'Res::ButtonRoundMedium1' */
#include "_ResButtonRoundMedium1.h"

/* Table with links to derived variants of the bitmap resource : 'Res::ButtonRoundMedium1' */
EW_RES_WITHOUT_VARIANTS( ResButtonRoundMedium1 )

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
EW_DEFINE_AUTOOBJECT( ResFadeInOutCentered, EffectsFadeInOutTransition )

/* Initializer for the auto object 'Res::FadeInOutCentered' */
void ResFadeInOutCentered__Init( EffectsFadeInOutTransition _this )
{
  _this->Alignment = EffectsDialogAlignmentAlignHorzLeft | EffectsDialogAlignmentAlignVertCenter;
  _this->Duration = 200;
}

/* Table with links to derived variants of the auto object : 'Res::FadeInOutCentered' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ResFadeInOutCentered )
EW_END_OF_AUTOOBJECT_VARIANTS( ResFadeInOutCentered )

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
EW_DEFINE_AUTOOBJECT( ResSlideLeftCentered, EffectsSlideTransition )

/* Initializer for the auto object 'Res::SlideLeftCentered' */
void ResSlideLeftCentered__Init( EffectsSlideTransition _this )
{
  _this->Duration = 200;
  _this->Direction = CoreDirectionLeft;
}

/* Table with links to derived variants of the auto object : 'Res::SlideLeftCentered' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ResSlideLeftCentered )
EW_END_OF_AUTOOBJECT_VARIANTS( ResSlideLeftCentered )

/* User defined constant: 'Res::HeartTxt' */
const XStringRes ResHeartTxt = { _StringsDefault0, 0x0042 };

/* User defined constant: 'Res::BackspaceTxt' */
const XStringRes ResBackspaceTxt = { _StringsDefault0, 0x0046 };

/* User defined constant: 'Res::PressColor' */
const XColor ResPressColor = { 0xF8, 0xF8, 0xF8, 0xD5 };

/* User defined constant: 'Res::RemoveTxt' */
const XStringRes ResRemoveTxt = { _StringsDefault0, 0x004A };

/* User defined constant: 'Res::InfoTxt' */
const XStringRes ResInfoTxt = { _StringsDefault0, 0x004E };

/* User defined constant: 'Res::MenuTxt' */
const XStringRes ResMenuTxt = { _StringsDefault0, 0x0052 };

/* Embedded Wizard */
