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
#include "_ApplicationCallPage.h"
#include "_ApplicationCallPageBase.h"
#include "_ApplicationChat.h"
#include "_ApplicationChatItem.h"
#include "_ApplicationContactAddPage.h"
#include "_ApplicationContactDetailsPage.h"
#include "_ApplicationContactEditPage.h"
#include "_ApplicationContactItem.h"
#include "_ApplicationContactsApp.h"
#include "_ApplicationContactsAppInsideCall.h"
#include "_ApplicationContactsInsideCall.h"
#include "_ApplicationContactsList.h"
#include "_ApplicationContactsList1.h"
#include "_ApplicationContactsPage.h"
#include "_ApplicationDetailsInsideCall.h"
#include "_ApplicationFavContactItem.h"
#include "_ApplicationFavoritesPage.h"
#include "_ApplicationIncomingCall.h"
#include "_ApplicationKeypadInsideCall.h"
#include "_ApplicationKeypadPage.h"
#include "_ApplicationMainPage.h"
#include "_ApplicationMessagesPage.h"
#include "_ApplicationMessegeItem.h"
#include "_ApplicationMyCardItem.h"
#include "_ApplicationRecentDetailsPage.h"
#include "_ApplicationRecentItm.h"
#include "_ApplicationRecentPage.h"
#include "_ApplicationSplashScreen.h"
#include "_ComponentsButton265x470.h"
#include "_ComponentsButton40x55.h"
#include "_ComponentsButton50x75.h"
#include "_ComponentsButton65x90.h"
#include "_ComponentsButtonBase70x90.h"
#include "_ComponentsInputEtxt.h"
#include "_ComponentsNavBarButton64x40.h"
#include "_ComponentsSButton25x25.h"
#include "_ComponentsSButton50x50.h"
#include "_ComponentsSButton65x65.h"
#include "_ComponentsSearchEtxt.h"
#include "_ComponentsTextButton.h"
#include "_ComponentsToggleButton.h"
#include "_CoreGroup.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreOutline.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTime.h"
#include "_CoreTimer.h"
#include "_CoreVerticalList.h"
#include "_CoreView.h"
#include "_DeviceContact.h"
#include "_DeviceContactList.h"
#include "_DeviceDeviceClass.h"
#include "_DeviceHistoryContact.h"
#include "_DeviceMessage.h"
#include "_DeviceMessagesList.h"
#include "_EffectsFadeInOutTransition.h"
#include "_EffectsInt32Effect.h"
#include "_EffectsSlideTransition.h"
#include "_EffectsTransition.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_TemplatesTextEditor.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "Application.h"
#include "Core.h"
#include "Device.h"
#include "Res.h"
#include "Resources.h"
#include "Strings.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x00000386, /* ratio 55.88 % */
  0xB8000B00, 0x800DA452, 0x3E120032, 0x04045818, 0x60001580, 0x8001B800, 0x001C8006,
  0x11900066, 0x0045E371, 0x58021238, 0x80087048, 0x00DC0037, 0x0C2003A0, 0x012B3180,
  0xD2E95438, 0x0484C220, 0x084C3A18, 0x93936181, 0x4800C400, 0x41CD8003, 0xD4012999,
  0x28506001, 0x1B223942, 0x14323430, 0x3139D400, 0xC9693A1D, 0x064268F4, 0xC570990C,
  0x572B52CA, 0x4A19519B, 0xA31168A4, 0x39128E46, 0x969898DA, 0x57A25520, 0xE9AD26B3,
  0x82580015, 0x45925D62, 0x4DEBB34A, 0xC6093900, 0x88B89910, 0x390C9C46, 0x71682642,
  0x96B99172, 0x4866306B, 0xCB4632D1, 0xD8AB2D21, 0xE904704C, 0x3A131222, 0x80045824,
  0x9E00D714, 0x9481D6C0, 0x5C3B4AA8, 0x8325128D, 0xA3422B14, 0x44B26108, 0x1C21DBC8,
  0xEE8E67AE, 0x20952004, 0x7D28A34C, 0x32EE3D23, 0x0C12E1F9, 0x2D7EBF5B, 0x876D35FB,
  0x64AA5126, 0x523852E9, 0x22A14697, 0x4F3BC974, 0x590EA4ED, 0xB45E51A2, 0x53AFE0EA,
  0xB965E6AB, 0x05E1EF95, 0x53158D61, 0xF489867F, 0xA1261157, 0x007C5F57, 0x61DC77B8,
  0x45443008, 0xE72D6855, 0x491A4300, 0xB8501334, 0x47970439, 0x13D00192, 0xC52DB241,
  0xD9287252, 0xE0724006, 0x425F56E5, 0x19A4300A, 0xE4511A6D, 0xFC001410, 0x45735094,
  0x4391C470, 0x1E24C1D2, 0x9561BC00, 0x61048010, 0xD8001C57, 0x7610E419, 0x64848859,
  0x0121D811, 0xFDD86D00, 0xC70024F4, 0x4C10C8ED, 0x5496EA0A, 0x50002E72, 0x1D099966,
  0x686150C0, 0x43006425, 0x52299A67, 0x27D5258C, 0x7D580018, 0x53432527, 0x4B12C51C,
  0x2467262A, 0x34301600, 0x9944421F, 0x008AE441, 0x1AA8A7CC, 0x6907CE8C, 0xC1ADF372,
  0x1A9652E8, 0x4784A695, 0xA6D311E1, 0xE436F104, 0x10012261, 0x00000010, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 272, 440 }};
static const XRect _Const0001 = {{ 11, 167 }, { 261, 440 }};
static const XRect _Const0002 = {{ 12, 167 }, { 261, 440 }};
static const XPoint _Const0003 = { 0, 35 };
static const XRect _Const0004 = {{ 236, 141 }, { 262, 167 }};
static const XRect _Const0005 = {{ 210, 141 }, { 236, 167 }};
static const XRect _Const0006 = {{ 3, 67 }, { 269, 99 }};
static const XRect _Const0007 = {{ 11, 27 }, { 261, 61 }};
static const XRect _Const0008 = {{ 242, 12 }, { 272, 42 }};
static const XRect _Const0009 = {{ 186, 130 }, { 186, 130 }};
static const XRect _Const000A = {{ 6, 99 }, { 266, 144 }};
static const XRect _Const000B = {{ 0, 0 }, { 250, 32 }};
static const XPoint _Const000C = { 0, 32 };
static const XPoint _Const000D = { 250, 32 };
static const XPoint _Const000E = { 250, 0 };
static const XPoint _Const000F = { 0, 0 };
static const XColor _Const0010 = { 0xFD, 0xFD, 0xFD, 0xC8 };
static const XColor _Const0011 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0012 = {{ 39, 3 }, { 130, 33 }};
static const XRect _Const0013 = {{ 129, 3 }, { 244, 33 }};
static const XRect _Const0014 = {{ 6, 4 }, { 31, 29 }};
static const XRect _Const0015 = {{ 231, 10 }, { 244, 22 }};
static const XStringRes _Const0016 = { _StringsDefault0, 0x0002 };
static const XPoint _Const0017 = { 266, 287 };
static const XPoint _Const0018 = { 8, 287 };
static const XColor _Const0019 = { 0xE2, 0xE2, 0xE2, 0xFD };
static const XRect _Const001A = {{ 20, 258 }, { 264, 287 }};
static const XColor _Const001B = { 0xFF, 0xFF, 0xFF, 0x00 };
static const XStringRes _Const001C = { _StringsDefault0, 0x0007 };
static const XRect _Const001D = {{ 8, 232 }, { 266, 265 }};
static const XPoint _Const001E = { 266, 232 };
static const XPoint _Const001F = { 8, 232 };
static const XRect _Const0020 = {{ 51, 145 }, { 101, 220 }};
static const XRect _Const0021 = {{ 111, 145 }, { 161, 220 }};
static const XRect _Const0022 = {{ 171, 145 }, { 221, 220 }};
static const XRect _Const0023 = {{ 8, 98 }, { 265, 145 }};
static const XStringRes _Const0024 = { _StringsDefault0, 0x0016 };
static const XRect _Const0025 = {{ 101, 22 }, { 171, 113 }};
static const XRect _Const0026 = {{ 240, 4 }, { 265, 29 }};
static const XRect _Const0027 = {{ 7, 4 }, { 32, 29 }};
static const XRect _Const0028 = {{ 60, 233 }, { 84, 263 }};
static const XStringRes _Const0029 = { _StringsDefault0, 0x0025 };
static const XPoint _Const002A = { 265, 289 };
static const XPoint _Const002B = { 7, 289 };
static const XRect _Const002C = {{ 3, 257 }, { 269, 289 }};
static const XStringRes _Const002D = { _StringsDefault0, 0x0029 };
static const XPoint _Const002E = { 264, 256 };
static const XPoint _Const002F = { 6, 256 };
static const XRect _Const0030 = {{ 3, 224 }, { 269, 256 }};
static const XStringRes _Const0031 = { _StringsDefault0, 0x0039 };
static const XPoint _Const0032 = { 264, 223 };
static const XPoint _Const0033 = { 6, 223 };
static const XRect _Const0034 = {{ 3, 191 }, { 269, 223 }};
static const XStringRes _Const0035 = { _StringsDefault0, 0x0046 };
static const XPoint _Const0036 = { 264, 190 };
static const XPoint _Const0037 = { 6, 190 };
static const XRect _Const0038 = {{ 100, 78 }, { 170, 169 }};
static const XRect _Const0039 = {{ 86, 7 }, { 186, 37 }};
static const XRect _Const003A = {{ 7, 304 }, { 42, 339 }};
static const XRect _Const003B = {{ 42, 313 }, { 109, 328 }};
static const XPoint _Const003C = { 3, 191 };
static const XPoint _Const003D = { 3, 224 };
static const XPoint _Const003E = { 3, 257 };
static const XRect _Const003F = {{ 5, 398 }, { 263, 431 }};
static const XRect _Const0040 = {{ 7, 244 }, { 265, 273 }};
static const XStringRes _Const0041 = { _StringsDefault0, 0x0052 };
static const XPoint _Const0042 = { 264, 239 };
static const XPoint _Const0043 = { 6, 239 };
static const XRect _Const0044 = {{ 6, 207 }, { 264, 240 }};
static const XPoint _Const0045 = { 263, 206 };
static const XPoint _Const0046 = { 5, 206 };
static const XRect _Const0047 = {{ 2, 174 }, { 268, 206 }};
static const XStringRes _Const0048 = { _StringsDefault0, 0x005F };
static const XPoint _Const0049 = { 263, 173 };
static const XPoint _Const004A = { 5, 173 };
static const XRect _Const004B = {{ 2, 141 }, { 268, 173 }};
static const XStringRes _Const004C = { _StringsDefault0, 0x006C };
static const XPoint _Const004D = { 263, 140 };
static const XPoint _Const004E = { 5, 140 };
static const XRect _Const004F = {{ 99, 29 }, { 169, 120 }};
static const XRect _Const0050 = {{ 7, 293 }, { 42, 328 }};
static const XRect _Const0051 = {{ 42, 303 }, { 109, 318 }};
static const XRect _Const0052 = {{ 0, 0 }, { 272, 480 }};
static const XRect _Const0053 = {{ 104, 374 }, { 169, 466 }};
static const XRect _Const0054 = {{ 182, 240 }, { 247, 332 }};
static const XRect _Const0055 = {{ 104, 241 }, { 169, 333 }};
static const XRect _Const0056 = {{ 26, 242 }, { 91, 334 }};
static const XRect _Const0057 = {{ 182, 147 }, { 247, 239 }};
static const XRect _Const0058 = {{ 104, 148 }, { 169, 240 }};
static const XRect _Const0059 = {{ 26, 149 }, { 91, 241 }};
static const XRect _Const005A = {{ 0, 518 }, { 272, 958 }};
static const XPoint _Const005B = { 0, 30 };
static const XPoint _Const005C = { 264, 311 };
static const XPoint _Const005D = { 6, 311 };
static const XRect _Const005E = {{ 18, 282 }, { 262, 311 }};
static const XRect _Const005F = {{ 6, 256 }, { 264, 289 }};
static const XRect _Const0060 = {{ 50, 161 }, { 100, 236 }};
static const XRect _Const0061 = {{ 110, 161 }, { 160, 236 }};
static const XRect _Const0062 = {{ 170, 161 }, { 220, 236 }};
static const XRect _Const0063 = {{ 10, 114 }, { 267, 144 }};
static const XRect _Const0064 = {{ 100, 30 }, { 170, 121 }};
static const XRect _Const0065 = {{ 239, 5 }, { 264, 30 }};
static const XRect _Const0066 = {{ 6, 5 }, { 31, 30 }};
static const XRect _Const0067 = {{ 104, 340 }, { 169, 405 }};
static const XRect _Const0068 = {{ 39, 80 }, { 104, 145 }};
static const XStringRes _Const0069 = { _StringsDefault0, 0x0078 };
static const XRect _Const006A = {{ 169, 80 }, { 234, 145 }};
static const XStringRes _Const006B = { _StringsDefault0, 0x007C };
static const XRect _Const006C = {{ 104, 80 }, { 169, 145 }};
static const XStringRes _Const006D = { _StringsDefault0, 0x0080 };
static const XRect _Const006E = {{ 39, 145 }, { 104, 210 }};
static const XStringRes _Const006F = { _StringsDefault0, 0x0084 };
static const XRect _Const0070 = {{ 169, 145 }, { 234, 210 }};
static const XStringRes _Const0071 = { _StringsDefault0, 0x0088 };
static const XRect _Const0072 = {{ 104, 145 }, { 169, 210 }};
static const XStringRes _Const0073 = { _StringsDefault0, 0x008C };
static const XRect _Const0074 = {{ 39, 210 }, { 104, 275 }};
static const XStringRes _Const0075 = { _StringsDefault0, 0x0090 };
static const XRect _Const0076 = {{ 169, 210 }, { 234, 275 }};
static const XStringRes _Const0077 = { _StringsDefault0, 0x0094 };
static const XRect _Const0078 = {{ 104, 210 }, { 169, 275 }};
static const XStringRes _Const0079 = { _StringsDefault0, 0x0098 };
static const XRect _Const007A = {{ 39, 275 }, { 104, 340 }};
static const XStringRes _Const007B = { _StringsDefault0, 0x009C };
static const XRect _Const007C = {{ 169, 275 }, { 234, 340 }};
static const XStringRes _Const007D = { _StringsDefault0, 0x00A0 };
static const XRect _Const007E = {{ 104, 275 }, { 169, 340 }};
static const XStringRes _Const007F = { _StringsDefault0, 0x00A4 };
static const XRect _Const0080 = {{ 39, 48 }, { 234, 80 }};
static const XRect _Const0081 = {{ 39, 360 }, { 101, 385 }};
static const XRect _Const0082 = {{ 169, 340 }, { 234, 405 }};
static const XRect _Const0083 = {{ 0, 440 }, { 272, 480 }};
static const XRect _Const0084 = {{ 0, 440 }, { 68, 480 }};
static const XRect _Const0085 = {{ 68, 440 }, { 136, 480 }};
static const XRect _Const0086 = {{ 136, 440 }, { 204, 480 }};
static const XRect _Const0087 = {{ 204, 440 }, { 272, 480 }};
static const XPoint _Const0088 = { 270, 440 };
static const XPoint _Const0089 = { 0, 440 };
static const XStringRes _Const008A = { _StringsDefault0, 0x00A8 };
static const XStringRes _Const008B = { _StringsDefault0, 0x00C8 };
static const XRect _Const008C = {{ 0, 80 }, { 272, 340 }};
static const XColor _Const008D = { 0x83, 0x83, 0x83, 0xFA };
static const XColor _Const008E = { 0x4F, 0x4F, 0x4F, 0xFF };
static const XColor _Const008F = { 0x89, 0x89, 0x89, 0xFF };
static const XColor _Const0090 = { 0x3C, 0x3C, 0x3C, 0xFF };
static const XRect _Const0091 = {{ 39, 32 }, { 234, 64 }};
static const XRect _Const0092 = {{ 11, 134 }, { 261, 440 }};
static const XRect _Const0093 = {{ 12, 134 }, { 261, 440 }};
static const XRect _Const0094 = {{ 236, 108 }, { 262, 134 }};
static const XRect _Const0095 = {{ 210, 108 }, { 236, 134 }};
static const XRect _Const0096 = {{ 11, 12 }, { 261, 61 }};
static const XRect _Const0097 = {{ 180, 15 }, { 210, 45 }};
static const XRect _Const0098 = {{ 216, 15 }, { 282, 40 }};
static const XRect _Const0099 = {{ 171, 340 }, { 236, 432 }};
static const XRect _Const009A = {{ 11, 95 }, { 261, 408 }};
static const XRect _Const009B = {{ 11, 42 }, { 261, 76 }};
static const XRect _Const009C = {{ 11, 12 }, { 41, 42 }};
static const XRect _Const009D = {{ 233, 12 }, { 263, 37 }};
static const XRect _Const009E = {{ 233, 12 }, { 261, 37 }};
static const XRect _Const009F = {{ 202, 24 }, { 268, 49 }};
static const XRect _Const00A0 = {{ 12, 0 }, { 261, 30 }};
static const XStringRes _Const00A1 = { _StringsDefault0, 0x00D5 };
static const XPoint _Const00A2 = { 217, 32 };
static const XPoint _Const00A3 = { 217, 0 };
static const XRect _Const00A4 = {{ 44, 8 }, { 113, 26 }};
static const XRect _Const00A5 = {{ 250, 0 }, { 316, 32 }};
static const XRect _Const00A6 = {{ 217, 5 }, { 242, 30 }};
static const XRect _Const00A7 = {{ 131, 8 }, { 201, 26 }};
static const XStringRes _Const00A8 = { _StringsDefault0, 0x00FA };
static const XRect _Const00A9 = {{ -25, 5 }, { 0, 30 }};
static const XRect _Const00AA = {{ 0, 0 }, { 250, 50 }};
static const XRect _Const00AB = {{ 0, 0 }, { 250, 52 }};
static const XPoint _Const00AC = { 25, 52 };
static const XPoint _Const00AD = { 205, 52 };
static const XPoint _Const00AE = { 205, 0 };
static const XPoint _Const00AF = { 25, 0 };
static const XPoint _Const00B0 = { 250, 50 };
static const XPoint _Const00B1 = { 0, 50 };
static const XRect _Const00B2 = {{ 32, 4 }, { 114, 22 }};
static const XStringRes _Const00B3 = { _StringsDefault0, 0x0106 };
static const XRect _Const00B4 = {{ 114, 4 }, { 220, 22 }};
static const XRect _Const00B5 = {{ 32, 33 }, { 101, 47 }};
static const XStringRes _Const00B6 = { _StringsDefault0, 0x0111 };
static const XRect _Const00B7 = {{ 162, 22 }, { 220, 36 }};
static const XStringRes _Const00B8 = { _StringsDefault0, 0x011D };
static const XRect _Const00B9 = {{ 225, 2 }, { 250, 27 }};
static const XRect _Const00BA = {{ 0, 17 }, { 25, 42 }};
static const XRect _Const00BB = {{ -25, 11 }, { 0, 36 }};
static const XRect _Const00BC = {{ 250, 1 }, { 316, 51 }};
static const XPoint _Const00BD = { 265, 371 };
static const XPoint _Const00BE = { 7, 371 };
static const XRect _Const00BF = {{ 19, 342 }, { 263, 371 }};
static const XRect _Const00C0 = {{ 7, 316 }, { 265, 349 }};
static const XPoint _Const00C1 = { 265, 316 };
static const XPoint _Const00C2 = { 7, 316 };
static const XPoint _Const00C3 = { 265, 237 };
static const XPoint _Const00C4 = { 7, 237 };
static const XRect _Const00C5 = {{ 8, 246 }, { 263, 267 }};
static const XStringRes _Const00C6 = { _StringsDefault0, 0x0125 };
static const XRect _Const00C7 = {{ 67, 267 }, { 263, 289 }};
static const XStringRes _Const00C8 = { _StringsDefault0, 0x0133 };
static const XRect _Const00C9 = {{ 7, 267 }, { 67, 289 }};
static const XStringRes _Const00CA = { _StringsDefault0, 0x0143 };
static const XRect _Const00CB = {{ 67, 289 }, { 263, 311 }};
static const XStringRes _Const00CC = { _StringsDefault0, 0x014D };
static const XStringRes _Const00CD = { _StringsDefault0, 0x015A };
static const XStringRes _Const00CE = { _StringsDefault0, 0x0165 };
static const XRect _Const00CF = {{ 36, 340 }, { 101, 432 }};
static const XRect _Const00D0 = {{ 18, 73 }, { 91, 103 }};
static const XStringRes _Const00D1 = { _StringsDefault0, 0x0170 };
static const XRect _Const00D2 = {{ 18, 42 }, { 171, 72 }};
static const XRect _Const00D3 = {{ 184, 28 }, { 254, 119 }};
static const XRect _Const00D4 = {{ 0, 400 }, { 272, 440 }};
static const XRect _Const00D5 = {{ 0, 400 }, { 68, 440 }};
static const XRect _Const00D6 = {{ 68, 400 }, { 136, 440 }};
static const XRect _Const00D7 = {{ 136, 400 }, { 204, 440 }};
static const XRect _Const00D8 = {{ 204, 400 }, { 272, 440 }};
static const XRect _Const00D9 = {{ 170, 14 }, { 236, 39 }};
static const XRect _Const00DA = {{ 0, 0 }, { 260, 45 }};
static const XPoint _Const00DB = { 0, 41 };
static const XPoint _Const00DC = { 260, 41 };
static const XPoint _Const00DD = { 260, 0 };
static const XRect _Const00DE = {{ 59, 2 }, { 255, 32 }};
static const XRect _Const00DF = {{ 59, 24 }, { 156, 44 }};
static const XRect _Const00E0 = {{ 6, 0 }, { 56, 48 }};
static const XRect _Const00E1 = {{ 0, 122 }, { 272, 466 }};
static const XRect _Const00E2 = {{ 3, 80 }, { 269, 112 }};
static const XRect _Const00E3 = {{ 11, 40 }, { 264, 80 }};
static const XRect _Const00E4 = {{ 239, 15 }, { 264, 40 }};
static const XRect _Const00E5 = {{ 11, 15 }, { 59, 40 }};
static const XRect _Const00E6 = {{ 0, 0 }, { 269, 45 }};
static const XPoint _Const00E7 = { 0, 44 };
static const XPoint _Const00E8 = { 269, 44 };
static const XPoint _Const00E9 = { 269, 0 };
static const XRect _Const00EA = {{ 251, -3 }, { 276, 22 }};
static const XRect _Const00EB = {{ 235, 3 }, { 258, 15 }};
static const XPoint _Const00EC = { 269, 45 };
static const XPoint _Const00ED = { 50, 44 };
static const XRect _Const00EE = {{ 56, 24 }, { 269, 44 }};
static const XRect _Const00EF = {{ 56, 2 }, { 232, 24 }};
static const XStringRes _Const00F0 = { _StringsDefault0, 0x017D };
static const XRect _Const00F1 = {{ 0, 0 }, { 50, 48 }};
static const XRect _Const00F2 = {{ -39, 7 }, { -4, 42 }};
static const XPoint _Const00F3 = { 50, 0 };
static const XRect _Const00F4 = {{ 0, 69 }, { 272, 435 }};
static const XRect _Const00F5 = {{ 2, 71 }, { 274, 433 }};
static const XRect _Const00F6 = {{ 0, 0 }, { 272, 60 }};
static const XPoint _Const00F7 = { 272, 60 };
static const XPoint _Const00F8 = { 0, 60 };
static const XRect _Const00F9 = {{ 3, 435 }, { 269, 467 }};
static const XStringRes _Const00FA = { _StringsDefault0, 0x0184 };
static const XRect _Const00FB = {{ 241, 4 }, { 266, 29 }};
static const XRect _Const00FC = {{ 90, 5 }, { 182, 60 }};
static const XStringRes _Const00FD = { _StringsDefault0, 0x018A };
static const XRect _Const00FE = {{ 3, 4 }, { 53, 79 }};
static const XStringRes _Const00FF = { _StringsDefault0, 0x0194 };
static const XColor _Const0100 = { 0xAA, 0xAA, 0xAA, 0xFF };
static const XRect _Const0101 = {{ 0, 420 }, { 272, 480 }};
static const XColor _Const0102 = { 0x94, 0x94, 0x94, 0x96 };
static const XColor _Const0103 = { 0xB9, 0xB9, 0xB9, 0xAD };
static const XColor _Const0104 = { 0xC3, 0xC3, 0xC3, 0xB0 };
static const XColor _Const0105 = { 0xCD, 0xCD, 0xCD, 0xDA };
static const XColor _Const0106 = { 0x79, 0x79, 0x79, 0x86 };
static const XRect _Const0107 = {{ 53, 425 }, { 103, 475 }};
static const XRect _Const0108 = {{ 170, 425 }, { 220, 475 }};
static const XRect _Const0109 = {{ 0, 0 }, { 272, 50 }};
static const XStringRes _Const010A = { _StringsDefault0, 0x019F };
static const XRect _Const010B = {{ 34, 60 }, { 239, 150 }};
static const XPoint _Const010C = { 220, 0 };
static const XRect _Const010D = {{ 186, 9 }, { 202, 21 }};
static const XStringRes _Const010E = { _StringsDefault0, 0x01B5 };
static const XPoint _Const010F = { 10, 10 };
static const XStringRes _Const0110 = { _StringsDefault0, 0x01BC };
static const XColor _Const0111 = { 0x5E, 0x5E, 0x5E, 0xFF };
static const XColor _Const0112 = { 0x00, 0x00, 0x00, 0xFF };
static const XColor _Const0113 = { 0xF0, 0xF0, 0xF0, 0xFF };
static const XRect _Const0114 = {{ 101, 205 }, { 171, 275 }};
static const XPoint _Const0115 = { 1, 0 };
static const XPoint _Const0116 = { 272, 0 };
static const XPoint _Const0117 = { 271, 480 };
static const XPoint _Const0118 = { 0, 480 };

/* Initializer for the class 'Application::ContactsPage' */
void ApplicationContactsPage__Init( ApplicationContactsPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactsPage );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->VerticalList, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->UpButton, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->DownButton, &_this->_.XObject, 0 );
  ComponentsSearchEtxt__Init( &_this->SearchExt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TitleTxt, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->PlusButton, &_this->_.XObject, 0 );
  TemplatesTextEditor__Init( &_this->TextEditor1, &_this->_.XObject, 0 );
  ApplicationMyCardItem__Init( &_this->MyCardItem, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreView_OnSetLayout((CoreView)&_this->VerticalList, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const0001 );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 32 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( ApplicationContactItem ));
  CoreView_OnSetStackingPriority((CoreView)&_this->SlideTouchHandler, -1 );
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToLeft 
  | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0002 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const0003 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreView_OnSetLayout((CoreView)&_this->UpButton, CoreLayoutAlignToRight | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->UpButton, _Const0004 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->UpButton, 
  EwLoadString( &ResUpIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->UpButton, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->UpButton, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->UpButton, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->UpButton, 
  ResTransparent );
  CoreView_OnSetLayout((CoreView)&_this->DownButton, CoreLayoutAlignToRight | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->DownButton, _Const0005 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->DownButton, 1 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->DownButton, 
  EwLoadString( &ResDownIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->DownButton, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->DownButton, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->DownButton, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->DownButton, 
  ResTransparent );
  CoreView_OnSetLayout((CoreView)&_this->SearchExt, CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->SearchExt, _Const0006 );
  ComponentsSearchEtxt_OnSetColor( &_this->SearchExt, ResGrey );
  CoreRectView__OnSetBounds( &_this->TitleTxt, _Const0007 );
  ViewsText_OnSetAlignment( &_this->TitleTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TitleTxt, EwLoadString( &StringsContactsTxtx ));
  ViewsText_OnSetColor( &_this->TitleTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->PlusButton, _Const0008 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->PlusButton, 1 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->PlusButton, 
  EwLoadString( &ResPlusIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->PlusButton, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->PlusButton, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->PlusButton, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->PlusButton, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->TextEditor1, _Const0009 );
  CoreRectView__OnSetBounds( &_this->MyCardItem, _Const000A );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UpButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DownButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SearchExt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PlusButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextEditor1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MyCardItem ), 0 );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationContactsPage_OnLoadItem );
  CoreVerticalList_OnSetSlideHandler( &_this->VerticalList, &_this->SlideTouchHandler );
  _this->UpButton.Super1.OnActivate = EwNewSlot( _this, ApplicationContactsPage_onUpPress );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->UpButton, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->UpButton, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  _this->DownButton.Super1.OnActivate = EwNewSlot( _this, ApplicationContactsPage_onDownPress );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->DownButton, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->DownButton, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  _this->SearchExt.OnChange = EwNewSlot( _this, ApplicationContactsPage_onSearch );
  ViewsText_OnSetFont( &_this->TitleTxt, EwLoadResource( &ResTitileFont32, ResourcesFont ));
  _this->PlusButton.Super1.OnActivate = EwNewSlot( _this, ApplicationContactsPage_onAddPress );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->PlusButton, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->PlusButton, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  _this->MyCardItem.OnActivate = EwNewSlot( _this, ApplicationContactsPage_onMyCardPress );

  /* Call the user defined constructor */
  ApplicationContactsPage_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::ContactsPage' */
void ApplicationContactsPage__ReInit( ApplicationContactsPage _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  CoreVerticalList__ReInit( &_this->VerticalList );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  ComponentsSButton25x25__ReInit( &_this->UpButton );
  ComponentsSButton25x25__ReInit( &_this->DownButton );
  ComponentsSearchEtxt__ReInit( &_this->SearchExt );
  ViewsText__ReInit( &_this->TitleTxt );
  ComponentsSButton25x25__ReInit( &_this->PlusButton );
  TemplatesTextEditor__ReInit( &_this->TextEditor1 );
  ApplicationMyCardItem__ReInit( &_this->MyCardItem );
}

/* Finalizer method for the class 'Application::ContactsPage' */
void ApplicationContactsPage__Done( ApplicationContactsPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  CoreVerticalList__Done( &_this->VerticalList );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  ComponentsSButton25x25__Done( &_this->UpButton );
  ComponentsSButton25x25__Done( &_this->DownButton );
  ComponentsSearchEtxt__Done( &_this->SearchExt );
  ViewsText__Done( &_this->TitleTxt );
  ComponentsSButton25x25__Done( &_this->PlusButton );
  TemplatesTextEditor__Done( &_this->TextEditor1 );
  ApplicationMyCardItem__Done( &_this->MyCardItem );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationContactsPage_Init( ApplicationContactsPage _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationContactsPage_onNoOfContactsChanged ), 
    EwNewRef( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, DeviceContactList_OnGetNoOfItems, 
    DeviceContactList_OnSetNoOfItems ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationContactsPage_onNoOfContactsChanged ), 
    ((XObject)_this ));
  EwAttachRefObserver( EwNewSlot( _this, ApplicationContactsPage_onContactsSortingChanged ), 
    EwNewRef( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, DeviceContactList_OnGetSorting, 
    DeviceContactList_OnSetSorting ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationContactsPage_onContactsSortingChanged ), 
    ((XObject)_this ));
  EwAttachRefObserver( EwNewSlot( _this, ApplicationContactsPage_onMYCardUpdate ), 
    EwNewRef( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), DeviceDeviceClass_OnGetMyCard, 
    DeviceDeviceClass_OnSetMyCard ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationContactsPage_onMYCardUpdate ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::ContactsPage.onAddPress()' */
void ApplicationContactsPage_onAddPress( ApplicationContactsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->addContact = EwNewObject( ApplicationContactAddPage, 0 );
  _this->addContact->OnSave = EwNewSlot( _this, ApplicationContactsPage_onSaveAdd );
  _this->addContact->OnClose = EwNewSlot( _this, ApplicationContactsPage_onCancelAdd );
  ApplicationContactAddPage_OnSetContact( _this->addContact, EwNewObject( DeviceContact, 
  0 ));
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->addContact ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideUpCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::ContactsPage.onSaveAdd()' */
void ApplicationContactsPage_onSaveAdd( ApplicationContactsPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceContactList_AddLast( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
  _this->addContact->Contact );
  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->addContact ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->addContact = 0;
}

/* 'C' function for method : 'Application::ContactsPage.onCancelAdd()' */
void ApplicationContactsPage_onCancelAdd( ApplicationContactsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->addContact ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::ContactsPage.onDeleteContact()' */
void ApplicationContactsPage_onDeleteContact( ApplicationContactsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideRightCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::ContactsPage.onSearch()' */
void ApplicationContactsPage_onSearch( ApplicationContactsPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Application::ContactsPage.onCloseContact()' */
void ApplicationContactsPage_onCloseContact( ApplicationContactsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideRightCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::ContactsPage.onUpPress()' */
void ApplicationContactsPage_onUpPress( ApplicationContactsPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  DeviceContactList_OnSetSorting( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
  DeviceSortingAscending );
}

/* 'C' function for method : 'Application::ContactsPage.onDownPress()' */
void ApplicationContactsPage_onDownPress( ApplicationContactsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  DeviceContactList_OnSetSorting( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
  DeviceSortingDescending );
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationContactsPage_OnLoadItem( ApplicationContactsPage _this, XObject 
  sender )
{
  XInt32 itemNo;
  DeviceContact contact;
  ApplicationContactItem itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  contact = DeviceContactList_GetContact( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
  itemNo );
  itemView = EwCastObject( _this->VerticalList.View, ApplicationContactItem );

  if ( itemView == 0 )
    return;

  ApplicationContactItem_OnSetContact( itemView, contact );
  itemView->OnActivate = EwNewSlot( _this, ApplicationContactsPage__onContactActivated );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->VerticalList.Super2.Bounds ), _this->VerticalList.ItemHeight )));
}

/* 'C' function for method : 'Application::ContactsPage.onNoOfContactsChanged()' */
void ApplicationContactsPage_onNoOfContactsChanged( ApplicationContactsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, EwGetAutoObject( &DeviceDevice, 
  DeviceDeviceClass )->Contacts.NoOfItems );
}

/* 'C' function for method : 'Application::ContactsPage.onContactsSortingChanged()' */
void ApplicationContactsPage_onContactsSortingChanged( ApplicationContactsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
}

/* 'C' function for method : 'Application::ContactsPage.onContactActivated()' */
void ApplicationContactsPage_onContactActivated( ApplicationContactsPage _this, 
  XObject sender )
{
  ApplicationContactItem itemView = EwCastObject( sender, ApplicationContactItem );

  if ( itemView != 0 )
  {
    _this->detailsPage = EwNewObject( ApplicationContactDetailsPage, 0 );
    _this->detailsPage->OnBack = EwNewSlot( _this, ApplicationContactsPage_onCloseContact );
    _this->detailsPage->OnDelete = EwNewSlot( _this, ApplicationContactsPage_onDeleteContact );
    ApplicationContactDetailsPage_OnSetContact( _this->detailsPage, itemView->Contact );
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->detailsPage ), 
    ((EffectsTransition)EwGetAutoObject( &ResSlideLeftCentered, EffectsSlideTransition )), 
    0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  }
}

/* Wrapper function for the virtual method : 'Application::ContactsPage.onContactActivated()' */
__declspec( naked ) void ApplicationContactsPage__onContactActivated( void* _this, 
  XObject sender )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 148 ]
  }
}

/* 'C' function for method : 'Application::ContactsPage.onMYCardUpdate()' */
void ApplicationContactsPage_onMYCardUpdate( ApplicationContactsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
}

/* 'C' function for method : 'Application::ContactsPage.onMyCardPress()' */
void ApplicationContactsPage_onMyCardPress( ApplicationContactsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyCard != 0 )
  {
    DeviceContact contact = DeviceContactList_FindByID( &EwGetAutoObject( &DeviceDevice, 
      DeviceDeviceClass )->Contacts, EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyCard );

    if ( contact != 0 )
    {
      _this->detailsPage = EwNewObject( ApplicationContactDetailsPage, 0 );
      _this->detailsPage->OnBack = EwNewSlot( _this, ApplicationContactsPage_onCloseContact );
      ApplicationContactDetailsPage_OnSetContact( _this->detailsPage, contact );
      CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->detailsPage ), 
      ((EffectsTransition)EwGetAutoObject( &ResSlideLeftCentered, EffectsSlideTransition )), 
      0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
    }
  }
}

/* Variants derived from the class : 'Application::ContactsPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactsPage )
EW_END_OF_CLASS_VARIANTS( ApplicationContactsPage )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsPage' */
EW_DEFINE_CLASS( ApplicationContactsPage, CoreGroup, addContact, Background, Background, 
                 Background, _.VMT, _.VMT, "Application::ContactsPage" )
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
  ApplicationContactsPage_onContactActivated,
EW_END_OF_CLASS( ApplicationContactsPage )

/* Initializer for the class 'Application::ContactItem' */
void ApplicationContactItem__Init( ApplicationContactItem _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactItem );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->LastNameTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->FirstNameTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->PrfofilButton, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->MeTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000B );
  _this->ButtonColor = ResWhite;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  _this->TextColor = ResBlack;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const000C );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const000D );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const000E );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const000F );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Background, _Const000B );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const0010 );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const0010 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0011 );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const0012 );
  ViewsText_OnSetAlignment( &_this->LastNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->LastNameTxt, 0 );
  ViewsText_OnSetColor( &_this->LastNameTxt, ResBlack );
  CoreView_OnSetStackingPriority((CoreView)&_this->FirstNameTxt, 0 );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const0013 );
  ViewsText_OnSetAlignment( &_this->FirstNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->FirstNameTxt, 0 );
  ViewsText_OnSetColor( &_this->FirstNameTxt, ResBlack );
  CoreView_OnSetLayout((CoreView)&_this->Line, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const000D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const000C );
  ViewsLine_OnSetWidth( &_this->Line, 2 );
  ViewsLine_OnSetColor( &_this->Line, ResGreyLight );
  CoreRectView__OnSetBounds( &_this->PrfofilButton, _Const0014 );
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->PrfofilButton, 
  ResWhite );
  CoreView_OnSetLayout((CoreView)&_this->Line1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const000E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const000F );
  ViewsLine_OnSetWidth( &_this->Line1, 2 );
  ViewsLine_OnSetColor( &_this->Line1, ResGreyLight );
  CoreRectView__OnSetBounds( &_this->MeTxt, _Const0015 );
  ViewsText_OnSetAutoSize( &_this->MeTxt, 1 );
  ViewsText_OnSetAlignment( &_this->MeTxt, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MeTxt, EwLoadString( &_Const0016 ));
  ViewsText_OnSetColor( &_this->MeTxt, ResTransparent );
  ViewsText_OnSetVisible( &_this->MeTxt, 1 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->LastNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FirstNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PrfofilButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MeTxt ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationContactItem_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationContactItem_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationContactItem_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationContactItem_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationContactItem_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationContactItem_onPressTouch );
  ViewsText_OnSetFont( &_this->LastNameTxt, EwLoadResource( &ResContactFontBold15, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->FirstNameTxt, EwLoadResource( &ResContactFont15, 
  ResourcesFont ));
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->PrfofilButton, 
  EwLoadResource( &ResContactFont15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->PrfofilButton, 
  EwLoadResource( &ResContactFont15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->PrfofilButton, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->MeTxt, EwLoadResource( &ResourcesDefaultFont, ResourcesFont ));

  /* Call the user defined constructor */
  ApplicationContactItem_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::ContactItem' */
void ApplicationContactItem__ReInit( ApplicationContactItem _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsRectangle__ReInit( &_this->Background );
  ViewsText__ReInit( &_this->LastNameTxt );
  ViewsText__ReInit( &_this->FirstNameTxt );
  ViewsLine__ReInit( &_this->Line );
  ComponentsSButton25x25__ReInit( &_this->PrfofilButton );
  ViewsLine__ReInit( &_this->Line1 );
  ViewsText__ReInit( &_this->MeTxt );
}

/* Finalizer method for the class 'Application::ContactItem' */
void ApplicationContactItem__Done( ApplicationContactItem _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsRectangle__Done( &_this->Background );
  ViewsText__Done( &_this->LastNameTxt );
  ViewsText__Done( &_this->FirstNameTxt );
  ViewsLine__Done( &_this->Line );
  ComponentsSButton25x25__Done( &_this->PrfofilButton );
  ViewsLine__Done( &_this->Line1 );
  ViewsText__Done( &_this->MeTxt );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationContactItem_Init( ApplicationContactItem _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationContactItem_onContactUpdated ), 
    EwNewRef( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), DeviceDeviceClass_OnGetMyCard, 
    DeviceDeviceClass_OnSetMyCard ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationContactItem_onContactUpdated ), ((XObject)_this ));
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
void ApplicationContactItem_UpdateViewState( ApplicationContactItem _this, XSet 
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

  if ( !isEnabled )
  {
    ViewsRectangle_OnSetColor( &_this->Background, _this->ButtonColor );
    ViewsText_OnSetColor( &_this->LastNameTxt, ResGrey );
    ViewsText_OnSetColor( &_this->FirstNameTxt, ResGrey );
    ViewsText_OnSetColor( &_this->MeTxt, ResTransparent );
  }
  else
    if ( isPressed )
      ViewsRectangle_OnSetColor( &_this->Background, ResPressColor );
    else
      if ( isSelected )
        ViewsRectangle_OnSetColor( &_this->Background, ResGreyLight );
      else
      {
        ViewsRectangle_OnSetColor( &_this->Background, _this->ButtonColor );
        ViewsText_OnSetColor( &_this->LastNameTxt, _this->TextColor );
        ViewsText_OnSetColor( &_this->FirstNameTxt, _this->TextColor );
        ViewsText_OnSetColor( &_this->MeTxt, ResTransparent );
      }

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* 'C' function for method : 'Application::ContactItem.OnSetContact()' */
void ApplicationContactItem_OnSetContact( ApplicationContactItem _this, DeviceContact 
  value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationContactItem_onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
    EwAttachObjObserver( EwNewSlot( _this, ApplicationContactItem_onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  EwPostSignal( EwNewSlot( _this, ApplicationContactItem_onContactUpdated ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::ContactItem.onContactUpdated()' */
void ApplicationContactItem_onContactUpdated( ApplicationContactItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Contact == 0 )
  {
    ViewsText_OnSetString( &_this->FirstNameTxt, 0 );
    ViewsText_OnSetString( &_this->LastNameTxt, 0 );
    ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->PrfofilButton, 
    0 );
  }
  else
  {
    if ( !EwCompString( _this->Contact->LastName, 0 ))
      ViewsText_OnSetString( &_this->LastNameTxt, _this->Contact->FirstName );
    else
    {
      ViewsText_OnSetString( &_this->FirstNameTxt, _this->Contact->FirstName );
      ViewsText_OnSetString( &_this->LastNameTxt, _this->Contact->LastName );
    }

    ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->PrfofilButton, 
    _this->Contact->NameInitials );

    if (( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyCard != 0 ) && 
        ( _this->Contact->ID == EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyCard->ID ))
      ViewsText_OnSetColor( &_this->MeTxt, ResGrey );
  }
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationContactItem_onFlashTimer( ApplicationContactItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationContactItem_onPressKey( ApplicationContactItem _this, XObject sender )
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
void ApplicationContactItem_onEnterLeaveTouch( ApplicationContactItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ApplicationContactItem_onReleaseTouch( ApplicationContactItem _this, XObject 
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
void ApplicationContactItem_onPressTouch( ApplicationContactItem _this, XObject 
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

/* Variants derived from the class : 'Application::ContactItem' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactItem )
EW_END_OF_CLASS_VARIANTS( ApplicationContactItem )

/* Virtual Method Table (VMT) for the class : 'Application::ContactItem' */
EW_DEFINE_CLASS( ApplicationContactItem, CoreGroup, Contact, OnActivate, FlashTimer, 
                 FlashTimer, ButtonColor, ButtonColor, "Application::ContactItem" )
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
  ApplicationContactItem_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationContactItem )

/* Initializer for the class 'Application::ContactDetailsPage' */
void ApplicationContactDetailsPage__Init( ApplicationContactDetailsPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactDetailsPage );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->NumberTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->MobileTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );
  ComponentsButton50x75__Init( &_this->CallBtn, &_this->_.XObject, 0 );
  ComponentsButton50x75__Init( &_this->VideoCallBtn, &_this->_.XObject, 0 );
  ComponentsButton50x75__Init( &_this->PushButtonMediumBlue2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ContactName, &_this->_.XObject, 0 );
  ComponentsButtonBase70x90__Init( &_this->UserInitialsBtn, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->EditBtn, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->BackBtn, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->FavoritTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactDetailsPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const0017 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const0018 );
  ViewsLine_OnSetColor( &_this->Line2, _Const0019 );
  CoreView_OnSetLayout((CoreView)&_this->NumberTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->NumberTxt, _Const001A );
  ViewsText_OnSetColorBR( &_this->NumberTxt, _Const001B );
  ViewsText_OnSetAlignment( &_this->NumberTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->NumberTxt, EwLoadString( &_Const001C ));
  ViewsText_OnSetColor( &_this->NumberTxt, ResBlue );
  CoreView_OnSetLayout((CoreView)&_this->MobileTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->MobileTxt, _Const001D );
  ViewsText_OnSetAlignment( &_this->MobileTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MobileTxt, EwLoadString( &StringsMobileTxt ));
  ViewsText_OnSetColor( &_this->MobileTxt, ResBlack );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const001E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const001F );
  ViewsLine_OnSetColor( &_this->Line1, _Const0019 );
  CoreRectView__OnSetBounds( &_this->CallBtn, _Const0020 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->CallBtn, 
  EwLoadString( &ResCallIcon ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->CallBtn, 
  EwLoadString( &StringscallTxt ));
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->CallBtn, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->CallBtn, 
  ResBlueLight );
  CoreRectView__OnSetBounds( &_this->VideoCallBtn, _Const0021 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->VideoCallBtn, 0 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  EwLoadString( &ResVideoCallIcon ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  EwLoadString( &StringsVideoTxt ));
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  ResBlueLight );
  ComponentsButtonBase70x90_OnSetIconColorEnabled((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  ResGreyLight );
  CoreRectView__OnSetBounds( &_this->PushButtonMediumBlue2, _Const0022 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->PushButtonMediumBlue2, 1 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->PushButtonMediumBlue2, 
  EwLoadString( &ResMessageIcon ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->PushButtonMediumBlue2, 
  EwLoadString( &StringsmessageTxt ));
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->PushButtonMediumBlue2, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->PushButtonMediumBlue2, 
  ResBlueLight );
  CoreView_OnSetLayout((CoreView)&_this->ContactName, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->ContactName, _Const0023 );
  ViewsText_OnSetAlignment( &_this->ContactName, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ContactName, EwLoadString( &_Const0024 ));
  ViewsText_OnSetColor( &_this->ContactName, ResBlack );
  CoreRectView__OnSetBounds( &_this->UserInitialsBtn, _Const0025 );
  CoreRectView__OnSetBounds( &_this->EditBtn, _Const0026 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->EditBtn, 
  EwLoadString( &ResEditIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->EditBtn, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->EditBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->EditBtn, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->BackBtn, _Const0027 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->BackBtn, 
  EwLoadString( &ResBackIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->BackBtn, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->BackBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->BackBtn, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->FavoritTxt, _Const0028 );
  ViewsText_OnSetString( &_this->FavoritTxt, EwLoadString( &ResHeartIcon ));
  ViewsText_OnSetColor( &_this->FavoritTxt, ResGrey );
  ViewsText_OnSetVisible( &_this->FavoritTxt, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumberTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MobileTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CallBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VideoCallBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButtonMediumBlue2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ContactName ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UserInitialsBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->EditBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BackBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FavoritTxt ), 0 );
  ViewsText_OnSetFont( &_this->NumberTxt, EwLoadResource( &ResContactFont15, ResourcesFont ));
  ViewsText_OnSetFont( &_this->MobileTxt, EwLoadResource( &ResContactFont15, ResourcesFont ));
  _this->CallBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationContactDetailsPage_onTapCall );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->CallBtn, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->CallBtn, 
  EwLoadResource( &ResButtonRoundMedium, ResourcesBitmap ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  EwLoadResource( &ResButtonRoundMedium, ResourcesBitmap ));
  _this->PushButtonMediumBlue2.Super1.OnActivate = EwNewSlot( _this, ApplicationContactDetailsPage_onTapMessage );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->PushButtonMediumBlue2, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->PushButtonMediumBlue2, 
  EwLoadResource( &ResButtonRoundMedium, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->ContactName, EwLoadResource( &ResTitileFont29, ResourcesFont ));
  _this->EditBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationContactDetailsPage__onTapEdit );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->EditBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->EditBtn, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  _this->BackBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationContactDetailsPage_onBackHome );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->BackBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->BackBtn, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->FavoritTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::ContactDetailsPage' */
void ApplicationContactDetailsPage__ReInit( ApplicationContactDetailsPage _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ViewsLine__ReInit( &_this->Line2 );
  ViewsText__ReInit( &_this->NumberTxt );
  ViewsText__ReInit( &_this->MobileTxt );
  ViewsLine__ReInit( &_this->Line1 );
  ComponentsButton50x75__ReInit( &_this->CallBtn );
  ComponentsButton50x75__ReInit( &_this->VideoCallBtn );
  ComponentsButton50x75__ReInit( &_this->PushButtonMediumBlue2 );
  ViewsText__ReInit( &_this->ContactName );
  ComponentsButtonBase70x90__ReInit( &_this->UserInitialsBtn );
  ComponentsSButton25x25__ReInit( &_this->EditBtn );
  ComponentsSButton25x25__ReInit( &_this->BackBtn );
  ViewsText__ReInit( &_this->FavoritTxt );
}

/* Finalizer method for the class 'Application::ContactDetailsPage' */
void ApplicationContactDetailsPage__Done( ApplicationContactDetailsPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ViewsLine__Done( &_this->Line2 );
  ViewsText__Done( &_this->NumberTxt );
  ViewsText__Done( &_this->MobileTxt );
  ViewsLine__Done( &_this->Line1 );
  ComponentsButton50x75__Done( &_this->CallBtn );
  ComponentsButton50x75__Done( &_this->VideoCallBtn );
  ComponentsButton50x75__Done( &_this->PushButtonMediumBlue2 );
  ViewsText__Done( &_this->ContactName );
  ComponentsButtonBase70x90__Done( &_this->UserInitialsBtn );
  ComponentsSButton25x25__Done( &_this->EditBtn );
  ComponentsSButton25x25__Done( &_this->BackBtn );
  ViewsText__Done( &_this->FavoritTxt );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::ContactDetailsPage.onTapEdit()' */
void ApplicationContactDetailsPage_onTapEdit( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->editPage = EwNewObject( ApplicationContactEditPage, 0 );
  _this->editPage->OnSave = EwNewSlot( _this, ApplicationContactDetailsPage_onSaveEdit );
  _this->editPage->OnClose = EwNewSlot( _this, ApplicationContactDetailsPage_onCancelEdit );
  ApplicationContactEditPage_OnSetContact( _this->editPage, _this->Contact );
  _this->editPage->OnDelete = EwNewSlot( _this, ApplicationContactDetailsPage_onDelete );
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->editPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideLeftCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* Wrapper function for the virtual method : 'Application::ContactDetailsPage.onTapEdit()' */
__declspec( naked ) void ApplicationContactDetailsPage__onTapEdit( void* _this, 
  XObject sender )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 148 ]
  }
}

/* 'C' function for method : 'Application::ContactDetailsPage.onDelete()' */
void ApplicationContactDetailsPage_onDelete( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnDelete, ((XObject)_this ));
  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->editPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::ContactDetailsPage.onTapCall()' */
void ApplicationContactDetailsPage_onTapCall( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_SendCallContact( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  _this->Contact );
}

/* 'C' function for method : 'Application::ContactDetailsPage.onSaveEdit()' */
void ApplicationContactDetailsPage_onSaveEdit( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->editPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::ContactDetailsPage.onCancelEdit()' */
void ApplicationContactDetailsPage_onCancelEdit( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->chat ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->editPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->chat = 0;
}

/* 'C' function for method : 'Application::ContactDetailsPage.onBackHome()' */
void ApplicationContactDetailsPage_onBackHome( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnBack, ((XObject)_this ));
}

/* 'C' function for method : 'Application::ContactDetailsPage.OnSetContact()' */
void ApplicationContactDetailsPage_OnSetContact( ApplicationContactDetailsPage _this, 
  DeviceContact value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationContactDetailsPage__onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationContactDetailsPage__onContactUpdated ), 
      (XObject)_this->Contact, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationContactDetailsPage__onContactUpdated ), 
      ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::ContactDetailsPage.onContactUpdated()' */
void ApplicationContactDetailsPage_onContactUpdated( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Contact != 0 )
  {
    ViewsText_OnSetString( &_this->ContactName, EwConcatString( EwConcatString( 
    _this->Contact->LastName, EwLoadString( &_Const0029 )), _this->Contact->FirstName ));
    ViewsText_OnSetString( &_this->NumberTxt, _this->Contact->PhoneNumber );
    ComponentsButtonBase70x90_OnSetIcon( &_this->UserInitialsBtn, _this->Contact->NameInitials );
    ViewsText_OnSetVisible( &_this->FavoritTxt, ( _this->Contact->Favorite? 1 : 
    0 ));
  }
}

/* Wrapper function for the virtual method : 'Application::ContactDetailsPage.onContactUpdated()' */
__declspec( naked ) void ApplicationContactDetailsPage__onContactUpdated( void* _this, 
  XObject sender )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 152 ]
  }
}

/* 'C' function for method : 'Application::ContactDetailsPage.onTapMessage()' */
void ApplicationContactDetailsPage_onTapMessage( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->chat = EwNewObject( ApplicationChat, 0 );
  ApplicationChat_OnSetContact( _this->chat, _this->Contact );
  _this->chat->OnBack = EwNewSlot( _this, ApplicationContactDetailsPage_onBack );
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->chat ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::ContactDetailsPage.onBack()' */
void ApplicationContactDetailsPage_onBack( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->editPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->editPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* Variants derived from the class : 'Application::ContactDetailsPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactDetailsPage )
EW_END_OF_CLASS_VARIANTS( ApplicationContactDetailsPage )

/* Virtual Method Table (VMT) for the class : 'Application::ContactDetailsPage' */
EW_DEFINE_CLASS( ApplicationContactDetailsPage, CoreGroup, editPage, OnDelete, Background, 
                 Background, _.VMT, _.VMT, "Application::ContactDetailsPage" )
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
  ApplicationContactDetailsPage_onTapEdit,
  ApplicationContactDetailsPage_onContactUpdated,
EW_END_OF_CLASS( ApplicationContactDetailsPage )

/* Initializer for the class 'Application::ContactAddPage' */
void ApplicationContactAddPage__Init( ApplicationContactAddPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactAddPage );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line4, &_this->_.XObject, 0 );
  ComponentsInputEtxt__Init( &_this->PhoneNumberTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line3, &_this->_.XObject, 0 );
  ComponentsInputEtxt__Init( &_this->FirstNameTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line2, &_this->_.XObject, 0 );
  ComponentsInputEtxt__Init( &_this->LastNameTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );
  ComponentsButtonBase70x90__Init( &_this->UserInitials, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TitleTxt, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->SaveBtn, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->CloseButton, &_this->_.XObject, 0 );
  ComponentsToggleButton__Init( &_this->ToggleButton, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactAddPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const002A );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const002B );
  ViewsLine_OnSetColor( &_this->Line4, _Const0019 );
  CoreView_OnSetLayout((CoreView)&_this->PhoneNumberTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->PhoneNumberTxt, _Const002C );
  ComponentsInputEtxt_OnSetString( &_this->PhoneNumberTxt, 0 );
  ComponentsInputEtxt_OnSetColor( &_this->PhoneNumberTxt, ResBlue );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->PhoneNumberTxt, EwLoadString( &_Const002D ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line3, _Const002E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line3, _Const002F );
  ViewsLine_OnSetColor( &_this->Line3, _Const0019 );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const0030 );
  ComponentsInputEtxt_OnSetString( &_this->FirstNameTxt, 0 );
  ComponentsInputEtxt_OnSetColor( &_this->FirstNameTxt, ResBlack );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->FirstNameTxt, EwLoadString( &_Const0031 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const0032 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const0033 );
  ViewsLine_OnSetColor( &_this->Line2, _Const0019 );
  CoreView_OnSetLayout((CoreView)&_this->LastNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const0034 );
  ComponentsInputEtxt_OnSetAlignment( &_this->LastNameTxt, 0 );
  ComponentsInputEtxt_OnSetString( &_this->LastNameTxt, 0 );
  ComponentsInputEtxt_OnSetColor( &_this->LastNameTxt, ResBlack );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->LastNameTxt, EwLoadString( &_Const0035 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const0036 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const0037 );
  ViewsLine_OnSetColor( &_this->Line1, _Const0019 );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const0038 );
  ComponentsButtonBase70x90_OnSetDescript( &_this->UserInitials, EwLoadString( &StringsAddPhototTxt ));
  CoreRectView__OnSetBounds( &_this->TitleTxt, _Const0039 );
  ViewsText_OnSetString( &_this->TitleTxt, EwLoadString( &StringsNewContactTxt ));
  ViewsText_OnSetColor( &_this->TitleTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->SaveBtn, _Const0026 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->SaveBtn, 0 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->SaveBtn, 
  EwLoadString( &ResCkeckIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->SaveBtn, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->SaveBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->SaveBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->SaveBtn, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->CloseButton, _Const0027 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->CloseButton, 
  EwLoadString( &ResCloseIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->CloseButton, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->CloseButton, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->CloseButton, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->CloseButton, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->ToggleButton, _Const003A );
  CoreRectView__OnSetBounds( &_this->Text, _Const003B );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &StringsMyCardTxt ));
  ViewsText_OnSetColor( &_this->Text, ResGrey );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PhoneNumberTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FirstNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->LastNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UserInitials ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SaveBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CloseButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ToggleButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->PhoneNumberTxt.OnChange = EwNewSlot( _this, ApplicationContactAddPage_onFieldChanged );
  _this->FirstNameTxt.OnChange = EwNewSlot( _this, ApplicationContactAddPage_onFieldChanged );
  _this->LastNameTxt.OnChange = EwNewSlot( _this, ApplicationContactAddPage_onFieldChanged );
  ViewsText_OnSetFont( &_this->TitleTxt, EwLoadResource( &ResContactFontBold15, 
  ResourcesFont ));
  _this->SaveBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationContactAddPage_onSave );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->SaveBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->SaveBtn, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  _this->CloseButton.Super1.OnActivate = EwNewSlot( _this, ApplicationContactAddPage_onClose );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->CloseButton, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->CloseButton, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::ContactAddPage' */
void ApplicationContactAddPage__ReInit( ApplicationContactAddPage _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ViewsLine__ReInit( &_this->Line4 );
  ComponentsInputEtxt__ReInit( &_this->PhoneNumberTxt );
  ViewsLine__ReInit( &_this->Line3 );
  ComponentsInputEtxt__ReInit( &_this->FirstNameTxt );
  ViewsLine__ReInit( &_this->Line2 );
  ComponentsInputEtxt__ReInit( &_this->LastNameTxt );
  ViewsLine__ReInit( &_this->Line1 );
  ComponentsButtonBase70x90__ReInit( &_this->UserInitials );
  ViewsText__ReInit( &_this->TitleTxt );
  ComponentsSButton25x25__ReInit( &_this->SaveBtn );
  ComponentsSButton25x25__ReInit( &_this->CloseButton );
  ComponentsToggleButton__ReInit( &_this->ToggleButton );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Application::ContactAddPage' */
void ApplicationContactAddPage__Done( ApplicationContactAddPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ViewsLine__Done( &_this->Line4 );
  ComponentsInputEtxt__Done( &_this->PhoneNumberTxt );
  ViewsLine__Done( &_this->Line3 );
  ComponentsInputEtxt__Done( &_this->FirstNameTxt );
  ViewsLine__Done( &_this->Line2 );
  ComponentsInputEtxt__Done( &_this->LastNameTxt );
  ViewsLine__Done( &_this->Line1 );
  ComponentsButtonBase70x90__Done( &_this->UserInitials );
  ViewsText__Done( &_this->TitleTxt );
  ComponentsSButton25x25__Done( &_this->SaveBtn );
  ComponentsSButton25x25__Done( &_this->CloseButton );
  ComponentsToggleButton__Done( &_this->ToggleButton );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationContactAddPage_UpdateLayout( ApplicationContactAddPage _this, XPoint 
  aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, EwSetRectOrigin( _this->LastNameTxt.Super3.Bounds, 
  _Const003C ));
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, EwSetRectOrigin( _this->FirstNameTxt.Super3.Bounds, 
  _Const003D ));
  CoreRectView__OnSetBounds( &_this->PhoneNumberTxt, EwSetRectOrigin( _this->PhoneNumberTxt.Super3.Bounds, 
  _Const003E ));
  CoreRectView__OnSetBounds( &_this->Background, EwGetRectORect( _this->Super2.Bounds ));
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
void ApplicationContactAddPage_UpdateViewState( ApplicationContactAddPage _this, 
  XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );

  if ( _this->Contact != 0 )
  {
    if ((( EwCompString( ComponentsInputEtxt_OnGetString( &_this->FirstNameTxt ), 
        0 ) != 0 ) || ( EwCompString( ComponentsInputEtxt_OnGetString( &_this->LastNameTxt ), 
        0 ) != 0 )) || ( EwCompString( ComponentsInputEtxt_OnGetString( &_this->PhoneNumberTxt ), 
        0 ) != 0 ))
      CoreGroup_OnSetEnabled((CoreGroup)&_this->SaveBtn, 1 );
    else
      CoreGroup_OnSetEnabled((CoreGroup)&_this->SaveBtn, 0 );
  }
}

/* 'C' function for method : 'Application::ContactAddPage.onSave()' */
void ApplicationContactAddPage_onSave( ApplicationContactAddPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNotifyObjObservers((XObject)_this->Contact, 0 );

  if ( _this->ToggleButton.Active == 1 )
    DeviceDeviceClass_OnSetMyCard( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
    _this->Contact );

  EwSignal( _this->OnSave, ((XObject)_this ));
}

/* 'C' function for method : 'Application::ContactAddPage.OnSetContact()' */
void ApplicationContactAddPage_OnSetContact( ApplicationContactAddPage _this, DeviceContact 
  value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationContactAddPage_onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationContactAddPage_onContactUpdated ), 
      (XObject)_this->Contact, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationContactAddPage_onContactUpdated ), 
      ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::ContactAddPage.onContactUpdated()' */
void ApplicationContactAddPage_onContactUpdated( ApplicationContactAddPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceContact_OnSetFirstName( _this->Contact, ComponentsInputEtxt_OnGetString( 
  &_this->FirstNameTxt ));
  DeviceContact_OnSetLastName( _this->Contact, ComponentsInputEtxt_OnGetString( 
  &_this->LastNameTxt ));
  DeviceContact_OnSetPhoneNumber( _this->Contact, ComponentsInputEtxt_OnGetString( 
  &_this->PhoneNumberTxt ));
  DeviceContact_OnSetNameInitials( _this->Contact, DeviceContactList_GetInitials( 
  &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, ComponentsInputEtxt_OnGetString( 
  &_this->LastNameTxt ), ComponentsInputEtxt_OnGetString( &_this->FirstNameTxt )));

  if ( _this->ToggleButton.Active == 1 )
    DeviceContact_OnSetMyCard( _this->Contact, _this->ToggleButton.Active );

  if ( !EwCompString( _this->Contact->LastName, 0 ) && !EwCompString( _this->Contact->FirstName, 
      0 ))
    DeviceContact_OnSetLastName( _this->Contact, _this->Contact->PhoneNumber );
}

/* 'C' function for method : 'Application::ContactAddPage.onClose()' */
void ApplicationContactAddPage_onClose( ApplicationContactAddPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnClose, ((XObject)_this ));
}

/* 'C' function for method : 'Application::ContactAddPage.onFieldChanged()' */
void ApplicationContactAddPage_onFieldChanged( ApplicationContactAddPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ComponentsButtonBase70x90_OnSetIcon( &_this->UserInitials, DeviceContactList_GetInitials( 
  &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, ComponentsInputEtxt_OnGetString( 
  &_this->LastNameTxt ), ComponentsInputEtxt_OnGetString( &_this->FirstNameTxt )));
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::ContactAddPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactAddPage )
EW_END_OF_CLASS_VARIANTS( ApplicationContactAddPage )

/* Virtual Method Table (VMT) for the class : 'Application::ContactAddPage' */
EW_DEFINE_CLASS( ApplicationContactAddPage, CoreGroup, Contact, OnSave, Background, 
                 Background, _.VMT, _.VMT, "Application::ContactAddPage" )
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
  ApplicationContactAddPage_UpdateLayout,
  ApplicationContactAddPage_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationContactAddPage )

/* Initializer for the class 'Application::ContactEditPage' */
void ApplicationContactEditPage__Init( ApplicationContactEditPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactEditPage );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ComponentsButton265x470__Init( &_this->DeleteBtn, &_this->_.XObject, 0 );
  ComponentsInputEtxt__Init( &_this->NumberTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line4, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->MobileTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line3, &_this->_.XObject, 0 );
  ComponentsInputEtxt__Init( &_this->FirstNameTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line2, &_this->_.XObject, 0 );
  ComponentsInputEtxt__Init( &_this->LastNameTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );
  ComponentsButtonBase70x90__Init( &_this->UserInitials, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->CloseBtn, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->SaveBtn, &_this->_.XObject, 0 );
  ComponentsToggleButton__Init( &_this->ToggleButton, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactEditPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreRectView__OnSetBounds( &_this->DeleteBtn, _Const003F );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->DeleteBtn, 1 );
  ComponentsButton265x470_OnSetLabel( &_this->DeleteBtn, EwLoadString( &StringsDeleteContactTxt ));
  CoreView_OnSetLayout((CoreView)&_this->NumberTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->NumberTxt, _Const0040 );
  ComponentsInputEtxt_OnSetAlignment( &_this->NumberTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ComponentsInputEtxt_OnSetString( &_this->NumberTxt, EwLoadString( &_Const0041 ));
  ComponentsInputEtxt_OnSetColor( &_this->NumberTxt, ResBlue );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->NumberTxt, EwLoadString( &_Const0041 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const0042 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const0043 );
  ViewsLine_OnSetColor( &_this->Line4, _Const0019 );
  CoreView_OnSetLayout((CoreView)&_this->MobileTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->MobileTxt, _Const0044 );
  ViewsText_OnSetAlignment( &_this->MobileTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MobileTxt, EwLoadString( &StringsMobileTxt ));
  ViewsText_OnSetColor( &_this->MobileTxt, ResGrey );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line3, _Const0045 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line3, _Const0046 );
  ViewsLine_OnSetColor( &_this->Line3, _Const0019 );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const0047 );
  ComponentsInputEtxt_OnSetString( &_this->FirstNameTxt, EwLoadString( &_Const0048 ));
  ComponentsInputEtxt_OnSetColor( &_this->FirstNameTxt, ResBlack );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->FirstNameTxt, EwLoadString( &_Const0048 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const0049 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const004A );
  ViewsLine_OnSetColor( &_this->Line2, _Const0019 );
  CoreView_OnSetLayout((CoreView)&_this->LastNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const004B );
  ComponentsInputEtxt_OnSetString( &_this->LastNameTxt, EwLoadString( &_Const004C ));
  ComponentsInputEtxt_OnSetColor( &_this->LastNameTxt, ResBlack );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->LastNameTxt, EwLoadString( &_Const004C ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const004D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const004E );
  ViewsLine_OnSetColor( &_this->Line1, _Const0019 );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const004F );
  ComponentsButtonBase70x90_OnSetIcon( &_this->UserInitials, 0 );
  ComponentsButtonBase70x90_OnSetDescript( &_this->UserInitials, EwLoadString( &StringsAddPhototTxt ));
  CoreRectView__OnSetBounds( &_this->CloseBtn, _Const0027 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->CloseBtn, 
  EwLoadString( &ResCloseIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->CloseBtn, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->CloseBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->CloseBtn, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->SaveBtn, _Const0026 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->SaveBtn, 0 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->SaveBtn, 
  EwLoadString( &ResCkeckIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->SaveBtn, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->SaveBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->SaveBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->SaveBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetDescriptColorEnabled((ComponentsButtonBase70x90)&_this->SaveBtn, 
  ResGrey );
  CoreRectView__OnSetBounds( &_this->ToggleButton, _Const0050 );
  ComponentsToggleButton_OnSetBackgroundSelectedColor( &_this->ToggleButton, ResGreyLight );
  CoreRectView__OnSetBounds( &_this->Text, _Const0051 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &StringsMyCardTxt ));
  ViewsText_OnSetColor( &_this->Text, ResGrey );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DeleteBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumberTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MobileTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FirstNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->LastNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UserInitials ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CloseBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SaveBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ToggleButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->DeleteBtn.OnActivate = EwNewSlot( _this, ApplicationContactEditPage_onDeleteContact );
  _this->NumberTxt.OnChange = EwNewSlot( _this, ApplicationContactEditPage_onFieldModified );
  ComponentsInputEtxt_OnSetFont( &_this->NumberTxt, EwLoadResource( &ResContactFont15, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->MobileTxt, EwLoadResource( &ResContactFont15, ResourcesFont ));
  _this->FirstNameTxt.OnChange = EwNewSlot( _this, ApplicationContactEditPage_onFieldModified );
  _this->LastNameTxt.OnChange = EwNewSlot( _this, ApplicationContactEditPage_onFieldModified );
  _this->CloseBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationContactEditPage_onClose );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->CloseBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->CloseBtn, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  _this->SaveBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationContactEditPage_onSave );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->SaveBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->SaveBtn, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  _this->ToggleButton.OnToggle = EwNewSlot( _this, ApplicationContactEditPage_onFieldModified );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::ContactEditPage' */
void ApplicationContactEditPage__ReInit( ApplicationContactEditPage _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ComponentsButton265x470__ReInit( &_this->DeleteBtn );
  ComponentsInputEtxt__ReInit( &_this->NumberTxt );
  ViewsLine__ReInit( &_this->Line4 );
  ViewsText__ReInit( &_this->MobileTxt );
  ViewsLine__ReInit( &_this->Line3 );
  ComponentsInputEtxt__ReInit( &_this->FirstNameTxt );
  ViewsLine__ReInit( &_this->Line2 );
  ComponentsInputEtxt__ReInit( &_this->LastNameTxt );
  ViewsLine__ReInit( &_this->Line1 );
  ComponentsButtonBase70x90__ReInit( &_this->UserInitials );
  ComponentsSButton25x25__ReInit( &_this->CloseBtn );
  ComponentsSButton25x25__ReInit( &_this->SaveBtn );
  ComponentsToggleButton__ReInit( &_this->ToggleButton );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Application::ContactEditPage' */
void ApplicationContactEditPage__Done( ApplicationContactEditPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ComponentsButton265x470__Done( &_this->DeleteBtn );
  ComponentsInputEtxt__Done( &_this->NumberTxt );
  ViewsLine__Done( &_this->Line4 );
  ViewsText__Done( &_this->MobileTxt );
  ViewsLine__Done( &_this->Line3 );
  ComponentsInputEtxt__Done( &_this->FirstNameTxt );
  ViewsLine__Done( &_this->Line2 );
  ComponentsInputEtxt__Done( &_this->LastNameTxt );
  ViewsLine__Done( &_this->Line1 );
  ComponentsButtonBase70x90__Done( &_this->UserInitials );
  ComponentsSButton25x25__Done( &_this->CloseBtn );
  ComponentsSButton25x25__Done( &_this->SaveBtn );
  ComponentsToggleButton__Done( &_this->ToggleButton );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
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
void ApplicationContactEditPage_UpdateViewState( ApplicationContactEditPage _this, 
  XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );

  if ( _this->Contact != 0 )
  {
    if (((( EwCompString( _this->Contact->FirstName, ComponentsInputEtxt_OnGetString( 
        &_this->FirstNameTxt )) != 0 ) || ( EwCompString( _this->Contact->LastName, 
        ComponentsInputEtxt_OnGetString( &_this->LastNameTxt )) != 0 )) || ( EwCompString( 
        _this->Contact->PhoneNumber, ComponentsInputEtxt_OnGetString( &_this->NumberTxt )) 
        != 0 )) || ( _this->ToggleButton.Active != _this->Contact->MyCard ))
      CoreGroup_OnSetEnabled((CoreGroup)&_this->SaveBtn, 1 );
    else
      CoreGroup_OnSetEnabled((CoreGroup)&_this->SaveBtn, 0 );
  }
}

/* 'C' function for method : 'Application::ContactEditPage.onSave()' */
void ApplicationContactEditPage_onSave( ApplicationContactEditPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceContact_OnSetFirstName( _this->Contact, ComponentsInputEtxt_OnGetString( 
  &_this->FirstNameTxt ));
  DeviceContact_OnSetLastName( _this->Contact, ComponentsInputEtxt_OnGetString( 
  &_this->LastNameTxt ));
  DeviceContact_OnSetPhoneNumber( _this->Contact, ComponentsInputEtxt_OnGetString( 
  &_this->NumberTxt ));
  DeviceContact_OnSetNameInitials( _this->Contact, DeviceContactList_GetInitials( 
  &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, _this->Contact->LastName, 
  _this->Contact->FirstName ));

  if ( _this->Contact->MyCard != _this->ToggleButton.Active )
  {
    DeviceContact_OnSetMyCard( _this->Contact, _this->ToggleButton.Active );
    DeviceDeviceClass_OnSetMyCard( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
    _this->Contact );
  }

  EwSignal( _this->OnSave, ((XObject)_this ));
}

/* 'C' function for method : 'Application::ContactEditPage.onClose()' */
void ApplicationContactEditPage_onClose( ApplicationContactEditPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnClose, ((XObject)_this ));
}

/* 'C' function for method : 'Application::ContactEditPage.onDeleteContact()' */
void ApplicationContactEditPage_onDeleteContact( ApplicationContactEditPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceContactList_Remove( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
  _this->Contact );
  EwSignal( _this->OnDelete, ((XObject)_this ));
}

/* 'C' function for method : 'Application::ContactEditPage.OnSetContact()' */
void ApplicationContactEditPage_OnSetContact( ApplicationContactEditPage _this, 
  DeviceContact value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationContactEditPage_onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationContactEditPage_onContactUpdated ), 
      (XObject)_this->Contact, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationContactEditPage_onContactUpdated ), 
      ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::ContactEditPage.onContactUpdated()' */
void ApplicationContactEditPage_onContactUpdated( ApplicationContactEditPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Contact != 0 )
  {
    ComponentsInputEtxt_OnSetString( &_this->FirstNameTxt, _this->Contact->FirstName );
    ComponentsInputEtxt_OnSetString( &_this->LastNameTxt, _this->Contact->LastName );
    ComponentsInputEtxt_OnSetString( &_this->NumberTxt, _this->Contact->PhoneNumber );
    ComponentsButtonBase70x90_OnSetIcon( &_this->UserInitials, _this->Contact->NameInitials );
    ComponentsToggleButton_OnSetActive( &_this->ToggleButton, _this->Contact->MyCard );
  }
}

/* 'C' function for method : 'Application::ContactEditPage.onFieldModified()' */
void ApplicationContactEditPage_onFieldModified( ApplicationContactEditPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ComponentsButtonBase70x90_OnSetIcon( &_this->UserInitials, DeviceContactList_GetInitials( 
  &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, _this->Contact->LastName, 
  _this->Contact->FirstName ));
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::ContactEditPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactEditPage )
EW_END_OF_CLASS_VARIANTS( ApplicationContactEditPage )

/* Virtual Method Table (VMT) for the class : 'Application::ContactEditPage' */
EW_DEFINE_CLASS( ApplicationContactEditPage, CoreGroup, Contact, OnSave, Background, 
                 Background, _.VMT, _.VMT, "Application::ContactEditPage" )
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
  ApplicationContactEditPage_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationContactEditPage )

/* Initializer for the class 'Application::CallPage' */
void ApplicationCallPage__Init( ApplicationCallPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationCallPageBase__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationCallPage );

  /* ... then construct all embedded objects */
  ComponentsButton65x90__Init( &_this->ContactsBtn, &_this->_.XObject, 0 );
  ComponentsButton65x90__Init( &_this->VideoCallBtn, &_this->_.XObject, 0 );
  ComponentsButton65x90__Init( &_this->AddCallBtn, &_this->_.XObject, 0 );
  ComponentsButton65x90__Init( &_this->SpeakerBtn, &_this->_.XObject, 0 );
  ComponentsButton65x90__Init( &_this->KeyPadBtn, &_this->_.XObject, 0 );
  ComponentsButton65x90__Init( &_this->MuteBtn, &_this->_.XObject, 0 );
  ApplicationKeypadInsideCall__Init( &_this->Keypad, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->Stoper, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationCallPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0052 );
  CoreRectView__OnSetBounds( &_this->Super1.DesclineButton, _Const0053 );
  CoreRectView__OnSetBounds( &_this->ContactsBtn, _Const0054 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->ContactsBtn, 
  EwLoadString( &ResUserIcon ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->ContactsBtn, 
  EwLoadString( &StringscontactsTxt ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->ContactsBtn, 
  ResWhite );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->ContactsBtn, 
  ResWhiteTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->ContactsBtn, 
  ResPressColor );
  CoreRectView__OnSetBounds( &_this->VideoCallBtn, _Const0055 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->VideoCallBtn, 0 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  EwLoadString( &ResVideoCallIcon ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  EwLoadString( &StringsvideocallTxt ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  ResWhite );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  ResWhiteTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  ResPressColor );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  ResWhiteSemiTransparent );
  CoreRectView__OnSetBounds( &_this->AddCallBtn, _Const0056 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->AddCallBtn, 0 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->AddCallBtn, 
  EwLoadString( &ResPlusIcon ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->AddCallBtn, 
  EwLoadString( &StringsaddcallTxt ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->AddCallBtn, 
  ResWhite );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->AddCallBtn, 
  ResWhiteTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->AddCallBtn, 
  ResPressColor );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->AddCallBtn, 
  ResWhiteSemiTransparent );
  CoreRectView__OnSetBounds( &_this->SpeakerBtn, _Const0057 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->SpeakerBtn, 
  EwLoadString( &ResSpeakerIcon ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->SpeakerBtn, 
  EwLoadString( &StringsspeakerTxt ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->SpeakerBtn, 
  ResWhite );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->SpeakerBtn, 
  ResWhiteTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->SpeakerBtn, 
  ResPressColor );
  CoreRectView__OnSetBounds( &_this->KeyPadBtn, _Const0058 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->KeyPadBtn, 
  EwLoadString( &ResKeypadIcon ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->KeyPadBtn, 
  EwLoadString( &StringskeypadTxt ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->KeyPadBtn, 
  ResWhite );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->KeyPadBtn, 
  ResWhiteTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->KeyPadBtn, 
  ResPressColor );
  CoreRectView__OnSetBounds( &_this->MuteBtn, _Const0059 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->MuteBtn, 
  EwLoadString( &ResMicOffIcon ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->MuteBtn, 
  EwLoadString( &StringsmuteTxt ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->MuteBtn, 
  ResWhite );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->MuteBtn, 
  ResWhiteTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->MuteBtn, 
  ResPressColor );
  CoreView_OnSetLayout((CoreView)&_this->Keypad, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Keypad, _Const005A );
  ApplicationKeypadPage_OnSetHideFunction((ApplicationKeypadPage)&_this->Keypad, 
  0 );
  ApplicationKeypadPage_OnSetHideCall((ApplicationKeypadPage)&_this->Keypad, 1 );
  CoreGroup__Add( _this, ((CoreView)&_this->ContactsBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VideoCallBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->AddCallBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SpeakerBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->KeyPadBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MuteBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Keypad ), 0 );
  _this->ContactsBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationCallPage_onContactsPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->ContactsBtn, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->ContactsBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->ContactsBtn, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->VideoCallBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationCallPage_onVideoCallPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->AddCallBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationCallPage_onAddCallPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->AddCallBtn, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->AddCallBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->AddCallBtn, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->SpeakerBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationCallPage_onSpeakerPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->SpeakerBtn, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->SpeakerBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->SpeakerBtn, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->KeyPadBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationCallPage_onKeypadPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->KeyPadBtn, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->KeyPadBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->KeyPadBtn, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->MuteBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationCallPage_onMicPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->MuteBtn, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->MuteBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->MuteBtn, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->Keypad.Super1.OnEditTextChanged = EwNewSlot( _this, ApplicationCallPage_onKeypadEdit );
  _this->Stoper.OnTrigger = EwNewSlot( _this, ApplicationCallPage_upDateTalkDuration );

  /* Call the user defined constructor */
  ApplicationCallPage_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::CallPage' */
void ApplicationCallPage__ReInit( ApplicationCallPage _this )
{
  /* At first re-initialize the super class ... */
  ApplicationCallPageBase__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ComponentsButton65x90__ReInit( &_this->ContactsBtn );
  ComponentsButton65x90__ReInit( &_this->VideoCallBtn );
  ComponentsButton65x90__ReInit( &_this->AddCallBtn );
  ComponentsButton65x90__ReInit( &_this->SpeakerBtn );
  ComponentsButton65x90__ReInit( &_this->KeyPadBtn );
  ComponentsButton65x90__ReInit( &_this->MuteBtn );
  ApplicationKeypadInsideCall__ReInit( &_this->Keypad );
  CoreTimer__ReInit( &_this->Stoper );
}

/* Finalizer method for the class 'Application::CallPage' */
void ApplicationCallPage__Done( ApplicationCallPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationCallPageBase );

  /* Finalize all embedded objects */
  ComponentsButton65x90__Done( &_this->ContactsBtn );
  ComponentsButton65x90__Done( &_this->VideoCallBtn );
  ComponentsButton65x90__Done( &_this->AddCallBtn );
  ComponentsButton65x90__Done( &_this->SpeakerBtn );
  ComponentsButton65x90__Done( &_this->KeyPadBtn );
  ComponentsButton65x90__Done( &_this->MuteBtn );
  ApplicationKeypadInsideCall__Done( &_this->Keypad );
  CoreTimer__Done( &_this->Stoper );

  /* Don't forget to deinitialize the super class ... */
  ApplicationCallPageBase__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationCallPage_Init( ApplicationCallPage _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwSignal( EwNewSlot( &_this->Stoper, CoreTimer_StartTimer ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::CallPage.onContactUpdated()' */
void ApplicationCallPage_onContactUpdated( ApplicationCallPage _this, XObject sender )
{
  if ( _this->Super1.Contact->CallState == DeviceCallStateSpeaking )
  {
    CoreGroup_OnSetEnabled((CoreGroup)&_this->AddCallBtn, 1 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->VideoCallBtn, 1 );
  }

  ApplicationCallPageBase_onContactUpdated((ApplicationCallPageBase)_this, sender );
}

/* 'C' function for method : 'Application::CallPage.onSpeakerPress()' */
void ApplicationCallPage_onSpeakerPress( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_OnSetSpeaker( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  (XBool)!EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Speaker );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->SpeakerBtn, 
  ( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Speaker? ResWhite : ResWhiteTransparent ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->SpeakerBtn, 
  ( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Speaker? ResBlack : ResWhite ));
}

/* 'C' function for method : 'Application::CallPage.onMicPress()' */
void ApplicationCallPage_onMicPress( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_OnSetMicrophone( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  (XBool)!EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Microphone );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->MuteBtn, 
  ( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Microphone? ResWhite : 
  ResWhiteTransparent ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->MuteBtn, 
  ( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Microphone? ResBlack : 
  ResWhite ));
}

/* 'C' function for method : 'Application::CallPage.onKeypadPress()' */
void ApplicationCallPage_onKeypadPress( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->Keypad, EwSetRectOrigin( _this->Keypad.Super3.Bounds, 
  _Const005B ));
  _this->Keypad.Super1.OnHide = EwNewSlot( _this, ApplicationCallPage_onHide );
}

/* 'C' function for method : 'Application::CallPage.onAddCallPress()' */
void ApplicationCallPage_onAddCallPress( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->addCall = EwNewObject( ApplicationContactsAppInsideCall, 0 );
  _this->addCall->OnCancel = EwNewSlot( _this, ApplicationCallPage_onCancel1 );
  CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)_this->addCall ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideUpCenteredLimit, EffectsSlideTransition )), 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::CallPage.onVideoCallPress()' */
void ApplicationCallPage_onVideoCallPress( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Application::CallPage.onContactsPress()' */
void ApplicationCallPage_onContactsPress( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->contactsPage = EwNewObject( ApplicationContactsInsideCall, 0 );
  _this->contactsPage->OnCancel = EwNewSlot( _this, ApplicationCallPage_onCancel );
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->contactsPage ), 
  ((EffectsTransition)EwGetAutoObject( &ResSlideUpCenteredLimit, EffectsSlideTransition )), 
  0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::CallPage.onCancel()' */
void ApplicationCallPage_onCancel( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->contactsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->contactsPage = 0;
}

/* 'C' function for method : 'Application::CallPage.onHide()' */
void ApplicationCallPage_onHide( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->Keypad, EwSetRectY( _this->Keypad.Super3.Bounds, 
  _this->Super3.Bounds.Point2.Y ));
  ComponentsInputEtxt_OnSetString( &_this->Keypad.Super1.InputEtxt, 0 );
  ViewsText_OnSetVisible( &_this->Super1.ContactNameTxt, 1 );
  ViewsText_OnSetVisible( &_this->Super1.TimeTxt, 1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super1.UserInitials, 1 );
}

/* 'C' function for method : 'Application::CallPage.onKeypadEdit()' */
void ApplicationCallPage_onKeypadEdit( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetVisible( &_this->Super1.ContactNameTxt, (XBool)!EwCompString( ComponentsInputEtxt_OnGetString( 
  &_this->Keypad.Super1.InputEtxt ), 0 ));
  ViewsText_OnSetVisible( &_this->Super1.TimeTxt, (XBool)!EwCompString( ComponentsInputEtxt_OnGetString( 
  &_this->Keypad.Super1.InputEtxt ), 0 ));
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super1.UserInitials, (XBool)!EwCompString( 
  ComponentsInputEtxt_OnGetString( &_this->Keypad.Super1.InputEtxt ), 0 ));
}

/* 'C' function for method : 'Application::CallPage.onCancel1()' */
void ApplicationCallPage_onCancel1( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->addCall ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->addCall = 0;
}

/* 'C' function for method : 'Application::CallPage.upDateTalkDuration()' */
void ApplicationCallPage_upDateTalkDuration( ApplicationCallPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super1.Contact->CallState == DeviceCallStateSpeaking )
    ViewsText_OnSetString( &_this->Super1.TimeTxt, DeviceHistoryContact_GetDuration( 
    _this->Super1.Contact ));
}

/* Variants derived from the class : 'Application::CallPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationCallPage )
EW_END_OF_CLASS_VARIANTS( ApplicationCallPage )

/* Virtual Method Table (VMT) for the class : 'Application::CallPage' */
EW_DEFINE_CLASS( ApplicationCallPage, ApplicationCallPageBase, contactsPage, ContactsBtn, 
                 ContactsBtn, ContactsBtn, _.VMT, _.VMT, "Application::CallPage" )
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
  ApplicationCallPage_onContactUpdated,
EW_END_OF_CLASS( ApplicationCallPage )

/* Initializer for the class 'Application::DetailsInsideCall' */
void ApplicationDetailsInsideCall__Init( ApplicationDetailsInsideCall _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationContactDetailsPage__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationDetailsInsideCall );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationDetailsInsideCall );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Super1.Background, _Const0000 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line2, _Const005C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Super1.Line2, _Const005D );
  CoreRectView__OnSetBounds( &_this->Super1.NumberTxt, _Const005E );
  CoreRectView__OnSetBounds( &_this->Super1.MobileTxt, _Const005F );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line1, _Const002E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Super1.Line1, _Const002F );
  CoreRectView__OnSetBounds( &_this->Super1.CallBtn, _Const0060 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Super1.CallBtn, 0 );
  CoreRectView__OnSetBounds( &_this->Super1.VideoCallBtn, _Const0061 );
  CoreRectView__OnSetBounds( &_this->Super1.PushButtonMediumBlue2, _Const0062 );
  CoreRectView__OnSetBounds( &_this->Super1.ContactName, _Const0063 );
  CoreRectView__OnSetBounds( &_this->Super1.UserInitialsBtn, _Const0064 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Super1.UserInitialsBtn, 0 );
  CoreRectView__OnSetBounds( &_this->Super1.EditBtn, _Const0065 );
  CoreRectView__OnSetBounds( &_this->Super1.BackBtn, _Const0066 );
}

/* Re-Initializer for the class 'Application::DetailsInsideCall' */
void ApplicationDetailsInsideCall__ReInit( ApplicationDetailsInsideCall _this )
{
  /* At first re-initialize the super class ... */
  ApplicationContactDetailsPage__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::DetailsInsideCall' */
void ApplicationDetailsInsideCall__Done( ApplicationDetailsInsideCall _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationContactDetailsPage );

  /* Don't forget to deinitialize the super class ... */
  ApplicationContactDetailsPage__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::DetailsInsideCall.onTapEdit()' */
void ApplicationDetailsInsideCall_onTapEdit( ApplicationDetailsInsideCall _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->Super1.editPage = EwNewObject( ApplicationContactEditPage, 0 );
  _this->Super1.editPage->OnSave = EwNewSlot( _this, ApplicationContactDetailsPage_onSaveEdit );
  _this->Super1.editPage->OnClose = EwNewSlot( _this, ApplicationContactDetailsPage_onCancelEdit );
  ApplicationContactEditPage_OnSetContact( _this->Super1.editPage, _this->Super1.Contact );
  _this->Super1.editPage->OnDelete = EwNewSlot( _this, ApplicationContactDetailsPage_onDelete );
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->Super1.editPage ), 
  ((EffectsTransition)EwGetAutoObject( &ResFadeInOutCentered, EffectsFadeInOutTransition )), 
  0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::DetailsInsideCall' */
EW_DEFINE_CLASS_VARIANTS( ApplicationDetailsInsideCall )
EW_END_OF_CLASS_VARIANTS( ApplicationDetailsInsideCall )

/* Virtual Method Table (VMT) for the class : 'Application::DetailsInsideCall' */
EW_DEFINE_CLASS( ApplicationDetailsInsideCall, ApplicationContactDetailsPage, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, "Application::DetailsInsideCall" )
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
  ApplicationDetailsInsideCall_onTapEdit,
  ApplicationContactDetailsPage_onContactUpdated,
EW_END_OF_CLASS( ApplicationDetailsInsideCall )

/* Initializer for the class 'Application::KeypadPage' */
void ApplicationKeypadPage__Init( ApplicationKeypadPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationKeypadPage );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ComponentsSButton65x65__Init( &_this->callbtn, &_this->_.XObject, 0 );
  ComponentsSButton65x65__Init( &_this->btn1, &_this->_.XObject, 0 );
  ComponentsSButton65x65__Init( &_this->btn3, &_this->_.XObject, 0 );
  ComponentsSButton65x65__Init( &_this->btn2, &_this->_.XObject, 0 );
  ComponentsSButton65x65__Init( &_this->btn4, &_this->_.XObject, 0 );
  ComponentsSButton65x65__Init( &_this->btn6, &_this->_.XObject, 0 );
  ComponentsSButton65x65__Init( &_this->btn5, &_this->_.XObject, 0 );
  ComponentsSButton65x65__Init( &_this->btn7, &_this->_.XObject, 0 );
  ComponentsSButton65x65__Init( &_this->btn9, &_this->_.XObject, 0 );
  ComponentsSButton65x65__Init( &_this->btn8, &_this->_.XObject, 0 );
  ComponentsSButton65x65__Init( &_this->btnstar, &_this->_.XObject, 0 );
  ComponentsSButton65x65__Init( &_this->btnDiez, &_this->_.XObject, 0 );
  ComponentsSButton65x65__Init( &_this->btn0, &_this->_.XObject, 0 );
  ComponentsInputEtxt__Init( &_this->InputEtxt, &_this->_.XObject, 0 );
  ComponentsTextButton__Init( &_this->HideBtn, &_this->_.XObject, 0 );
  ComponentsSButton65x65__Init( &_this->BtnErase, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationKeypadPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  _this->BackgoundColor = ResWhite;
  _this->HideFunction = 1;
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0011 );
  CoreRectView__OnSetBounds( &_this->callbtn, _Const0067 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->callbtn, 
  EwLoadString( &ResCallIcon ));
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->callbtn, 
  ResGreenDark );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->callbtn, 
  ResGreen );
  CoreRectView__OnSetBounds( &_this->btn1, _Const0068 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->btn1, EwLoadString( 
  &_Const0069 ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->btn1, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->btn1, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->btn1, 
  ResGreyLight );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->btn1, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->btn1, 
  ResBlack );
  CoreRectView__OnSetBounds( &_this->btn3, _Const006A );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->btn3, EwLoadString( 
  &_Const006B ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->btn3, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->btn3, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->btn3, 
  ResGreyLight );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->btn3, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->btn3, 
  ResBlack );
  CoreRectView__OnSetBounds( &_this->btn2, _Const006C );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->btn2, EwLoadString( 
  &_Const006D ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->btn2, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->btn2, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->btn2, 
  ResGreyLight );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->btn2, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->btn2, 
  ResBlack );
  CoreRectView__OnSetBounds( &_this->btn4, _Const006E );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->btn4, EwLoadString( 
  &_Const006F ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->btn4, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->btn4, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->btn4, 
  ResGreyLight );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->btn4, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->btn4, 
  ResBlack );
  CoreRectView__OnSetBounds( &_this->btn6, _Const0070 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->btn6, EwLoadString( 
  &_Const0071 ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->btn6, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->btn6, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->btn6, 
  ResGreyLight );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->btn6, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->btn6, 
  ResBlack );
  CoreRectView__OnSetBounds( &_this->btn5, _Const0072 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->btn5, EwLoadString( 
  &_Const0073 ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->btn5, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->btn5, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->btn5, 
  ResGreyLight );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->btn5, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->btn5, 
  ResBlack );
  CoreRectView__OnSetBounds( &_this->btn7, _Const0074 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->btn7, EwLoadString( 
  &_Const0075 ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->btn7, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->btn7, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->btn7, 
  ResGreyLight );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->btn7, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->btn7, 
  ResBlack );
  CoreRectView__OnSetBounds( &_this->btn9, _Const0076 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->btn9, EwLoadString( 
  &_Const0077 ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->btn9, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->btn9, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->btn9, 
  ResGreyLight );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->btn9, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->btn9, 
  ResBlack );
  CoreRectView__OnSetBounds( &_this->btn8, _Const0078 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->btn8, EwLoadString( 
  &_Const0079 ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->btn8, 
  EwLoadString( &_Const0079 ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->btn8, 
  ResWhite );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->btn8, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->btn8, 
  ResGreyLight );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->btn8, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->btn8, 
  ResBlack );
  CoreRectView__OnSetBounds( &_this->btnstar, _Const007A );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->btnstar, 
  EwLoadString( &_Const007B ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->btnstar, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->btnstar, 
  ResGreyLight );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->btnstar, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->btnstar, 
  ResBlack );
  CoreRectView__OnSetBounds( &_this->btnDiez, _Const007C );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->btnDiez, 
  EwLoadString( &_Const007D ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->btnDiez, 
  EwLoadString( &_Const007D ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->btnDiez, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->btnDiez, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->btnDiez, 
  ResGreyLight );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->btnDiez, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->btnDiez, 
  ResBlack );
  CoreRectView__OnSetBounds( &_this->btn0, _Const007E );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->btn0, EwLoadString( 
  &_Const007F ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->btn0, 
  EwLoadString( &_Const007F ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->btn0, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->btn0, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->btn0, 
  ResGreyLight );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->btn0, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->btn0, 
  ResBlack );
  CoreRectView__OnSetBounds( &_this->InputEtxt, _Const0080 );
  ComponentsInputEtxt_OnSetString( &_this->InputEtxt, 0 );
  ComponentsInputEtxt_OnSetColor( &_this->InputEtxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->HideBtn, _Const0081 );
  ComponentsTextButton_OnSetText( &_this->HideBtn, EwLoadString( &StringsHideTxt ));
  ComponentsTextButton_OnSetTextColor( &_this->HideBtn, ResBlack );
  ComponentsTextButton_OnSetTextColorPress( &_this->HideBtn, ResGrey );
  CoreRectView__OnSetBounds( &_this->BtnErase, _Const0082 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->BtnErase, 
  EwLoadString( &ResBackspaceIcon ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->BtnErase, 
  EwLoadString( &_Const007D ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->BtnErase, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->BtnErase, 
  ResBlack );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->BtnErase, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->BtnErase, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->BtnErase, 
  ResBlack );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->callbtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->btn1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->btn3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->btn2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->btn4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->btn6 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->btn5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->btn7 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->btn9 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->btn8 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->btnstar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->btnDiez ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->btn0 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->InputEtxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HideBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BtnErase ), 0 );
  _this->callbtn.Super1.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onCallPress );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->callbtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->callbtn, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->btn1.Super1.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->btn1, 
  EwLoadResource( &ResContactFont15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->btn1, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->btn3.Super1.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->btn3, 
  EwLoadResource( &ResContactFont15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->btn3, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->btn2.Super1.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->btn2, 
  EwLoadResource( &ResContactFont15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->btn2, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->btn4.Super1.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->btn4, 
  EwLoadResource( &ResContactFont15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->btn4, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->btn6.Super1.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->btn6, 
  EwLoadResource( &ResContactFont15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->btn6, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->btn5.Super1.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->btn5, 
  EwLoadResource( &ResContactFont15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->btn5, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->btn7.Super1.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->btn7, 
  EwLoadResource( &ResContactFont15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->btn7, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->btn9.Super1.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->btn9, 
  EwLoadResource( &ResContactFont15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->btn9, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->btn8.Super1.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->btn8, 
  EwLoadResource( &ResContactFont15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->btn8, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->btnstar.Super1.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->btnstar, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->btnDiez.Super1.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->btnDiez, 
  EwLoadResource( &ResContactFont15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->btnDiez, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->btn0.Super1.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->btn0, 
  EwLoadResource( &ResContactFont15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->btn0, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  ComponentsInputEtxt_OnSetFont( &_this->InputEtxt, EwLoadResource( &ResTitileFont25, 
  ResourcesFont ));
  _this->HideBtn.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onHide );
  _this->BtnErase.Super1.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->BtnErase, 
  EwLoadResource( &ResContactFont15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->BtnErase, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->BtnErase, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
}

/* Re-Initializer for the class 'Application::KeypadPage' */
void ApplicationKeypadPage__ReInit( ApplicationKeypadPage _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ComponentsSButton65x65__ReInit( &_this->callbtn );
  ComponentsSButton65x65__ReInit( &_this->btn1 );
  ComponentsSButton65x65__ReInit( &_this->btn3 );
  ComponentsSButton65x65__ReInit( &_this->btn2 );
  ComponentsSButton65x65__ReInit( &_this->btn4 );
  ComponentsSButton65x65__ReInit( &_this->btn6 );
  ComponentsSButton65x65__ReInit( &_this->btn5 );
  ComponentsSButton65x65__ReInit( &_this->btn7 );
  ComponentsSButton65x65__ReInit( &_this->btn9 );
  ComponentsSButton65x65__ReInit( &_this->btn8 );
  ComponentsSButton65x65__ReInit( &_this->btnstar );
  ComponentsSButton65x65__ReInit( &_this->btnDiez );
  ComponentsSButton65x65__ReInit( &_this->btn0 );
  ComponentsInputEtxt__ReInit( &_this->InputEtxt );
  ComponentsTextButton__ReInit( &_this->HideBtn );
  ComponentsSButton65x65__ReInit( &_this->BtnErase );
}

/* Finalizer method for the class 'Application::KeypadPage' */
void ApplicationKeypadPage__Done( ApplicationKeypadPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ComponentsSButton65x65__Done( &_this->callbtn );
  ComponentsSButton65x65__Done( &_this->btn1 );
  ComponentsSButton65x65__Done( &_this->btn3 );
  ComponentsSButton65x65__Done( &_this->btn2 );
  ComponentsSButton65x65__Done( &_this->btn4 );
  ComponentsSButton65x65__Done( &_this->btn6 );
  ComponentsSButton65x65__Done( &_this->btn5 );
  ComponentsSButton65x65__Done( &_this->btn7 );
  ComponentsSButton65x65__Done( &_this->btn9 );
  ComponentsSButton65x65__Done( &_this->btn8 );
  ComponentsSButton65x65__Done( &_this->btnstar );
  ComponentsSButton65x65__Done( &_this->btnDiez );
  ComponentsSButton65x65__Done( &_this->btn0 );
  ComponentsInputEtxt__Done( &_this->InputEtxt );
  ComponentsTextButton__Done( &_this->HideBtn );
  ComponentsSButton65x65__Done( &_this->BtnErase );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
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
void ApplicationKeypadPage_UpdateViewState( ApplicationKeypadPage _this, XSet aState )
{
  XBool isEnabled;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );

  if ( _this->HideFunction == 0 )
    CoreGroup_OnSetVisible((CoreGroup)&_this->HideBtn, 1 );

  if ( _this->HideFunction == 1 )
    CoreGroup_OnSetVisible((CoreGroup)&_this->HideBtn, 0 );

  if ( _this->HideCall == 0 )
    CoreGroup_OnSetVisible((CoreGroup)&_this->callbtn, 1 );

  if ( _this->HideCall == 1 )
    CoreGroup_OnSetVisible((CoreGroup)&_this->callbtn, 0 );

  if ( !isEnabled )
    ViewsRectangle_OnSetColor( &_this->Background, ResGrey );
  else
    ViewsRectangle_OnSetColor( &_this->Background, _this->BackgoundColor );
}

/* 'C' function for method : 'Application::KeypadPage.onHide()' */
void ApplicationKeypadPage_onHide( ApplicationKeypadPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnHide, ((XObject)_this ));
}

/* 'C' function for method : 'Application::KeypadPage.OnSetHideFunction()' */
void ApplicationKeypadPage_OnSetHideFunction( ApplicationKeypadPage _this, XBool 
  value )
{
  if ( _this->HideFunction == value )
    return;

  _this->HideFunction = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::KeypadPage.onButtonsPress()' */
void ApplicationKeypadPage_onButtonsPress( ApplicationKeypadPage _this, XObject 
  sender )
{
  ComponentsSButton65x65 b = EwCastObject( sender, ComponentsSButton65x65 );

  if ( sender == ((XObject)&_this->BtnErase ))
    ComponentsInputEtxt_OnSetString( &_this->InputEtxt, EwStringRemove( ComponentsInputEtxt_OnGetString( 
    &_this->InputEtxt ), EwGetStringLength( ComponentsInputEtxt_OnGetString( &_this->InputEtxt )) 
    - 1, 1 ));
  else
    if ( b != 0 )
      ComponentsInputEtxt_OnSetString( &_this->InputEtxt, EwConcatString( ComponentsInputEtxt_OnGetString( 
      &_this->InputEtxt ), b->Super1.Icon ));

  EwSignal( _this->OnEditTextChanged, ((XObject)_this ));
}

/* 'C' function for method : 'Application::KeypadPage.OnSetHideCall()' */
void ApplicationKeypadPage_OnSetHideCall( ApplicationKeypadPage _this, XBool value )
{
  if ( _this->HideCall == value )
    return;

  _this->HideCall = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::KeypadPage.onCallPress()' */
void ApplicationKeypadPage_onCallPress( ApplicationKeypadPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwCompString( ComponentsInputEtxt_OnGetString( &_this->InputEtxt ), 0 ) != 
      0 )
    DeviceDeviceClass_SendCallNumber( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
    ComponentsInputEtxt_OnGetString( &_this->InputEtxt ));
}

/* Variants derived from the class : 'Application::KeypadPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationKeypadPage )
EW_END_OF_CLASS_VARIANTS( ApplicationKeypadPage )

/* Virtual Method Table (VMT) for the class : 'Application::KeypadPage' */
EW_DEFINE_CLASS( ApplicationKeypadPage, CoreGroup, OnHide, OnHide, Background, Background, 
                 BackgoundColor, BackgoundColor, "Application::KeypadPage" )
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
  ApplicationKeypadPage_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationKeypadPage )

/* Initializer for the class 'Application::ContactsApp' */
void ApplicationContactsApp__Init( ApplicationContactsApp _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactsApp );

  /* ... then construct all embedded objects */
  CoreGroup__Init( &_this->Outline, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ComponentsNavBarButton64x40__Init( &_this->NavBarButtons, &_this->_.XObject, 0 );
  ComponentsNavBarButton64x40__Init( &_this->NavBarButtons1, &_this->_.XObject, 0 );
  ComponentsNavBarButton64x40__Init( &_this->NavBarButtons2, &_this->_.XObject, 0 );
  ComponentsNavBarButton64x40__Init( &_this->NavBarButtons3, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsApp );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0052 );
  CoreRectView__OnSetBounds( &_this->Outline, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0083 );
  CoreRectView__OnSetBounds( &_this->NavBarButtons, _Const0084 );
  ComponentsNavBarButton64x40_OnSetIcon( &_this->NavBarButtons, EwLoadString( &ResHeartIcon ));
  ComponentsNavBarButton64x40_OnSetDescript( &_this->NavBarButtons, EwLoadString( 
  &StringsFavoritesTxt ));
  CoreRectView__OnSetBounds( &_this->NavBarButtons1, _Const0085 );
  ComponentsNavBarButton64x40_OnSetIcon( &_this->NavBarButtons1, EwLoadString( &ResCallIcon ));
  ComponentsNavBarButton64x40_OnSetDescript( &_this->NavBarButtons1, EwLoadString( 
  &StringsRecentTxt ));
  ComponentsNavBarButton64x40_OnSetOutletSelector( &_this->NavBarButtons1, 1 );
  CoreRectView__OnSetBounds( &_this->NavBarButtons2, _Const0086 );
  ComponentsNavBarButton64x40_OnSetIcon( &_this->NavBarButtons2, EwLoadString( &ResUserIcon ));
  ComponentsNavBarButton64x40_OnSetDescript( &_this->NavBarButtons2, EwLoadString( 
  &StringsContactsTxtx ));
  ComponentsNavBarButton64x40_OnSetOutletSelector( &_this->NavBarButtons2, 2 );
  CoreRectView__OnSetBounds( &_this->NavBarButtons3, _Const0087 );
  ComponentsNavBarButton64x40_OnSetIcon( &_this->NavBarButtons3, EwLoadString( &ResKeypadIcon ));
  ComponentsNavBarButton64x40_OnSetDescript( &_this->NavBarButtons3, EwLoadString( 
  &StringsKeypadTxt ));
  ComponentsNavBarButton64x40_OnSetOutletSelector( &_this->NavBarButtons3, 3 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const0088 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const0089 );
  ViewsLine_OnSetColor( &_this->Line, ResGrey );
  _this->SelectedPage = -1;
  CoreGroup__Add( _this, ((CoreView)&_this->Outline ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NavBarButtons ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NavBarButtons1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NavBarButtons2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NavBarButtons3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line ), 0 );
  ComponentsNavBarButton64x40_OnSetOutlet( &_this->NavBarButtons, EwNewRef( _this, 
  ApplicationContactsApp_OnGetSelectedPage, ApplicationContactsApp_OnSetSelectedPage ));
  ComponentsNavBarButton64x40_OnSetOutlet( &_this->NavBarButtons1, EwNewRef( _this, 
  ApplicationContactsApp_OnGetSelectedPage, ApplicationContactsApp_OnSetSelectedPage ));
  ComponentsNavBarButton64x40_OnSetOutlet( &_this->NavBarButtons2, EwNewRef( _this, 
  ApplicationContactsApp_OnGetSelectedPage, ApplicationContactsApp_OnSetSelectedPage ));
  ComponentsNavBarButton64x40_OnSetOutlet( &_this->NavBarButtons3, EwNewRef( _this, 
  ApplicationContactsApp_OnGetSelectedPage, ApplicationContactsApp_OnSetSelectedPage ));

  /* Call the user defined constructor */
  ApplicationContactsApp_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::ContactsApp' */
void ApplicationContactsApp__ReInit( ApplicationContactsApp _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreGroup__ReInit( &_this->Outline );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ComponentsNavBarButton64x40__ReInit( &_this->NavBarButtons );
  ComponentsNavBarButton64x40__ReInit( &_this->NavBarButtons1 );
  ComponentsNavBarButton64x40__ReInit( &_this->NavBarButtons2 );
  ComponentsNavBarButton64x40__ReInit( &_this->NavBarButtons3 );
  ViewsLine__ReInit( &_this->Line );
}

/* Finalizer method for the class 'Application::ContactsApp' */
void ApplicationContactsApp__Done( ApplicationContactsApp _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreGroup__Done( &_this->Outline );
  ViewsRectangle__Done( &_this->Rectangle );
  ComponentsNavBarButton64x40__Done( &_this->NavBarButtons );
  ComponentsNavBarButton64x40__Done( &_this->NavBarButtons1 );
  ComponentsNavBarButton64x40__Done( &_this->NavBarButtons2 );
  ComponentsNavBarButton64x40__Done( &_this->NavBarButtons3 );
  ViewsLine__Done( &_this->Line );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationContactsApp_Init( ApplicationContactsApp _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ApplicationContactsApp_OnSetSelectedPage( _this, 2 );
}

/* 'C' function for method : 'Application::ContactsApp.OnSetSelectedPage()' */
void ApplicationContactsApp_OnSetSelectedPage( ApplicationContactsApp _this, XInt32 
  value )
{
  if ( _this->SelectedPage == value )
    return;

  _this->SelectedPage = value;
  EwNotifyRefObservers( EwNewRef( _this, ApplicationContactsApp_OnGetSelectedPage, 
    ApplicationContactsApp_OnSetSelectedPage ), 0 );

  switch ( _this->SelectedPage )
  {
    case 0 :
    {
      CoreGroup favorites = ((CoreGroup)EwNewObject( ApplicationFavoritesPage, 0 ));
      CoreGroup_SwitchToDialog( &_this->Outline, favorites, 0, 0, 0, 0, 0, 0, 0, 
      EwNullSlot, EwNullSlot, 0 );
    }
    break;

    case 1 :
    {
      CoreGroup recent = ((CoreGroup)EwNewObject( ApplicationRecentPage, 0 ));
      CoreGroup_SwitchToDialog( &_this->Outline, recent, 0, 0, 0, 0, 0, 0, 0, EwNullSlot, 
      EwNullSlot, 0 );
    }
    break;

    case 2 :
    {
      CoreGroup contacts = ((CoreGroup)EwNewObject( ApplicationContactsPage, 0 ));
      CoreGroup_SwitchToDialog( &_this->Outline, contacts, 0, 0, 0, 0, 0, 0, 0, 
      EwNullSlot, EwNullSlot, 0 );
    }
    break;

    case 3 :
    {
      CoreGroup keypad = ((CoreGroup)EwNewObject( ApplicationKeypadPage, 0 ));
      CoreGroup_SwitchToDialog( &_this->Outline, keypad, 0, 0, 0, 0, 0, 0, 0, EwNullSlot, 
      EwNullSlot, 0 );
    }
    break;

    default : 
      EwTrace( "%s%i", EwLoadString( &_Const008A ), _this->SelectedPage );
  }
}

/* 'C' function for method : 'Application::ContactsApp.OnGetSelectedPage()' */
XInt32 ApplicationContactsApp_OnGetSelectedPage( ApplicationContactsApp _this )
{
  return _this->SelectedPage;
}

/* Variants derived from the class : 'Application::ContactsApp' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactsApp )
EW_END_OF_CLASS_VARIANTS( ApplicationContactsApp )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsApp' */
EW_DEFINE_CLASS( ApplicationContactsApp, CoreGroup, Outline, Outline, Outline, Outline, 
                 SelectedPage, SelectedPage, "Application::ContactsApp" )
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
EW_END_OF_CLASS( ApplicationContactsApp )

/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationApplication );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0052 );
  _this->deviceInstance = EwGetAutoObject( &DeviceDevice, DeviceDeviceClass );

  /* Call the user defined constructor */
  ApplicationApplication_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationApplication_Init( ApplicationApplication _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwPostSignal( EwNewSlot( _this, ApplicationApplication_onSplashScreen ), ((XObject)_this ));
  EwAttachRefObserver( EwNewSlot( _this, ApplicationApplication_onCallState ), EwNewRef( 
    &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Ongoing, DeviceContactList_OnGetNoOfItems, 
    DeviceContactList_OnSetNoOfItems ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationApplication_onCallState ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Application.onCallState()' */
void ApplicationApplication_onCallState( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->historyContact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationApplication_onCallState ), 
      (XObject)_this->historyContact, 0 );

  _this->historyContact = EwCastObject( DeviceContactList_GetContact( &EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass )->Ongoing, 0 ), DeviceHistoryContact );

  if ( _this->ongoingPage != 0 )
  {
    CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->ongoingPage ), 
    ((EffectsTransition)EwGetAutoObject( &ResFadeInOutCentered, EffectsFadeInOutTransition )), 
    0, 0, EwNullSlot, EwNullSlot, 0 );
    _this->ongoingPage = 0;
  }

  if ( _this->historyContact != 0 )
  {
    if (((( _this->historyContact->CallState == DeviceCallStateCancelled ) || ( 
        _this->historyContact->CallState == DeviceCallStateEndCall )) || ( _this->historyContact->CallState 
        == DeviceCallStateRejected )) || ( _this->historyContact->CallState == DeviceCallStateMissed ))
    {
      EwTrace( "%s", EwLoadString( &_Const008B ));
      CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->ongoingPage ), 
      ((EffectsTransition)EwGetAutoObject( &ResFadeInOutCentered, EffectsFadeInOutTransition )), 
      0, 0, EwNullSlot, EwNullSlot, 0 );
    }

    if ( _this->historyContact->CallDirection == DeviceCallDirectionIncoming )
    {
      if ( _this->historyContact->CallState == DeviceCallStateSpeaking )
      {
        _this->ongoingPage = ((ApplicationCallPageBase)EwNewObject( ApplicationCallPage, 
        0 ));
        ApplicationCallPageBase_OnSetContact( _this->ongoingPage, _this->historyContact );
      }
      else
      {
        _this->ongoingPage = ((ApplicationCallPageBase)EwNewObject( ApplicationIncomingCall, 
        0 ));
        ApplicationCallPageBase_OnSetContact( _this->ongoingPage, _this->historyContact );
      }

      CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)_this->ongoingPage ), 
      ((EffectsTransition)EwGetAutoObject( &ResFadeInOutCentered, EffectsFadeInOutTransition )), 
      0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
    }
    else
      if ( _this->historyContact->CallDirection == DeviceCallDirectionOutgoing )
      {
        _this->ongoingPage = ((ApplicationCallPageBase)EwNewObject( ApplicationCallPage, 
        0 ));
        ApplicationCallPageBase_OnSetContact( _this->ongoingPage, _this->historyContact );
        CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)_this->ongoingPage ), 
        ((EffectsTransition)EwGetAutoObject( &ResFadeInOutCentered, EffectsFadeInOutTransition )), 
        0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
      }

    EwAttachObjObserver( EwNewSlot( _this, ApplicationApplication_onCallState ), 
      (XObject)_this->historyContact, 0 );
  }
}

/* 'C' function for method : 'Application::Application.onSplashScreen()' */
void ApplicationApplication_onSplashScreen( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->splashScreen = EwNewObject( ApplicationSplashScreen, 0 );
  _this->splashScreen->OnStart = EwNewSlot( _this, ApplicationApplication_onCloseSplash );
  CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)_this->splashScreen ), 0, 
  0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::Application.onCloseSplash()' */
void ApplicationApplication_onCloseSplash( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->splashScreen ), 0, 
  0, 0, EwNullSlot, EwNullSlot, 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationApplication_onStart ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Application.onStart()' */
void ApplicationApplication_onStart( ApplicationApplication _this, XObject sender )
{
  ApplicationMainPage page;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  page = EwNewObject( ApplicationMainPage, 0 );
  CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)page ), 0, 0, 0, 0, 0, 0, 
  EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, deviceInstance, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Application::Application" )
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
EW_END_OF_CLASS( ApplicationApplication )

/* Initializer for the class 'Application::KeypadInsideCall' */
void ApplicationKeypadInsideCall__Init( ApplicationKeypadInsideCall _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationKeypadPage__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationKeypadInsideCall );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->BackgroundSmall, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationKeypadInsideCall );

  /* ... and initialize objects, variables, properties, etc. */
  ViewsRectangle_OnSetVisible( &_this->Super1.Background, 0 );
  CoreRectView__OnSetBounds( &_this->BackgroundSmall, _Const008C );
  ViewsRectangle_OnSetColorBL( &_this->BackgroundSmall, _Const008D );
  ViewsRectangle_OnSetColorBR( &_this->BackgroundSmall, _Const008E );
  ViewsRectangle_OnSetColorTR( &_this->BackgroundSmall, _Const008F );
  ViewsRectangle_OnSetColorTL( &_this->BackgroundSmall, _Const008F );
  ViewsRectangle_OnSetColor( &_this->BackgroundSmall, _Const0090 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super1.callbtn, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Super1.btn3, 1 );
  CoreRectView__OnSetBounds( &_this->Super1.InputEtxt, _Const0091 );
  ComponentsInputEtxt_OnSetColor( &_this->Super1.InputEtxt, ResWhite );
  ComponentsTextButton_OnSetTextColor( &_this->Super1.HideBtn, ResWhite );
  CoreGroup__Add( _this, ((CoreView)&_this->BackgroundSmall ), -16 );
}

/* Re-Initializer for the class 'Application::KeypadInsideCall' */
void ApplicationKeypadInsideCall__ReInit( ApplicationKeypadInsideCall _this )
{
  /* At first re-initialize the super class ... */
  ApplicationKeypadPage__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->BackgroundSmall );
}

/* Finalizer method for the class 'Application::KeypadInsideCall' */
void ApplicationKeypadInsideCall__Done( ApplicationKeypadInsideCall _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationKeypadPage );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->BackgroundSmall );

  /* Don't forget to deinitialize the super class ... */
  ApplicationKeypadPage__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Application::KeypadInsideCall' */
EW_DEFINE_CLASS_VARIANTS( ApplicationKeypadInsideCall )
EW_END_OF_CLASS_VARIANTS( ApplicationKeypadInsideCall )

/* Virtual Method Table (VMT) for the class : 'Application::KeypadInsideCall' */
EW_DEFINE_CLASS( ApplicationKeypadInsideCall, ApplicationKeypadPage, BackgroundSmall, 
                 BackgroundSmall, BackgroundSmall, BackgroundSmall, _.VMT, _.VMT, 
                 "Application::KeypadInsideCall" )
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
  ApplicationKeypadPage_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationKeypadInsideCall )

/* Initializer for the class 'Application::ContactsInsideCall' */
void ApplicationContactsInsideCall__Init( ApplicationContactsInsideCall _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationContactsPage__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactsInsideCall );

  /* ... then construct all embedded objects */
  ComponentsTextButton__Init( &_this->TextButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsInsideCall );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Super1.VerticalList, _Const0092 );
  CoreRectView__OnSetBounds( &_this->Super1.SlideTouchHandler, _Const0093 );
  CoreRectView__OnSetBounds( &_this->Super1.UpButton, _Const0094 );
  CoreRectView__OnSetBounds( &_this->Super1.DownButton, _Const0095 );
  CoreRectView__OnSetBounds( &_this->Super1.TitleTxt, _Const0096 );
  CoreRectView__OnSetBounds( &_this->Super1.PlusButton, _Const0097 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super1.MyCardItem, 0 );
  CoreRectView__OnSetBounds( &_this->TextButton, _Const0098 );
  ComponentsTextButton_OnSetText( &_this->TextButton, EwLoadString( &StringsCancelTxt ));
  CoreGroup__Add( _this, ((CoreView)&_this->TextButton ), 0 );
  ViewsText_OnSetFont( &_this->Super1.TitleTxt, EwLoadResource( &ResContactFontBold15, 
  ResourcesFont ));
  _this->TextButton.OnActivate = EwNewSlot( _this, ApplicationContactsInsideCall_onCancel );
}

/* Re-Initializer for the class 'Application::ContactsInsideCall' */
void ApplicationContactsInsideCall__ReInit( ApplicationContactsInsideCall _this )
{
  /* At first re-initialize the super class ... */
  ApplicationContactsPage__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ComponentsTextButton__ReInit( &_this->TextButton );
}

/* Finalizer method for the class 'Application::ContactsInsideCall' */
void ApplicationContactsInsideCall__Done( ApplicationContactsInsideCall _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationContactsPage );

  /* Finalize all embedded objects */
  ComponentsTextButton__Done( &_this->TextButton );

  /* Don't forget to deinitialize the super class ... */
  ApplicationContactsPage__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::ContactsInsideCall.onContactActivated()' */
void ApplicationContactsInsideCall_onContactActivated( ApplicationContactsInsideCall _this, 
  XObject sender )
{
  ApplicationContactItem itemView = EwCastObject( sender, ApplicationContactItem );

  if ( itemView != 0 )
  {
    _this->Super1.detailsPage = ((ApplicationContactDetailsPage)EwNewObject( ApplicationDetailsInsideCall, 
    0 ));
    _this->Super1.detailsPage->OnBack = EwNewSlot( _this, ApplicationContactsPage_onCloseContact );
    _this->Super1.detailsPage->OnDelete = EwNewSlot( _this, ApplicationContactsPage_onDeleteContact );
    ApplicationContactDetailsPage_OnSetContact( _this->Super1.detailsPage, itemView->Contact );
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->Super1.detailsPage ), 
    ((EffectsTransition)EwGetAutoObject( &ResSlideLeftCentered, EffectsSlideTransition )), 
    0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  }
}

/* 'C' function for method : 'Application::ContactsInsideCall.onCancel()' */
void ApplicationContactsInsideCall_onCancel( ApplicationContactsInsideCall _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnCancel, ((XObject)_this ));
}

/* Variants derived from the class : 'Application::ContactsInsideCall' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactsInsideCall )
EW_END_OF_CLASS_VARIANTS( ApplicationContactsInsideCall )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsInsideCall' */
EW_DEFINE_CLASS( ApplicationContactsInsideCall, ApplicationContactsPage, OnCancel, 
                 OnCancel, TextButton, TextButton, _.VMT, _.VMT, "Application::ContactsInsideCall" )
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
  ApplicationContactsInsideCall_onContactActivated,
EW_END_OF_CLASS( ApplicationContactsInsideCall )

/* Initializer for the class 'Application::IncomingCall' */
void ApplicationIncomingCall__Init( ApplicationIncomingCall _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationCallPageBase__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationIncomingCall );

  /* ... then construct all embedded objects */
  ComponentsButton65x90__Init( &_this->AcceptButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationIncomingCall );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0052 );
  CoreRectView__OnSetBounds( &_this->AcceptButton, _Const0099 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->AcceptButton, 
  EwLoadString( &ResCallIcon ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->AcceptButton, 
  EwLoadString( &StringsacceptTxt ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->AcceptButton, 
  ResWhite );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->AcceptButton, 
  ResGreenDark );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->AcceptButton, 
  ResGreen );
  CoreGroup__Add( _this, ((CoreView)&_this->AcceptButton ), 0 );
  _this->AcceptButton.Super1.OnActivate = EwNewSlot( _this, ApplicationIncomingCall_onAcceptCall );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->AcceptButton, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->AcceptButton, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));

  /* Call the user defined constructor */
  ApplicationIncomingCall_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::IncomingCall' */
void ApplicationIncomingCall__ReInit( ApplicationIncomingCall _this )
{
  /* At first re-initialize the super class ... */
  ApplicationCallPageBase__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ComponentsButton65x90__ReInit( &_this->AcceptButton );
}

/* Finalizer method for the class 'Application::IncomingCall' */
void ApplicationIncomingCall__Done( ApplicationIncomingCall _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationCallPageBase );

  /* Finalize all embedded objects */
  ComponentsButton65x90__Done( &_this->AcceptButton );

  /* Don't forget to deinitialize the super class ... */
  ApplicationCallPageBase__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationIncomingCall_Init( ApplicationIncomingCall _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
}

/* 'C' function for method : 'Application::IncomingCall.onAcceptCall()' */
void ApplicationIncomingCall_onAcceptCall( ApplicationIncomingCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_SendCallAnswer( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  _this->Super1.Contact );
}

/* Variants derived from the class : 'Application::IncomingCall' */
EW_DEFINE_CLASS_VARIANTS( ApplicationIncomingCall )
EW_END_OF_CLASS_VARIANTS( ApplicationIncomingCall )

/* Virtual Method Table (VMT) for the class : 'Application::IncomingCall' */
EW_DEFINE_CLASS( ApplicationIncomingCall, ApplicationCallPageBase, AcceptButton, 
                 AcceptButton, AcceptButton, AcceptButton, _.VMT, _.VMT, "Application::IncomingCall" )
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
  ApplicationCallPageBase_onContactUpdated,
EW_END_OF_CLASS( ApplicationIncomingCall )

/* Initializer for the class 'Application::FavoritesPage' */
void ApplicationFavoritesPage__Init( ApplicationFavoritesPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationFavoritesPage );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->VerticalList, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TitleTxt1, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->PlusButton, &_this->_.XObject, 0 );
  ComponentsTextButton__Init( &_this->TextButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationFavoritesPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const009A );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 32 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( ApplicationFavContactItem ));
  CoreView_OnSetStackingPriority((CoreView)&_this->SlideTouchHandler, -2 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const009A );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreRectView__OnSetBounds( &_this->TitleTxt1, _Const009B );
  ViewsText_OnSetAlignment( &_this->TitleTxt1, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TitleTxt1, EwLoadString( &StringsFavoritesTxt ));
  ViewsText_OnSetColor( &_this->TitleTxt1, ResBlack );
  CoreRectView__OnSetBounds( &_this->PlusButton, _Const009C );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->PlusButton, 1 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->PlusButton, 
  EwLoadString( &ResPlusIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->PlusButton, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->PlusButton, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->PlusButton, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->TextButton, _Const009D );
  ComponentsTextButton_OnSetText( &_this->TextButton, EwLoadString( &StringsEditTxt ));
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleTxt1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PlusButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextButton ), 0 );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationFavoritesPage_OnLoadItem );
  CoreVerticalList_OnSetSlideHandler( &_this->VerticalList, &_this->SlideTouchHandler );
  ViewsText_OnSetFont( &_this->TitleTxt1, EwLoadResource( &ResTitileFont32, ResourcesFont ));
  _this->PlusButton.Super1.OnActivate = EwNewSlot( _this, ApplicationFavoritesPage_onAddPress );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->PlusButton, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->PlusButton, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  _this->TextButton.OnActivate = EwNewSlot( _this, ApplicationFavoritesPage_onEdit );

  /* Call the user defined constructor */
  ApplicationFavoritesPage_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::FavoritesPage' */
void ApplicationFavoritesPage__ReInit( ApplicationFavoritesPage _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  CoreVerticalList__ReInit( &_this->VerticalList );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  ViewsText__ReInit( &_this->TitleTxt1 );
  ComponentsSButton25x25__ReInit( &_this->PlusButton );
  ComponentsTextButton__ReInit( &_this->TextButton );
}

/* Finalizer method for the class 'Application::FavoritesPage' */
void ApplicationFavoritesPage__Done( ApplicationFavoritesPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  CoreVerticalList__Done( &_this->VerticalList );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  ViewsText__Done( &_this->TitleTxt1 );
  ComponentsSButton25x25__Done( &_this->PlusButton );
  ComponentsTextButton__Done( &_this->TextButton );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationFavoritesPage_Init( ApplicationFavoritesPage _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationFavoritesPage_onNoOfContactsChanged ), 
    EwNewRef( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Favorites, DeviceContactList_OnGetNoOfItems, 
    DeviceContactList_OnSetNoOfItems ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationFavoritesPage_onNoOfContactsChanged ), 
    ((XObject)_this ));
}

/* 'C' function for method : 'Application::FavoritesPage.onAddPress()' */
void ApplicationFavoritesPage_onAddPress( ApplicationFavoritesPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->addFav = EwNewObject( ApplicationContactsList, 0 );
  _this->addFav->Super1.OnCancel = EwNewSlot( _this, ApplicationFavoritesPage_onClose );
  _this->addFav->OnAddFav = EwNewSlot( _this, ApplicationFavoritesPage_onAdd );
  ApplicationContactsList_OnSetContact( _this->addFav, EwNewObject( DeviceContact, 
  0 ));
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->addFav ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideUpCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationFavoritesPage_OnLoadItem( ApplicationFavoritesPage _this, XObject 
  sender )
{
  XInt32 itemNo;
  DeviceContact contact;
  ApplicationFavContactItem itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  contact = DeviceContactList_GetContact( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Favorites, 
  itemNo );
  itemView = EwCastObject( _this->VerticalList.View, ApplicationFavContactItem );
  ApplicationFavoritesPage_OnSetContact( _this, itemView->Super1.Contact );

  if ( itemView == 0 )
    return;

  ApplicationContactItem_OnSetContact((ApplicationContactItem)itemView, contact );
  itemView->Super1.OnActivate = EwNewSlot( _this, ApplicationFavoritesPage_onPressedContact );
  itemView->OnDelete = EwNewSlot( _this, ApplicationFavoritesPage_onDeleteContact );
  itemView->OnInfo = EwNewSlot( _this, ApplicationFavoritesPage_onInfoContact );
  ApplicationFavContactItem_OnSetEditMode( itemView, _this->EditMode );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super3.Bounds, EwNewPoint( 
  EwGetRectW( _this->VerticalList.Super2.Bounds ), _this->VerticalList.ItemHeight )));
}

/* 'C' function for method : 'Application::FavoritesPage.onPressedContact()' */
void ApplicationFavoritesPage_onPressedContact( ApplicationFavoritesPage _this, 
  XObject sender )
{
  ApplicationFavoritesPage_OnSetContact( _this, EwCastObject( sender, ApplicationFavContactItem )->Super1.Contact );
  DeviceDeviceClass_SendCallContact( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  _this->Contact );
  ApplicationFavoritesPage_OnSetContact( _this, 0 );
}

/* 'C' function for method : 'Application::FavoritesPage.onClose()' */
void ApplicationFavoritesPage_onClose( ApplicationFavoritesPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->addFav ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::FavoritesPage.onNoOfContactsChanged()' */
void ApplicationFavoritesPage_onNoOfContactsChanged( ApplicationFavoritesPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, EwGetAutoObject( &DeviceDevice, 
  DeviceDeviceClass )->Favorites.NoOfItems );
}

/* 'C' function for method : 'Application::FavoritesPage.OnSetContact()' */
void ApplicationFavoritesPage_OnSetContact( ApplicationFavoritesPage _this, DeviceContact 
  value )
{
  if ( _this->Contact == value )
    return;

  _this->Contact = value;
  EwNotifyRefObservers( EwNewRef( _this, ApplicationFavoritesPage_OnGetContact, 
    ApplicationFavoritesPage_OnSetContact ), 0 );
}

/* 'C' function for method : 'Application::FavoritesPage.onInfoContact()' */
void ApplicationFavoritesPage_onInfoContact( ApplicationFavoritesPage _this, XObject 
  sender )
{
  _this->detailsPage = EwNewObject( ApplicationContactDetailsPage, 0 );
  ApplicationContactDetailsPage_OnSetContact( _this->detailsPage, EwCastObject( 
  sender, ApplicationFavContactItem )->Super1.Contact );
  _this->detailsPage->OnBack = EwNewSlot( _this, ApplicationFavoritesPage_onCloseDetailsPage );
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideLeftCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::FavoritesPage.onDeleteContact()' */
void ApplicationFavoritesPage_onDeleteContact( ApplicationFavoritesPage _this, XObject 
  sender )
{
  DeviceContact contact;

  ApplicationFavoritesPage_OnSetContact( _this, EwCastObject( sender, ApplicationFavContactItem )->Super1.Contact );
  contact = DeviceContactList_FindByID( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
  _this->Contact );

  if ( contact != 0 )
    DeviceContact_OnSetFavorite( contact, 0 );

  DeviceContactList_Remove( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Favorites, 
  _this->Contact );
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
  ApplicationFavoritesPage_OnSetContact( _this, 0 );
}

/* 'C' function for method : 'Application::FavoritesPage.onCloseDetailsPage()' */
void ApplicationFavoritesPage_onCloseDetailsPage( ApplicationFavoritesPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideRightCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  ApplicationFavoritesPage_OnSetContact( _this, 0 );
}

/* 'C' function for method : 'Application::FavoritesPage.onEdit()' */
void ApplicationFavoritesPage_onEdit( ApplicationFavoritesPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->EditMode = (XBool)!_this->EditMode;
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
}

/* 'C' function for method : 'Application::FavoritesPage.onAdd()' */
void ApplicationFavoritesPage_onAdd( ApplicationFavoritesPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceContactList_AddLast( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Favorites, 
  _this->addFav->Contact );
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->addFav ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->addFav = 0;
}

/* Default onget method for the property 'Contact' */
DeviceContact ApplicationFavoritesPage_OnGetContact( ApplicationFavoritesPage _this )
{
  return _this->Contact;
}

/* Variants derived from the class : 'Application::FavoritesPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationFavoritesPage )
EW_END_OF_CLASS_VARIANTS( ApplicationFavoritesPage )

/* Virtual Method Table (VMT) for the class : 'Application::FavoritesPage' */
EW_DEFINE_CLASS( ApplicationFavoritesPage, CoreGroup, addFav, Background, Background, 
                 Background, EditMode, EditMode, "Application::FavoritesPage" )
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
EW_END_OF_CLASS( ApplicationFavoritesPage )

/* Initializer for the class 'Application::RecentPage' */
void ApplicationRecentPage__Init( ApplicationRecentPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationRecentPage );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TitleTxt1, &_this->_.XObject, 0 );
  ComponentsTextButton__Init( &_this->TextButton, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->VerticalList, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationRecentPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleTxt1, _Const009B );
  ViewsText_OnSetAlignment( &_this->TitleTxt1, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TitleTxt1, EwLoadString( &StringsRecentTxt ));
  ViewsText_OnSetColor( &_this->TitleTxt1, ResBlack );
  CoreView_OnSetLayout((CoreView)&_this->TextButton, CoreLayoutAlignToRight | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextButton, _Const009E );
  ComponentsTextButton_OnSetText( &_this->TextButton, EwLoadString( &StringsEditTxt ));
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const009A );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 50 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( ApplicationRecentItm ));
  CoreView_OnSetStackingPriority((CoreView)&_this->SlideTouchHandler, -1 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const009A );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleTxt1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  ViewsText_OnSetFont( &_this->TitleTxt1, EwLoadResource( &ResTitileFont32, ResourcesFont ));
  _this->TextButton.OnActivate = EwNewSlot( _this, ApplicationRecentPage_onEdit );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationRecentPage_OnLoadItem );
  CoreVerticalList_OnSetSlideHandler( &_this->VerticalList, &_this->SlideTouchHandler );

  /* Call the user defined constructor */
  ApplicationRecentPage_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::RecentPage' */
void ApplicationRecentPage__ReInit( ApplicationRecentPage _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ViewsText__ReInit( &_this->TitleTxt1 );
  ComponentsTextButton__ReInit( &_this->TextButton );
  CoreVerticalList__ReInit( &_this->VerticalList );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
}

/* Finalizer method for the class 'Application::RecentPage' */
void ApplicationRecentPage__Done( ApplicationRecentPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ViewsText__Done( &_this->TitleTxt1 );
  ComponentsTextButton__Done( &_this->TextButton );
  CoreVerticalList__Done( &_this->VerticalList );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationRecentPage_Init( ApplicationRecentPage _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationRecentPage_onNoOfContactsChanged ), 
    EwNewRef( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->History, DeviceContactList_OnGetNoOfItems, 
    DeviceContactList_OnSetNoOfItems ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationRecentPage_onNoOfContactsChanged ), 
    ((XObject)_this ));
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationRecentPage_OnLoadItem( ApplicationRecentPage _this, XObject sender )
{
  XInt32 itemNo;
  DeviceHistoryContact contactHistory;
  ApplicationRecentItm itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  contactHistory = EwCastObject( DeviceContactList_GetContact( &EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass )->History, itemNo ), DeviceHistoryContact );
  itemView = EwCastObject( _this->VerticalList.View, ApplicationRecentItm );

  if ( itemView == 0 )
    return;

  if ( contactHistory != 0 )
  {
    ApplicationRecentItm_OnSetContactHistory( itemView, contactHistory );
    ApplicationRecentItm_OnSetEditMode( itemView, _this->EditMode );
    itemView->OnActivate = EwNewSlot( _this, ApplicationRecentPage_onPressedContact );
    itemView->OnDelete = EwNewSlot( _this, ApplicationRecentPage_onDeleteContact );
    itemView->OnInfo = EwNewSlot( _this, ApplicationRecentPage_onInfoContact );
  }

  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->VerticalList.Super2.Bounds ), _this->VerticalList.ItemHeight )));
}

/* 'C' function for method : 'Application::RecentPage.onNoOfContactsChanged()' */
void ApplicationRecentPage_onNoOfContactsChanged( ApplicationRecentPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, EwGetAutoObject( &DeviceDevice, 
  DeviceDeviceClass )->History.NoOfItems );
}

/* 'C' function for method : 'Application::RecentPage.OnSetSelectedContact()' */
void ApplicationRecentPage_OnSetSelectedContact( ApplicationRecentPage _this, DeviceHistoryContact 
  value )
{
  if ( _this->SelectedContact == value )
    return;

  _this->SelectedContact = value;
  EwNotifyRefObservers( EwNewRef( _this, ApplicationRecentPage_OnGetSelectedContact, 
    ApplicationRecentPage_OnSetSelectedContact ), 0 );
}

/* 'C' function for method : 'Application::RecentPage.onEdit()' */
void ApplicationRecentPage_onEdit( ApplicationRecentPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->EditMode = (XBool)!_this->EditMode;
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
}

/* 'C' function for method : 'Application::RecentPage.onPressedContact()' */
void ApplicationRecentPage_onPressedContact( ApplicationRecentPage _this, XObject 
  sender )
{
  ApplicationRecentItm itemView = EwCastObject( sender, ApplicationRecentItm );

  ApplicationRecentPage_OnSetSelectedContact( _this, itemView->ContactHistory );
  DeviceDeviceClass_SendCallContact( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  ((DeviceContact)_this->SelectedContact ));
  ApplicationRecentPage_OnSetSelectedContact( _this, 0 );
}

/* 'C' function for method : 'Application::RecentPage.onInfoContact()' */
void ApplicationRecentPage_onInfoContact( ApplicationRecentPage _this, XObject sender )
{
  ApplicationRecentItm itemView = EwCastObject( sender, ApplicationRecentItm );

  if ( itemView != 0 )
  {
    _this->detailsPage = EwNewObject( ApplicationRecentDetailsPage, 0 );
    _this->detailsPage->Super1.OnBack = EwNewSlot( _this, ApplicationRecentPage_onCloseDetailsPage );
    _this->detailsPage->Super1.OnDelete = EwNewSlot( _this, ApplicationRecentPage_onCloseDetailsPage );
    ApplicationRecentDetailsPage_OnSetHistoryContact( _this->detailsPage, itemView->ContactHistory );
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->detailsPage ), 
    ((EffectsTransition)EwGetAutoObject( &ResSlideLeftCentered, EffectsSlideTransition )), 
    0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  }
}

/* 'C' function for method : 'Application::RecentPage.onDeleteContact()' */
void ApplicationRecentPage_onDeleteContact( ApplicationRecentPage _this, XObject 
  sender )
{
  ApplicationRecentItm itemView = EwCastObject( sender, ApplicationRecentItm );

  ApplicationRecentPage_OnSetSelectedContact( _this, itemView->ContactHistory );
  DeviceContactList_Remove( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->History, 
  ((DeviceContact)_this->SelectedContact ));
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
  ApplicationRecentPage_OnSetSelectedContact( _this, 0 );
}

/* 'C' function for method : 'Application::RecentPage.onCloseDetailsPage()' */
void ApplicationRecentPage_onCloseDetailsPage( ApplicationRecentPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, EwGetAutoObject( &DeviceDevice, 
  DeviceDeviceClass )->History.NoOfItems - 1 );
  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideRightCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  ApplicationRecentPage_OnSetSelectedContact( _this, 0 );
}

/* Default onget method for the property 'SelectedContact' */
DeviceHistoryContact ApplicationRecentPage_OnGetSelectedContact( ApplicationRecentPage _this )
{
  return _this->SelectedContact;
}

/* Variants derived from the class : 'Application::RecentPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationRecentPage )
EW_END_OF_CLASS_VARIANTS( ApplicationRecentPage )

/* Virtual Method Table (VMT) for the class : 'Application::RecentPage' */
EW_DEFINE_CLASS( ApplicationRecentPage, CoreGroup, SelectedContact, Background, 
                 Background, Background, EditMode, EditMode, "Application::RecentPage" )
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
EW_END_OF_CLASS( ApplicationRecentPage )

/* Initializer for the class 'Application::ContactsList' */
void ApplicationContactsList__Init( ApplicationContactsList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationContactsInsideCall__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactsList );

  /* ... then construct all embedded objects */
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsList );

  /* ... and initialize objects, variables, properties, etc. */
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super2.PlusButton, 0 );
  CoreRectView__OnSetBounds( &_this->Super1.TextButton, _Const009F );
  CoreRectView__OnSetBounds( &_this->Text, _Const00A0 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &StringsAddToFavTxt ));
  ViewsText_OnSetColor( &_this->Text, ResBlack );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResContactFont12, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::ContactsList' */
void ApplicationContactsList__ReInit( ApplicationContactsList _this )
{
  /* At first re-initialize the super class ... */
  ApplicationContactsInsideCall__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Application::ContactsList' */
void ApplicationContactsList__Done( ApplicationContactsList _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationContactsInsideCall );

  /* Finalize all embedded objects */
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  ApplicationContactsInsideCall__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::ContactsList.onContactActivated()' */
void ApplicationContactsList_onContactActivated( ApplicationContactsList _this, 
  XObject sender )
{
  ApplicationContactsList_OnSetContact( _this, EwCastObject( sender, ApplicationContactItem )->Contact );

  if ( _this->Contact->Favorite == 0 )
  {
    DeviceContact_OnSetFavorite( _this->Contact, 1 );
    EwPostSignal( _this->OnAddFav, ((XObject)_this ));
  }
  else
  {
    EwTrace( "%s", EwLoadString( &_Const00A1 ));
    EwPostSignal( _this->Super1.OnCancel, ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::ContactsList.OnSetContact()' */
void ApplicationContactsList_OnSetContact( ApplicationContactsList _this, DeviceContact 
  value )
{
  if ( _this->Contact == value )
    return;

  _this->Contact = value;
  EwNotifyRefObservers( EwNewRef( _this, ApplicationContactsList_OnGetContact, ApplicationContactsList_OnSetContact ), 
    0 );
}

/* Default onget method for the property 'Contact' */
DeviceContact ApplicationContactsList_OnGetContact( ApplicationContactsList _this )
{
  return _this->Contact;
}

/* Variants derived from the class : 'Application::ContactsList' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactsList )
EW_END_OF_CLASS_VARIANTS( ApplicationContactsList )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsList' */
EW_DEFINE_CLASS( ApplicationContactsList, ApplicationContactsInsideCall, Contact, 
                 OnAddFav, Text, Text, _.VMT, _.VMT, "Application::ContactsList" )
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
  ApplicationContactsList_onContactActivated,
EW_END_OF_CLASS( ApplicationContactsList )

/* Initializer for the class 'Application::FavContactItem' */
void ApplicationFavContactItem__Init( ApplicationFavContactItem _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationContactItem__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationFavContactItem );

  /* ... then construct all embedded objects */
  EffectsInt32Effect__Init( &_this->EditEffect, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->DeleteEffect, &_this->_.XObject, 0 );
  ComponentsTextButton__Init( &_this->DeleteButton, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->InfoButton, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->RemoveButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationFavContactItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000B );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->EditEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->EditEffect, 250 );
  _this->EditEffect.Value2 = 25;
  _this->EditEffect.Value1 = 0;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->DeleteEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->DeleteEffect, 250 );
  _this->DeleteEffect.Value2 = 110;
  _this->DeleteEffect.Value1 = 0;
  CoreView_OnSetStackingPriority((CoreView)&_this->Super1.TouchHandler, -1 );
  CoreQuadView__OnSetPoint3( &_this->Super1.TouchHandler, _Const00A2 );
  CoreQuadView__OnSetPoint2( &_this->Super1.TouchHandler, _Const00A3 );
  CoreView_OnSetLayout((CoreView)&_this->Super1.Background, CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Super1.Background, _Const000B );
  CoreView_OnSetLayout((CoreView)&_this->Super1.LastNameTxt, CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Super1.LastNameTxt, _Const00A4 );
  ViewsText_OnSetAutoSize( &_this->Super1.LastNameTxt, 1 );
  CoreRectView__OnSetBounds( &_this->DeleteButton, _Const00A5 );
  ComponentsTextButton_OnSetText( &_this->DeleteButton, EwLoadString( &StringsdeleteTxt ));
  ComponentsTextButton_OnSetTextColor( &_this->DeleteButton, ResWhite );
  ComponentsTextButton_OnSetTextColorPress( &_this->DeleteButton, ResWhiteSemiTransparent );
  ComponentsTextButton_OnSetBackgoundColor( &_this->DeleteButton, ResRed );
  CoreView_OnSetLayout((CoreView)&_this->InfoButton, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->InfoButton, _Const00A6 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->InfoButton, 
  EwLoadString( &ResInfoIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->InfoButton, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->InfoButton, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->InfoButton, 
  ResWhiteSemiTransparent );
  CoreView_OnSetLayout((CoreView)&_this->Super1.FirstNameTxt, CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Super1.FirstNameTxt, _Const00A7 );
  ViewsText_OnSetAutoSize( &_this->Super1.FirstNameTxt, 1 );
  ViewsText_OnSetString( &_this->Super1.FirstNameTxt, EwLoadString( &_Const00A8 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line, _Const000D );
  ViewsLine_OnSetWidth( &_this->Super1.Line, 2 );
  ViewsLine_OnSetColor( &_this->Super1.Line, ResGreyLight );
  CoreView_OnSetLayout((CoreView)&_this->Super1.PrfofilButton, CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Super1.PrfofilButton, _Const0014 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line1, _Const000E );
  CoreRectView__OnSetBounds( &_this->RemoveButton, _Const00A9 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->RemoveButton, 
  EwLoadString( &ResRemoveIcon ));
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->RemoveButton, 
  ResRed );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->RemoveButton, 
  ResTransparent );
  CoreGroup__Add( _this, ((CoreView)&_this->DeleteButton ), -5 );
  CoreGroup__Add( _this, ((CoreView)&_this->InfoButton ), -5 );
  CoreGroup__Add( _this, ((CoreView)&_this->RemoveButton ), 0 );
  _this->EditEffect.Super1.OnAnimate = EwNewSlot( _this, ApplicationFavContactItem_onAnimate );
  _this->DeleteEffect.Super1.OnAnimate = EwNewSlot( _this, ApplicationFavContactItem_onAnimate );
  _this->DeleteButton.OnActivate = EwNewSlot( _this, ApplicationFavContactItem_onDelete );
  _this->InfoButton.Super1.OnActivate = EwNewSlot( _this, ApplicationFavContactItem_onInfo );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->InfoButton, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->InfoButton, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->Super1.PrfofilButton, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  _this->RemoveButton.Super1.OnActivate = EwNewSlot( _this, ApplicationFavContactItem_onShowDelete );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->RemoveButton, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->RemoveButton, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
}

/* Re-Initializer for the class 'Application::FavContactItem' */
void ApplicationFavContactItem__ReInit( ApplicationFavContactItem _this )
{
  /* At first re-initialize the super class ... */
  ApplicationContactItem__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  EffectsInt32Effect__ReInit( &_this->EditEffect );
  EffectsInt32Effect__ReInit( &_this->DeleteEffect );
  ComponentsTextButton__ReInit( &_this->DeleteButton );
  ComponentsSButton25x25__ReInit( &_this->InfoButton );
  ComponentsSButton25x25__ReInit( &_this->RemoveButton );
}

/* Finalizer method for the class 'Application::FavContactItem' */
void ApplicationFavContactItem__Done( ApplicationFavContactItem _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationContactItem );

  /* Finalize all embedded objects */
  EffectsInt32Effect__Done( &_this->EditEffect );
  EffectsInt32Effect__Done( &_this->DeleteEffect );
  ComponentsTextButton__Done( &_this->DeleteButton );
  ComponentsSButton25x25__Done( &_this->InfoButton );
  ComponentsSButton25x25__Done( &_this->RemoveButton );

  /* Don't forget to deinitialize the super class ... */
  ApplicationContactItem__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::FavContactItem.onAnimate()' */
void ApplicationFavContactItem_onAnimate( ApplicationFavContactItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->RemoveButton, EwSetRectX( _this->RemoveButton.Super4.Bounds, 
  ( _this->EditEffect.Value - 25 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->Super1.PrfofilButton, EwSetRectX( _this->Super1.PrfofilButton.Super4.Bounds, 
  ( _this->EditEffect.Value + 6 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->Super1.LastNameTxt, EwSetRectX( _this->Super1.LastNameTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 55 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->Super1.FirstNameTxt, EwSetRectX( _this->Super1.FirstNameTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 146 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->InfoButton, EwSetRectX( _this->InfoButton.Super4.Bounds, 
  ( _this->EditEffect.Value + 217 ) - _this->DeleteEffect.Value ));
  CoreQuadView__OnSetPoint1( &_this->Super1.TouchHandler, EwSetPointX( _this->Super1.TouchHandler.Super1.Point1, 
  _this->RemoveButton.Super4.Bounds.Point2.X ));
  CoreQuadView__OnSetPoint4( &_this->Super1.TouchHandler, EwSetPointX( _this->Super1.TouchHandler.Super1.Point4, 
  _this->RemoveButton.Super4.Bounds.Point2.X ));
  CoreRectView__OnSetBounds( &_this->DeleteButton, EwSetRectX( _this->DeleteButton.Super3.Bounds, 
  ( _this->EditEffect.Value + 273 ) - _this->DeleteEffect.Value ));
}

/* 'C' function for method : 'Application::FavContactItem.OnSetEditMode()' */
void ApplicationFavContactItem_OnSetEditMode( ApplicationFavContactItem _this, XBool 
  value )
{
  if ( _this->EditMode == value )
    return;

  _this->EditMode = value;
  EffectsEffect_OnSetReversed((EffectsEffect)&_this->EditEffect, (XBool)!_this->EditMode );

  if ( _this->EditMode )
  {
    ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->InfoButton, 
    EwLoadString( &ResMenuIcon ));
    ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->InfoButton, 
    ResGrey );
  }
  else
  {
    ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->InfoButton, 
    EwLoadString( &ResInfoIcon ));
    ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->InfoButton, 
    ResBlue );

    if ( _this->DeleteEffect.Super1.Enabled || ( _this->DeleteEffect.Value == _this->DeleteEffect.Value2 ))
    {
      EffectsEffect_OnSetReversed((EffectsEffect)&_this->DeleteEffect, 1 );
      EwSignal( EwNewSlot( &_this->DeleteEffect, EffectsEffect_StartEffect ), ((XObject)_this ));
    }
  }

  EwSignal( EwNewSlot( &_this->EditEffect, EffectsEffect_StartEffect ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::FavContactItem.onDelete()' */
void ApplicationFavContactItem_onDelete( ApplicationFavContactItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EffectsEffect_OnSetReversed((EffectsEffect)&_this->DeleteEffect, 1 );
  EwSignal( EwNewSlot( &_this->DeleteEffect, EffectsEffect_StartEffect ), ((XObject)_this ));
  EwPostSignal( _this->OnDelete, ((XObject)_this ));
}

/* 'C' function for method : 'Application::FavContactItem.onShowDelete()' */
void ApplicationFavContactItem_onShowDelete( ApplicationFavContactItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EffectsEffect_OnSetReversed((EffectsEffect)&_this->DeleteEffect, 0 );
  EwSignal( EwNewSlot( &_this->DeleteEffect, EffectsEffect_StartEffect ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::FavContactItem.onInfo()' */
void ApplicationFavContactItem_onInfo( ApplicationFavContactItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnInfo, ((XObject)_this ));
}

/* Variants derived from the class : 'Application::FavContactItem' */
EW_DEFINE_CLASS_VARIANTS( ApplicationFavContactItem )
EW_END_OF_CLASS_VARIANTS( ApplicationFavContactItem )

/* Virtual Method Table (VMT) for the class : 'Application::FavContactItem' */
EW_DEFINE_CLASS( ApplicationFavContactItem, ApplicationContactItem, OnDelete, OnDelete, 
                 EditEffect, EditEffect, EditMode, EditMode, "Application::FavContactItem" )
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
  ApplicationContactItem_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationFavContactItem )

/* Initializer for the class 'Application::RecentItm' */
void ApplicationRecentItm__Init( ApplicationRecentItm _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationRecentItm );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->LastNameTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->FirstNameTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->CallTypeTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TimeTxt, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->InfoButton, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->PushButtonSmall, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->RemoveButton, &_this->_.XObject, 0 );
  ComponentsTextButton__Init( &_this->DeleteButton, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->EditEffect, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->DeleteEffect, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationRecentItm );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00AA );
  _this->Icon = EwShareString( EwLoadString( &ResOutgoingCallIcon ));
  _this->ButtonColor = ResWhite;
  _this->IconColor = ResWhite;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreRectView__OnSetBounds( &_this->Background, _Const00AB );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const0010 );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const0010 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0011 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00AC );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00AD );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00AE );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const00AF );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreView_OnSetLayout((CoreView)&_this->Line, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const00B0 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const00B1 );
  ViewsLine_OnSetWidth( &_this->Line, 2 );
  ViewsLine_OnSetColor( &_this->Line, ResGreyLight );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const00B2 );
  ViewsText_OnSetAutoSize( &_this->LastNameTxt, 1 );
  ViewsText_OnSetAlignment( &_this->LastNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->LastNameTxt, EwLoadString( &_Const00B3 ));
  ViewsText_OnSetColor( &_this->LastNameTxt, ResBlack );
  CoreView_OnSetStackingPriority((CoreView)&_this->FirstNameTxt, 0 );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const00B4 );
  ViewsText_OnSetAutoSize( &_this->FirstNameTxt, 1 );
  ViewsText_OnSetAlignment( &_this->FirstNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->FirstNameTxt, EwLoadString( &_Const00A8 ));
  ViewsText_OnSetColor( &_this->FirstNameTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->CallTypeTxt, _Const00B5 );
  ViewsText_OnSetAutoSize( &_this->CallTypeTxt, 1 );
  ViewsText_OnSetAlignment( &_this->CallTypeTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->CallTypeTxt, EwLoadString( &_Const00B6 ));
  CoreRectView__OnSetBounds( &_this->TimeTxt, _Const00B7 );
  ViewsText_OnSetAutoSize( &_this->TimeTxt, 1 );
  ViewsText_OnSetAlignment( &_this->TimeTxt, ViewsTextAlignmentAlignHorzRight | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TimeTxt, EwLoadString( &_Const00B8 ));
  _this->ColorText1 = ResBlack;
  _this->ColorText2 = ResGrey;
  CoreView_OnSetLayout((CoreView)&_this->InfoButton, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->InfoButton, _Const00B9 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->InfoButton, 
  EwLoadString( &ResInfoIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->InfoButton, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->InfoButton, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->InfoButton, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->PushButtonSmall, _Const00BA );
  CoreGroup_OnSetAlphaBlended((CoreGroup)&_this->PushButtonSmall, 1 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->PushButtonSmall, 
  0 );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->PushButtonSmall, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->PushButtonSmall, 
  ResWhiteTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->PushButtonSmall, 
  ResWhiteTransparent );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->PushButtonSmall, 
  ResWhiteTransparent );
  CoreRectView__OnSetBounds( &_this->RemoveButton, _Const00BB );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->RemoveButton, 
  EwLoadString( &ResRemoveIcon ));
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->RemoveButton, 
  ResRed );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->RemoveButton, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->DeleteButton, _Const00BC );
  ComponentsTextButton_OnSetText( &_this->DeleteButton, EwLoadString( &StringsdeleteTxt ));
  ComponentsTextButton_OnSetTextColor( &_this->DeleteButton, ResWhite );
  ComponentsTextButton_OnSetTextColorPress( &_this->DeleteButton, ResWhiteSemiTransparent );
  ComponentsTextButton_OnSetBackgoundColor( &_this->DeleteButton, ResRed );
  CoreView_OnSetLayout((CoreView)&_this->Line1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const000E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const000F );
  ViewsLine_OnSetWidth( &_this->Line1, 2 );
  ViewsLine_OnSetColor( &_this->Line1, ResGreyLight );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->EditEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->EditEffect, 250 );
  _this->EditEffect.Value2 = 25;
  _this->EditEffect.Value1 = 0;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->DeleteEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->DeleteEffect, 250 );
  _this->DeleteEffect.Value2 = 110;
  _this->DeleteEffect.Value1 = 0;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->LastNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FirstNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CallTypeTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TimeTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->InfoButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButtonSmall ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->RemoveButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DeleteButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line1 ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationRecentItm_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationRecentItm_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationRecentItm_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationRecentItm_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationRecentItm_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationRecentItm_onPressTouch );
  ViewsText_OnSetFont( &_this->LastNameTxt, EwLoadResource( &ResContactFontBold15, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->FirstNameTxt, EwLoadResource( &ResContactFont15, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->CallTypeTxt, EwLoadResource( &ResourcesDefaultFont, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TimeTxt, EwLoadResource( &ResourcesDefaultFont, ResourcesFont ));
  _this->InfoButton.Super1.OnActivate = EwNewSlot( _this, ApplicationRecentItm_onInfo );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->InfoButton, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->InfoButton, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->PushButtonSmall, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->PushButtonSmall, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  _this->RemoveButton.Super1.OnActivate = EwNewSlot( _this, ApplicationRecentItm_onShowDelete );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->RemoveButton, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->RemoveButton, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  _this->DeleteButton.OnActivate = EwNewSlot( _this, ApplicationRecentItm_onDelete );
  _this->EditEffect.Super1.OnAnimate = EwNewSlot( _this, ApplicationRecentItm_onAnimate );
  _this->DeleteEffect.Super1.OnAnimate = EwNewSlot( _this, ApplicationRecentItm_onAnimate );
}

/* Re-Initializer for the class 'Application::RecentItm' */
void ApplicationRecentItm__ReInit( ApplicationRecentItm _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsRectangle__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsLine__ReInit( &_this->Line );
  ViewsText__ReInit( &_this->LastNameTxt );
  ViewsText__ReInit( &_this->FirstNameTxt );
  ViewsText__ReInit( &_this->CallTypeTxt );
  ViewsText__ReInit( &_this->TimeTxt );
  ComponentsSButton25x25__ReInit( &_this->InfoButton );
  ComponentsSButton25x25__ReInit( &_this->PushButtonSmall );
  ComponentsSButton25x25__ReInit( &_this->RemoveButton );
  ComponentsTextButton__ReInit( &_this->DeleteButton );
  ViewsLine__ReInit( &_this->Line1 );
  EffectsInt32Effect__ReInit( &_this->EditEffect );
  EffectsInt32Effect__ReInit( &_this->DeleteEffect );
}

/* Finalizer method for the class 'Application::RecentItm' */
void ApplicationRecentItm__Done( ApplicationRecentItm _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsRectangle__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsLine__Done( &_this->Line );
  ViewsText__Done( &_this->LastNameTxt );
  ViewsText__Done( &_this->FirstNameTxt );
  ViewsText__Done( &_this->CallTypeTxt );
  ViewsText__Done( &_this->TimeTxt );
  ComponentsSButton25x25__Done( &_this->InfoButton );
  ComponentsSButton25x25__Done( &_this->PushButtonSmall );
  ComponentsSButton25x25__Done( &_this->RemoveButton );
  ComponentsTextButton__Done( &_this->DeleteButton );
  ViewsLine__Done( &_this->Line1 );
  EffectsInt32Effect__Done( &_this->EditEffect );
  EffectsInt32Effect__Done( &_this->DeleteEffect );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
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
void ApplicationRecentItm_UpdateViewState( ApplicationRecentItm _this, XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->LastNameTxt != 0 )
  {
    XColor clr = _this->ColorText1;
    ResourcesFont font = EwLoadResource( &ResContactFontBold15, ResourcesFont );
    ViewsText_OnSetFont( &_this->LastNameTxt, font );
    ViewsText_OnSetColor( &_this->LastNameTxt, clr );
  }

  if ( &_this->FirstNameTxt != 0 )
  {
    XColor clr = _this->ColorText1;
    ResourcesFont font = EwLoadResource( &ResContactFont15, ResourcesFont );
    ViewsText_OnSetFont( &_this->FirstNameTxt, font );
    ViewsText_OnSetColor( &_this->FirstNameTxt, clr );
  }

  if ( &_this->CallTypeTxt != 0 )
  {
    ViewsText_OnSetFont( &_this->CallTypeTxt, EwLoadResource( &ResContactFont12, 
    ResourcesFont ));
    ViewsText_OnSetColor( &_this->CallTypeTxt, _this->ColorText2 );
  }

  if ( &_this->TimeTxt != 0 )
  {
    ViewsText_OnSetFont( &_this->TimeTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
    ViewsText_OnSetColor( &_this->TimeTxt, _this->ColorText2 );
  }

  if ( !isEnabled )
    ViewsRectangle_OnSetColor( &_this->Background, _this->ButtonColor );
  else
    if ( isPressed )
      ViewsRectangle_OnSetColor( &_this->Background, ResPressColor );
    else
      if ( isSelected )
        ViewsRectangle_OnSetColor( &_this->Background, ResGreyLight );
      else
        ViewsRectangle_OnSetColor( &_this->Background, _this->ButtonColor );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationRecentItm_onFlashTimer( ApplicationRecentItm _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationRecentItm_onPressKey( ApplicationRecentItm _this, XObject sender )
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
void ApplicationRecentItm_onEnterLeaveTouch( ApplicationRecentItm _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ApplicationRecentItm_onReleaseTouch( ApplicationRecentItm _this, XObject sender )
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
void ApplicationRecentItm_onPressTouch( ApplicationRecentItm _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Application::RecentItm.OnSetColorText1()' */
void ApplicationRecentItm_OnSetColorText1( ApplicationRecentItm _this, XColor value )
{
  if ( !EwCompColor( _this->ColorText1, value ))
    return;

  _this->ColorText1 = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::RecentItm.onAnimate()' */
void ApplicationRecentItm_onAnimate( ApplicationRecentItm _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->RemoveButton, EwSetRectX( _this->RemoveButton.Super4.Bounds, 
  ( _this->EditEffect.Value - 25 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->PushButtonSmall, EwSetRectX( _this->PushButtonSmall.Super4.Bounds, 
  ( _this->EditEffect.Value + 6 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->LastNameTxt, EwSetRectX( _this->LastNameTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 55 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, EwSetRectX( _this->FirstNameTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 146 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->CallTypeTxt, EwSetRectX( _this->CallTypeTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 55 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->InfoButton, EwSetRectX( _this->InfoButton.Super4.Bounds, 
  ( _this->EditEffect.Value + 217 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->TimeTxt, EwSetRectX( _this->TimeTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 192 ) - _this->DeleteEffect.Value ));
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, EwSetPointX( _this->TouchHandler.Super1.Point1, 
  _this->RemoveButton.Super4.Bounds.Point2.X ));
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, EwSetPointX( _this->TouchHandler.Super1.Point4, 
  _this->RemoveButton.Super4.Bounds.Point2.X ));
  CoreRectView__OnSetBounds( &_this->DeleteButton, EwSetRectX( _this->DeleteButton.Super3.Bounds, 
  ( _this->EditEffect.Value + 273 ) - _this->DeleteEffect.Value ));
}

/* 'C' function for method : 'Application::RecentItm.OnSetEditMode()' */
void ApplicationRecentItm_OnSetEditMode( ApplicationRecentItm _this, XBool value )
{
  if ( _this->EditMode == value )
    return;

  _this->EditMode = value;
  EffectsEffect_OnSetReversed((EffectsEffect)&_this->EditEffect, (XBool)!_this->EditMode );

  if ( _this->EditMode )
    CoreGroup_OnSetVisible((CoreGroup)&_this->InfoButton, 0 );
  else
  {
    CoreGroup_OnSetVisible((CoreGroup)&_this->InfoButton, 1 );

    if ( _this->DeleteEffect.Super1.Enabled || ( _this->DeleteEffect.Value == _this->DeleteEffect.Value2 ))
    {
      EffectsEffect_OnSetReversed((EffectsEffect)&_this->DeleteEffect, 1 );
      EwSignal( EwNewSlot( &_this->DeleteEffect, EffectsEffect_StartEffect ), ((XObject)_this ));
    }
  }

  EwSignal( EwNewSlot( &_this->EditEffect, EffectsEffect_StartEffect ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::RecentItm.onDelete()' */
void ApplicationRecentItm_onDelete( ApplicationRecentItm _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EffectsEffect_OnSetReversed((EffectsEffect)&_this->DeleteEffect, 1 );
  EwSignal( EwNewSlot( &_this->DeleteEffect, EffectsEffect_StartEffect ), ((XObject)_this ));
  EwPostSignal( _this->OnDelete, ((XObject)_this ));
}

/* 'C' function for method : 'Application::RecentItm.onShowDelete()' */
void ApplicationRecentItm_onShowDelete( ApplicationRecentItm _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EffectsEffect_OnSetReversed((EffectsEffect)&_this->DeleteEffect, 0 );
  EwSignal( EwNewSlot( &_this->DeleteEffect, EffectsEffect_StartEffect ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::RecentItm.onInfo()' */
void ApplicationRecentItm_onInfo( ApplicationRecentItm _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnInfo, ((XObject)_this ));
}

/* 'C' function for method : 'Application::RecentItm.OnSetContactHistory()' */
void ApplicationRecentItm_OnSetContactHistory( ApplicationRecentItm _this, DeviceHistoryContact 
  value )
{
  if ( _this->ContactHistory == value )
    return;

  if ( _this->ContactHistory != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationRecentItm_onContactRistoryUpdate ), 
      (XObject)_this->ContactHistory, 0 );

  _this->ContactHistory = value;

  if ( _this->ContactHistory != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationRecentItm_onContactRistoryUpdate ), 
      (XObject)_this->ContactHistory, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationRecentItm_onContactRistoryUpdate ), 
      ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::RecentItm.onContactRistoryUpdate()' */
void ApplicationRecentItm_onContactRistoryUpdate( ApplicationRecentItm _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->ContactHistory != 0 )
  {
    ViewsText_OnSetString( &_this->LastNameTxt, _this->ContactHistory->Super1.LastName );
    ViewsText_OnSetString( &_this->FirstNameTxt, _this->ContactHistory->Super1.FirstName );

    if ( _this->ContactHistory->CallDirection == DeviceCallDirectionIncoming )
      ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->PushButtonSmall, 
      EwLoadString( &ResIncomingCallIcon ));
    else
      ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->PushButtonSmall, 
      EwLoadString( &ResOutgoingCallIcon ));

    ViewsText_OnSetString( &_this->CallTypeTxt, DeviceHistoryContact_GetCallDirection( 
    _this->ContactHistory ));
    ViewsText_OnSetString( &_this->TimeTxt, DeviceHistoryContact_GetTimeOfCall( 
    _this->ContactHistory ));

    if ( _this->ContactHistory->CallState == DeviceCallStateMissed )
      ApplicationRecentItm_OnSetColorText1( _this, ResRed );
    else
      ApplicationRecentItm_OnSetColorText1( _this, ResBlack );
  }
}

/* Variants derived from the class : 'Application::RecentItm' */
EW_DEFINE_CLASS_VARIANTS( ApplicationRecentItm )
EW_END_OF_CLASS_VARIANTS( ApplicationRecentItm )

/* Virtual Method Table (VMT) for the class : 'Application::RecentItm' */
EW_DEFINE_CLASS( ApplicationRecentItm, CoreGroup, ContactHistory, OnActivate, FlashTimer, 
                 FlashTimer, Icon, ButtonColor, "Application::RecentItm" )
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
  ApplicationRecentItm_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationRecentItm )

/* Initializer for the class 'Application::RecentDetailsPage' */
void ApplicationRecentDetailsPage__Init( ApplicationRecentDetailsPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationContactDetailsPage__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationRecentDetailsPage );

  /* ... then construct all embedded objects */
  ViewsLine__Init( &_this->Line4, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->DateTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TypeTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TimeTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->DurationTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationRecentDetailsPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line2, _Const00BD );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Super1.Line2, _Const00BE );
  CoreRectView__OnSetBounds( &_this->Super1.NumberTxt, _Const00BF );
  CoreRectView__OnSetBounds( &_this->Super1.MobileTxt, _Const00C0 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line1, _Const00C1 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Super1.Line1, _Const00C2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const00C3 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const00C4 );
  ViewsLine_OnSetColor( &_this->Line4, _Const0019 );
  CoreRectView__OnSetBounds( &_this->DateTxt, _Const00C5 );
  ViewsText_OnSetAlignment( &_this->DateTxt, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DateTxt, EwLoadString( &_Const00C6 ));
  ViewsText_OnSetColor( &_this->DateTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->TypeTxt, _Const00C7 );
  ViewsText_OnSetAlignment( &_this->TypeTxt, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TypeTxt, EwLoadString( &_Const00C8 ));
  ViewsText_OnSetColor( &_this->TypeTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->TimeTxt, _Const00C9 );
  ViewsText_OnSetAlignment( &_this->TimeTxt, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TimeTxt, EwLoadString( &_Const00CA ));
  ViewsText_OnSetColor( &_this->TimeTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->DurationTxt, _Const00CB );
  ViewsText_OnSetAlignment( &_this->DurationTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DurationTxt, EwLoadString( &_Const00CC ));
  ViewsText_OnSetColor( &_this->DurationTxt, ResGrey );
  CoreGroup__Add( _this, ((CoreView)&_this->Line4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DateTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TypeTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TimeTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DurationTxt ), 0 );
  ViewsText_OnSetFont( &_this->DateTxt, EwLoadResource( &ResContactFont15, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TypeTxt, EwLoadResource( &ResContactFontBold15, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TimeTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
  ViewsText_OnSetFont( &_this->DurationTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::RecentDetailsPage' */
void ApplicationRecentDetailsPage__ReInit( ApplicationRecentDetailsPage _this )
{
  /* At first re-initialize the super class ... */
  ApplicationContactDetailsPage__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsLine__ReInit( &_this->Line4 );
  ViewsText__ReInit( &_this->DateTxt );
  ViewsText__ReInit( &_this->TypeTxt );
  ViewsText__ReInit( &_this->TimeTxt );
  ViewsText__ReInit( &_this->DurationTxt );
}

/* Finalizer method for the class 'Application::RecentDetailsPage' */
void ApplicationRecentDetailsPage__Done( ApplicationRecentDetailsPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationContactDetailsPage );

  /* Finalize all embedded objects */
  ViewsLine__Done( &_this->Line4 );
  ViewsText__Done( &_this->DateTxt );
  ViewsText__Done( &_this->TypeTxt );
  ViewsText__Done( &_this->TimeTxt );
  ViewsText__Done( &_this->DurationTxt );

  /* Don't forget to deinitialize the super class ... */
  ApplicationContactDetailsPage__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::RecentDetailsPage.onContactUpdated()' */
void ApplicationRecentDetailsPage_onContactUpdated( ApplicationRecentDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->HistoryContact != 0 )
  {
    ComponentsButtonBase70x90_OnSetIcon( &_this->Super1.UserInitialsBtn, _this->HistoryContact->Super1.NameInitials );
    ViewsText_OnSetString( &_this->Super1.ContactName, EwConcatString( EwConcatString( 
    _this->HistoryContact->Super1.LastName, EwLoadString( &_Const0029 )), _this->HistoryContact->Super1.FirstName ));
    ViewsText_OnSetString( &_this->Super1.NumberTxt, _this->HistoryContact->Super1.PhoneNumber );
    ViewsText_OnSetString( &_this->DateTxt, CoreTime_Format( _this->HistoryContact->TimeOfCall, 
    EwLoadString( &_Const00CD )));
    ViewsText_OnSetString( &_this->TimeTxt, CoreTime_Format( _this->HistoryContact->TimeOfCall, 
    EwLoadString( &_Const00CE )));

    if (( _this->HistoryContact->CallState == DeviceCallStateEndCall ) && (( _this->HistoryContact->CallDirection 
        == DeviceCallDirectionIncoming ) || ( _this->HistoryContact->CallDirection 
        == DeviceCallDirectionOutgoing )))
    {
      ViewsText_OnSetString( &_this->TypeTxt, DeviceHistoryContact_GetCallDirection( 
      _this->HistoryContact ));
      ViewsText_OnSetString( &_this->DurationTxt, DeviceHistoryContact_GetDuration( 
      _this->HistoryContact ));
    }
    else
    {
      ViewsText_OnSetString( &_this->TypeTxt, DeviceHistoryContact_GetCallState( 
      _this->HistoryContact ));
      ViewsText_OnSetString( &_this->DurationTxt, DeviceHistoryContact_GetDuration( 
      _this->HistoryContact ));
    }
  }
}

/* 'C' function for method : 'Application::RecentDetailsPage.OnSetHistoryContact()' */
void ApplicationRecentDetailsPage_OnSetHistoryContact( ApplicationRecentDetailsPage _this, 
  DeviceHistoryContact value )
{
  if ( _this->HistoryContact == value )
    return;

  if ( _this->HistoryContact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationContactDetailsPage__onContactUpdated ), 
      (XObject)_this->HistoryContact, 0 );

  _this->HistoryContact = value;

  if ( _this->HistoryContact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationContactDetailsPage__onContactUpdated ), 
      (XObject)_this->HistoryContact, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationContactDetailsPage__onContactUpdated ), 
      ((XObject)_this ));
  }
}

/* Variants derived from the class : 'Application::RecentDetailsPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationRecentDetailsPage )
EW_END_OF_CLASS_VARIANTS( ApplicationRecentDetailsPage )

/* Virtual Method Table (VMT) for the class : 'Application::RecentDetailsPage' */
EW_DEFINE_CLASS( ApplicationRecentDetailsPage, ApplicationContactDetailsPage, HistoryContact, 
                 Line4, Line4, Line4, _.VMT, _.VMT, "Application::RecentDetailsPage" )
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
  ApplicationContactDetailsPage_onTapEdit,
  ApplicationRecentDetailsPage_onContactUpdated,
EW_END_OF_CLASS( ApplicationRecentDetailsPage )

/* Initializer for the class 'Application::CallPageBase' */
void ApplicationCallPageBase__Init( ApplicationCallPageBase _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationCallPageBase );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ComponentsButton65x90__Init( &_this->DesclineButton, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TimeTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ContactNameTxt, &_this->_.XObject, 0 );
  ComponentsButtonBase70x90__Init( &_this->UserInitials, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationCallPageBase );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0052 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0052 );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const008D );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const008E );
  ViewsRectangle_OnSetColorTR( &_this->Background, _Const008F );
  ViewsRectangle_OnSetColorTL( &_this->Background, _Const008F );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0090 );
  CoreRectView__OnSetBounds( &_this->DesclineButton, _Const00CF );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->DesclineButton, 
  EwLoadString( &ResEndCallIcon ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->DesclineButton, 
  EwLoadString( &StringsdeclineTxt ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->DesclineButton, 
  ResWhite );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->DesclineButton, 
  ResRed );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->DesclineButton, 
  ResRedLight );
  CoreView_OnSetLayout((CoreView)&_this->TimeTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->TimeTxt, _Const00D0 );
  ViewsText_OnSetAlignment( &_this->TimeTxt, ViewsTextAlignmentAlignHorzCenter | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TimeTxt, EwLoadString( &_Const00D1 ));
  ViewsText_OnSetColor( &_this->TimeTxt, ResWhite );
  CoreView_OnSetLayout((CoreView)&_this->ContactNameTxt, CoreLayoutAlignToLeft | 
  CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->ContactNameTxt, _Const00D2 );
  ViewsText_OnSetEnableBidiText( &_this->ContactNameTxt, 0 );
  ViewsText_OnSetAutoSize( &_this->ContactNameTxt, 1 );
  ViewsText_OnSetAlignment( &_this->ContactNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ContactNameTxt, EwLoadString( &_Const0024 ));
  ViewsText_OnSetColor( &_this->ContactNameTxt, ResWhite );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const00D3 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->UserInitials, 0 );
  ComponentsButtonBase70x90_OnSetDescript( &_this->UserInitials, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DesclineButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TimeTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ContactNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UserInitials ), 0 );
  _this->DesclineButton.Super1.OnActivate = EwNewSlot( _this, ApplicationCallPageBase_onDesclineCall );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->DesclineButton, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->DesclineButton, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->TimeTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
  ViewsText_OnSetFont( &_this->ContactNameTxt, EwLoadResource( &ResTitileFont25, 
  ResourcesFont ));
}

/* Re-Initializer for the class 'Application::CallPageBase' */
void ApplicationCallPageBase__ReInit( ApplicationCallPageBase _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ComponentsButton65x90__ReInit( &_this->DesclineButton );
  ViewsText__ReInit( &_this->TimeTxt );
  ViewsText__ReInit( &_this->ContactNameTxt );
  ComponentsButtonBase70x90__ReInit( &_this->UserInitials );
}

/* Finalizer method for the class 'Application::CallPageBase' */
void ApplicationCallPageBase__Done( ApplicationCallPageBase _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ComponentsButton65x90__Done( &_this->DesclineButton );
  ViewsText__Done( &_this->TimeTxt );
  ViewsText__Done( &_this->ContactNameTxt );
  ComponentsButtonBase70x90__Done( &_this->UserInitials );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::CallPageBase.onContactUpdated()' */
void ApplicationCallPageBase_onContactUpdated( ApplicationCallPageBase _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Contact != 0 )
  {
    ViewsText_OnSetString( &_this->ContactNameTxt, EwConcatString( EwConcatString( 
    _this->Contact->Super1.LastName, EwLoadString( &_Const0029 )), _this->Contact->Super1.FirstName ));
    ComponentsButtonBase70x90_OnSetIcon( &_this->UserInitials, _this->Contact->Super1.NameInitials );
  }
  else
  {
    ViewsText_OnSetString( &_this->ContactNameTxt, DeviceContactList_GetContact( 
    &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Ongoing, 0 )->PhoneNumber );
    CoreGroup_OnSetVisible((CoreGroup)&_this->UserInitials, 0 );
  }
}

/* Wrapper function for the virtual method : 'Application::CallPageBase.onContactUpdated()' */
__declspec( naked ) void ApplicationCallPageBase__onContactUpdated( void* _this, 
  XObject sender )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  __asm
  {
    /* Call the method via _this->VMT */
    mov eax, DWORD PTR [ esp + 4 ]
    mov eax, DWORD PTR [ eax ]
    jmp      DWORD PTR [ eax + 148 ]
  }
}

/* 'C' function for method : 'Application::CallPageBase.onDesclineCall()' */
void ApplicationCallPageBase_onDesclineCall( ApplicationCallPageBase _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Contact->CallDirection == DeviceCallDirectionOutgoing )
    DeviceDeviceClass_SendEndCall( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
    _this->Contact->Super1.PhoneNumber );
  else
    if ( _this->Contact->CallDirection == DeviceCallDirectionIncoming )
      DeviceDeviceClass_SendEndCall( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
      _this->Contact->Super1.PhoneNumber );
}

/* 'C' function for method : 'Application::CallPageBase.OnSetContact()' */
void ApplicationCallPageBase_OnSetContact( ApplicationCallPageBase _this, DeviceHistoryContact 
  value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationCallPageBase__onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationCallPageBase__onContactUpdated ), 
      (XObject)_this->Contact, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationCallPageBase__onContactUpdated ), 
      ((XObject)_this ));
  }
}

/* Variants derived from the class : 'Application::CallPageBase' */
EW_DEFINE_CLASS_VARIANTS( ApplicationCallPageBase )
EW_END_OF_CLASS_VARIANTS( ApplicationCallPageBase )

/* Virtual Method Table (VMT) for the class : 'Application::CallPageBase' */
EW_DEFINE_CLASS( ApplicationCallPageBase, CoreGroup, Contact, Background, Background, 
                 Background, _.VMT, _.VMT, "Application::CallPageBase" )
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
  ApplicationCallPageBase_onContactUpdated,
EW_END_OF_CLASS( ApplicationCallPageBase )

/* Initializer for the class 'Application::ContactsAppInsideCall' */
void ApplicationContactsAppInsideCall__Init( ApplicationContactsAppInsideCall _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationContactsApp__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactsAppInsideCall );

  /* ... then construct all embedded objects */
  ComponentsTextButton__Init( &_this->TextButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsAppInsideCall );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Super1.Rectangle, _Const00D4 );
  CoreRectView__OnSetBounds( &_this->Super1.NavBarButtons, _Const00D5 );
  CoreRectView__OnSetBounds( &_this->Super1.NavBarButtons1, _Const00D6 );
  CoreRectView__OnSetBounds( &_this->Super1.NavBarButtons2, _Const00D7 );
  CoreRectView__OnSetBounds( &_this->Super1.NavBarButtons3, _Const00D8 );
  CoreRectView__OnSetBounds( &_this->TextButton, _Const00D9 );
  ComponentsTextButton_OnSetText( &_this->TextButton, EwLoadString( &StringsCancelTxt ));
  CoreGroup__Add( _this, ((CoreView)&_this->TextButton ), 0 );
  _this->TextButton.OnActivate = EwNewSlot( _this, ApplicationContactsAppInsideCall_onCancel );
}

/* Re-Initializer for the class 'Application::ContactsAppInsideCall' */
void ApplicationContactsAppInsideCall__ReInit( ApplicationContactsAppInsideCall _this )
{
  /* At first re-initialize the super class ... */
  ApplicationContactsApp__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ComponentsTextButton__ReInit( &_this->TextButton );
}

/* Finalizer method for the class 'Application::ContactsAppInsideCall' */
void ApplicationContactsAppInsideCall__Done( ApplicationContactsAppInsideCall _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationContactsApp );

  /* Finalize all embedded objects */
  ComponentsTextButton__Done( &_this->TextButton );

  /* Don't forget to deinitialize the super class ... */
  ApplicationContactsApp__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::ContactsAppInsideCall.onCancel()' */
void ApplicationContactsAppInsideCall_onCancel( ApplicationContactsAppInsideCall _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnCancel, ((XObject)_this ));
}

/* Variants derived from the class : 'Application::ContactsAppInsideCall' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactsAppInsideCall )
EW_END_OF_CLASS_VARIANTS( ApplicationContactsAppInsideCall )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsAppInsideCall' */
EW_DEFINE_CLASS( ApplicationContactsAppInsideCall, ApplicationContactsApp, OnCancel, 
                 OnCancel, TextButton, TextButton, _.VMT, _.VMT, "Application::ContactsAppInsideCall" )
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
EW_END_OF_CLASS( ApplicationContactsAppInsideCall )

/* Initializer for the class 'Application::MyCardItem' */
void ApplicationMyCardItem__Init( ApplicationMyCardItem _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationMyCardItem );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->NameTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->MyCardTxt, &_this->_.XObject, 0 );
  ComponentsSButton50x50__Init( &_this->PushButtonSmall1, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationMyCardItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00DA );
  _this->ButtonColor = ResWhite;
  _this->IconColor = ResWhite;
  _this->TextColor = ResBlack;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00DB );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00DC );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00DD );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const000F );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Background, _Const00DA );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const0010 );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const0010 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0011 );
  CoreRectView__OnSetBounds( &_this->NameTxt, _Const00DE );
  ViewsText_OnSetAlignment( &_this->NameTxt, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->NameTxt, EwLoadString( &StringsMyCardTxt ));
  ViewsText_OnSetColor( &_this->NameTxt, ResBlack );
  CoreView_OnSetLayout((CoreView)&_this->Line1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const00DD );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const000F );
  ViewsLine_OnSetWidth( &_this->Line1, 2 );
  ViewsLine_OnSetColor( &_this->Line1, ResGreyLight );
  CoreRectView__OnSetBounds( &_this->MyCardTxt, _Const00DF );
  ViewsText_OnSetAlignment( &_this->MyCardTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MyCardTxt, EwLoadString( &StringsMyCardTxt ));
  ViewsText_OnSetColor( &_this->MyCardTxt, ResGrey );
  CoreRectView__OnSetBounds( &_this->PushButtonSmall1, _Const00E0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MyCardTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButtonSmall1 ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationMyCardItem_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationMyCardItem_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationMyCardItem_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationMyCardItem_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationMyCardItem_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationMyCardItem_onPressTouch );
  ViewsText_OnSetFont( &_this->NameTxt, EwLoadResource( &ResContactFontBold15, ResourcesFont ));
  ViewsText_OnSetFont( &_this->MyCardTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->PushButtonSmall1, 
  EwLoadResource( &ResButtonRoundMedium, ResourcesBitmap ));

  /* Call the user defined constructor */
  ApplicationMyCardItem_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::MyCardItem' */
void ApplicationMyCardItem__ReInit( ApplicationMyCardItem _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsRectangle__ReInit( &_this->Background );
  ViewsText__ReInit( &_this->NameTxt );
  ViewsLine__ReInit( &_this->Line1 );
  ViewsText__ReInit( &_this->MyCardTxt );
  ComponentsSButton50x50__ReInit( &_this->PushButtonSmall1 );
}

/* Finalizer method for the class 'Application::MyCardItem' */
void ApplicationMyCardItem__Done( ApplicationMyCardItem _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsRectangle__Done( &_this->Background );
  ViewsText__Done( &_this->NameTxt );
  ViewsLine__Done( &_this->Line1 );
  ViewsText__Done( &_this->MyCardTxt );
  ComponentsSButton50x50__Done( &_this->PushButtonSmall1 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationMyCardItem_Init( ApplicationMyCardItem _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationMyCardItem_onContactUpdated ), 
    EwNewRef( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), DeviceDeviceClass_OnGetMyCard, 
    DeviceDeviceClass_OnSetMyCard ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationMyCardItem_onContactUpdated ), ((XObject)_this ));
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
void ApplicationMyCardItem_UpdateViewState( ApplicationMyCardItem _this, XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( !isEnabled )
    ViewsRectangle_OnSetColor( &_this->Background, _this->ButtonColor );
  else
    if ( isPressed )
      ViewsRectangle_OnSetColor( &_this->Background, ResPressColor );
    else
      if ( isSelected )
        ViewsRectangle_OnSetColor( &_this->Background, ResGreyLight );
      else
        ViewsRectangle_OnSetColor( &_this->Background, _this->ButtonColor );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationMyCardItem_onFlashTimer( ApplicationMyCardItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationMyCardItem_onPressKey( ApplicationMyCardItem _this, XObject sender )
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
void ApplicationMyCardItem_onEnterLeaveTouch( ApplicationMyCardItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ApplicationMyCardItem_onReleaseTouch( ApplicationMyCardItem _this, XObject 
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
void ApplicationMyCardItem_onPressTouch( ApplicationMyCardItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Application::MyCardItem.onContactUpdated()' */
void ApplicationMyCardItem_onContactUpdated( ApplicationMyCardItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyCard != 0 )
  {
    ViewsText_OnSetString( &_this->NameTxt, EwConcatString( EwConcatString( EwGetAutoObject( 
    &DeviceDevice, DeviceDeviceClass )->MyCard->LastName, EwLoadString( &_Const0029 )), 
    EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyCard->FirstName ));
    ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->PushButtonSmall1, 
    EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyCard->NameInitials );
  }
  else
  {
    ViewsText_OnSetString( &_this->NameTxt, 0 );
    ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->PushButtonSmall1, 
    0 );
  }
}

/* Variants derived from the class : 'Application::MyCardItem' */
EW_DEFINE_CLASS_VARIANTS( ApplicationMyCardItem )
EW_END_OF_CLASS_VARIANTS( ApplicationMyCardItem )

/* Virtual Method Table (VMT) for the class : 'Application::MyCardItem' */
EW_DEFINE_CLASS( ApplicationMyCardItem, CoreGroup, OnActivate, OnActivate, FlashTimer, 
                 FlashTimer, ButtonColor, ButtonColor, "Application::MyCardItem" )
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
  ApplicationMyCardItem_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationMyCardItem )

/* Initializer for the class 'Application::MessagesPage' */
void ApplicationMessagesPage__Init( ApplicationMessagesPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationMessagesPage );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->VerticalList, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  ComponentsSearchEtxt__Init( &_this->SearchExt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TitleTxt, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->createBtn, &_this->_.XObject, 0 );
  ComponentsTextButton__Init( &_this->editBtn, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationMessagesPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0052 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0052 );
  CoreView_OnSetLayout((CoreView)&_this->VerticalList, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const00E1 );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 45 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( ApplicationMessegeItem ));
  CoreView_OnSetStackingPriority((CoreView)&_this->SlideTouchHandler, -1 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const00E1 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandler, 0 );
  CoreView_OnSetLayout((CoreView)&_this->SearchExt, CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->SearchExt, _Const00E2 );
  ComponentsSearchEtxt_OnSetColor( &_this->SearchExt, ResGrey );
  CoreRectView__OnSetBounds( &_this->TitleTxt, _Const00E3 );
  ViewsText_OnSetAlignment( &_this->TitleTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TitleTxt, EwLoadString( &StringsMessagesTxt ));
  ViewsText_OnSetColor( &_this->TitleTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->createBtn, _Const00E4 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->createBtn, 
  EwLoadString( &ResWriteIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->createBtn, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->createBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->createBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->createBtn, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->editBtn, _Const00E5 );
  ComponentsTextButton_OnSetText( &_this->editBtn, EwLoadString( &StringsEditTxt ));
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SearchExt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->createBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->editBtn ), 0 );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationMessagesPage_OnLoadItem );
  CoreVerticalList_OnSetSlideHandler( &_this->VerticalList, &_this->SlideTouchHandler );
  ViewsText_OnSetFont( &_this->TitleTxt, EwLoadResource( &ResTitileFont32, ResourcesFont ));
  _this->createBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationMessagesPage_onAddContact );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->createBtn, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
  _this->editBtn.OnActivate = EwNewSlot( _this, ApplicationMessagesPage_onEdit );

  /* Call the user defined constructor */
  ApplicationMessagesPage_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::MessagesPage' */
void ApplicationMessagesPage__ReInit( ApplicationMessagesPage _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  CoreVerticalList__ReInit( &_this->VerticalList );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  ComponentsSearchEtxt__ReInit( &_this->SearchExt );
  ViewsText__ReInit( &_this->TitleTxt );
  ComponentsSButton25x25__ReInit( &_this->createBtn );
  ComponentsTextButton__ReInit( &_this->editBtn );
}

/* Finalizer method for the class 'Application::MessagesPage' */
void ApplicationMessagesPage__Done( ApplicationMessagesPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  CoreVerticalList__Done( &_this->VerticalList );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  ComponentsSearchEtxt__Done( &_this->SearchExt );
  ViewsText__Done( &_this->TitleTxt );
  ComponentsSButton25x25__Done( &_this->createBtn );
  ComponentsTextButton__Done( &_this->editBtn );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationMessagesPage_Init( ApplicationMessagesPage _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationMessagesPage_onNoOfContactsChanged ), 
    EwNewRef( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MessageHistory, 
    DeviceContactList_OnGetIsUpdate, DeviceContactList_OnSetIsUpdate ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationMessagesPage_onNoOfContactsChanged ), 
    ((XObject)_this ));
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationMessagesPage_OnLoadItem( ApplicationMessagesPage _this, XObject 
  sender )
{
  XInt32 itemNo;
  DeviceContact contact;
  ApplicationMessegeItem messageItem;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  contact = DeviceContactList_GetContact( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MessageHistory, 
  itemNo );
  messageItem = EwCastObject( _this->VerticalList.View, ApplicationMessegeItem );

  if ( messageItem == 0 )
    return;

  ApplicationMessegeItem_OnSetContact( messageItem, contact );
  messageItem->OnActivate = EwNewSlot( _this, ApplicationMessagesPage_onOpenChat );
  CoreRectView__OnSetBounds( messageItem, EwSetRectSize( messageItem->Super2.Bounds, 
  EwNewPoint( EwGetRectW( _this->VerticalList.Super2.Bounds ), _this->VerticalList.ItemHeight )));
}

/* 'C' function for method : 'Application::MessagesPage.onEdit()' */
void ApplicationMessagesPage_onEdit( ApplicationMessagesPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->EditMode = (XBool)!_this->EditMode;
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
}

/* 'C' function for method : 'Application::MessagesPage.onAddContact()' */
void ApplicationMessagesPage_onAddContact( ApplicationMessagesPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->addPage = EwNewObject( ApplicationContactsList1, 0 );
  _this->addPage->Super2.OnCancel = EwNewSlot( _this, ApplicationMessagesPage_onCloseAdd );
  _this->addPage->Super1.OnAddFav = EwNewSlot( _this, ApplicationMessagesPage_onAdd );
  ApplicationContactsList_OnSetContact((ApplicationContactsList)_this->addPage, 
  EwNewObject( DeviceContact, 0 ));
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->addPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideUpCenteredLimit, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::MessagesPage.onCloseAdd()' */
void ApplicationMessagesPage_onCloseAdd( ApplicationMessagesPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->addPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->addPage = 0;
}

/* 'C' function for method : 'Application::MessagesPage.onAdd()' */
void ApplicationMessagesPage_onAdd( ApplicationMessagesPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceContactList_AddFirst( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MessageHistory, 
  _this->addPage->Super1.Contact );
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
  EwPostSignal( EwNewSlot( _this, ApplicationMessagesPage_onCloseAdd ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::MessagesPage.onBack()' */
void ApplicationMessagesPage_onBack( ApplicationMessagesPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->chat ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->chat = 0;
}

/* 'C' function for method : 'Application::MessagesPage.onNoOfContactsChanged()' */
void ApplicationMessagesPage_onNoOfContactsChanged( ApplicationMessagesPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, EwGetAutoObject( &DeviceDevice, 
  DeviceDeviceClass )->MessageHistory.NoOfItems );
}

/* 'C' function for method : 'Application::MessagesPage.onOpenChat()' */
void ApplicationMessagesPage_onOpenChat( ApplicationMessagesPage _this, XObject 
  sender )
{
  ApplicationMessegeItem itemView = EwCastObject( sender, ApplicationMessegeItem );

  if ( itemView != 0 )
  {
    _this->chat = EwNewObject( ApplicationChat, 0 );
    ApplicationChat_OnSetContact( _this->chat, itemView->Contact );
    _this->chat->OnBack = EwNewSlot( _this, ApplicationMessagesPage_onBack );
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->chat ), ((EffectsTransition)EwGetAutoObject( 
    &ResSlideUpCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
    EwNullSlot, 0 );
  }
}

/* Variants derived from the class : 'Application::MessagesPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationMessagesPage )
EW_END_OF_CLASS_VARIANTS( ApplicationMessagesPage )

/* Virtual Method Table (VMT) for the class : 'Application::MessagesPage' */
EW_DEFINE_CLASS( ApplicationMessagesPage, CoreGroup, addPage, Rectangle, Rectangle, 
                 Rectangle, EditMode, EditMode, "Application::MessagesPage" )
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
EW_END_OF_CLASS( ApplicationMessagesPage )

/* Initializer for the class 'Application::MessegeItem' */
void ApplicationMessegeItem__Init( ApplicationMessegeItem _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationMessegeItem );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->EditEffect, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->SButton25x25, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TimeTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->MessageTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->NameTxt, &_this->_.XObject, 0 );
  ComponentsSButton50x50__Init( &_this->UserIcon, &_this->_.XObject, 0 );
  ComponentsToggleButton__Init( &_this->CheckButton, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationMessegeItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00E6 );
  _this->ButtonColor = ResWhite;
  _this->IconColor = ResWhite;
  _this->TextColor = ResBlack;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->EditEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->EditEffect, 250 );
  _this->EditEffect.Value2 = 25;
  _this->EditEffect.Value1 = 0;
  CoreRectView__OnSetBounds( &_this->Background, _Const00E6 );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const0010 );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const0010 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0011 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00E7 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00E8 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00E9 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const000F );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->SButton25x25, _Const00EA );
  CoreGroup_OnSetVisible((CoreGroup)&_this->SButton25x25, 0 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->SButton25x25, 
  EwLoadString( &ResForwardIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->SButton25x25, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->SButton25x25, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->SButton25x25, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->SButton25x25, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetIconColorEnabled((ComponentsButtonBase70x90)&_this->SButton25x25, 
  ResGreyLight );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->SButton25x25, 
  ResGrey );
  CoreRectView__OnSetBounds( &_this->TimeTxt, _Const00EB );
  ViewsText_OnSetAutoSize( &_this->TimeTxt, 1 );
  ViewsText_OnSetAlignment( &_this->TimeTxt, ViewsTextAlignmentAlignHorzRight | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TimeTxt, EwLoadString( &_Const00B8 ));
  ViewsText_OnSetColor( &_this->TimeTxt, ResGrey );
  CoreView_OnSetLayout((CoreView)&_this->Line2, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const00EC );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const00ED );
  ViewsLine_OnSetWidth( &_this->Line2, 2 );
  ViewsLine_OnSetColor( &_this->Line2, ResGreyLight );
  CoreRectView__OnSetBounds( &_this->MessageTxt, _Const00EE );
  ViewsText_OnSetAlignment( &_this->MessageTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MessageTxt, EwLoadString( &StringsmessageTxt ));
  ViewsText_OnSetColor( &_this->MessageTxt, ResGrey );
  CoreRectView__OnSetBounds( &_this->NameTxt, _Const00EF );
  ViewsText_OnSetAlignment( &_this->NameTxt, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->NameTxt, EwLoadString( &_Const00F0 ));
  ViewsText_OnSetColor( &_this->NameTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->UserIcon, _Const00F1 );
  CoreRectView__OnSetBounds( &_this->CheckButton, _Const00F2 );
  ComponentsToggleButton_OnSetBackgroundColor( &_this->CheckButton, ResGreyLight );
  ComponentsToggleButton_OnSetIconSelectedColor( &_this->CheckButton, ResWhite );
  CoreView_OnSetLayout((CoreView)&_this->Line1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const00E9 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const00F3 );
  ViewsLine_OnSetWidth( &_this->Line1, 2 );
  ViewsLine_OnSetColor( &_this->Line1, ResGreyLight );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SButton25x25 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TimeTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MessageTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UserIcon ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CheckButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line1 ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationMessegeItem_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationMessegeItem_onPressKey );
  _this->EditEffect.Super1.OnAnimate = EwNewSlot( _this, ApplicationMessegeItem_onAnimate );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationMessegeItem_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationMessegeItem_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationMessegeItem_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationMessegeItem_onPressTouch );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->SButton25x25, 
  EwLoadResource( &ResIconsFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->SButton25x25, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->TimeTxt, EwLoadResource( &ResourcesDefaultFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->MessageTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
  ViewsText_OnSetFont( &_this->NameTxt, EwLoadResource( &ResContactFontBold15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->UserIcon, 
  EwLoadResource( &ResButtonRoundMedium, ResourcesBitmap ));
}

/* Re-Initializer for the class 'Application::MessegeItem' */
void ApplicationMessegeItem__ReInit( ApplicationMessegeItem _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  EffectsInt32Effect__ReInit( &_this->EditEffect );
  ViewsRectangle__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ComponentsSButton25x25__ReInit( &_this->SButton25x25 );
  ViewsText__ReInit( &_this->TimeTxt );
  ViewsLine__ReInit( &_this->Line2 );
  ViewsText__ReInit( &_this->MessageTxt );
  ViewsText__ReInit( &_this->NameTxt );
  ComponentsSButton50x50__ReInit( &_this->UserIcon );
  ComponentsToggleButton__ReInit( &_this->CheckButton );
  ViewsLine__ReInit( &_this->Line1 );
}

/* Finalizer method for the class 'Application::MessegeItem' */
void ApplicationMessegeItem__Done( ApplicationMessegeItem _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  EffectsInt32Effect__Done( &_this->EditEffect );
  ViewsRectangle__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ComponentsSButton25x25__Done( &_this->SButton25x25 );
  ViewsText__Done( &_this->TimeTxt );
  ViewsLine__Done( &_this->Line2 );
  ViewsText__Done( &_this->MessageTxt );
  ViewsText__Done( &_this->NameTxt );
  ComponentsSButton50x50__Done( &_this->UserIcon );
  ComponentsToggleButton__Done( &_this->CheckButton );
  ViewsLine__Done( &_this->Line1 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
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
void ApplicationMessegeItem_UpdateViewState( ApplicationMessegeItem _this, XSet 
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

  if ( !isEnabled )
    ViewsRectangle_OnSetColor( &_this->Background, _this->ButtonColor );
  else
    if ( isPressed )
      ViewsRectangle_OnSetColor( &_this->Background, ResPressColor );
    else
      if ( isSelected )
        ViewsRectangle_OnSetColor( &_this->Background, ResGreyLight );
      else
        ViewsRectangle_OnSetColor( &_this->Background, _this->ButtonColor );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationMessegeItem_onFlashTimer( ApplicationMessegeItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationMessegeItem_onPressKey( ApplicationMessegeItem _this, XObject sender )
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
void ApplicationMessegeItem_onEnterLeaveTouch( ApplicationMessegeItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ApplicationMessegeItem_onReleaseTouch( ApplicationMessegeItem _this, XObject 
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
void ApplicationMessegeItem_onPressTouch( ApplicationMessegeItem _this, XObject 
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

/* 'C' function for method : 'Application::MessegeItem.onContactUpdated()' */
void ApplicationMessegeItem_onContactUpdated( ApplicationMessegeItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Contact != 0 )
  {
    ViewsText_OnSetString( &_this->NameTxt, EwConcatString( EwConcatString( _this->Contact->LastName, 
    EwLoadString( &_Const0029 )), _this->Contact->FirstName ));
    ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->UserIcon, 
    _this->Contact->NameInitials );

    if ( _this->Contact->MessagesList.head != 0 )
    {
      ViewsText_OnSetString( &_this->MessageTxt, DeviceMessagesList_GetLastMessage( 
      &_this->Contact->MessagesList )->Message );
      ViewsText_OnSetString( &_this->TimeTxt, CoreTime_OnGetString( DeviceMessagesList_GetLastMessage( 
      &_this->Contact->MessagesList )->TimeSent ));
      CoreGroup_OnSetVisible((CoreGroup)&_this->SButton25x25, 1 );
    }
    else
    {
      ViewsText_OnSetString( &_this->MessageTxt, 0 );
      ViewsText_OnSetString( &_this->TimeTxt, 0 );
      CoreGroup_OnSetVisible((CoreGroup)&_this->SButton25x25, 0 );
    }
  }
}

/* 'C' function for method : 'Application::MessegeItem.onAnimate()' */
void ApplicationMessegeItem_onAnimate( ApplicationMessegeItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Application::MessegeItem.OnSetContact()' */
void ApplicationMessegeItem_OnSetContact( ApplicationMessegeItem _this, DeviceContact 
  value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationMessegeItem_onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
    EwAttachObjObserver( EwNewSlot( _this, ApplicationMessegeItem_onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  EwPostSignal( EwNewSlot( _this, ApplicationMessegeItem_onContactUpdated ), ((XObject)_this ));
}

/* Variants derived from the class : 'Application::MessegeItem' */
EW_DEFINE_CLASS_VARIANTS( ApplicationMessegeItem )
EW_END_OF_CLASS_VARIANTS( ApplicationMessegeItem )

/* Virtual Method Table (VMT) for the class : 'Application::MessegeItem' */
EW_DEFINE_CLASS( ApplicationMessegeItem, CoreGroup, Contact, OnActivate, FlashTimer, 
                 FlashTimer, ButtonColor, ButtonColor, "Application::MessegeItem" )
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
  ApplicationMessegeItem_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationMessegeItem )

/* Initializer for the class 'Application::ContactsList1' */
void ApplicationContactsList1__Init( ApplicationContactsList1 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationContactsList__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactsList1 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsList1 );

  /* ... and initialize objects, variables, properties, etc. */
  ViewsText_OnSetString( &_this->Super3.TitleTxt, EwLoadString( &StringsNewMessage ));
  ViewsText_OnSetVisible( &_this->Super1.Text, 0 );
}

/* Re-Initializer for the class 'Application::ContactsList1' */
void ApplicationContactsList1__ReInit( ApplicationContactsList1 _this )
{
  /* At first re-initialize the super class ... */
  ApplicationContactsList__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::ContactsList1' */
void ApplicationContactsList1__Done( ApplicationContactsList1 _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationContactsList );

  /* Don't forget to deinitialize the super class ... */
  ApplicationContactsList__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Application::ContactsList1' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactsList1 )
EW_END_OF_CLASS_VARIANTS( ApplicationContactsList1 )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsList1' */
EW_DEFINE_CLASS( ApplicationContactsList1, ApplicationContactsList, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, "Application::ContactsList1" )
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
  ApplicationContactsList_onContactActivated,
EW_END_OF_CLASS( ApplicationContactsList1 )

/* Initializer for the class 'Application::Chat' */
void ApplicationChat__Init( ApplicationChat _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationChat );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreOutline__Init( &_this->Outline, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Header, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->BackBtn, &_this->_.XObject, 0 );
  ComponentsSearchEtxt__Init( &_this->SearchEtxt, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->BackBtn1, &_this->_.XObject, 0 );
  ComponentsButton40x55__Init( &_this->Button40x55, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationChat );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0052 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0052 );
  ViewsRectangle_OnSetColor( &_this->Background, ResWhite );
  CoreView_OnSetLayout((CoreView)&_this->Outline, CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Outline, _Const00F4 );
  CoreOutline_OnSetFormation( &_this->Outline, CoreFormationNone );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const00F5 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreRectView__OnSetBounds( &_this->Header, _Const00F6 );
  ViewsRectangle_OnSetColor( &_this->Header, ResPressColor );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const00F7 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const00F8 );
  ViewsLine_OnSetColor( &_this->Line, ResGrey );
  CoreRectView__OnSetBounds( &_this->BackBtn, _Const0027 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->BackBtn, 
  EwLoadString( &ResBackIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->BackBtn, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->BackBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->BackBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->BackBtn, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->SearchEtxt, _Const00F9 );
  ComponentsSearchEtxt_OnSetString( &_this->SearchEtxt, EwLoadString( &_Const00FA ));
  ComponentsSearchEtxt_OnSetIcon( &_this->SearchEtxt, EwLoadString( &ResSendIcon ));
  CoreRectView__OnSetBounds( &_this->BackBtn1, _Const00FB );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->BackBtn1, 
  EwLoadString( &ResCallIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->BackBtn1, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->BackBtn1, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->BackBtn1, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->BackBtn1, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->Button40x55, _Const00FC );
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->Button40x55, 
  EwLoadString( &_Const00F0 ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->Button40x55, 
  ResBlack );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Outline ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Header ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BackBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SearchEtxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BackBtn1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Button40x55 ), 0 );
  CoreOutline_OnSetSlideHandler( &_this->Outline, &_this->SlideTouchHandler );
  _this->BackBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationChat_onBack );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->BackBtn, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
  _this->SearchEtxt.OnIcon = EwNewSlot( _this, ApplicationChat_onSend );
  _this->BackBtn1.Super1.OnActivate = EwNewSlot( _this, ApplicationChat_onCall );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->BackBtn1, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
  _this->Button40x55.Super1.OnActivate = EwNewSlot( _this, ApplicationChat_onUser );
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->Button40x55, 
  EwLoadResource( &ResButtonRoundMedium, ResourcesBitmap ));

  /* Call the user defined constructor */
  ApplicationChat_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Chat' */
void ApplicationChat__ReInit( ApplicationChat _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  CoreOutline__ReInit( &_this->Outline );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  ViewsRectangle__ReInit( &_this->Header );
  ViewsLine__ReInit( &_this->Line );
  ComponentsSButton25x25__ReInit( &_this->BackBtn );
  ComponentsSearchEtxt__ReInit( &_this->SearchEtxt );
  ComponentsSButton25x25__ReInit( &_this->BackBtn1 );
  ComponentsButton40x55__ReInit( &_this->Button40x55 );
}

/* Finalizer method for the class 'Application::Chat' */
void ApplicationChat__Done( ApplicationChat _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  CoreOutline__Done( &_this->Outline );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  ViewsRectangle__Done( &_this->Header );
  ViewsLine__Done( &_this->Line );
  ComponentsSButton25x25__Done( &_this->BackBtn );
  ComponentsSearchEtxt__Done( &_this->SearchEtxt );
  ComponentsSButton25x25__Done( &_this->BackBtn1 );
  ComponentsButton40x55__Done( &_this->Button40x55 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationChat_Init( ApplicationChat _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationChat_onMessageUpdate ), EwNewRef( 
    &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MessageHistory, DeviceContactList_OnGetIsUpdate, 
    DeviceContactList_OnSetIsUpdate ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationChat_onMessageUpdate ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Chat.onBack()' */
void ApplicationChat_onBack( ApplicationChat _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnBack, ((XObject)_this ));
}

/* 'C' function for method : 'Application::Chat.onUser()' */
void ApplicationChat_onUser( ApplicationChat _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->detailsPage = EwNewObject( ApplicationContactDetailsPage, 0 );
  _this->detailsPage->OnBack = EwNewSlot( _this, ApplicationChat_onCloseUser );
  ApplicationContactDetailsPage_OnSetContact( _this->detailsPage, _this->Contact );
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideUpCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::Chat.onCall()' */
void ApplicationChat_onCall( ApplicationChat _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_SendCallContact( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  _this->Contact );
}

/* 'C' function for method : 'Application::Chat.onCloseUser()' */
void ApplicationChat_onCloseUser( ApplicationChat _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->detailsPage = 0;
}

/* 'C' function for method : 'Application::Chat.OnSetContact()' */
void ApplicationChat_OnSetContact( ApplicationChat _this, DeviceContact value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationChat_onContactUpdated ), (XObject)_this->Contact, 
      0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationChat_onContactUpdated ), (XObject)_this->Contact, 
      0 );
    EwPostSignal( EwNewSlot( _this, ApplicationChat_onContactUpdated ), ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::Chat.onContactUpdated()' */
void ApplicationChat_onContactUpdated( ApplicationChat _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Contact != 0 )
  {
    ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->Button40x55, 
    _this->Contact->LastName );
    ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->Button40x55, 
    _this->Contact->NameInitials );
  }
}

/* 'C' function for method : 'Application::Chat.onSend()' */
void ApplicationChat_onSend( ApplicationChat _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwCompString( ComponentsSearchEtxt_OnGetString( &_this->SearchEtxt ), 0 ) 
      != 0 )
  {
    DeviceDeviceClass_SendMessage( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
    _this->Contact, ComponentsSearchEtxt_OnGetString( &_this->SearchEtxt ));
    EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
      &_Const00FD ), _this->Contact->PhoneNumber ), EwLoadString( &_Const0029 )), 
      ComponentsSearchEtxt_OnGetString( &_this->SearchEtxt )));
  }
}

/* 'C' function for method : 'Application::Chat.onMessageUpdate()' */
void ApplicationChat_onMessageUpdate( ApplicationChat _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationChat_RemoveMessages( _this );

  if (( _this->Contact != 0 ) && ( _this->Contact->MessagesList.head != 0 ))
  {
    DeviceMessage message = _this->Contact->MessagesList.head;

    while ( message != 0 )
    {
      ApplicationChatItem chatItem = EwNewObject( ApplicationChatItem, 0 );

      if ( message->Sender == EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyCard )
      {
        ApplicationChatItem_OnSetLeftAligned( chatItem, 0 );
        ApplicationChatItem_OnSetBubbleColor( chatItem, ResBlue );
        ApplicationChatItem_OnSetMessage( chatItem, message->Message );
        ApplicationChatItem_OnSetMessageColor( chatItem, ResWhite );
      }
      else
        if ( message->Receiver == EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyCard )
        {
          ApplicationChatItem_OnSetLeftAligned( chatItem, 1 );
          ApplicationChatItem_OnSetBubbleColor( chatItem, ResGreyLight );
          ApplicationChatItem_OnSetMessage( chatItem, message->Message );
          ApplicationChatItem_OnSetMessageColor( chatItem, ResBlack );
        }

      CoreGroup_OnSetEmbedded((CoreGroup)chatItem, 1 );
      CoreGroup__Add( _this, ((CoreView)chatItem ), _this->nrOfItem );
      CoreOutline_EnsureVisible( &_this->Outline, ((CoreView)chatItem ), 1, 0, EwNullSlot );
      _this->nrOfItem++;
      message = message->next;
    }
  }
}

/* 'C' function for method : 'Application::Chat.RemoveMessages()' */
void ApplicationChat_RemoveMessages( ApplicationChat _this )
{
  CoreView view = CoreOutline_FindNextView( &_this->Outline, 0, CoreViewStateEmbedded );

  while ( view != 0 )
  {
    if ( EwCastObject( view, ApplicationChatItem ) != 0 )
      CoreGroup__Remove( _this, view );

    view = CoreOutline_FindNextView( &_this->Outline, 0, CoreViewStateEmbedded );
  }

  _this->nrOfItem = 0;
}

/* Variants derived from the class : 'Application::Chat' */
EW_DEFINE_CLASS_VARIANTS( ApplicationChat )
EW_END_OF_CLASS_VARIANTS( ApplicationChat )

/* Virtual Method Table (VMT) for the class : 'Application::Chat' */
EW_DEFINE_CLASS( ApplicationChat, CoreGroup, detailsPage, OnBack, Background, Background, 
                 nrOfItem, nrOfItem, "Application::Chat" )
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
EW_END_OF_CLASS( ApplicationChat )

/* Initializer for the class 'Application::MainPage' */
void ApplicationMainPage__Init( ApplicationMainPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationMainPage );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ComponentsButton50x75__Init( &_this->Button50x77, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Footer, &_this->_.XObject, 0 );
  ComponentsSButton50x50__Init( &_this->Contacts, &_this->_.XObject, 0 );
  ComponentsSButton50x50__Init( &_this->Messeges, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationMainPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0052 );
  CoreRectView__OnSetBounds( &_this->Image, _Const0052 );
  ViewsImage_OnSetColor( &_this->Image, _Const0011 );
  CoreRectView__OnSetBounds( &_this->Button50x77, _Const00FE );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->Button50x77, 
  EwLoadString( &ResSettingsIcon ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->Button50x77, 
  EwLoadString( &_Const00FF ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->Button50x77, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->Button50x77, 
  _Const0100 );
  ComponentsButtonBase70x90_OnSetDescriptColorPressed((ComponentsButtonBase70x90)&_this->Button50x77, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->Button50x77, 
  ResPressColor );
  CoreView_OnSetLayout((CoreView)&_this->Footer, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Footer, _Const0101 );
  ViewsRectangle_OnSetColorBL( &_this->Footer, _Const0102 );
  ViewsRectangle_OnSetColorBR( &_this->Footer, _Const0103 );
  ViewsRectangle_OnSetColorTR( &_this->Footer, _Const0104 );
  ViewsRectangle_OnSetColorTL( &_this->Footer, _Const0105 );
  ViewsRectangle_OnSetColor( &_this->Footer, _Const0106 );
  CoreView_OnSetLayout((CoreView)&_this->Contacts, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Contacts, _Const0107 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->Contacts, 
  EwLoadString( &ResCallIcon ));
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->Contacts, 
  ResGreenDark );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->Contacts, 
  ResGreen );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->Contacts, 
  ResGreyLight );
  CoreView_OnSetLayout((CoreView)&_this->Messeges, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Messeges, _Const0108 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->Messeges, 
  EwLoadString( &ResMessageIcon ));
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->Messeges, 
  ResGreenDark );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->Messeges, 
  ResGreyLight );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Button50x77 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Footer ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Contacts ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Messeges ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &Resbackground, ResourcesBitmap ));
  _this->Button50x77.Super1.OnActivate = EwNewSlot( _this, ApplicationMainPage_onSettings );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->Button50x77, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->Button50x77, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->Button50x77, 
  EwLoadResource( &ResSuqareButton, ResourcesBitmap ));
  _this->Contacts.Super1.OnActivate = EwNewSlot( _this, ApplicationMainPage_onContact );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->Contacts, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->Contacts, 
  EwLoadResource( &ResSuqareButton, ResourcesBitmap ));
  _this->Messeges.Super1.OnActivate = EwNewSlot( _this, ApplicationMainPage_onMessages );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->Messeges, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->Messeges, 
  EwLoadResource( &ResSuqareButton, ResourcesBitmap ));
}

/* Re-Initializer for the class 'Application::MainPage' */
void ApplicationMainPage__ReInit( ApplicationMainPage _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  ComponentsButton50x75__ReInit( &_this->Button50x77 );
  ViewsRectangle__ReInit( &_this->Footer );
  ComponentsSButton50x50__ReInit( &_this->Contacts );
  ComponentsSButton50x50__ReInit( &_this->Messeges );
}

/* Finalizer method for the class 'Application::MainPage' */
void ApplicationMainPage__Done( ApplicationMainPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  ComponentsButton50x75__Done( &_this->Button50x77 );
  ViewsRectangle__Done( &_this->Footer );
  ComponentsSButton50x50__Done( &_this->Contacts );
  ComponentsSButton50x50__Done( &_this->Messeges );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::MainPage.onContact()' */
void ApplicationMainPage_onContact( ApplicationMainPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->contactApp = EwNewObject( ApplicationContactsApp, 0 );
  CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)_this->contactApp ), 0, 
  0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::MainPage.onMessages()' */
void ApplicationMainPage_onMessages( ApplicationMainPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->messageApp = EwNewObject( ApplicationMessagesPage, 0 );
  CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)_this->messageApp ), 0, 
  0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::MainPage.onSettings()' */
void ApplicationMainPage_onSettings( ApplicationMainPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->addPage = EwNewObject( ApplicationContactAddPage, 0 );
  CoreRectView__OnSetBounds( _this->addPage, EwSetRectH( _this->addPage->Super2.Bounds, 
  480 ));
  ApplicationContactAddPage_OnSetContact( _this->addPage, EwNewObject( DeviceContact, 
  0 ));
  _this->addPage->OnClose = EwNewSlot( _this, ApplicationMainPage_onClose );
  _this->addPage->OnSave = EwNewSlot( _this, ApplicationMainPage_onSave );
  CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)_this->addPage ), 0, 0, 
  0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::MainPage.onClose()' */
void ApplicationMainPage_onClose( ApplicationMainPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->addPage ), 0, 0, 
  0, EwNullSlot, EwNullSlot, 0 );
  _this->addPage = 0;
}

/* 'C' function for method : 'Application::MainPage.onSave()' */
void ApplicationMainPage_onSave( ApplicationMainPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_OnSetMyCard( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  _this->addPage->Contact );
  DeviceContactList_AddLast( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
  _this->addPage->Contact );
  EwPostSignal( EwNewSlot( _this, ApplicationMainPage_onClose ), ((XObject)_this ));
}

/* Variants derived from the class : 'Application::MainPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationMainPage )
EW_END_OF_CLASS_VARIANTS( ApplicationMainPage )

/* Virtual Method Table (VMT) for the class : 'Application::MainPage' */
EW_DEFINE_CLASS( ApplicationMainPage, CoreGroup, contactApp, Image, Image, Image, 
                 _.VMT, _.VMT, "Application::MainPage" )
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
EW_END_OF_CLASS( ApplicationMainPage )

/* Initializer for the class 'Application::ChatItem' */
void ApplicationChatItem__Init( ApplicationChatItem _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationChatItem );

  /* ... then construct all embedded objects */
  ViewsFrame__Init( &_this->Frame, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationChatItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0109 );
  _this->Message = EwShareString( EwLoadString( &_Const010A ));
  _this->BubbleColor = ResWhite;
  _this->MessageColor = ResBlack;
  CoreView_OnSetLayout((CoreView)&_this->Frame, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Frame, _Const010B );
  ViewsFrame_OnSetNoEdgesLimit( &_this->Frame, _Const010C );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Text, _Const010D );
  ViewsText_OnSetPadding( &_this->Text, 2 );
  ViewsText_OnSetEllipsis( &_this->Text, 1 );
  ViewsText_OnSetAutoSize( &_this->Text, 1 );
  ViewsText_OnSetWrapWidth( &_this->Text, 220 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const010E ));
  CoreGroup__Add( _this, ((CoreView)&_this->Frame ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsFrame_OnSetBitmap( &_this->Frame, EwLoadResource( &ResChatLeft, ResourcesBitmap ));
  ViewsText_OnSetOnUpdate( &_this->Text, EwNewSlot( _this, ApplicationChatItem_onUpdateText ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesDefaultFont, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::ChatItem' */
void ApplicationChatItem__ReInit( ApplicationChatItem _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsFrame__ReInit( &_this->Frame );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Application::ChatItem' */
void ApplicationChatItem__Done( ApplicationChatItem _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsFrame__Done( &_this->Frame );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
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
void ApplicationChatItem_UpdateViewState( ApplicationChatItem _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );

  if ( _this->LeftAligned == 0 )
  {
    ViewsFrame_OnSetBitmap( &_this->Frame, EwLoadResource( &ResChatRight, ResourcesBitmap ));
    CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToRight | CoreLayoutAlignToTop );
    CoreView_OnSetLayout((CoreView)&_this->Frame, CoreLayoutAlignToRight | CoreLayoutAlignToTop );
    CoreRectView__OnSetBounds( &_this->Text, EwSetRectX( _this->Text.Super1.Bounds, 
    ( 272 - EwGetRectW( ViewsText_GetContentArea( &_this->Text ))) - 20 ));
    CoreRectView__OnSetBounds( &_this->Text, EwSetRectY( _this->Text.Super1.Bounds, 
    10 ));
  }
  else
    if ( _this->LeftAligned == 1 )
    {
      ViewsFrame_OnSetBitmap( &_this->Frame, EwLoadResource( &ResChatLeft, ResourcesBitmap ));
      CoreRectView__OnSetBounds( &_this->Text, EwSetRectX( _this->Text.Super1.Bounds, 
      15 ));
      CoreRectView__OnSetBounds( &_this->Text, EwSetRectY( _this->Text.Super1.Bounds, 
      10 ));
    }

  ViewsFrame_OnSetColor( &_this->Frame, _this->BubbleColor );
  ViewsText_OnSetString( &_this->Text, _this->Message );
  ViewsText_OnSetColor( &_this->Text, _this->MessageColor );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft );
}

/* 'C' function for method : 'Application::ChatItem.OnSetLeftAligned()' */
void ApplicationChatItem_OnSetLeftAligned( ApplicationChatItem _this, XBool value )
{
  if ( _this->LeftAligned == value )
    return;

  _this->LeftAligned = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::ChatItem.OnSetMessage()' */
void ApplicationChatItem_OnSetMessage( ApplicationChatItem _this, XString value )
{
  if ( !EwCompString( _this->Message, value ))
    return;

  _this->Message = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::ChatItem.OnSetBubbleColor()' */
void ApplicationChatItem_OnSetBubbleColor( ApplicationChatItem _this, XColor value )
{
  if ( !EwCompColor( _this->BubbleColor, value ))
    return;

  _this->BubbleColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::ChatItem.OnSetMessageColor()' */
void ApplicationChatItem_OnSetMessageColor( ApplicationChatItem _this, XColor value )
{
  if ( !EwCompColor( _this->MessageColor, value ))
    return;

  _this->MessageColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::ChatItem.onUpdateText()' */
void ApplicationChatItem_onUpdateText( ApplicationChatItem _this, XObject sender )
{
  /* List of temporarily used variables */
  XRect _tmpK0;
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->LeftAligned == 0 )
  {
    CoreRectView__OnSetBounds( &_this->Frame, EwInflateRect( ViewsText_GetContentArea( 
    &_this->Text ), _Const010F ));
    ( _tmpK0 = _this->Frame.Super1.Bounds, CoreRectView__OnSetBounds( &_this->Frame, 
    EwSetRectH( _tmpK0, EwGetRectH( _tmpK0 ) + 10 )));
    CoreRectView__OnSetBounds( _this, EwSetRectH( _this->Super2.Bounds, _this->Frame.Super1.Bounds.Point2.Y ));
  }
  else
    if ( _this->LeftAligned == 1 )
    {
      CoreRectView__OnSetBounds( &_this->Frame, EwInflateRect( ViewsText_GetContentArea( 
      &_this->Text ), _Const010F ));
      ( _tmpK0 = _this->Frame.Super1.Bounds, CoreRectView__OnSetBounds( &_this->Frame, 
      EwSetRectH( _tmpK0, EwGetRectH( _tmpK0 ) + 10 )));
      CoreView_OnSetLayout((CoreView)&_this->Frame, CoreLayoutAlignToRight | CoreLayoutAlignToTop );
      CoreRectView__OnSetBounds( _this, EwSetRectH( _this->Super2.Bounds, _this->Frame.Super1.Bounds.Point2.Y ));
    }

  EwTrace( "%s", EwLoadString( &_Const0110 ));
}

/* Variants derived from the class : 'Application::ChatItem' */
EW_DEFINE_CLASS_VARIANTS( ApplicationChatItem )
EW_END_OF_CLASS_VARIANTS( ApplicationChatItem )

/* Virtual Method Table (VMT) for the class : 'Application::ChatItem' */
EW_DEFINE_CLASS( ApplicationChatItem, CoreGroup, Frame, Frame, Frame, Frame, Message, 
                 BubbleColor, "Application::ChatItem" )
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
  ApplicationChatItem_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationChatItem )

/* Initializer for the class 'Application::SplashScreen' */
void ApplicationSplashScreen__Init( ApplicationSplashScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSplashScreen );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSplashScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0052 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0052 );
  ViewsRectangle_OnSetColorBL( &_this->Rectangle, _Const0111 );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle, _Const0112 );
  ViewsRectangle_OnSetColorTL( &_this->Rectangle, _Const0113 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, ResBlack );
  CoreRectView__OnSetBounds( &_this->Image, _Const0114 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0115 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0116 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0117 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0118 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &Reslogog, ResourcesBitmap ));
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationSplashScreen_Slot );
}

/* Re-Initializer for the class 'Application::SplashScreen' */
void ApplicationSplashScreen__ReInit( ApplicationSplashScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsImage__ReInit( &_this->Image );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
}

/* Finalizer method for the class 'Application::SplashScreen' */
void ApplicationSplashScreen__Done( ApplicationSplashScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsImage__Done( &_this->Image );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::SplashScreen.Slot()' */
void ApplicationSplashScreen_Slot( ApplicationSplashScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnStart, ((XObject)_this ));
}

/* Variants derived from the class : 'Application::SplashScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSplashScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationSplashScreen )

/* Virtual Method Table (VMT) for the class : 'Application::SplashScreen' */
EW_DEFINE_CLASS( ApplicationSplashScreen, CoreGroup, OnStart, OnStart, Rectangle, 
                 Rectangle, _.VMT, _.VMT, "Application::SplashScreen" )
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
EW_END_OF_CLASS( ApplicationSplashScreen )

/* Embedded Wizard */
