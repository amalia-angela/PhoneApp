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
#include "_ApplicationApplication.h"
#include "_ApplicationApplicationSimulation.h"
#include "_ApplicationCallPage.h"
#include "_ApplicationCallPageBase.h"
#include "_ApplicationContactAddPage.h"
#include "_ApplicationContactDetailsPage.h"
#include "_ApplicationContactEditPage.h"
#include "_ApplicationContactItem.h"
#include "_ApplicationContactsApp.h"
#include "_ApplicationContactsAppInsideCall.h"
#include "_ApplicationContactsInsideCall.h"
#include "_ApplicationContactsList.h"
#include "_ApplicationContactsPage.h"
#include "_ApplicationDetailsInsideCall.h"
#include "_ApplicationFavContactItem.h"
#include "_ApplicationFavoritesPage.h"
#include "_ApplicationIncomingCall.h"
#include "_ApplicationKeypadInsideCall.h"
#include "_ApplicationKeypadPage.h"
#include "_ApplicationRecentDetailsPage.h"
#include "_ApplicationRecentItm.h"
#include "_ApplicationRecentPage.h"
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
#include "_EffectsFadeInOutTransition.h"
#include "_EffectsInt32Effect.h"
#include "_EffectsSlideTransition.h"
#include "_EffectsTransition.h"
#include "_ResourcesFont.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "Application.h"
#include "Core.h"
#include "Device.h"
#include "Res.h"
#include "Resources.h"
#include "Strings.h"
#include "Views.h"
#include "WidgetSet.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x00000408, /* ratio 52.71 % */
  0xB8001F00, 0x80040452, 0x00600015, 0x068001B8, 0x66001C80, 0x70919000, 0x380043E2,
  0x30546800, 0x368020B0, 0x1000DE00, 0x000D2003, 0x68CA0036, 0xE3A07004, 0x4E610018,
  0xA088D4CA, 0x00929DA3, 0xB90CA4C8, 0x90412392, 0x1000E72A, 0x4ECCF31A, 0x0E09028D,
  0x0006E9E1, 0x5E00981D, 0x34D8353E, 0x0495D026, 0x08D41A3A, 0x9E1363A1, 0x54A24D24,
  0x9D401549, 0xCA77238F, 0xA3A0D959, 0x856B9C11, 0x04E0054E, 0x0C8D55EA, 0x2A81323A,
  0xBAC18017, 0xC8028F56, 0xCE48304B, 0x00A106C3, 0xA9F3C340, 0x3A0E8D48, 0xC77955D6,
  0x22A5802F, 0x298D3E9B, 0x8E846575, 0x758E7644, 0xCBE0D3BA, 0x9339A4CC, 0xA096D8D6,
  0x210E8642, 0x90A8A44A, 0x6C858DA2, 0x4A1DC2DD, 0x95606CBA, 0xEDF2F578, 0x5A2AA00D,
  0xB81600E0, 0x2A3A9A64, 0x09C1A169, 0x53A9C15A, 0x31A5C8A5, 0xA8D4A251, 0x9D4C609C,
  0xD5434D3A, 0x50A3B3DE, 0xAE633B38, 0x4132BB51, 0xF32AF5C7, 0x7DFF4000, 0x669FCB65,
  0x4ACF2349, 0x8ED60630, 0x5FC46912, 0xD8091411, 0x12064391, 0x45825B74, 0x411FF0D4,
  0x1108310C, 0xA8311983, 0x8C4583C2, 0x1A42A180, 0x11504419, 0x22114800, 0xA88C4F00,
  0x35266583, 0xD4765375, 0x4A942659, 0x52A675A3, 0x6541F378, 0x75ED5914, 0xCE715D84,
  0x5752B8C1, 0xE3C12504, 0x08A56869, 0xB1E25180, 0x05001DB8, 0x0007A474, 0x9858E466,
  0x84A92F73, 0xDD1A53DE, 0x3A880457, 0x00258499, 0x18B8E828, 0x68BD224F, 0xA1E24C59,
  0x737399B6, 0x61E67639, 0xD069BA34, 0x24DD315B, 0x796B59D2, 0x007413B9, 0x8811D094,
  0xA2588A22, 0x841A2788, 0x766B8F19, 0x6B8B1066, 0x7C9F54A9, 0xD0691906, 0x88E18C53,
  0x697D4992, 0xA1411EE4, 0x53D2A8F9, 0xC45611C8, 0x45C5265B, 0xADC7601A, 0x7B115DD4,
  0xAA17D4C5, 0xA6260D77, 0x253D9692, 0xD5C87A1F, 0x38151044, 0x0015B55D, 0x27E116BA,
  0xB10A7E8D, 0x0101B1D2, 0x00000000
};

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault1[] =
{
  0x000000CA, /* ratio 73.27 % */
  0xB8001D00, 0x00066452, 0x00400018, 0x0DE00370, 0x01093B00, 0xB12838C8, 0x10000022,
  0x02791606, 0x3A000EA0, 0x0434CE00, 0xC8616690, 0x84004388, 0xE586C001, 0x340A0045,
  0x03A000D6, 0x111BC180, 0xF26800A1, 0x89C681B2, 0x01CE1513, 0x98C00650, 0x00C90C91,
  0x81717A18, 0x940012C6, 0x26DA842A, 0x2F2CD422, 0x8A84129D, 0xA8002684, 0x8002A73C,
  0x11235593, 0xBA8D4BA2, 0xE8B0C92C, 0x8F049F45, 0x92D96CAE, 0x001749ED, 0xF97DE2F0,
  0x00002032, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 272, 440 }};
static const XRect _Const0001 = {{ 10, 141 }, { 260, 440 }};
static const XRect _Const0002 = {{ 11, 141 }, { 260, 440 }};
static const XPoint _Const0003 = { 0, 35 };
static const XRect _Const0004 = {{ 235, 115 }, { 261, 141 }};
static const XRect _Const0005 = {{ 209, 115 }, { 235, 141 }};
static const XRect _Const0006 = {{ 2, 83 }, { 268, 115 }};
static const XRect _Const0007 = {{ 11, 42 }, { 261, 76 }};
static const XRect _Const0008 = {{ 242, 12 }, { 272, 42 }};
static const XRect _Const0009 = {{ 0, 0 }, { 272, 32 }};
static const XPoint _Const000A = { 0, 32 };
static const XPoint _Const000B = { 268, 32 };
static const XPoint _Const000C = { 268, 0 };
static const XPoint _Const000D = { 0, 0 };
static const XColor _Const000E = { 0xFD, 0xFD, 0xFD, 0xC8 };
static const XColor _Const000F = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0010 = {{ 55, 2 }, { 146, 32 }};
static const XRect _Const0011 = {{ 146, 2 }, { 268, 32 }};
static const XPoint _Const0012 = { 272, 32 };
static const XRect _Const0013 = {{ 6, 4 }, { 31, 29 }};
static const XPoint _Const0014 = { 267, 0 };
static const XPoint _Const0015 = { 266, 287 };
static const XPoint _Const0016 = { 8, 287 };
static const XColor _Const0017 = { 0xE2, 0xE2, 0xE2, 0xFD };
static const XRect _Const0018 = {{ 20, 258 }, { 264, 287 }};
static const XColor _Const0019 = { 0xFF, 0xFF, 0xFF, 0x00 };
static const XStringRes _Const001A = { _StringsDefault0, 0x0002 };
static const XRect _Const001B = {{ 8, 232 }, { 266, 265 }};
static const XStringRes _Const001C = { _StringsDefault0, 0x0011 };
static const XPoint _Const001D = { 266, 232 };
static const XPoint _Const001E = { 8, 232 };
static const XRect _Const001F = {{ 51, 145 }, { 101, 220 }};
static const XStringRes _Const0020 = { _StringsDefault0, 0x001B };
static const XRect _Const0021 = {{ 111, 145 }, { 161, 220 }};
static const XStringRes _Const0022 = { _StringsDefault0, 0x0022 };
static const XRect _Const0023 = {{ 171, 145 }, { 221, 220 }};
static const XStringRes _Const0024 = { _StringsDefault0, 0x002A };
static const XRect _Const0025 = {{ 8, 98 }, { 265, 128 }};
static const XStringRes _Const0026 = { _StringsDefault0, 0x0034 };
static const XRect _Const0027 = {{ 101, 22 }, { 171, 113 }};
static const XRect _Const0028 = {{ 240, 4 }, { 265, 29 }};
static const XRect _Const0029 = {{ 7, 4 }, { 32, 29 }};
static const XRect _Const002A = {{ 60, 233 }, { 84, 263 }};
static const XStringRes _Const002B = { _StringsDefault0, 0x0043 };
static const XPoint _Const002C = { 265, 289 };
static const XPoint _Const002D = { 7, 289 };
static const XRect _Const002E = {{ 3, 257 }, { 269, 289 }};
static const XStringRes _Const002F = { _StringsDefault0, 0x0047 };
static const XPoint _Const0030 = { 264, 256 };
static const XPoint _Const0031 = { 6, 256 };
static const XRect _Const0032 = {{ 3, 224 }, { 269, 256 }};
static const XStringRes _Const0033 = { _StringsDefault0, 0x0057 };
static const XPoint _Const0034 = { 264, 223 };
static const XPoint _Const0035 = { 6, 223 };
static const XRect _Const0036 = {{ 3, 191 }, { 269, 223 }};
static const XStringRes _Const0037 = { _StringsDefault0, 0x0064 };
static const XPoint _Const0038 = { 264, 190 };
static const XPoint _Const0039 = { 6, 190 };
static const XRect _Const003A = {{ 100, 78 }, { 170, 169 }};
static const XStringRes _Const003B = { _StringsDefault0, 0x0070 };
static const XRect _Const003C = {{ 86, 7 }, { 186, 37 }};
static const XStringRes _Const003D = { _StringsDefault0, 0x007C };
static const XRect _Const003E = {{ 5, 398 }, { 263, 431 }};
static const XStringRes _Const003F = { _StringsDefault0, 0x008A };
static const XRect _Const0040 = {{ 7, 244 }, { 265, 273 }};
static const XStringRes _Const0041 = { _StringsDefault0, 0x009B };
static const XPoint _Const0042 = { 264, 239 };
static const XPoint _Const0043 = { 6, 239 };
static const XRect _Const0044 = {{ 6, 207 }, { 264, 240 }};
static const XPoint _Const0045 = { 263, 206 };
static const XPoint _Const0046 = { 5, 206 };
static const XRect _Const0047 = {{ 2, 174 }, { 268, 206 }};
static const XStringRes _Const0048 = { _StringsDefault0, 0x00A8 };
static const XPoint _Const0049 = { 263, 173 };
static const XPoint _Const004A = { 5, 173 };
static const XRect _Const004B = {{ 2, 141 }, { 268, 173 }};
static const XStringRes _Const004C = { _StringsDefault0, 0x00B5 };
static const XPoint _Const004D = { 263, 140 };
static const XPoint _Const004E = { 5, 140 };
static const XRect _Const004F = {{ 99, 29 }, { 169, 120 }};
static const XRect _Const0050 = {{ 0, 0 }, { 272, 480 }};
static const XRect _Const0051 = {{ 104, 374 }, { 169, 466 }};
static const XRect _Const0052 = {{ 182, 240 }, { 247, 332 }};
static const XStringRes _Const0053 = { _StringsDefault0, 0x00C1 };
static const XRect _Const0054 = {{ 104, 241 }, { 169, 333 }};
static const XStringRes _Const0055 = { _StringsDefault0, 0x00CC };
static const XRect _Const0056 = {{ 26, 242 }, { 91, 334 }};
static const XStringRes _Const0057 = { _StringsDefault0, 0x00D8 };
static const XRect _Const0058 = {{ 182, 147 }, { 247, 239 }};
static const XStringRes _Const0059 = { _StringsDefault0, 0x00E3 };
static const XRect _Const005A = {{ 104, 148 }, { 169, 240 }};
static const XStringRes _Const005B = { _StringsDefault0, 0x00ED };
static const XRect _Const005C = {{ 26, 149 }, { 91, 241 }};
static const XStringRes _Const005D = { _StringsDefault0, 0x00F6 };
static const XRect _Const005E = {{ 0, 518 }, { 272, 958 }};
static const XPoint _Const005F = { 0, 30 };
static const XPoint _Const0060 = { 264, 311 };
static const XPoint _Const0061 = { 6, 311 };
static const XRect _Const0062 = {{ 18, 282 }, { 262, 311 }};
static const XRect _Const0063 = {{ 6, 256 }, { 264, 289 }};
static const XRect _Const0064 = {{ 50, 161 }, { 100, 236 }};
static const XRect _Const0065 = {{ 110, 161 }, { 160, 236 }};
static const XRect _Const0066 = {{ 170, 161 }, { 220, 236 }};
static const XRect _Const0067 = {{ 10, 114 }, { 267, 144 }};
static const XRect _Const0068 = {{ 100, 30 }, { 170, 121 }};
static const XRect _Const0069 = {{ 239, 5 }, { 264, 30 }};
static const XRect _Const006A = {{ 6, 5 }, { 31, 30 }};
static const XRect _Const006B = {{ 104, 340 }, { 169, 405 }};
static const XRect _Const006C = {{ 169, 340 }, { 234, 405 }};
static const XRect _Const006D = {{ 39, 80 }, { 104, 145 }};
static const XStringRes _Const006E = { _StringsDefault0, 0x00FD };
static const XRect _Const006F = {{ 169, 80 }, { 234, 145 }};
static const XStringRes _Const0070 = { _StringsDefault0, 0x0101 };
static const XRect _Const0071 = {{ 104, 80 }, { 169, 145 }};
static const XStringRes _Const0072 = { _StringsDefault0, 0x0105 };
static const XRect _Const0073 = {{ 39, 145 }, { 104, 210 }};
static const XStringRes _Const0074 = { _StringsDefault0, 0x0109 };
static const XRect _Const0075 = {{ 169, 145 }, { 234, 210 }};
static const XStringRes _Const0076 = { _StringsDefault0, 0x010D };
static const XRect _Const0077 = {{ 104, 145 }, { 169, 210 }};
static const XStringRes _Const0078 = { _StringsDefault0, 0x0111 };
static const XRect _Const0079 = {{ 39, 210 }, { 104, 275 }};
static const XStringRes _Const007A = { _StringsDefault0, 0x0115 };
static const XRect _Const007B = {{ 169, 210 }, { 234, 275 }};
static const XStringRes _Const007C = { _StringsDefault0, 0x0119 };
static const XRect _Const007D = {{ 104, 210 }, { 169, 275 }};
static const XStringRes _Const007E = { _StringsDefault0, 0x011D };
static const XRect _Const007F = {{ 39, 275 }, { 104, 340 }};
static const XStringRes _Const0080 = { _StringsDefault0, 0x0121 };
static const XRect _Const0081 = {{ 169, 275 }, { 234, 340 }};
static const XStringRes _Const0082 = { _StringsDefault0, 0x0125 };
static const XRect _Const0083 = {{ 104, 275 }, { 169, 340 }};
static const XStringRes _Const0084 = { _StringsDefault0, 0x0129 };
static const XRect _Const0085 = {{ 39, 48 }, { 234, 80 }};
static const XRect _Const0086 = {{ 39, 360 }, { 101, 385 }};
static const XRect _Const0087 = {{ 0, 440 }, { 272, 480 }};
static const XRect _Const0088 = {{ 0, 440 }, { 68, 480 }};
static const XRect _Const0089 = {{ 68, 440 }, { 136, 480 }};
static const XRect _Const008A = {{ 136, 440 }, { 204, 480 }};
static const XRect _Const008B = {{ 204, 440 }, { 272, 480 }};
static const XPoint _Const008C = { 270, 440 };
static const XPoint _Const008D = { 0, 440 };
static const XStringRes _Const008E = { _StringsDefault0, 0x012D };
static const XRect _Const008F = {{ 0, 80 }, { 272, 340 }};
static const XColor _Const0090 = { 0x83, 0x83, 0x83, 0xFA };
static const XColor _Const0091 = { 0x4F, 0x4F, 0x4F, 0xFF };
static const XColor _Const0092 = { 0x89, 0x89, 0x89, 0xFF };
static const XColor _Const0093 = { 0x3C, 0x3C, 0x3C, 0xFF };
static const XRect _Const0094 = {{ 39, 32 }, { 234, 64 }};
static const XRect _Const0095 = {{ 11, 12 }, { 261, 61 }};
static const XRect _Const0096 = {{ 166, 12 }, { 196, 42 }};
static const XRect _Const0097 = {{ 196, 15 }, { 262, 40 }};
static const XStringRes _Const0098 = { _StringsDefault0, 0x014D };
static const XRect _Const0099 = {{ 0, 0 }, { 800, 480 }};
static const XRect _Const009A = {{ 421, 155 }, { 571, 205 }};
static const XStringRes _Const009B = { _StringsDefault0, 0x0156 };
static const XStringRes _Const009C = { _StringsDefault0, 0x0166 };
static const XRect _Const009D = {{ 171, 340 }, { 236, 432 }};
static const XStringRes _Const009E = { _StringsDefault0, 0x016B };
static const XRect _Const009F = {{ 11, 95 }, { 261, 408 }};
static const XRect _Const00A0 = {{ 11, 12 }, { 41, 42 }};
static const XRect _Const00A1 = {{ 213, 12 }, { 263, 37 }};
static const XStringRes _Const00A2 = { _StringsDefault0, 0x0174 };
static const XRect _Const00A3 = {{ 202, 24 }, { 268, 49 }};
static const XRect _Const00A4 = {{ 12, 0 }, { 261, 30 }};
static const XStringRes _Const00A5 = { _StringsDefault0, 0x017B };
static const XStringRes _Const00A6 = { _StringsDefault0, 0x01A3 };
static const XRect _Const00A7 = {{ 0, 0 }, { 250, 32 }};
static const XPoint _Const00A8 = { 217, 32 };
static const XPoint _Const00A9 = { 217, 0 };
static const XRect _Const00AA = {{ -25, 5 }, { 0, 30 }};
static const XRect _Const00AB = {{ 250, 0 }, { 316, 32 }};
static const XStringRes _Const00AC = { _StringsDefault0, 0x01C8 };
static const XRect _Const00AD = {{ 217, 5 }, { 242, 30 }};
static const XRect _Const00AE = {{ 44, 8 }, { 113, 26 }};
static const XRect _Const00AF = {{ 131, 8 }, { 201, 26 }};
static const XStringRes _Const00B0 = { _StringsDefault0, 0x01D1 };
static const XPoint _Const00B1 = { 250, 32 };
static const XPoint _Const00B2 = { 250, 0 };
static const XRect _Const00B3 = {{ 0, 0 }, { 250, 50 }};
static const XRect _Const00B4 = {{ 0, 0 }, { 250, 52 }};
static const XPoint _Const00B5 = { 25, 52 };
static const XPoint _Const00B6 = { 205, 52 };
static const XPoint _Const00B7 = { 205, 0 };
static const XPoint _Const00B8 = { 25, 0 };
static const XPoint _Const00B9 = { 250, 50 };
static const XPoint _Const00BA = { 0, 50 };
static const XRect _Const00BB = {{ 32, 4 }, { 114, 22 }};
static const XStringRes _Const00BC = { _StringsDefault0, 0x01DD };
static const XRect _Const00BD = {{ 114, 4 }, { 220, 22 }};
static const XRect _Const00BE = {{ 32, 33 }, { 101, 47 }};
static const XStringRes _Const00BF = { _StringsDefault0, 0x01E8 };
static const XRect _Const00C0 = {{ 162, 22 }, { 220, 36 }};
static const XStringRes _Const00C1 = { _StringsDefault0, 0x01F4 };
static const XRect _Const00C2 = {{ 225, 2 }, { 250, 27 }};
static const XRect _Const00C3 = {{ 0, 17 }, { 25, 42 }};
static const XRect _Const00C4 = {{ -25, 11 }, { 0, 36 }};
static const XRect _Const00C5 = {{ 250, 1 }, { 316, 51 }};
static const XStringRes _Const00C6 = { _StringsDefault0, 0x01FC };
static const XPoint _Const00C7 = { 265, 371 };
static const XPoint _Const00C8 = { 7, 371 };
static const XRect _Const00C9 = {{ 19, 342 }, { 263, 371 }};
static const XRect _Const00CA = {{ 7, 316 }, { 265, 349 }};
static const XPoint _Const00CB = { 265, 316 };
static const XPoint _Const00CC = { 7, 316 };
static const XPoint _Const00CD = { 265, 237 };
static const XPoint _Const00CE = { 7, 237 };
static const XRect _Const00CF = {{ 8, 246 }, { 263, 267 }};
static const XStringRes _Const00D0 = { _StringsDefault1, 0x0002 };
static const XRect _Const00D1 = {{ 67, 267 }, { 263, 289 }};
static const XStringRes _Const00D2 = { _StringsDefault1, 0x0010 };
static const XRect _Const00D3 = {{ 7, 267 }, { 67, 289 }};
static const XStringRes _Const00D4 = { _StringsDefault1, 0x0020 };
static const XRect _Const00D5 = {{ 67, 289 }, { 263, 311 }};
static const XStringRes _Const00D6 = { _StringsDefault1, 0x002A };
static const XStringRes _Const00D7 = { _StringsDefault1, 0x0037 };
static const XStringRes _Const00D8 = { _StringsDefault1, 0x0042 };
static const XRect _Const00D9 = {{ 36, 340 }, { 101, 432 }};
static const XStringRes _Const00DA = { _StringsDefault1, 0x004D };
static const XRect _Const00DB = {{ 18, 73 }, { 91, 103 }};
static const XStringRes _Const00DC = { _StringsDefault1, 0x0058 };
static const XRect _Const00DD = {{ 18, 42 }, { 171, 72 }};
static const XRect _Const00DE = {{ 184, 28 }, { 254, 119 }};
static const XRect _Const00DF = {{ 0, 400 }, { 272, 440 }};
static const XRect _Const00E0 = {{ 0, 400 }, { 68, 440 }};
static const XRect _Const00E1 = {{ 68, 400 }, { 136, 440 }};
static const XRect _Const00E2 = {{ 136, 400 }, { 204, 440 }};
static const XRect _Const00E3 = {{ 204, 400 }, { 272, 440 }};
static const XRect _Const00E4 = {{ 170, 14 }, { 236, 39 }};

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
  ComponentsPushButtonNoBackground__Init( &_this->UpButton, &_this->_.XObject, 0 );
  ComponentsPushButtonNoBackground__Init( &_this->DownButton, &_this->_.XObject, 0 );
  ComponentsSearchEtxt__Init( &_this->SearchExt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TitleTxt, &_this->_.XObject, 0 );
  ComponentsPushButtonNoBackground__Init( &_this->PlusButton, &_this->_.XObject, 0 );

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
  ComponentsPushButtonNoBackground_OnSetIcon( &_this->UpButton, EwLoadString( &ResUptxt ));
  CoreView_OnSetLayout((CoreView)&_this->DownButton, CoreLayoutAlignToRight | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->DownButton, _Const0005 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->DownButton, 1 );
  ComponentsPushButtonNoBackground_OnSetIcon( &_this->DownButton, EwLoadString( 
  &ResDownTxt ));
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
  ComponentsPushButtonNoBackground_OnSetIcon( &_this->PlusButton, EwLoadString( 
  &ResPlusIconTxt ));
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UpButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DownButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SearchExt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PlusButton ), 0 );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationContactsPage_OnLoadItem );
  CoreVerticalList_OnSetSlideHandler( &_this->VerticalList, &_this->SlideTouchHandler );
  _this->UpButton.OnActivate = EwNewSlot( _this, ApplicationContactsPage_onUpPress );
  _this->DownButton.OnActivate = EwNewSlot( _this, ApplicationContactsPage_onDownPress );
  _this->SearchExt.OnChange = EwNewSlot( _this, ApplicationContactsPage_onSearch );
  ViewsText_OnSetFont( &_this->TitleTxt, EwLoadResource( &ResTitileFont32, ResourcesFont ));
  _this->PlusButton.OnActivate = EwNewSlot( _this, ApplicationContactsPage_onAddPress );

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
  ComponentsPushButtonNoBackground__ReInit( &_this->UpButton );
  ComponentsPushButtonNoBackground__ReInit( &_this->DownButton );
  ComponentsSearchEtxt__ReInit( &_this->SearchExt );
  ViewsText__ReInit( &_this->TitleTxt );
  ComponentsPushButtonNoBackground__ReInit( &_this->PlusButton );
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
  ComponentsPushButtonNoBackground__Done( &_this->UpButton );
  ComponentsPushButtonNoBackground__Done( &_this->DownButton );
  ComponentsSearchEtxt__Done( &_this->SearchExt );
  ViewsText__Done( &_this->TitleTxt );
  ComponentsPushButtonNoBackground__Done( &_this->PlusButton );

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

  DeviceContactList_Add( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
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
    jmp      DWORD PTR [ eax + 144 ]
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
  ComponentsPushButtonSmall__Init( &_this->PrfofilButton, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0009 );
  _this->ButtonColor = ResWhite;
  _this->IconColor = ResWhite;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  _this->TextColor = ResBlack;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const000A );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const000B );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const000C );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const000D );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0009 );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const000E );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const000E );
  ViewsRectangle_OnSetColor( &_this->Background, _Const000F );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const0010 );
  ViewsText_OnSetAlignment( &_this->LastNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->LastNameTxt, 0 );
  ViewsText_OnSetColor( &_this->LastNameTxt, ResBlack );
  CoreView_OnSetStackingPriority((CoreView)&_this->FirstNameTxt, 0 );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const0011 );
  ViewsText_OnSetAlignment( &_this->FirstNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->FirstNameTxt, 0 );
  ViewsText_OnSetColor( &_this->FirstNameTxt, ResBlack );
  CoreView_OnSetLayout((CoreView)&_this->Line, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const0012 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const000A );
  ViewsLine_OnSetWidth( &_this->Line, 2 );
  ViewsLine_OnSetColor( &_this->Line, ResGreyLight );
  CoreRectView__OnSetBounds( &_this->PrfofilButton, _Const0013 );
  CoreView_OnSetLayout((CoreView)&_this->Line1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const0014 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const000D );
  ViewsLine_OnSetWidth( &_this->Line1, 2 );
  ViewsLine_OnSetColor( &_this->Line1, ResGreyLight );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->LastNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FirstNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PrfofilButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line1 ), 0 );
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
  ComponentsPushButtonSmall__ReInit( &_this->PrfofilButton );
  ViewsLine__ReInit( &_this->Line1 );
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
  ComponentsPushButtonSmall__Done( &_this->PrfofilButton );
  ViewsLine__Done( &_this->Line1 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationContactItem_Init( ApplicationContactItem _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
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
    ComponentsPushButtonSmall_OnSetText( &_this->PrfofilButton, 0 );
  }
  else
  {
    ViewsText_OnSetString( &_this->FirstNameTxt, _this->Contact->FirstName );
    ViewsText_OnSetString( &_this->LastNameTxt, _this->Contact->LastName );
    ComponentsPushButtonSmall_OnSetText( &_this->PrfofilButton, _this->Contact->NameInitials );
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
  ComponentsPushButtonMediumBlue__Init( &_this->CallBtn, &_this->_.XObject, 0 );
  ComponentsPushButtonMediumBlue__Init( &_this->VideoCallBtn, &_this->_.XObject, 0 );
  ComponentsPushButtonMediumBlue__Init( &_this->PushButtonMediumBlue2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ContactName, &_this->_.XObject, 0 );
  ComponentsPushButtonBig__Init( &_this->UserInitialsBtn, &_this->_.XObject, 0 );
  ComponentsPushButtonNoBackground__Init( &_this->EditBtn, &_this->_.XObject, 0 );
  ComponentsPushButtonNoBackground__Init( &_this->BackBtn, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->FavoritTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactDetailsPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const0015 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const0016 );
  ViewsLine_OnSetColor( &_this->Line2, _Const0017 );
  CoreView_OnSetLayout((CoreView)&_this->NumberTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->NumberTxt, _Const0018 );
  ViewsText_OnSetColorBR( &_this->NumberTxt, _Const0019 );
  ViewsText_OnSetAlignment( &_this->NumberTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->NumberTxt, EwLoadString( &_Const001A ));
  ViewsText_OnSetColor( &_this->NumberTxt, ResBlue );
  CoreView_OnSetLayout((CoreView)&_this->MobileTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->MobileTxt, _Const001B );
  ViewsText_OnSetAlignment( &_this->MobileTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MobileTxt, EwLoadString( &_Const001C ));
  ViewsText_OnSetColor( &_this->MobileTxt, ResBlack );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const001D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const001E );
  ViewsLine_OnSetColor( &_this->Line1, _Const0017 );
  CoreRectView__OnSetBounds( &_this->CallBtn, _Const001F );
  ComponentsPushButtonMediumBlue_OnSetIcon( &_this->CallBtn, EwLoadString( &ResCallTxt ));
  ComponentsPushButtonMediumBlue_OnSetDescrip( &_this->CallBtn, EwLoadString( &_Const0020 ));
  CoreRectView__OnSetBounds( &_this->VideoCallBtn, _Const0021 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->VideoCallBtn, 0 );
  ComponentsPushButtonMediumBlue_OnSetIcon( &_this->VideoCallBtn, EwLoadString( 
  &ResVideoCallTxt ));
  ComponentsPushButtonMediumBlue_OnSetDescrip( &_this->VideoCallBtn, EwLoadString( 
  &_Const0022 ));
  CoreRectView__OnSetBounds( &_this->PushButtonMediumBlue2, _Const0023 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->PushButtonMediumBlue2, 0 );
  ComponentsPushButtonMediumBlue_OnSetIcon( &_this->PushButtonMediumBlue2, EwLoadString( 
  &ResMessageIconTxt ));
  ComponentsPushButtonMediumBlue_OnSetDescrip( &_this->PushButtonMediumBlue2, EwLoadString( 
  &_Const0024 ));
  CoreView_OnSetLayout((CoreView)&_this->ContactName, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->ContactName, _Const0025 );
  ViewsText_OnSetAlignment( &_this->ContactName, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ContactName, EwLoadString( &_Const0026 ));
  ViewsText_OnSetColor( &_this->ContactName, ResBlack );
  CoreRectView__OnSetBounds( &_this->UserInitialsBtn, _Const0027 );
  CoreRectView__OnSetBounds( &_this->EditBtn, _Const0028 );
  ComponentsPushButtonNoBackground_OnSetIcon( &_this->EditBtn, EwLoadString( &ResEditIconTxt ));
  CoreRectView__OnSetBounds( &_this->BackBtn, _Const0029 );
  ComponentsPushButtonNoBackground_OnSetIcon( &_this->BackBtn, EwLoadString( &ResBackIconTxt ));
  CoreRectView__OnSetBounds( &_this->FavoritTxt, _Const002A );
  ViewsText_OnSetString( &_this->FavoritTxt, EwLoadString( &ResHeartTxt ));
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
  _this->CallBtn.OnActivate = EwNewSlot( _this, ApplicationContactDetailsPage_onTapCall );
  ViewsText_OnSetFont( &_this->ContactName, EwLoadResource( &ResTitileFont29, ResourcesFont ));
  _this->EditBtn.OnActivate = EwNewSlot( _this, ApplicationContactDetailsPage__onTapEdit );
  _this->BackBtn.OnActivate = EwNewSlot( _this, ApplicationContactDetailsPage_onBack );
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
  ComponentsPushButtonMediumBlue__ReInit( &_this->CallBtn );
  ComponentsPushButtonMediumBlue__ReInit( &_this->VideoCallBtn );
  ComponentsPushButtonMediumBlue__ReInit( &_this->PushButtonMediumBlue2 );
  ViewsText__ReInit( &_this->ContactName );
  ComponentsPushButtonBig__ReInit( &_this->UserInitialsBtn );
  ComponentsPushButtonNoBackground__ReInit( &_this->EditBtn );
  ComponentsPushButtonNoBackground__ReInit( &_this->BackBtn );
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
  ComponentsPushButtonMediumBlue__Done( &_this->CallBtn );
  ComponentsPushButtonMediumBlue__Done( &_this->VideoCallBtn );
  ComponentsPushButtonMediumBlue__Done( &_this->PushButtonMediumBlue2 );
  ViewsText__Done( &_this->ContactName );
  ComponentsPushButtonBig__Done( &_this->UserInitialsBtn );
  ComponentsPushButtonNoBackground__Done( &_this->EditBtn );
  ComponentsPushButtonNoBackground__Done( &_this->BackBtn );
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

  _this->editContact = EwNewObject( ApplicationContactEditPage, 0 );
  _this->editContact->OnSave = EwNewSlot( _this, ApplicationContactDetailsPage_onSaveEdit );
  _this->editContact->OnClose = EwNewSlot( _this, ApplicationContactDetailsPage_onCancelEdit );
  ApplicationContactEditPage_OnSetContact( _this->editContact, _this->Contact );
  _this->editContact->OnDelete = EwNewSlot( _this, ApplicationContactDetailsPage_onDelete );
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->editContact ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
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
    jmp      DWORD PTR [ eax + 144 ]
  }
}

/* 'C' function for method : 'Application::ContactDetailsPage.onDelete()' */
void ApplicationContactDetailsPage_onDelete( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnDelete, ((XObject)_this ));
  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->editContact ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::ContactDetailsPage.onTapCall()' */
void ApplicationContactDetailsPage_onTapCall( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_OutgoingCallContact( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  _this->Contact );
}

/* 'C' function for method : 'Application::ContactDetailsPage.onSaveEdit()' */
void ApplicationContactDetailsPage_onSaveEdit( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->editContact ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::ContactDetailsPage.onCancelEdit()' */
void ApplicationContactDetailsPage_onCancelEdit( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->editContact ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::ContactDetailsPage.onBack()' */
void ApplicationContactDetailsPage_onBack( ApplicationContactDetailsPage _this, 
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
    _this->Contact->LastName, EwLoadString( &_Const002B )), _this->Contact->FirstName ));
    ViewsText_OnSetString( &_this->NumberTxt, _this->Contact->PhoneNumber );
    ComponentsPushButtonBig_OnSetInitials( &_this->UserInitialsBtn, _this->Contact->NameInitials );
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
    jmp      DWORD PTR [ eax + 148 ]
  }
}

/* Variants derived from the class : 'Application::ContactDetailsPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactDetailsPage )
EW_END_OF_CLASS_VARIANTS( ApplicationContactDetailsPage )

/* Virtual Method Table (VMT) for the class : 'Application::ContactDetailsPage' */
EW_DEFINE_CLASS( ApplicationContactDetailsPage, CoreGroup, editContact, OnDelete, 
                 Background, Background, _.VMT, _.VMT, "Application::ContactDetailsPage" )
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
  ComponentsPushButtonBig__Init( &_this->UserInitials, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TitleTxt, &_this->_.XObject, 0 );
  ComponentsPushButtonNoBackground__Init( &_this->SaveBtn, &_this->_.XObject, 0 );
  ComponentsPushButtonNoBackground__Init( &_this->CloseButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactAddPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const002C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const002D );
  ViewsLine_OnSetColor( &_this->Line4, _Const0017 );
  CoreView_OnSetLayout((CoreView)&_this->PhoneNumberTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->PhoneNumberTxt, _Const002E );
  ComponentsInputEtxt_OnSetString( &_this->PhoneNumberTxt, 0 );
  ComponentsInputEtxt_OnSetColor( &_this->PhoneNumberTxt, ResBlue );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->PhoneNumberTxt, EwLoadString( &_Const002F ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line3, _Const0030 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line3, _Const0031 );
  ViewsLine_OnSetColor( &_this->Line3, _Const0017 );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const0032 );
  ComponentsInputEtxt_OnSetString( &_this->FirstNameTxt, 0 );
  ComponentsInputEtxt_OnSetColor( &_this->FirstNameTxt, ResBlack );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->FirstNameTxt, EwLoadString( &_Const0033 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const0034 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const0035 );
  ViewsLine_OnSetColor( &_this->Line2, _Const0017 );
  CoreView_OnSetLayout((CoreView)&_this->LastNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const0036 );
  ComponentsInputEtxt_OnSetString( &_this->LastNameTxt, 0 );
  ComponentsInputEtxt_OnSetColor( &_this->LastNameTxt, ResBlack );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->LastNameTxt, EwLoadString( &_Const0037 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const0038 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const0039 );
  ViewsLine_OnSetColor( &_this->Line1, _Const0017 );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const003A );
  ComponentsPushButtonBig_OnSetDescript( &_this->UserInitials, EwLoadString( &_Const003B ));
  CoreRectView__OnSetBounds( &_this->TitleTxt, _Const003C );
  ViewsText_OnSetString( &_this->TitleTxt, EwLoadString( &_Const003D ));
  ViewsText_OnSetColor( &_this->TitleTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->SaveBtn, _Const0028 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->SaveBtn, 0 );
  ComponentsPushButtonNoBackground_OnSetIcon( &_this->SaveBtn, EwLoadString( &ResCkeckIconTxt ));
  CoreRectView__OnSetBounds( &_this->CloseButton, _Const0029 );
  ComponentsPushButtonNoBackground_OnSetIcon( &_this->CloseButton, EwLoadString( 
  &ResCloseIconTxt ));
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
  _this->PhoneNumberTxt.OnChange = EwNewSlot( _this, ApplicationContactAddPage_onFieldChanged );
  _this->FirstNameTxt.OnChange = EwNewSlot( _this, ApplicationContactAddPage_onFieldChanged );
  _this->LastNameTxt.OnChange = EwNewSlot( _this, ApplicationContactAddPage_onFieldChanged );
  ViewsText_OnSetFont( &_this->TitleTxt, EwLoadResource( &ResContactFontBold15, 
  ResourcesFont ));
  _this->SaveBtn.OnActivate = EwNewSlot( _this, ApplicationContactAddPage_onSave );
  _this->CloseButton.OnActivate = EwNewSlot( _this, ApplicationContactAddPage_onClose );
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
  ComponentsPushButtonBig__ReInit( &_this->UserInitials );
  ViewsText__ReInit( &_this->TitleTxt );
  ComponentsPushButtonNoBackground__ReInit( &_this->SaveBtn );
  ComponentsPushButtonNoBackground__ReInit( &_this->CloseButton );
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
  ComponentsPushButtonBig__Done( &_this->UserInitials );
  ViewsText__Done( &_this->TitleTxt );
  ComponentsPushButtonNoBackground__Done( &_this->SaveBtn );
  ComponentsPushButtonNoBackground__Done( &_this->CloseButton );

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

  ComponentsPushButtonBig_OnSetInitials( &_this->UserInitials, DeviceContactList_GetInitials( 
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
  ComponentsPushButtonDelete__Init( &_this->DeleteBtn, &_this->_.XObject, 0 );
  ComponentsInputEtxt__Init( &_this->NumberTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line4, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->MobileTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line3, &_this->_.XObject, 0 );
  ComponentsInputEtxt__Init( &_this->FirstNameTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line2, &_this->_.XObject, 0 );
  ComponentsInputEtxt__Init( &_this->LastNameTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );
  ComponentsPushButtonBig__Init( &_this->UserInitials, &_this->_.XObject, 0 );
  ComponentsPushButtonNoBackground__Init( &_this->CloseBtn, &_this->_.XObject, 0 );
  ComponentsPushButtonNoBackground__Init( &_this->SaveBtn, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactEditPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreRectView__OnSetBounds( &_this->DeleteBtn, _Const003E );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->DeleteBtn, 1 );
  ComponentsPushButtonDelete_OnSetLabel( &_this->DeleteBtn, EwLoadString( &_Const003F ));
  CoreView_OnSetLayout((CoreView)&_this->NumberTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->NumberTxt, _Const0040 );
  ComponentsInputEtxt_OnSetAlignment( &_this->NumberTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ComponentsInputEtxt_OnSetString( &_this->NumberTxt, EwLoadString( &_Const0041 ));
  ComponentsInputEtxt_OnSetColor( &_this->NumberTxt, ResBlue );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->NumberTxt, EwLoadString( &_Const0041 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const0042 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const0043 );
  ViewsLine_OnSetColor( &_this->Line4, _Const0017 );
  CoreView_OnSetLayout((CoreView)&_this->MobileTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->MobileTxt, _Const0044 );
  ViewsText_OnSetAlignment( &_this->MobileTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MobileTxt, EwLoadString( &_Const001C ));
  ViewsText_OnSetColor( &_this->MobileTxt, ResGrey );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line3, _Const0045 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line3, _Const0046 );
  ViewsLine_OnSetColor( &_this->Line3, _Const0017 );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const0047 );
  ComponentsInputEtxt_OnSetString( &_this->FirstNameTxt, EwLoadString( &_Const0048 ));
  ComponentsInputEtxt_OnSetColor( &_this->FirstNameTxt, ResBlack );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->FirstNameTxt, EwLoadString( &_Const0048 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const0049 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const004A );
  ViewsLine_OnSetColor( &_this->Line2, _Const0017 );
  CoreView_OnSetLayout((CoreView)&_this->LastNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const004B );
  ComponentsInputEtxt_OnSetString( &_this->LastNameTxt, EwLoadString( &_Const004C ));
  ComponentsInputEtxt_OnSetColor( &_this->LastNameTxt, ResBlack );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->LastNameTxt, EwLoadString( &_Const004C ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const004D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const004E );
  ViewsLine_OnSetColor( &_this->Line1, _Const0017 );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const004F );
  ComponentsPushButtonBig_OnSetInitials( &_this->UserInitials, 0 );
  ComponentsPushButtonBig_OnSetDescript( &_this->UserInitials, EwLoadString( &_Const003B ));
  CoreRectView__OnSetBounds( &_this->CloseBtn, _Const0029 );
  ComponentsPushButtonNoBackground_OnSetIcon( &_this->CloseBtn, EwLoadString( &ResCloseIconTxt ));
  CoreRectView__OnSetBounds( &_this->SaveBtn, _Const0028 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->SaveBtn, 0 );
  ComponentsPushButtonNoBackground_OnSetIcon( &_this->SaveBtn, EwLoadString( &ResCkeckIconTxt ));
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
  _this->DeleteBtn.OnActivate = EwNewSlot( _this, ApplicationContactEditPage_onDeleteContact );
  _this->NumberTxt.OnChange = EwNewSlot( _this, ApplicationContactEditPage_onFieldModified );
  ComponentsInputEtxt_OnSetFont( &_this->NumberTxt, EwLoadResource( &ResContactFont15, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->MobileTxt, EwLoadResource( &ResContactFont15, ResourcesFont ));
  _this->FirstNameTxt.OnChange = EwNewSlot( _this, ApplicationContactEditPage_onFieldModified );
  _this->LastNameTxt.OnChange = EwNewSlot( _this, ApplicationContactEditPage_onFieldModified );
  _this->CloseBtn.OnActivate = EwNewSlot( _this, ApplicationContactEditPage_onClose );
  _this->SaveBtn.OnActivate = EwNewSlot( _this, ApplicationContactEditPage_onSave );
}

/* Re-Initializer for the class 'Application::ContactEditPage' */
void ApplicationContactEditPage__ReInit( ApplicationContactEditPage _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ComponentsPushButtonDelete__ReInit( &_this->DeleteBtn );
  ComponentsInputEtxt__ReInit( &_this->NumberTxt );
  ViewsLine__ReInit( &_this->Line4 );
  ViewsText__ReInit( &_this->MobileTxt );
  ViewsLine__ReInit( &_this->Line3 );
  ComponentsInputEtxt__ReInit( &_this->FirstNameTxt );
  ViewsLine__ReInit( &_this->Line2 );
  ComponentsInputEtxt__ReInit( &_this->LastNameTxt );
  ViewsLine__ReInit( &_this->Line1 );
  ComponentsPushButtonBig__ReInit( &_this->UserInitials );
  ComponentsPushButtonNoBackground__ReInit( &_this->CloseBtn );
  ComponentsPushButtonNoBackground__ReInit( &_this->SaveBtn );
}

/* Finalizer method for the class 'Application::ContactEditPage' */
void ApplicationContactEditPage__Done( ApplicationContactEditPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ComponentsPushButtonDelete__Done( &_this->DeleteBtn );
  ComponentsInputEtxt__Done( &_this->NumberTxt );
  ViewsLine__Done( &_this->Line4 );
  ViewsText__Done( &_this->MobileTxt );
  ViewsLine__Done( &_this->Line3 );
  ComponentsInputEtxt__Done( &_this->FirstNameTxt );
  ViewsLine__Done( &_this->Line2 );
  ComponentsInputEtxt__Done( &_this->LastNameTxt );
  ViewsLine__Done( &_this->Line1 );
  ComponentsPushButtonBig__Done( &_this->UserInitials );
  ComponentsPushButtonNoBackground__Done( &_this->CloseBtn );
  ComponentsPushButtonNoBackground__Done( &_this->SaveBtn );

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
    if ((( EwCompString( _this->Contact->FirstName, ComponentsInputEtxt_OnGetString( 
        &_this->FirstNameTxt )) != 0 ) || ( EwCompString( _this->Contact->LastName, 
        ComponentsInputEtxt_OnGetString( &_this->LastNameTxt )) != 0 )) || ( EwCompString( 
        _this->Contact->PhoneNumber, ComponentsInputEtxt_OnGetString( &_this->NumberTxt )) 
        != 0 ))
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
    ComponentsPushButtonBig_OnSetInitials( &_this->UserInitials, _this->Contact->NameInitials );
  }
}

/* 'C' function for method : 'Application::ContactEditPage.onFieldModified()' */
void ApplicationContactEditPage_onFieldModified( ApplicationContactEditPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ComponentsPushButtonBig_OnSetInitials( &_this->UserInitials, DeviceContactList_GetInitials( 
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
  ComponentsPushButtonMediumTrans__Init( &_this->ContactsBtn, &_this->_.XObject, 0 );
  ComponentsPushButtonMediumTrans__Init( &_this->VideoCallBtn, &_this->_.XObject, 0 );
  ComponentsPushButtonMediumTrans__Init( &_this->AddCallBtn, &_this->_.XObject, 0 );
  ComponentsPushButtonMediumTrans__Init( &_this->SpeakerBtn, &_this->_.XObject, 0 );
  ComponentsPushButtonMediumTrans__Init( &_this->KeyPadBtn, &_this->_.XObject, 0 );
  ComponentsPushButtonMediumTrans__Init( &_this->MuteBtn, &_this->_.XObject, 0 );
  ApplicationKeypadInsideCall__Init( &_this->Keypad, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationCallPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0050 );
  CoreRectView__OnSetBounds( &_this->Super1.DesclineButton, _Const0051 );
  CoreRectView__OnSetBounds( &_this->ContactsBtn, _Const0052 );
  ComponentsPushButtonMediumTrans_OnSetIcon( &_this->ContactsBtn, EwLoadString( 
  &ResUserIconTxt ));
  ComponentsPushButtonMediumTrans_OnSetDescript( &_this->ContactsBtn, EwLoadString( 
  &_Const0053 ));
  CoreRectView__OnSetBounds( &_this->VideoCallBtn, _Const0054 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->VideoCallBtn, 0 );
  ComponentsPushButtonMediumTrans_OnSetIcon( &_this->VideoCallBtn, EwLoadString( 
  &ResVideoCallTxt ));
  ComponentsPushButtonMediumTrans_OnSetDescript( &_this->VideoCallBtn, EwLoadString( 
  &_Const0055 ));
  CoreRectView__OnSetBounds( &_this->AddCallBtn, _Const0056 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->AddCallBtn, 0 );
  ComponentsPushButtonMediumTrans_OnSetIcon( &_this->AddCallBtn, EwLoadString( &ResPlusIconTxt ));
  ComponentsPushButtonMediumTrans_OnSetDescript( &_this->AddCallBtn, EwLoadString( 
  &_Const0057 ));
  CoreRectView__OnSetBounds( &_this->SpeakerBtn, _Const0058 );
  ComponentsPushButtonMediumTrans_OnSetIcon( &_this->SpeakerBtn, EwLoadString( &ResSpeakerTxt ));
  ComponentsPushButtonMediumTrans_OnSetDescript( &_this->SpeakerBtn, EwLoadString( 
  &_Const0059 ));
  CoreRectView__OnSetBounds( &_this->KeyPadBtn, _Const005A );
  ComponentsPushButtonMediumTrans_OnSetIcon( &_this->KeyPadBtn, EwLoadString( &ResKeypadTxt ));
  ComponentsPushButtonMediumTrans_OnSetDescript( &_this->KeyPadBtn, EwLoadString( 
  &_Const005B ));
  CoreRectView__OnSetBounds( &_this->MuteBtn, _Const005C );
  ComponentsPushButtonMediumTrans_OnSetIcon( &_this->MuteBtn, EwLoadString( &ResMicOffTxt ));
  ComponentsPushButtonMediumTrans_OnSetDescript( &_this->MuteBtn, EwLoadString( 
  &_Const005D ));
  CoreRectView__OnSetBounds( &_this->Keypad, _Const005E );
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
  _this->ContactsBtn.OnActivate = EwNewSlot( _this, ApplicationCallPage_onContactsPress );
  _this->VideoCallBtn.OnActivate = EwNewSlot( _this, ApplicationCallPage_onVideoCallPress );
  _this->AddCallBtn.OnActivate = EwNewSlot( _this, ApplicationCallPage_onAddCallPress );
  _this->SpeakerBtn.OnActivate = EwNewSlot( _this, ApplicationCallPage_onSpeakerPress );
  _this->KeyPadBtn.OnActivate = EwNewSlot( _this, ApplicationCallPage_onKeypadPress );
  _this->MuteBtn.OnActivate = EwNewSlot( _this, ApplicationCallPage_onMicPress );
  _this->Keypad.Super1.OnEditTextChanged = EwNewSlot( _this, ApplicationCallPage_onKeypadEdit );
}

/* Re-Initializer for the class 'Application::CallPage' */
void ApplicationCallPage__ReInit( ApplicationCallPage _this )
{
  /* At first re-initialize the super class ... */
  ApplicationCallPageBase__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ComponentsPushButtonMediumTrans__ReInit( &_this->ContactsBtn );
  ComponentsPushButtonMediumTrans__ReInit( &_this->VideoCallBtn );
  ComponentsPushButtonMediumTrans__ReInit( &_this->AddCallBtn );
  ComponentsPushButtonMediumTrans__ReInit( &_this->SpeakerBtn );
  ComponentsPushButtonMediumTrans__ReInit( &_this->KeyPadBtn );
  ComponentsPushButtonMediumTrans__ReInit( &_this->MuteBtn );
  ApplicationKeypadInsideCall__ReInit( &_this->Keypad );
}

/* Finalizer method for the class 'Application::CallPage' */
void ApplicationCallPage__Done( ApplicationCallPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationCallPageBase );

  /* Finalize all embedded objects */
  ComponentsPushButtonMediumTrans__Done( &_this->ContactsBtn );
  ComponentsPushButtonMediumTrans__Done( &_this->VideoCallBtn );
  ComponentsPushButtonMediumTrans__Done( &_this->AddCallBtn );
  ComponentsPushButtonMediumTrans__Done( &_this->SpeakerBtn );
  ComponentsPushButtonMediumTrans__Done( &_this->KeyPadBtn );
  ComponentsPushButtonMediumTrans__Done( &_this->MuteBtn );
  ApplicationKeypadInsideCall__Done( &_this->Keypad );

  /* Don't forget to deinitialize the super class ... */
  ApplicationCallPageBase__Done( &_this->_.Super );
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
  ComponentsPushButtonMediumTrans_OnSetButtonColor( &_this->SpeakerBtn, ( EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass )->Speaker? ResWhite : ResWhiteTransparent ));
  ComponentsPushButtonMediumTrans_OnSetIconColor( &_this->SpeakerBtn, ( EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass )->Speaker? ResBlack : ResWhite ));
}

/* 'C' function for method : 'Application::CallPage.onMicPress()' */
void ApplicationCallPage_onMicPress( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_OnSetMicrophone( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  (XBool)!EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Microphone );
  ComponentsPushButtonMediumTrans_OnSetButtonColor( &_this->MuteBtn, ( EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass )->Microphone? ResWhite : ResWhiteTransparent ));
  ComponentsPushButtonMediumTrans_OnSetIconColor( &_this->MuteBtn, ( EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass )->Microphone? ResBlack : ResWhite ));
}

/* 'C' function for method : 'Application::CallPage.onKeypadPress()' */
void ApplicationCallPage_onKeypadPress( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->Keypad, EwSetRectOrigin( _this->Keypad.Super3.Bounds, 
  _Const005F ));
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
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line2, _Const0060 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Super1.Line2, _Const0061 );
  CoreRectView__OnSetBounds( &_this->Super1.NumberTxt, _Const0062 );
  CoreRectView__OnSetBounds( &_this->Super1.MobileTxt, _Const0063 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line1, _Const0030 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Super1.Line1, _Const0031 );
  CoreRectView__OnSetBounds( &_this->Super1.CallBtn, _Const0064 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Super1.CallBtn, 0 );
  CoreRectView__OnSetBounds( &_this->Super1.VideoCallBtn, _Const0065 );
  CoreRectView__OnSetBounds( &_this->Super1.PushButtonMediumBlue2, _Const0066 );
  CoreRectView__OnSetBounds( &_this->Super1.ContactName, _Const0067 );
  CoreRectView__OnSetBounds( &_this->Super1.UserInitialsBtn, _Const0068 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Super1.UserInitialsBtn, 0 );
  CoreRectView__OnSetBounds( &_this->Super1.EditBtn, _Const0069 );
  CoreRectView__OnSetBounds( &_this->Super1.BackBtn, _Const006A );
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

  _this->Super1.editContact = EwNewObject( ApplicationContactEditPage, 0 );
  _this->Super1.editContact->OnSave = EwNewSlot( _this, ApplicationContactDetailsPage_onSaveEdit );
  _this->Super1.editContact->OnClose = EwNewSlot( _this, ApplicationContactDetailsPage_onCancelEdit );
  ApplicationContactEditPage_OnSetContact( _this->Super1.editContact, _this->Super1.Contact );
  _this->Super1.editContact->OnDelete = EwNewSlot( _this, ApplicationContactDetailsPage_onDelete );
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->Super1.editContact ), 
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
  ComponentsKeyPadButtons__Init( &_this->callbtn, &_this->_.XObject, 0 );
  ComponentsKeyPadButtons__Init( &_this->BtnErase, &_this->_.XObject, 0 );
  ComponentsKeyPadButtons__Init( &_this->btn1, &_this->_.XObject, 0 );
  ComponentsKeyPadButtons__Init( &_this->btn3, &_this->_.XObject, 0 );
  ComponentsKeyPadButtons__Init( &_this->btn2, &_this->_.XObject, 0 );
  ComponentsKeyPadButtons__Init( &_this->btn4, &_this->_.XObject, 0 );
  ComponentsKeyPadButtons__Init( &_this->btn6, &_this->_.XObject, 0 );
  ComponentsKeyPadButtons__Init( &_this->btn5, &_this->_.XObject, 0 );
  ComponentsKeyPadButtons__Init( &_this->btn7, &_this->_.XObject, 0 );
  ComponentsKeyPadButtons__Init( &_this->btn9, &_this->_.XObject, 0 );
  ComponentsKeyPadButtons__Init( &_this->btn8, &_this->_.XObject, 0 );
  ComponentsKeyPadButtons__Init( &_this->btnstar, &_this->_.XObject, 0 );
  ComponentsKeyPadButtons__Init( &_this->btnDiez, &_this->_.XObject, 0 );
  ComponentsKeyPadButtons__Init( &_this->btn0, &_this->_.XObject, 0 );
  ComponentsInputEtxt__Init( &_this->InputEtxt, &_this->_.XObject, 0 );
  ComponentsTextButton__Init( &_this->HideBtn, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationKeypadPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  _this->BackgoundColor = ResWhite;
  _this->HideFunction = 1;
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const000F );
  CoreRectView__OnSetBounds( &_this->callbtn, _Const006B );
  ComponentsKeyPadButtons_OnSetIcon( &_this->callbtn, EwLoadString( &ResCallTxt ));
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->callbtn, ResGreenDark );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->callbtn, ResGreen );
  CoreRectView__OnSetBounds( &_this->BtnErase, _Const006C );
  ComponentsKeyPadButtons_OnSetIcon( &_this->BtnErase, EwLoadString( &ResBackspaceTxt ));
  ComponentsKeyPadButtons_OnSetText( &_this->BtnErase, 0 );
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->BtnErase, ResTransparent );
  ComponentsKeyPadButtons_OnSetIconColor( &_this->BtnErase, ResBlack );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->BtnErase, ResTransparent );
  ComponentsKeyPadButtons_OnSetIconColorPressed( &_this->BtnErase, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn1, _Const006D );
  ComponentsKeyPadButtons_OnSetText( &_this->btn1, EwLoadString( &_Const006E ));
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->btn1, ResGreyLight );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->btn1, ResBlack );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->btn1, ResPressColor );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->btn1, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn3, _Const006F );
  ComponentsKeyPadButtons_OnSetText( &_this->btn3, EwLoadString( &_Const0070 ));
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->btn3, ResGreyLight );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->btn3, ResBlack );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->btn3, ResPressColor );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->btn3, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn2, _Const0071 );
  ComponentsKeyPadButtons_OnSetText( &_this->btn2, EwLoadString( &_Const0072 ));
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->btn2, ResGreyLight );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->btn2, ResBlack );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->btn2, ResPressColor );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->btn2, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn4, _Const0073 );
  ComponentsKeyPadButtons_OnSetText( &_this->btn4, EwLoadString( &_Const0074 ));
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->btn4, ResGreyLight );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->btn4, ResBlack );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->btn4, ResPressColor );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->btn4, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn6, _Const0075 );
  ComponentsKeyPadButtons_OnSetText( &_this->btn6, EwLoadString( &_Const0076 ));
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->btn6, ResGreyLight );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->btn6, ResBlack );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->btn6, ResPressColor );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->btn6, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn5, _Const0077 );
  ComponentsKeyPadButtons_OnSetText( &_this->btn5, EwLoadString( &_Const0078 ));
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->btn5, ResGreyLight );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->btn5, ResBlack );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->btn5, ResPressColor );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->btn5, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn7, _Const0079 );
  ComponentsKeyPadButtons_OnSetText( &_this->btn7, EwLoadString( &_Const007A ));
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->btn7, ResGreyLight );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->btn7, ResBlack );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->btn7, ResPressColor );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->btn7, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn9, _Const007B );
  ComponentsKeyPadButtons_OnSetText( &_this->btn9, EwLoadString( &_Const007C ));
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->btn9, ResGreyLight );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->btn9, ResBlack );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->btn9, ResPressColor );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->btn9, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn8, _Const007D );
  ComponentsKeyPadButtons_OnSetText( &_this->btn8, EwLoadString( &_Const007E ));
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->btn8, ResGreyLight );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->btn8, ResBlack );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->btn8, ResPressColor );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->btn8, ResGrey );
  CoreRectView__OnSetBounds( &_this->btnstar, _Const007F );
  ComponentsKeyPadButtons_OnSetText( &_this->btnstar, EwLoadString( &_Const0080 ));
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->btnstar, ResGreyLight );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->btnstar, ResBlack );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->btnstar, ResPressColor );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->btnstar, ResGrey );
  CoreRectView__OnSetBounds( &_this->btnDiez, _Const0081 );
  ComponentsKeyPadButtons_OnSetText( &_this->btnDiez, EwLoadString( &_Const0082 ));
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->btnDiez, ResGreyLight );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->btnDiez, ResBlack );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->btnDiez, ResPressColor );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->btnDiez, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn0, _Const0083 );
  ComponentsKeyPadButtons_OnSetText( &_this->btn0, EwLoadString( &_Const0084 ));
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->btn0, ResGreyLight );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->btn0, ResBlack );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->btn0, ResPressColor );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->btn0, ResGrey );
  CoreRectView__OnSetBounds( &_this->InputEtxt, _Const0085 );
  ComponentsInputEtxt_OnSetString( &_this->InputEtxt, 0 );
  ComponentsInputEtxt_OnSetColor( &_this->InputEtxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->HideBtn, _Const0086 );
  ComponentsTextButton_OnSetText( &_this->HideBtn, EwLoadString( &StringsHideTxt ));
  ComponentsTextButton_OnSetTextColor( &_this->HideBtn, ResBlack );
  ComponentsTextButton_OnSetTextColorPress( &_this->HideBtn, ResGrey );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->callbtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BtnErase ), 0 );
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
  _this->callbtn.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onCallPress );
  _this->BtnErase.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  _this->btn1.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  _this->btn3.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  _this->btn2.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  _this->btn4.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  _this->btn6.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  _this->btn5.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  _this->btn7.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  _this->btn9.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  _this->btn8.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  _this->btnstar.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  _this->btnDiez.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  _this->btn0.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onButtonsPress );
  ComponentsInputEtxt_OnSetFont( &_this->InputEtxt, EwLoadResource( &ResTitileFont25, 
  ResourcesFont ));
  _this->HideBtn.OnActivate = EwNewSlot( _this, ApplicationKeypadPage_onHide );
}

/* Re-Initializer for the class 'Application::KeypadPage' */
void ApplicationKeypadPage__ReInit( ApplicationKeypadPage _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ComponentsKeyPadButtons__ReInit( &_this->callbtn );
  ComponentsKeyPadButtons__ReInit( &_this->BtnErase );
  ComponentsKeyPadButtons__ReInit( &_this->btn1 );
  ComponentsKeyPadButtons__ReInit( &_this->btn3 );
  ComponentsKeyPadButtons__ReInit( &_this->btn2 );
  ComponentsKeyPadButtons__ReInit( &_this->btn4 );
  ComponentsKeyPadButtons__ReInit( &_this->btn6 );
  ComponentsKeyPadButtons__ReInit( &_this->btn5 );
  ComponentsKeyPadButtons__ReInit( &_this->btn7 );
  ComponentsKeyPadButtons__ReInit( &_this->btn9 );
  ComponentsKeyPadButtons__ReInit( &_this->btn8 );
  ComponentsKeyPadButtons__ReInit( &_this->btnstar );
  ComponentsKeyPadButtons__ReInit( &_this->btnDiez );
  ComponentsKeyPadButtons__ReInit( &_this->btn0 );
  ComponentsInputEtxt__ReInit( &_this->InputEtxt );
  ComponentsTextButton__ReInit( &_this->HideBtn );
}

/* Finalizer method for the class 'Application::KeypadPage' */
void ApplicationKeypadPage__Done( ApplicationKeypadPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ComponentsKeyPadButtons__Done( &_this->callbtn );
  ComponentsKeyPadButtons__Done( &_this->BtnErase );
  ComponentsKeyPadButtons__Done( &_this->btn1 );
  ComponentsKeyPadButtons__Done( &_this->btn3 );
  ComponentsKeyPadButtons__Done( &_this->btn2 );
  ComponentsKeyPadButtons__Done( &_this->btn4 );
  ComponentsKeyPadButtons__Done( &_this->btn6 );
  ComponentsKeyPadButtons__Done( &_this->btn5 );
  ComponentsKeyPadButtons__Done( &_this->btn7 );
  ComponentsKeyPadButtons__Done( &_this->btn9 );
  ComponentsKeyPadButtons__Done( &_this->btn8 );
  ComponentsKeyPadButtons__Done( &_this->btnstar );
  ComponentsKeyPadButtons__Done( &_this->btnDiez );
  ComponentsKeyPadButtons__Done( &_this->btn0 );
  ComponentsInputEtxt__Done( &_this->InputEtxt );
  ComponentsTextButton__Done( &_this->HideBtn );

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
  ComponentsKeyPadButtons b = EwCastObject( sender, ComponentsKeyPadButtons );

  if ( sender == ((XObject)&_this->BtnErase ))
    ComponentsInputEtxt_OnSetString( &_this->InputEtxt, EwStringRemove( ComponentsInputEtxt_OnGetString( 
    &_this->InputEtxt ), EwGetStringLength( ComponentsInputEtxt_OnGetString( &_this->InputEtxt )) 
    - 1, 1 ));
  else
    if ( b != 0 )
      ComponentsInputEtxt_OnSetString( &_this->InputEtxt, EwConcatString( ComponentsInputEtxt_OnGetString( 
      &_this->InputEtxt ), b->Text ));

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
    DeviceDeviceClass_OutgoingCallNumber( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
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
  ComponentsNavBarButtons__Init( &_this->NavBarButtons, &_this->_.XObject, 0 );
  ComponentsNavBarButtons__Init( &_this->NavBarButtons1, &_this->_.XObject, 0 );
  ComponentsNavBarButtons__Init( &_this->NavBarButtons2, &_this->_.XObject, 0 );
  ComponentsNavBarButtons__Init( &_this->NavBarButtons3, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsApp );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0050 );
  CoreRectView__OnSetBounds( &_this->Outline, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0087 );
  CoreRectView__OnSetBounds( &_this->NavBarButtons, _Const0088 );
  ComponentsNavBarButtons_OnSetIcon( &_this->NavBarButtons, EwLoadString( &ResHeartTxt ));
  ComponentsNavBarButtons_OnSetDescript( &_this->NavBarButtons, EwLoadString( &StringsFavoritesTxt ));
  CoreRectView__OnSetBounds( &_this->NavBarButtons1, _Const0089 );
  ComponentsNavBarButtons_OnSetIcon( &_this->NavBarButtons1, EwLoadString( &ResCallTxt ));
  ComponentsNavBarButtons_OnSetDescript( &_this->NavBarButtons1, EwLoadString( &StringsRecentTxt ));
  ComponentsNavBarButtons_OnSetOutletSelector( &_this->NavBarButtons1, 1 );
  CoreRectView__OnSetBounds( &_this->NavBarButtons2, _Const008A );
  ComponentsNavBarButtons_OnSetIcon( &_this->NavBarButtons2, EwLoadString( &ResUserIconTxt ));
  ComponentsNavBarButtons_OnSetDescript( &_this->NavBarButtons2, EwLoadString( &StringsContactsTxtx ));
  ComponentsNavBarButtons_OnSetOutletSelector( &_this->NavBarButtons2, 2 );
  CoreRectView__OnSetBounds( &_this->NavBarButtons3, _Const008B );
  ComponentsNavBarButtons_OnSetIcon( &_this->NavBarButtons3, EwLoadString( &ResKeypadTxt ));
  ComponentsNavBarButtons_OnSetDescript( &_this->NavBarButtons3, EwLoadString( &StringsKeypadTxt ));
  ComponentsNavBarButtons_OnSetOutletSelector( &_this->NavBarButtons3, 3 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const008C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const008D );
  ViewsLine_OnSetColor( &_this->Line, ResGrey );
  _this->SelectedPage = -1;
  CoreGroup__Add( _this, ((CoreView)&_this->Outline ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NavBarButtons ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NavBarButtons1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NavBarButtons2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NavBarButtons3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line ), 0 );
  ComponentsNavBarButtons_OnSetOutlet( &_this->NavBarButtons, EwNewRef( _this, ApplicationContactsApp_OnGetSelectedPage, 
  ApplicationContactsApp_OnSetSelectedPage ));
  ComponentsNavBarButtons_OnSetOutlet( &_this->NavBarButtons1, EwNewRef( _this, 
  ApplicationContactsApp_OnGetSelectedPage, ApplicationContactsApp_OnSetSelectedPage ));
  ComponentsNavBarButtons_OnSetOutlet( &_this->NavBarButtons2, EwNewRef( _this, 
  ApplicationContactsApp_OnGetSelectedPage, ApplicationContactsApp_OnSetSelectedPage ));
  ComponentsNavBarButtons_OnSetOutlet( &_this->NavBarButtons3, EwNewRef( _this, 
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
  ComponentsNavBarButtons__ReInit( &_this->NavBarButtons );
  ComponentsNavBarButtons__ReInit( &_this->NavBarButtons1 );
  ComponentsNavBarButtons__ReInit( &_this->NavBarButtons2 );
  ComponentsNavBarButtons__ReInit( &_this->NavBarButtons3 );
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
  ComponentsNavBarButtons__Done( &_this->NavBarButtons );
  ComponentsNavBarButtons__Done( &_this->NavBarButtons1 );
  ComponentsNavBarButtons__Done( &_this->NavBarButtons2 );
  ComponentsNavBarButtons__Done( &_this->NavBarButtons3 );
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
      EwTrace( "%s%i", EwLoadString( &_Const008E ), _this->SelectedPage );
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

  /* ... then construct all embedded objects */
  ApplicationContactsApp__Init( &_this->ContactsApp, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0050 );
  CoreRectView__OnSetBounds( &_this->ContactsApp, _Const0050 );
  CoreGroup__Add( _this, ((CoreView)&_this->ContactsApp ), 0 );
  _this->deviceInstance = EwGetAutoObject( &DeviceDevice, DeviceDeviceClass );

  /* Call the user defined constructor */
  ApplicationApplication_Init( _this, aArg );

  /* Create and initialize the suitable class variant */
  EwAttachObjectVariant( &_this->_.XObject, aLink, aArg );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationContactsApp__ReInit( &_this->ContactsApp );

  /* Reinitialize the variant */
  if ( _this->_vthis )
    _this->_vthis->_.VMT->_ReInit( &_this->_.XObject );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Deinitialize the variant */
  EwDetachObjectVariant( &_this->_.XObject );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  ApplicationContactsApp__Done( &_this->ContactsApp );

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

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
  EW_STATIC_CLASS_VARIANT( ApplicationApplicationSimulation ),
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, deviceInstance, ContactsApp, 
                 ContactsApp, ContactsApp, _.VMT, _.VMT, "Application::Application" )
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
  CoreRectView__OnSetBounds( &_this->BackgroundSmall, _Const008F );
  ViewsRectangle_OnSetColorBL( &_this->BackgroundSmall, _Const0090 );
  ViewsRectangle_OnSetColorBR( &_this->BackgroundSmall, _Const0091 );
  ViewsRectangle_OnSetColorTR( &_this->BackgroundSmall, _Const0092 );
  ViewsRectangle_OnSetColorTL( &_this->BackgroundSmall, _Const0092 );
  ViewsRectangle_OnSetColor( &_this->BackgroundSmall, _Const0093 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super1.callbtn, 0 );
  ComponentsKeyPadButtons_OnSetText( &_this->Super1.BtnErase, 0 );
  ComponentsKeyPadButtons_OnSetIconColor( &_this->Super1.BtnErase, ResWhite );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.BtnErase, ResTransparent );
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->Super1.btn1, ResWhiteTransparent );
  ComponentsKeyPadButtons_OnSetIconColor( &_this->Super1.btn1, ResWhite );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->Super1.btn1, ResWhite );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn1, ResWhiteSemiTransparent );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn1, ResPressColor );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Super1.btn3, 1 );
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->Super1.btn3, ResWhiteTransparent );
  ComponentsKeyPadButtons_OnSetIconColor( &_this->Super1.btn3, ResWhite );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->Super1.btn3, ResWhite );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn3, ResWhiteSemiTransparent );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn3, ResPressColor );
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->Super1.btn2, ResWhiteTransparent );
  ComponentsKeyPadButtons_OnSetIconColor( &_this->Super1.btn2, ResWhite );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->Super1.btn2, ResWhite );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn2, ResWhiteSemiTransparent );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn2, ResPressColor );
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->Super1.btn4, ResWhiteTransparent );
  ComponentsKeyPadButtons_OnSetIconColor( &_this->Super1.btn4, ResWhite );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->Super1.btn4, ResWhite );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn4, ResWhiteSemiTransparent );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn4, ResPressColor );
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->Super1.btn6, ResWhiteTransparent );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->Super1.btn6, ResWhite );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn6, ResWhiteSemiTransparent );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn6, ResPressColor );
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->Super1.btn5, ResWhiteTransparent );
  ComponentsKeyPadButtons_OnSetIconColor( &_this->Super1.btn5, ResWhite );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->Super1.btn5, ResWhite );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn5, ResWhiteSemiTransparent );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn5, ResPressColor );
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->Super1.btn7, ResWhiteTransparent );
  ComponentsKeyPadButtons_OnSetIconColor( &_this->Super1.btn7, ResWhite );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->Super1.btn7, ResWhite );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn7, ResWhiteSemiTransparent );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn7, ResPressColor );
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->Super1.btn9, ResWhiteTransparent );
  ComponentsKeyPadButtons_OnSetIconColor( &_this->Super1.btn9, ResWhite );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->Super1.btn9, ResWhite );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn9, ResWhiteSemiTransparent );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn9, ResPressColor );
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->Super1.btn8, ResWhiteTransparent );
  ComponentsKeyPadButtons_OnSetIconColor( &_this->Super1.btn8, ResWhite );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->Super1.btn8, ResWhite );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn8, ResWhiteSemiTransparent );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn8, ResPressColor );
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->Super1.btnstar, ResWhiteTransparent );
  ComponentsKeyPadButtons_OnSetIconColor( &_this->Super1.btnstar, ResWhite );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->Super1.btnstar, ResWhite );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btnstar, ResWhiteSemiTransparent );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btnstar, ResPressColor );
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->Super1.btnDiez, ResWhiteTransparent );
  ComponentsKeyPadButtons_OnSetIconColor( &_this->Super1.btnDiez, ResWhite );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->Super1.btnDiez, ResWhite );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btnDiez, ResWhiteSemiTransparent );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btnDiez, ResPressColor );
  ComponentsKeyPadButtons_OnSetButtonColor( &_this->Super1.btn0, ResWhiteTransparent );
  ComponentsKeyPadButtons_OnSetIconColor( &_this->Super1.btn0, ResWhite );
  ComponentsKeyPadButtons_OnSetTextColor( &_this->Super1.btn0, ResWhite );
  ComponentsKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn0, ResWhiteSemiTransparent );
  ComponentsKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn0, ResPressColor );
  CoreRectView__OnSetBounds( &_this->Super1.InputEtxt, _Const0094 );
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
  CoreRectView__OnSetBounds( &_this->Super1.TitleTxt, _Const0095 );
  CoreRectView__OnSetBounds( &_this->Super1.PlusButton, _Const0096 );
  CoreRectView__OnSetBounds( &_this->TextButton, _Const0097 );
  ComponentsTextButton_OnSetText( &_this->TextButton, EwLoadString( &_Const0098 ));
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
  ApplicationContactsInsideCall_onContactActivated,
EW_END_OF_CLASS( ApplicationContactsInsideCall )

/* Initializer for the class variant 'Application::ApplicationSimulation' */
void ApplicationApplicationSimulation__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  ApplicationApplicationSimulation _vthis = (ApplicationApplicationSimulation)_this->_vthis;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aLink );
  EW_UNUSED_ARG( aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class variant. */
  _vthis->_.XObject._.GCT = EW_VCLASS_GCT( ApplicationApplicationSimulation );

  /* ... then construct all embedded objects */
  WidgetSetPushButton__Init( &_vthis->PushButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _vthis->_.VMT = EW_VCLASS( ApplicationApplicationSimulation );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0099 );
  CoreRectView__OnSetBounds( &_vthis->PushButton, _Const009A );
  WidgetSetPushButton_OnSetLabel( &_vthis->PushButton, EwLoadString( &_Const009B ));
  CoreGroup__Add( _this, ((CoreView)&_vthis->PushButton ), 0 );
  _vthis->PushButton.OnActivate = EwNewSlot( _this, ApplicationApplicationSimulation_onIncomingCall );
  WidgetSetPushButton_OnSetAppearance( &_vthis->PushButton, EwGetAutoObject( &WidgetSetPushButton_Medium, 
  WidgetSetPushButtonConfig ));
}

/* Re-Initializer for the class variant 'Application::ApplicationSimulation' */
void ApplicationApplicationSimulation__ReInit( ApplicationApplication _this )
{
  ApplicationApplicationSimulation _vthis = (ApplicationApplicationSimulation)_this->_vthis;

  /* ... then re-construct all embedded objects */
  WidgetSetPushButton__ReInit( &_vthis->PushButton );
}

/* Finalizer method for the class variant 'Application::ApplicationSimulation' */
void ApplicationApplicationSimulation__Done( ApplicationApplication _this )
{
  ApplicationApplicationSimulation _vthis = (ApplicationApplicationSimulation)_this->_vthis;

  /* Finalize this class */
  _vthis->_.VMT = 0;

  /* Finalize all embedded objects */
  WidgetSetPushButton__Done( &_vthis->PushButton );
}

/* 'C' function for method : 'Application::ApplicationSimulation.onIncomingCall()' */
void ApplicationApplicationSimulation_onIncomingCall( ApplicationApplication _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_UpdateIncomingCall( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  EwLoadString( &_Const009C ));
}

/* Variants derived from the class : 'Application::ApplicationSimulation' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplicationSimulation )
EW_END_OF_CLASS_VARIANTS( ApplicationApplicationSimulation )

/* Virtual Method Table (VMT) for the class variant : 'Application::ApplicationSimulation' */
EW_DEFINE_VCLASS( ApplicationApplicationSimulation, XObject, ApplicationApplication, 
                  PushButton, PushButton, PushButton, PushButton, _.VMT, _.VMT, 
                  "Application::ApplicationSimulation" )
EW_END_OF_VCLASS( ApplicationApplicationSimulation )

/* Initializer for the class 'Application::IncomingCall' */
void ApplicationIncomingCall__Init( ApplicationIncomingCall _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationCallPageBase__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationIncomingCall );

  /* ... then construct all embedded objects */
  ComponentsPushButtonMediumTrans__Init( &_this->AcceptButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationIncomingCall );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0050 );
  CoreRectView__OnSetBounds( &_this->AcceptButton, _Const009D );
  ComponentsPushButtonMediumTrans_OnSetIcon( &_this->AcceptButton, EwLoadString( 
  &ResCallTxt ));
  ComponentsPushButtonMediumTrans_OnSetDescript( &_this->AcceptButton, EwLoadString( 
  &_Const009E ));
  ComponentsPushButtonMediumTrans_OnSetButtonColor( &_this->AcceptButton, ResGreenDark );
  CoreGroup__Add( _this, ((CoreView)&_this->AcceptButton ), 0 );
  _this->AcceptButton.OnActivate = EwNewSlot( _this, ApplicationIncomingCall_onAcceptCall );

  /* Call the user defined constructor */
  ApplicationIncomingCall_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::IncomingCall' */
void ApplicationIncomingCall__ReInit( ApplicationIncomingCall _this )
{
  /* At first re-initialize the super class ... */
  ApplicationCallPageBase__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ComponentsPushButtonMediumTrans__ReInit( &_this->AcceptButton );
}

/* Finalizer method for the class 'Application::IncomingCall' */
void ApplicationIncomingCall__Done( ApplicationIncomingCall _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationCallPageBase );

  /* Finalize all embedded objects */
  ComponentsPushButtonMediumTrans__Done( &_this->AcceptButton );

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

  DeviceDeviceClass_AnswerCall( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
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
  ComponentsPushButtonNoBackground__Init( &_this->PlusButton, &_this->_.XObject, 0 );
  ComponentsTextButton__Init( &_this->TextButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationFavoritesPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const009F );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 32 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( ApplicationFavContactItem ));
  CoreView_OnSetStackingPriority((CoreView)&_this->SlideTouchHandler, -2 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const009F );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreRectView__OnSetBounds( &_this->TitleTxt1, _Const0007 );
  ViewsText_OnSetAlignment( &_this->TitleTxt1, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TitleTxt1, EwLoadString( &StringsFavoritesTxt ));
  ViewsText_OnSetColor( &_this->TitleTxt1, ResBlack );
  CoreRectView__OnSetBounds( &_this->PlusButton, _Const00A0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->PlusButton, 1 );
  ComponentsPushButtonNoBackground_OnSetIcon( &_this->PlusButton, EwLoadString( 
  &ResPlusIconTxt ));
  CoreRectView__OnSetBounds( &_this->TextButton, _Const00A1 );
  ComponentsTextButton_OnSetText( &_this->TextButton, EwLoadString( &_Const00A2 ));
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleTxt1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PlusButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextButton ), 0 );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationFavoritesPage_OnLoadItem );
  CoreVerticalList_OnSetSlideHandler( &_this->VerticalList, &_this->SlideTouchHandler );
  ViewsText_OnSetFont( &_this->TitleTxt1, EwLoadResource( &ResTitileFont32, ResourcesFont ));
  _this->PlusButton.OnActivate = EwNewSlot( _this, ApplicationFavoritesPage_onAddPress );
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
  ComponentsPushButtonNoBackground__ReInit( &_this->PlusButton );
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
  ComponentsPushButtonNoBackground__Done( &_this->PlusButton );
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
  DeviceDeviceClass_OutgoingCallContact( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
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

  DeviceContactList_Add( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Favorites, 
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
  CoreRectView__OnSetBounds( &_this->TitleTxt1, _Const0007 );
  ViewsText_OnSetAlignment( &_this->TitleTxt1, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TitleTxt1, EwLoadString( &StringsRecentTxt ));
  ViewsText_OnSetColor( &_this->TitleTxt1, ResBlack );
  CoreRectView__OnSetBounds( &_this->TextButton, _Const00A1 );
  ComponentsTextButton_OnSetText( &_this->TextButton, EwLoadString( &_Const00A2 ));
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const009F );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 50 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( ApplicationRecentItm ));
  CoreView_OnSetStackingPriority((CoreView)&_this->SlideTouchHandler, -1 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const009F );
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
  DeviceDeviceClass_OutgoingCallContact( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
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
  CoreRectView__OnSetBounds( &_this->Super1.TextButton, _Const00A3 );
  CoreRectView__OnSetBounds( &_this->Text, _Const00A4 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const00A5 ));
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
    EwTrace( "%s", EwLoadString( &_Const00A6 ));
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
  ComponentsPushButtonSmall__Init( &_this->RemoveButton, &_this->_.XObject, 0 );
  ComponentsTextButton__Init( &_this->DeleteButton, &_this->_.XObject, 0 );
  ComponentsPushButtonSmall__Init( &_this->InfoButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationFavContactItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00A7 );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->EditEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->EditEffect, 250 );
  _this->EditEffect.Value2 = 25;
  _this->EditEffect.Value1 = 0;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->DeleteEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->DeleteEffect, 250 );
  _this->DeleteEffect.Value2 = 110;
  _this->DeleteEffect.Value1 = 0;
  CoreView_OnSetStackingPriority((CoreView)&_this->Super1.TouchHandler, -1 );
  CoreQuadView__OnSetPoint3( &_this->Super1.TouchHandler, _Const00A8 );
  CoreQuadView__OnSetPoint2( &_this->Super1.TouchHandler, _Const00A9 );
  CoreView_OnSetLayout((CoreView)&_this->Super1.Background, CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Super1.Background, _Const00A7 );
  CoreRectView__OnSetBounds( &_this->RemoveButton, _Const00AA );
  ComponentsPushButtonSmall_OnSetButtonColor( &_this->RemoveButton, ResRed );
  ComponentsPushButtonSmall_OnSetIcon( &_this->RemoveButton, EwLoadString( &ResRemoveTxt ));
  ComponentsPushButtonSmall_OnSetIconColor( &_this->RemoveButton, ResWhite );
  CoreRectView__OnSetBounds( &_this->DeleteButton, _Const00AB );
  ComponentsTextButton_OnSetText( &_this->DeleteButton, EwLoadString( &_Const00AC ));
  ComponentsTextButton_OnSetTextColor( &_this->DeleteButton, ResWhite );
  ComponentsTextButton_OnSetTextColorPress( &_this->DeleteButton, ResWhiteSemiTransparent );
  ComponentsTextButton_OnSetBackgoundColor( &_this->DeleteButton, ResRed );
  CoreView_OnSetLayout((CoreView)&_this->InfoButton, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->InfoButton, _Const00AD );
  ComponentsPushButtonSmall_OnSetButtonColor( &_this->InfoButton, ResTransparent );
  ComponentsPushButtonSmall_OnSetIcon( &_this->InfoButton, EwLoadString( &ResInfoTxt ));
  ComponentsPushButtonSmall_OnSetIconColor( &_this->InfoButton, ResBlue );
  CoreView_OnSetLayout((CoreView)&_this->Super1.LastNameTxt, CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Super1.LastNameTxt, _Const00AE );
  ViewsText_OnSetAutoSize( &_this->Super1.LastNameTxt, 1 );
  CoreView_OnSetLayout((CoreView)&_this->Super1.FirstNameTxt, CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Super1.FirstNameTxt, _Const00AF );
  ViewsText_OnSetAutoSize( &_this->Super1.FirstNameTxt, 1 );
  ViewsText_OnSetString( &_this->Super1.FirstNameTxt, EwLoadString( &_Const00B0 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line, _Const00B1 );
  ViewsLine_OnSetWidth( &_this->Super1.Line, 2 );
  ViewsLine_OnSetColor( &_this->Super1.Line, ResGreyLight );
  CoreView_OnSetLayout((CoreView)&_this->Super1.PrfofilButton, CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Super1.PrfofilButton, _Const0013 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line1, _Const00B2 );
  CoreGroup__Add( _this, ((CoreView)&_this->RemoveButton ), -5 );
  CoreGroup__Add( _this, ((CoreView)&_this->DeleteButton ), -5 );
  CoreGroup__Add( _this, ((CoreView)&_this->InfoButton ), -5 );
  _this->EditEffect.Super1.OnAnimate = EwNewSlot( _this, ApplicationFavContactItem_onAnimate );
  _this->DeleteEffect.Super1.OnAnimate = EwNewSlot( _this, ApplicationFavContactItem_onAnimate );
  _this->RemoveButton.OnActivate = EwNewSlot( _this, ApplicationFavContactItem_onShowDelete );
  _this->DeleteButton.OnActivate = EwNewSlot( _this, ApplicationFavContactItem_onDelete );
  _this->InfoButton.OnActivate = EwNewSlot( _this, ApplicationFavContactItem_onInfo );
}

/* Re-Initializer for the class 'Application::FavContactItem' */
void ApplicationFavContactItem__ReInit( ApplicationFavContactItem _this )
{
  /* At first re-initialize the super class ... */
  ApplicationContactItem__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  EffectsInt32Effect__ReInit( &_this->EditEffect );
  EffectsInt32Effect__ReInit( &_this->DeleteEffect );
  ComponentsPushButtonSmall__ReInit( &_this->RemoveButton );
  ComponentsTextButton__ReInit( &_this->DeleteButton );
  ComponentsPushButtonSmall__ReInit( &_this->InfoButton );
}

/* Finalizer method for the class 'Application::FavContactItem' */
void ApplicationFavContactItem__Done( ApplicationFavContactItem _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationContactItem );

  /* Finalize all embedded objects */
  EffectsInt32Effect__Done( &_this->EditEffect );
  EffectsInt32Effect__Done( &_this->DeleteEffect );
  ComponentsPushButtonSmall__Done( &_this->RemoveButton );
  ComponentsTextButton__Done( &_this->DeleteButton );
  ComponentsPushButtonSmall__Done( &_this->InfoButton );

  /* Don't forget to deinitialize the super class ... */
  ApplicationContactItem__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::FavContactItem.onAnimate()' */
void ApplicationFavContactItem_onAnimate( ApplicationFavContactItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->RemoveButton, EwSetRectX( _this->RemoveButton.Super3.Bounds, 
  ( _this->EditEffect.Value - 25 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->Super1.PrfofilButton, EwSetRectX( _this->Super1.PrfofilButton.Super3.Bounds, 
  ( _this->EditEffect.Value + 6 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->Super1.LastNameTxt, EwSetRectX( _this->Super1.LastNameTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 55 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->Super1.FirstNameTxt, EwSetRectX( _this->Super1.FirstNameTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 146 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->InfoButton, EwSetRectX( _this->InfoButton.Super3.Bounds, 
  ( _this->EditEffect.Value + 217 ) - _this->DeleteEffect.Value ));
  CoreQuadView__OnSetPoint1( &_this->Super1.TouchHandler, EwSetPointX( _this->Super1.TouchHandler.Super1.Point1, 
  _this->RemoveButton.Super3.Bounds.Point2.X ));
  CoreQuadView__OnSetPoint4( &_this->Super1.TouchHandler, EwSetPointX( _this->Super1.TouchHandler.Super1.Point4, 
  _this->RemoveButton.Super3.Bounds.Point2.X ));
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
    ComponentsPushButtonSmall_OnSetIcon( &_this->InfoButton, EwLoadString( &ResMenuTxt ));
    ComponentsPushButtonSmall_OnSetIconColor( &_this->InfoButton, ResGrey );
  }
  else
  {
    ComponentsPushButtonSmall_OnSetIcon( &_this->InfoButton, EwLoadString( &ResInfoTxt ));
    ComponentsPushButtonSmall_OnSetIconColor( &_this->InfoButton, ResBlue );

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
  ComponentsPushButtonSmall__Init( &_this->InfoButton, &_this->_.XObject, 0 );
  ComponentsPushButtonSmall__Init( &_this->PushButtonSmall, &_this->_.XObject, 0 );
  ComponentsPushButtonSmall__Init( &_this->RemoveButton, &_this->_.XObject, 0 );
  ComponentsTextButton__Init( &_this->DeleteButton, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->EditEffect, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->DeleteEffect, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationRecentItm );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00B3 );
  _this->Icon = EwShareString( EwLoadString( &ResOutgoingCallTxt ));
  _this->ButtonColor = ResWhite;
  _this->IconColor = ResWhite;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreRectView__OnSetBounds( &_this->Background, _Const00B4 );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const000E );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const000E );
  ViewsRectangle_OnSetColor( &_this->Background, _Const000F );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00B5 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00B6 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00B7 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const00B8 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreView_OnSetLayout((CoreView)&_this->Line, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const00B9 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const00BA );
  ViewsLine_OnSetWidth( &_this->Line, 2 );
  ViewsLine_OnSetColor( &_this->Line, ResGreyLight );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const00BB );
  ViewsText_OnSetAutoSize( &_this->LastNameTxt, 1 );
  ViewsText_OnSetAlignment( &_this->LastNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->LastNameTxt, EwLoadString( &_Const00BC ));
  ViewsText_OnSetColor( &_this->LastNameTxt, ResBlack );
  CoreView_OnSetStackingPriority((CoreView)&_this->FirstNameTxt, 0 );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const00BD );
  ViewsText_OnSetAutoSize( &_this->FirstNameTxt, 1 );
  ViewsText_OnSetAlignment( &_this->FirstNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->FirstNameTxt, EwLoadString( &_Const00B0 ));
  ViewsText_OnSetColor( &_this->FirstNameTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->CallTypeTxt, _Const00BE );
  ViewsText_OnSetAutoSize( &_this->CallTypeTxt, 1 );
  ViewsText_OnSetAlignment( &_this->CallTypeTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->CallTypeTxt, EwLoadString( &_Const00BF ));
  CoreRectView__OnSetBounds( &_this->TimeTxt, _Const00C0 );
  ViewsText_OnSetAutoSize( &_this->TimeTxt, 1 );
  ViewsText_OnSetAlignment( &_this->TimeTxt, ViewsTextAlignmentAlignHorzRight | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TimeTxt, EwLoadString( &_Const00C1 ));
  _this->ColorText1 = ResBlack;
  _this->ColorText2 = ResGrey;
  CoreView_OnSetLayout((CoreView)&_this->InfoButton, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->InfoButton, _Const00C2 );
  ComponentsPushButtonSmall_OnSetButtonColor( &_this->InfoButton, ResTransparent );
  ComponentsPushButtonSmall_OnSetIcon( &_this->InfoButton, EwLoadString( &ResInfoTxt ));
  ComponentsPushButtonSmall_OnSetIconColor( &_this->InfoButton, ResBlue );
  CoreRectView__OnSetBounds( &_this->PushButtonSmall, _Const00C3 );
  CoreGroup_OnSetAlphaBlended((CoreGroup)&_this->PushButtonSmall, 1 );
  ComponentsPushButtonSmall_OnSetButtonColor( &_this->PushButtonSmall, ResTransparent );
  ComponentsPushButtonSmall_OnSetTextColor( &_this->PushButtonSmall, ResGrey );
  ComponentsPushButtonSmall_OnSetIcon( &_this->PushButtonSmall, EwLoadString( &ResOutgoingCallTxt ));
  CoreRectView__OnSetBounds( &_this->RemoveButton, _Const00C4 );
  ComponentsPushButtonSmall_OnSetButtonColor( &_this->RemoveButton, ResRed );
  ComponentsPushButtonSmall_OnSetIcon( &_this->RemoveButton, EwLoadString( &ResRemoveTxt ));
  ComponentsPushButtonSmall_OnSetIconColor( &_this->RemoveButton, ResWhite );
  CoreRectView__OnSetBounds( &_this->DeleteButton, _Const00C5 );
  ComponentsTextButton_OnSetText( &_this->DeleteButton, EwLoadString( &_Const00AC ));
  ComponentsTextButton_OnSetTextColor( &_this->DeleteButton, ResWhite );
  ComponentsTextButton_OnSetTextColorPress( &_this->DeleteButton, ResWhiteSemiTransparent );
  ComponentsTextButton_OnSetBackgoundColor( &_this->DeleteButton, ResRed );
  CoreView_OnSetLayout((CoreView)&_this->Line1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const00B2 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const000D );
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
  _this->InfoButton.OnActivate = EwNewSlot( _this, ApplicationRecentItm_onInfo );
  _this->RemoveButton.OnActivate = EwNewSlot( _this, ApplicationRecentItm_onShowDelete );
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
  ComponentsPushButtonSmall__ReInit( &_this->InfoButton );
  ComponentsPushButtonSmall__ReInit( &_this->PushButtonSmall );
  ComponentsPushButtonSmall__ReInit( &_this->RemoveButton );
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
  ComponentsPushButtonSmall__Done( &_this->InfoButton );
  ComponentsPushButtonSmall__Done( &_this->PushButtonSmall );
  ComponentsPushButtonSmall__Done( &_this->RemoveButton );
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
    XColor clr = _this->ColorText2;
    ViewsText_OnSetFont( &_this->CallTypeTxt, EwLoadResource( &ResContactFont12, 
    ResourcesFont ));
    ViewsText_OnSetColor( &_this->CallTypeTxt, clr );
  }

  if ( &_this->TimeTxt != 0 )
  {
    XColor clr = _this->ColorText2;
    ViewsText_OnSetFont( &_this->TimeTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
    ViewsText_OnSetColor( &_this->TimeTxt, clr );
  }

  if ( !isEnabled )
  {
    ViewsRectangle_OnSetColor( &_this->Background, _this->ButtonColor );
    ComponentsPushButtonSmall_OnSetIconColor( &_this->PushButtonSmall, ResGrey );
  }
  else
    if ( isPressed )
    {
      ViewsRectangle_OnSetColor( &_this->Background, ResPressColor );
      ComponentsPushButtonSmall_OnSetIconColor( &_this->PushButtonSmall, ResGrey );
    }
    else
      if ( isSelected )
      {
        ViewsRectangle_OnSetColor( &_this->Background, ResGreyLight );
        ComponentsPushButtonSmall_OnSetIconColor( &_this->PushButtonSmall, ResGrey );
      }
      else
      {
        ViewsRectangle_OnSetColor( &_this->Background, _this->ButtonColor );
        ComponentsPushButtonSmall_OnSetIconColor( &_this->PushButtonSmall, ResGrey );
      }

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

/* 'C' function for method : 'Application::RecentItm.onAnimate()' */
void ApplicationRecentItm_onAnimate( ApplicationRecentItm _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->RemoveButton, EwSetRectX( _this->RemoveButton.Super3.Bounds, 
  ( _this->EditEffect.Value - 25 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->PushButtonSmall, EwSetRectX( _this->PushButtonSmall.Super3.Bounds, 
  ( _this->EditEffect.Value + 6 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->LastNameTxt, EwSetRectX( _this->LastNameTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 55 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, EwSetRectX( _this->FirstNameTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 146 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->CallTypeTxt, EwSetRectX( _this->CallTypeTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 55 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->InfoButton, EwSetRectX( _this->InfoButton.Super3.Bounds, 
  ( _this->EditEffect.Value + 217 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->TimeTxt, EwSetRectX( _this->TimeTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 192 ) - _this->DeleteEffect.Value ));
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, EwSetPointX( _this->TouchHandler.Super1.Point1, 
  _this->RemoveButton.Super3.Bounds.Point2.X ));
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, EwSetPointX( _this->TouchHandler.Super1.Point4, 
  _this->RemoveButton.Super3.Bounds.Point2.X ));
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
    ViewsText_OnSetString( &_this->CallTypeTxt, DeviceHistoryContact_GetCallDirection( 
    _this->ContactHistory ));
    ViewsText_OnSetString( &_this->TimeTxt, CoreTime_Format( _this->ContactHistory->TimeOfCall, 
    EwLoadString( &_Const00C6 )));
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
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line2, _Const00C7 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Super1.Line2, _Const00C8 );
  CoreRectView__OnSetBounds( &_this->Super1.NumberTxt, _Const00C9 );
  CoreRectView__OnSetBounds( &_this->Super1.MobileTxt, _Const00CA );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line1, _Const00CB );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Super1.Line1, _Const00CC );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const00CD );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const00CE );
  ViewsLine_OnSetColor( &_this->Line4, _Const0017 );
  CoreRectView__OnSetBounds( &_this->DateTxt, _Const00CF );
  ViewsText_OnSetAlignment( &_this->DateTxt, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DateTxt, EwLoadString( &_Const00D0 ));
  ViewsText_OnSetColor( &_this->DateTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->TypeTxt, _Const00D1 );
  ViewsText_OnSetAlignment( &_this->TypeTxt, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TypeTxt, EwLoadString( &_Const00D2 ));
  ViewsText_OnSetColor( &_this->TypeTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->TimeTxt, _Const00D3 );
  ViewsText_OnSetAlignment( &_this->TimeTxt, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TimeTxt, EwLoadString( &_Const00D4 ));
  ViewsText_OnSetColor( &_this->TimeTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->DurationTxt, _Const00D5 );
  ViewsText_OnSetAlignment( &_this->DurationTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DurationTxt, EwLoadString( &_Const00D6 ));
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
    ComponentsPushButtonBig_OnSetInitials( &_this->Super1.UserInitialsBtn, _this->HistoryContact->Super1.NameInitials );
    ViewsText_OnSetString( &_this->Super1.ContactName, EwConcatString( EwConcatString( 
    _this->HistoryContact->Super1.LastName, EwLoadString( &_Const002B )), _this->HistoryContact->Super1.FirstName ));
    ViewsText_OnSetString( &_this->Super1.NumberTxt, _this->HistoryContact->Super1.PhoneNumber );
    ViewsText_OnSetString( &_this->DateTxt, CoreTime_Format( _this->HistoryContact->TimeOfCall, 
    EwLoadString( &_Const00D7 )));
    ViewsText_OnSetString( &_this->TimeTxt, CoreTime_Format( _this->HistoryContact->TimeOfCall, 
    EwLoadString( &_Const00D8 )));

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
  ComponentsPushButtonMediumTrans__Init( &_this->DesclineButton, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TimeTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ContactNameTxt, &_this->_.XObject, 0 );
  ComponentsPushButtonBig__Init( &_this->UserInitials, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationCallPageBase );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0050 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0050 );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const0090 );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const0091 );
  ViewsRectangle_OnSetColorTR( &_this->Background, _Const0092 );
  ViewsRectangle_OnSetColorTL( &_this->Background, _Const0092 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0093 );
  CoreRectView__OnSetBounds( &_this->DesclineButton, _Const00D9 );
  ComponentsPushButtonMediumTrans_OnSetIcon( &_this->DesclineButton, EwLoadString( 
  &ResEndCallTxt ));
  ComponentsPushButtonMediumTrans_OnSetDescript( &_this->DesclineButton, EwLoadString( 
  &_Const00DA ));
  ComponentsPushButtonMediumTrans_OnSetButtonColor( &_this->DesclineButton, ResRed );
  CoreView_OnSetLayout((CoreView)&_this->TimeTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->TimeTxt, _Const00DB );
  ViewsText_OnSetAlignment( &_this->TimeTxt, ViewsTextAlignmentAlignHorzCenter | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TimeTxt, EwLoadString( &_Const00DC ));
  ViewsText_OnSetColor( &_this->TimeTxt, ResWhite );
  CoreView_OnSetLayout((CoreView)&_this->ContactNameTxt, CoreLayoutAlignToLeft | 
  CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->ContactNameTxt, _Const00DD );
  ViewsText_OnSetEnableBidiText( &_this->ContactNameTxt, 0 );
  ViewsText_OnSetAutoSize( &_this->ContactNameTxt, 1 );
  ViewsText_OnSetAlignment( &_this->ContactNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ContactNameTxt, EwLoadString( &_Const0026 ));
  ViewsText_OnSetColor( &_this->ContactNameTxt, ResWhite );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const00DE );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->UserInitials, 0 );
  ComponentsPushButtonBig_OnSetDescript( &_this->UserInitials, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DesclineButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TimeTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ContactNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UserInitials ), 0 );
  _this->DesclineButton.OnActivate = EwNewSlot( _this, ApplicationCallPageBase_onDesclineCall );
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
  ComponentsPushButtonMediumTrans__ReInit( &_this->DesclineButton );
  ViewsText__ReInit( &_this->TimeTxt );
  ViewsText__ReInit( &_this->ContactNameTxt );
  ComponentsPushButtonBig__ReInit( &_this->UserInitials );
}

/* Finalizer method for the class 'Application::CallPageBase' */
void ApplicationCallPageBase__Done( ApplicationCallPageBase _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ComponentsPushButtonMediumTrans__Done( &_this->DesclineButton );
  ViewsText__Done( &_this->TimeTxt );
  ViewsText__Done( &_this->ContactNameTxt );
  ComponentsPushButtonBig__Done( &_this->UserInitials );

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
    _this->Contact->Super1.LastName, EwLoadString( &_Const002B )), _this->Contact->Super1.FirstName ));
    ComponentsPushButtonBig_OnSetInitials( &_this->UserInitials, _this->Contact->Super1.NameInitials );
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
    jmp      DWORD PTR [ eax + 144 ]
  }
}

/* 'C' function for method : 'Application::CallPageBase.onDesclineCall()' */
void ApplicationCallPageBase_onDesclineCall( ApplicationCallPageBase _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_EndCall( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  _this->Contact );
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
  CoreRectView__OnSetBounds( &_this->Super1.Rectangle, _Const00DF );
  CoreRectView__OnSetBounds( &_this->Super1.NavBarButtons, _Const00E0 );
  CoreRectView__OnSetBounds( &_this->Super1.NavBarButtons1, _Const00E1 );
  CoreRectView__OnSetBounds( &_this->Super1.NavBarButtons2, _Const00E2 );
  CoreRectView__OnSetBounds( &_this->Super1.NavBarButtons3, _Const00E3 );
  CoreRectView__OnSetBounds( &_this->TextButton, _Const00E4 );
  ComponentsTextButton_OnSetText( &_this->TextButton, EwLoadString( &_Const0098 ));
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationContactsAppInsideCall )

/* Embedded Wizard */
