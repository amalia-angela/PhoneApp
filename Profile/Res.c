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
#include "_EffectsFadeInOutTransition.h"
#include "_EffectsSlideTransition.h"
#include "Core.h"
#include "Effects.h"
#include "Res.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x000000F4, /* ratio 50.82 % */
  0xB8000900, 0x38160452, 0x12040000, 0xA10E229C, 0xCAE022C2, 0x24581C39, 0x0B89B8D9,
  0x522C61D1, 0x5B46DC24, 0xB452131A, 0x3361F213, 0xAE092289, 0x88B29838, 0xA12D8B86,
  0x6B187CB0, 0x3625C526, 0xF9433E09, 0x8A4F19D0, 0x54524A7D, 0xACA5B1E2, 0x14B6459C,
  0x2848E87D, 0x093F6941, 0x2CAA42D6, 0x1B73C72A, 0x18A52CC7, 0xA72E2ACE, 0xDBBC9445,
  0x59A11278, 0x00010100, 0x00000000
};

/* User defined constant: 'Res::CallIcon' */
const XStringRes ResCallIcon = { _StringsDefault0, 0x0002 };

/* User defined constant: 'Res::MessageIcon' */
const XStringRes ResMessageIcon = { _StringsDefault0, 0x0006 };

/* User defined constant: 'Res::BackIcon' */
const XStringRes ResBackIcon = { _StringsDefault0, 0x000A };

/* User defined constant: 'Res::EditIcon' */
const XStringRes ResEditIcon = { _StringsDefault0, 0x000E };

/* User defined constant: 'Res::UserIcon' */
const XStringRes ResUserIcon = { _StringsDefault0, 0x0012 };

/* User defined constant: 'Res::PlusIcon' */
const XStringRes ResPlusIcon = { _StringsDefault0, 0x0016 };

/* User defined constant: 'Res::SerachIcon' */
const XStringRes ResSerachIcon = { _StringsDefault0, 0x001A };

/* User defined constant: 'Res::CkeckIcon' */
const XStringRes ResCkeckIcon = { _StringsDefault0, 0x001E };

/* User defined constant: 'Res::CloseIcon' */
const XStringRes ResCloseIcon = { _StringsDefault0, 0x0022 };

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
  _this->MarginBottom = 75;
  _this->MarginRight = 21;
  _this->MarginTop = 75;
  _this->MarginLeft = 21;
  _this->Alignment = EffectsDialogAlignmentAlignHorzLeft | EffectsDialogAlignmentAlignVertCenter;
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
  _this->MarginBottom = 75;
  _this->MarginRight = 21;
  _this->MarginTop = 75;
  _this->MarginLeft = 0;
  _this->Alignment = EffectsDialogAlignmentAlignHorzLeft | EffectsDialogAlignmentAlignVertCenter;
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
  _this->MarginBottom = 75;
  _this->MarginRight = 0;
  _this->MarginTop = 75;
  _this->MarginLeft = 21;
  _this->Alignment = EffectsDialogAlignmentAlignHorzLeft | EffectsDialogAlignmentAlignVertCenter;
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

/* User defined constant: 'Res::MicOffIcon' */
const XStringRes ResMicOffIcon = { _StringsDefault0, 0x0026 };

/* User defined constant: 'Res::KeypadIcon' */
const XStringRes ResKeypadIcon = { _StringsDefault0, 0x002A };

/* User defined constant: 'Res::GreyLight' */
const XColor ResGreyLight = { 0xF0, 0xF0, 0xF0, 0xFD };

/* User defined constant: 'Res::SpeakerIcon' */
const XStringRes ResSpeakerIcon = { _StringsDefault0, 0x002E };

/* User defined constant: 'Res::Black' */
const XColor ResBlack = { 0x18, 0x18, 0x18, 0xFF };

/* User defined constant: 'Res::EndCallIcon' */
const XStringRes ResEndCallIcon = { _StringsDefault0, 0x0032 };

/* Include a file containing the font resource : 'Res::TitileFont29' */
#include "_ResTitileFont29.h"

/* Table with links to derived variants of the font resource : 'Res::TitileFont29' */
EW_RES_WITHOUT_VARIANTS( ResTitileFont29 )

/* User defined constant: 'Res::VideoCallIcon' */
const XStringRes ResVideoCallIcon = { _StringsDefault0, 0x0036 };

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

/* User defined constant: 'Res::DownIcon' */
const XStringRes ResDownIcon = { _StringsDefault0, 0x003A };

/* User defined constant: 'Res::UpIcon' */
const XStringRes ResUpIcon = { _StringsDefault0, 0x003E };

/* User defined constant: 'Res::RedLight' */
const XColor ResRedLight = { 0xE8, 0x3C, 0x32, 0xEE };

/* Include a file containing the font resource : 'Res::ContactFont12' */
#include "_ResContactFont12.h"

/* Table with links to derived variants of the font resource : 'Res::ContactFont12' */
EW_RES_WITHOUT_VARIANTS( ResContactFont12 )

/* User defined constant: 'Res::WhiteSemiTransparent' */
const XColor ResWhiteSemiTransparent = { 0xFF, 0xFF, 0xFF, 0x73 };

/* User defined constant: 'Res::White' */
const XColor ResWhite = { 0xFF, 0xFF, 0xFF, 0xFF };

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
  _this->MarginLeft = 21;
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
  _this->MarginBottom = 75;
  _this->MarginRight = 21;
  _this->MarginTop = 75;
  _this->MarginLeft = 0;
  _this->Alignment = EffectsDialogAlignmentAlignHorzLeft | EffectsDialogAlignmentAlignVertCenter;
  _this->Duration = 200;
  _this->Direction = CoreDirectionLeft;
}

/* Table with links to derived variants of the auto object : 'Res::SlideLeftCentered' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ResSlideLeftCentered )
EW_END_OF_AUTOOBJECT_VARIANTS( ResSlideLeftCentered )

/* User defined constant: 'Res::HeartIcon' */
const XStringRes ResHeartIcon = { _StringsDefault0, 0x0042 };

/* User defined constant: 'Res::BackspaceIcon' */
const XStringRes ResBackspaceIcon = { _StringsDefault0, 0x0046 };

/* User defined constant: 'Res::PressColor' */
const XColor ResPressColor = { 0xF8, 0xF8, 0xF8, 0xD5 };

/* User defined constant: 'Res::OutgoingCallIcon' */
const XStringRes ResOutgoingCallIcon = { _StringsDefault0, 0x004A };

/* User defined constant: 'Res::RemoveIcon' */
const XStringRes ResRemoveIcon = { _StringsDefault0, 0x004E };

/* User defined constant: 'Res::InfoIcon' */
const XStringRes ResInfoIcon = { _StringsDefault0, 0x0052 };

/* User defined constant: 'Res::MenuIcon' */
const XStringRes ResMenuIcon = { _StringsDefault0, 0x0056 };

/* Include a file containing the bitmap resource : 'Res::SearchButton' */
#include "_ResSearchButton.h"

/* Table with links to derived variants of the bitmap resource : 'Res::SearchButton' */
EW_RES_WITHOUT_VARIANTS( ResSearchButton )

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
EW_DEFINE_AUTOOBJECT( ResSlideUpCenteredLimit, EffectsSlideTransition )

/* Initializer for the auto object 'Res::SlideUpCenteredLimit' */
void ResSlideUpCenteredLimit__Init( EffectsSlideTransition _this )
{
  _this->MarginRight = 21;
  _this->MarginTop = 40;
  _this->MarginLeft = 0;
  _this->Alignment = EffectsDialogAlignmentAlignHorzLeft | EffectsDialogAlignmentAlignVertCenter;
  _this->Duration = 200;
  _this->Direction = CoreDirectionTop;
}

/* Table with links to derived variants of the auto object : 'Res::SlideUpCenteredLimit' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ResSlideUpCenteredLimit )
EW_END_OF_AUTOOBJECT_VARIANTS( ResSlideUpCenteredLimit )

/* User defined constant: 'Res::IncomingCallIcon' */
const XStringRes ResIncomingCallIcon = { _StringsDefault0, 0x005A };

/* User defined constant: 'Res::CheckIcon' */
const XStringRes ResCheckIcon = { _StringsDefault0, 0x005E };

/* Include a file containing the bitmap resource : 'Res::ChatRight' */
#include "_ResChatRight.h"

/* Table with links to derived variants of the bitmap resource : 'Res::ChatRight' */
EW_RES_WITHOUT_VARIANTS( ResChatRight )

/* Include a file containing the bitmap resource : 'Res::ChatLeft' */
#include "_ResChatLeft.h"

/* Table with links to derived variants of the bitmap resource : 'Res::ChatLeft' */
EW_RES_WITHOUT_VARIANTS( ResChatLeft )

/* User defined constant: 'Res::WriteIcon' */
const XStringRes ResWriteIcon = { _StringsDefault0, 0x0062 };

/* User defined constant: 'Res::SendIcon' */
const XStringRes ResSendIcon = { _StringsDefault0, 0x0066 };

/* User defined constant: 'Res::ForwardIcon' */
const XStringRes ResForwardIcon = { _StringsDefault0, 0x006A };

/* Include a file containing the font resource : 'Res::IconsFont12' */
#include "_ResIconsFont12.h"

/* Table with links to derived variants of the font resource : 'Res::IconsFont12' */
EW_RES_WITHOUT_VARIANTS( ResIconsFont12 )

/* Include a file containing the bitmap resource : 'Res::SuqareButton' */
#include "_ResSuqareButton.h"

/* Table with links to derived variants of the bitmap resource : 'Res::SuqareButton' */
EW_RES_WITHOUT_VARIANTS( ResSuqareButton )

/* User defined constant: 'Res::SettingsIcon' */
const XStringRes ResSettingsIcon = { _StringsDefault0, 0x006E };

/* Include a file containing the bitmap resource : 'Res::background' */
#include "_Resbackground.h"

/* Table with links to derived variants of the bitmap resource : 'Res::background' */
EW_RES_WITHOUT_VARIANTS( Resbackground )

/* Include a file containing the bitmap resource : 'Res::logog' */
#include "_Reslogog.h"

/* Table with links to derived variants of the bitmap resource : 'Res::logog' */
EW_RES_WITHOUT_VARIANTS( Reslogog )

/* User defined constant: 'Res::BlueLight1' */
const XColor ResBlueLight1 = { 0x7C, 0x8F, 0xFF, 0x3E };

/* User defined constant: 'Res::CircleFillIcon' */
const XStringRes ResCircleFillIcon = { _StringsDefault0, 0x0072 };

/* User defined constant: 'Res::XIcon' */
const XStringRes ResXIcon = { _StringsDefault0, 0x0076 };

/* Embedded Wizard */
