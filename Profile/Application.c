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
#include "_ApplicationAddContactPage.h"
#include "_ApplicationApplication.h"
#include "_ApplicationCallBase.h"
#include "_ApplicationChatItem.h"
#include "_ApplicationChatPage.h"
#include "_ApplicationContactItem.h"
#include "_ApplicationContactsAppInsideCall.h"
#include "_ApplicationContactsInsideCall.h"
#include "_ApplicationContactsInsideSearch.h"
#include "_ApplicationContactsList.h"
#include "_ApplicationContactsListInsideMessages.h"
#include "_ApplicationContactsPage.h"
#include "_ApplicationDetailsInsideCall.h"
#include "_ApplicationDetailsPage.h"
#include "_ApplicationEditPage.h"
#include "_ApplicationFavContactItem.h"
#include "_ApplicationFavoritesPage.h"
#include "_ApplicationHomePage.h"
#include "_ApplicationIncomingCall.h"
#include "_ApplicationKeypadInsideCall.h"
#include "_ApplicationKeypadPage.h"
#include "_ApplicationMessagesApp.h"
#include "_ApplicationMessegeItem.h"
#include "_ApplicationMyCardItem.h"
#include "_ApplicationOngoingCall.h"
#include "_ApplicationPhoneApp.h"
#include "_ApplicationRecentDetailsPage.h"
#include "_ApplicationRecentItm.h"
#include "_ApplicationRecentPage.h"
#include "_ApplicationSplashScreen.h"
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
#include "_CoreOutline.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTime.h"
#include "_CoreTimer.h"
#include "_CoreVerticalList.h"
#include "_CoreView.h"
#include "_DeviceContact.h"
#include "_DeviceContactListElement.h"
#include "_DeviceContactsList.h"
#include "_DeviceDeviceClass.h"
#include "_DeviceHistoryContact.h"
#include "_DeviceHistoryMessagesList.h"
#include "_DeviceMessage.h"
#include "_DeviceMessagesList.h"
#include "_EffectsFadeInOutTransition.h"
#include "_EffectsInt32Effect.h"
#include "_EffectsSlideTransition.h"
#include "_EffectsTransition.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
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
  0x00000392, /* ratio 54.27 % */
  0xB8001300, 0x800A8452, 0x00E0003C, 0x45C00328, 0x09100043, 0x02022C0C, 0x13028022,
  0xF8B42CDB, 0x15C56260, 0xB8006000, 0x80068001, 0x0066001C, 0xE5721190, 0x38380049,
  0xE0021C4E, 0x0037000D, 0x030800E8, 0x004E4C60, 0xD4F27115, 0x842210C8, 0x026A4D89,
  0x0D200310, 0x831B3600, 0x4003A802, 0x72865323, 0x6898362C, 0xAC8029A4, 0x74567E73,
  0x46EAB3B2, 0x32260C88, 0xE7561B29, 0xB544B2D8, 0xD249144E, 0x2C954A24, 0x31B4B245,
  0xAEC12E52, 0xBD8AC14E, 0x802CF709, 0xF2D704B4, 0xF0940B6C, 0x0912C350, 0xB918B0C6,
  0x1388CA88, 0x68266259, 0xBE117372, 0x9E506B9E, 0x4A33D248, 0xAB3D31CF, 0x04704D18,
  0x212222EB, 0x04582456, 0x00DB1480, 0xD1D6E09E, 0x3B4E29D8, 0x253AA165, 0x432C38D3,
  0xEA7D0CA8, 0xA2BC4864, 0xA2679E42, 0xB1303C5A, 0x3AA77136, 0x48275221, 0xA2CE2944,
  0xC7544A00, 0x6DF75B7D, 0xDA6915DE, 0xA793A9C4, 0xA13CC6F2, 0x93C86566, 0xBE8AC238,
  0x2344EB1B, 0xC600385D, 0x95E57168, 0xF5913A60, 0xA80B7818, 0x064FD6C5, 0x621E059A,
  0xDF14D045, 0x941DFA53, 0x4C086190, 0x71539064, 0x03910455, 0x9224A913, 0x57013654,
  0x692E5E51, 0x0451C006, 0x4E9546E9, 0x5F94D9D1, 0x4705E974, 0x4C0A4421, 0x2A6F1A24,
  0x14115491, 0xD1052400, 0xC4B10456, 0xF5C64552, 0xC4001DE4, 0x82510585, 0x5CD78904,
  0x24556678, 0x4116165E, 0x48788459, 0x789BC000, 0xE1795949, 0x34F91390, 0x45387FA1,
  0x169AD0E7, 0x84904409, 0x9C74F984, 0x64123945, 0x310A4210, 0x9E43A6C4, 0x44DDA8E5,
  0xE6D83942, 0x36105544, 0xFDC4595F, 0x0072D049, 0x4413F1E0, 0xDDD1166E, 0xFA310C9C,
  0x6C5344E4, 0x334E93A4, 0xA7D167FE, 0x00000101, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 272, 440 }};
static const XRect _Const0001 = {{ 11, 167 }, { 261, 440 }};
static const XRect _Const0002 = {{ 12, 167 }, { 261, 440 }};
static const XPoint _Const0003 = { 0, 35 };
static const XRect _Const0004 = {{ 236, 141 }, { 262, 167 }};
static const XRect _Const0005 = {{ 210, 141 }, { 236, 167 }};
static const XRect _Const0006 = {{ 3, 67 }, { 269, 99 }};
static const XStringRes _Const0007 = { _StringsDefault0, 0x0002 };
static const XRect _Const0008 = {{ 11, 27 }, { 261, 61 }};
static const XRect _Const0009 = {{ 242, 12 }, { 272, 42 }};
static const XRect _Const000A = {{ 6, 99 }, { 266, 144 }};
static const XRect _Const000B = {{ 1, 457 }, { 273, 937 }};
static const XPoint _Const000C = { 0, 0 };
static const XStringRes _Const000D = { _StringsDefault0, 0x000B };
static const XRect _Const000E = {{ 0, 0 }, { 250, 32 }};
static const XPoint _Const000F = { 0, 32 };
static const XPoint _Const0010 = { 250, 32 };
static const XPoint _Const0011 = { 250, 0 };
static const XColor _Const0012 = { 0xFD, 0xFD, 0xFD, 0xC8 };
static const XColor _Const0013 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0014 = {{ 39, 3 }, { 130, 33 }};
static const XRect _Const0015 = {{ 129, 3 }, { 244, 33 }};
static const XRect _Const0016 = {{ 6, 4 }, { 31, 29 }};
static const XRect _Const0017 = {{ 231, 10 }, { 244, 22 }};
static const XStringRes _Const0018 = { _StringsDefault0, 0x000F };
static const XPoint _Const0019 = { 266, 287 };
static const XPoint _Const001A = { 8, 287 };
static const XColor _Const001B = { 0xE2, 0xE2, 0xE2, 0xFD };
static const XRect _Const001C = {{ 20, 258 }, { 264, 287 }};
static const XColor _Const001D = { 0xFF, 0xFF, 0xFF, 0x00 };
static const XStringRes _Const001E = { _StringsDefault0, 0x0014 };
static const XRect _Const001F = {{ 8, 232 }, { 266, 265 }};
static const XPoint _Const0020 = { 266, 232 };
static const XPoint _Const0021 = { 8, 232 };
static const XRect _Const0022 = {{ 51, 145 }, { 101, 220 }};
static const XRect _Const0023 = {{ 111, 145 }, { 161, 220 }};
static const XRect _Const0024 = {{ 171, 145 }, { 221, 220 }};
static const XRect _Const0025 = {{ 8, 98 }, { 265, 145 }};
static const XStringRes _Const0026 = { _StringsDefault0, 0x0023 };
static const XRect _Const0027 = {{ 101, 22 }, { 171, 113 }};
static const XRect _Const0028 = {{ 240, 4 }, { 265, 29 }};
static const XRect _Const0029 = {{ 7, 4 }, { 32, 29 }};
static const XRect _Const002A = {{ 60, 233 }, { 84, 263 }};
static const XPoint _Const002B = { 265, 289 };
static const XPoint _Const002C = { 7, 289 };
static const XRect _Const002D = {{ 3, 257 }, { 269, 289 }};
static const XStringRes _Const002E = { _StringsDefault0, 0x0032 };
static const XPoint _Const002F = { 264, 256 };
static const XPoint _Const0030 = { 6, 256 };
static const XRect _Const0031 = {{ 3, 224 }, { 269, 256 }};
static const XStringRes _Const0032 = { _StringsDefault0, 0x0042 };
static const XPoint _Const0033 = { 264, 223 };
static const XPoint _Const0034 = { 6, 223 };
static const XRect _Const0035 = {{ 3, 191 }, { 269, 223 }};
static const XStringRes _Const0036 = { _StringsDefault0, 0x004F };
static const XPoint _Const0037 = { 264, 190 };
static const XPoint _Const0038 = { 6, 190 };
static const XRect _Const0039 = {{ 100, 78 }, { 170, 169 }};
static const XRect _Const003A = {{ 86, 7 }, { 186, 37 }};
static const XPoint _Const003B = { 3, 191 };
static const XPoint _Const003C = { 3, 224 };
static const XPoint _Const003D = { 3, 257 };
static const XRect _Const003E = {{ 5, 398 }, { 263, 431 }};
static const XRect _Const003F = {{ 7, 244 }, { 265, 273 }};
static const XStringRes _Const0040 = { _StringsDefault0, 0x005B };
static const XPoint _Const0041 = { 264, 239 };
static const XPoint _Const0042 = { 6, 239 };
static const XRect _Const0043 = {{ 6, 207 }, { 264, 240 }};
static const XPoint _Const0044 = { 263, 206 };
static const XPoint _Const0045 = { 5, 206 };
static const XRect _Const0046 = {{ 2, 174 }, { 268, 206 }};
static const XStringRes _Const0047 = { _StringsDefault0, 0x0068 };
static const XPoint _Const0048 = { 263, 173 };
static const XPoint _Const0049 = { 5, 173 };
static const XRect _Const004A = {{ 2, 141 }, { 268, 173 }};
static const XStringRes _Const004B = { _StringsDefault0, 0x0075 };
static const XPoint _Const004C = { 263, 140 };
static const XPoint _Const004D = { 5, 140 };
static const XRect _Const004E = {{ 99, 29 }, { 169, 120 }};
static const XPoint _Const004F = { 2, 141 };
static const XPoint _Const0050 = { 2, 174 };
static const XPoint _Const0051 = { 7, 244 };
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
static const XStringRes _Const0069 = { _StringsDefault0, 0x0081 };
static const XRect _Const006A = {{ 169, 80 }, { 234, 145 }};
static const XStringRes _Const006B = { _StringsDefault0, 0x0085 };
static const XRect _Const006C = {{ 104, 80 }, { 169, 145 }};
static const XStringRes _Const006D = { _StringsDefault0, 0x0089 };
static const XRect _Const006E = {{ 39, 145 }, { 104, 210 }};
static const XStringRes _Const006F = { _StringsDefault0, 0x008D };
static const XRect _Const0070 = {{ 169, 145 }, { 234, 210 }};
static const XStringRes _Const0071 = { _StringsDefault0, 0x0091 };
static const XRect _Const0072 = {{ 104, 145 }, { 169, 210 }};
static const XStringRes _Const0073 = { _StringsDefault0, 0x0095 };
static const XRect _Const0074 = {{ 39, 210 }, { 104, 275 }};
static const XStringRes _Const0075 = { _StringsDefault0, 0x0099 };
static const XRect _Const0076 = {{ 169, 210 }, { 234, 275 }};
static const XStringRes _Const0077 = { _StringsDefault0, 0x009D };
static const XRect _Const0078 = {{ 104, 210 }, { 169, 275 }};
static const XStringRes _Const0079 = { _StringsDefault0, 0x00A1 };
static const XRect _Const007A = {{ 39, 275 }, { 104, 340 }};
static const XStringRes _Const007B = { _StringsDefault0, 0x00A5 };
static const XRect _Const007C = {{ 169, 275 }, { 234, 340 }};
static const XStringRes _Const007D = { _StringsDefault0, 0x00A9 };
static const XRect _Const007E = {{ 104, 275 }, { 169, 340 }};
static const XStringRes _Const007F = { _StringsDefault0, 0x00AD };
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
static const XStringRes _Const008A = { _StringsDefault0, 0x00B1 };
static const XRect _Const008B = {{ 0, 80 }, { 272, 340 }};
static const XColor _Const008C = { 0x83, 0x83, 0x83, 0xFA };
static const XColor _Const008D = { 0x4F, 0x4F, 0x4F, 0xFF };
static const XColor _Const008E = { 0x89, 0x89, 0x89, 0xFF };
static const XColor _Const008F = { 0x3C, 0x3C, 0x3C, 0xFF };
static const XRect _Const0090 = {{ 39, 32 }, { 234, 64 }};
static const XRect _Const0091 = {{ 11, 134 }, { 261, 440 }};
static const XRect _Const0092 = {{ 12, 134 }, { 261, 440 }};
static const XRect _Const0093 = {{ 236, 108 }, { 262, 134 }};
static const XRect _Const0094 = {{ 210, 108 }, { 236, 134 }};
static const XRect _Const0095 = {{ 11, 12 }, { 261, 61 }};
static const XRect _Const0096 = {{ 180, 15 }, { 210, 45 }};
static const XRect _Const0097 = {{ 216, 15 }, { 282, 40 }};
static const XRect _Const0098 = {{ 171, 340 }, { 236, 432 }};
static const XRect _Const0099 = {{ 11, 95 }, { 261, 408 }};
static const XRect _Const009A = {{ 11, 42 }, { 261, 76 }};
static const XRect _Const009B = {{ 11, 12 }, { 41, 42 }};
static const XRect _Const009C = {{ 228, 12 }, { 263, 37 }};
static const XStringRes _Const009D = { _StringsDefault0, 0x00D1 };
static const XStringRes _Const009E = { _StringsDefault0, 0x00D8 };
static const XRect _Const009F = {{ 226, 12 }, { 261, 37 }};
static const XRect _Const00A0 = {{ 202, 24 }, { 268, 49 }};
static const XRect _Const00A1 = {{ 12, 0 }, { 261, 30 }};
static const XStringRes _Const00A2 = { _StringsDefault0, 0x00DF };
static const XPoint _Const00A3 = { 217, 32 };
static const XPoint _Const00A4 = { 217, 0 };
static const XRect _Const00A5 = {{ 44, 8 }, { 113, 26 }};
static const XRect _Const00A6 = {{ 250, 0 }, { 316, 32 }};
static const XRect _Const00A7 = {{ 217, 5 }, { 242, 30 }};
static const XRect _Const00A8 = {{ 131, 8 }, { 201, 26 }};
static const XStringRes _Const00A9 = { _StringsDefault0, 0x0104 };
static const XRect _Const00AA = {{ -25, 5 }, { 0, 30 }};
static const XRect _Const00AB = {{ 0, 0 }, { 250, 50 }};
static const XRect _Const00AC = {{ 0, 0 }, { 250, 52 }};
static const XPoint _Const00AD = { 25, 52 };
static const XPoint _Const00AE = { 205, 52 };
static const XPoint _Const00AF = { 205, 0 };
static const XPoint _Const00B0 = { 25, 0 };
static const XPoint _Const00B1 = { 250, 50 };
static const XPoint _Const00B2 = { 0, 50 };
static const XRect _Const00B3 = {{ 32, 4 }, { 114, 22 }};
static const XStringRes _Const00B4 = { _StringsDefault0, 0x0110 };
static const XRect _Const00B5 = {{ 114, 4 }, { 220, 22 }};
static const XRect _Const00B6 = {{ 32, 33 }, { 101, 47 }};
static const XStringRes _Const00B7 = { _StringsDefault0, 0x011B };
static const XRect _Const00B8 = {{ 162, 22 }, { 220, 36 }};
static const XStringRes _Const00B9 = { _StringsDefault0, 0x0127 };
static const XRect _Const00BA = {{ 225, 2 }, { 250, 27 }};
static const XRect _Const00BB = {{ 0, 17 }, { 25, 42 }};
static const XRect _Const00BC = {{ -25, 11 }, { 0, 36 }};
static const XRect _Const00BD = {{ 250, 1 }, { 316, 51 }};
static const XPoint _Const00BE = { 265, 371 };
static const XPoint _Const00BF = { 7, 371 };
static const XRect _Const00C0 = {{ 19, 342 }, { 263, 371 }};
static const XRect _Const00C1 = {{ 7, 316 }, { 265, 349 }};
static const XPoint _Const00C2 = { 265, 316 };
static const XPoint _Const00C3 = { 7, 316 };
static const XPoint _Const00C4 = { 265, 237 };
static const XPoint _Const00C5 = { 7, 237 };
static const XRect _Const00C6 = {{ 8, 246 }, { 263, 267 }};
static const XStringRes _Const00C7 = { _StringsDefault0, 0x012F };
static const XRect _Const00C8 = {{ 67, 267 }, { 263, 289 }};
static const XStringRes _Const00C9 = { _StringsDefault0, 0x013D };
static const XRect _Const00CA = {{ 7, 267 }, { 67, 289 }};
static const XStringRes _Const00CB = { _StringsDefault0, 0x014D };
static const XRect _Const00CC = {{ 67, 289 }, { 263, 311 }};
static const XStringRes _Const00CD = { _StringsDefault0, 0x0157 };
static const XStringRes _Const00CE = { _StringsDefault0, 0x0164 };
static const XStringRes _Const00CF = { _StringsDefault0, 0x016F };
static const XRect _Const00D0 = {{ 36, 340 }, { 101, 432 }};
static const XRect _Const00D1 = {{ 18, 73 }, { 91, 103 }};
static const XStringRes _Const00D2 = { _StringsDefault0, 0x017A };
static const XRect _Const00D3 = {{ 18, 42 }, { 171, 72 }};
static const XRect _Const00D4 = {{ 184, 28 }, { 254, 119 }};
static const XRect _Const00D5 = {{ 0, 400 }, { 272, 440 }};
static const XRect _Const00D6 = {{ 0, 400 }, { 68, 440 }};
static const XRect _Const00D7 = {{ 68, 400 }, { 136, 440 }};
static const XRect _Const00D8 = {{ 136, 400 }, { 204, 440 }};
static const XRect _Const00D9 = {{ 204, 400 }, { 272, 440 }};
static const XRect _Const00DA = {{ 170, 14 }, { 236, 39 }};
static const XRect _Const00DB = {{ 0, 0 }, { 260, 45 }};
static const XPoint _Const00DC = { 0, 41 };
static const XPoint _Const00DD = { 260, 41 };
static const XPoint _Const00DE = { 260, 0 };
static const XRect _Const00DF = {{ 59, 2 }, { 255, 32 }};
static const XRect _Const00E0 = {{ 59, 24 }, { 156, 44 }};
static const XRect _Const00E1 = {{ 6, 0 }, { 56, 48 }};
static const XRect _Const00E2 = {{ 0, 0 }, { 273, 480 }};
static const XRect _Const00E3 = {{ 0, 122 }, { 272, 466 }};
static const XRect _Const00E4 = {{ 3, 80 }, { 269, 112 }};
static const XRect _Const00E5 = {{ 11, 40 }, { 264, 80 }};
static const XRect _Const00E6 = {{ 239, 15 }, { 264, 40 }};
static const XRect _Const00E7 = {{ 11, 15 }, { 59, 40 }};
static const XRect _Const00E8 = {{ 62, 15 }, { 109, 40 }};
static const XRect _Const00E9 = {{ 11, 122 }, { 272, 466 }};
static const XRect _Const00EA = {{ 1, 500 }, { 273, 980 }};
static const XStringRes _Const00EB = { _StringsDefault0, 0x0187 };
static const XPoint _Const00EC = { 0, 11 };
static const XStringRes _Const00ED = { _StringsDefault0, 0x0190 };
static const XStringRes _Const00EE = { _StringsDefault0, 0x019A };
static const XRect _Const00EF = {{ 0, 0 }, { 269, 45 }};
static const XPoint _Const00F0 = { 0, 44 };
static const XPoint _Const00F1 = { 269, 44 };
static const XPoint _Const00F2 = { 269, 0 };
static const XRect _Const00F3 = {{ 251, -3 }, { 276, 22 }};
static const XRect _Const00F4 = {{ 145, 3 }, { 258, 15 }};
static const XPoint _Const00F5 = { 269, 45 };
static const XPoint _Const00F6 = { 50, 44 };
static const XRect _Const00F7 = {{ 56, 24 }, { 257, 44 }};
static const XRect _Const00F8 = {{ 56, 2 }, { 232, 24 }};
static const XStringRes _Const00F9 = { _StringsDefault0, 0x019E };
static const XRect _Const00FA = {{ 0, 0 }, { 50, 48 }};
static const XRect _Const00FB = {{ -35, 7 }, { 0, 42 }};
static const XPoint _Const00FC = { 50, 0 };
static const XRect _Const00FD = {{ 0, -3 }, { 50, 47 }};
static const XRect _Const00FE = {{ 0, 69 }, { 272, 435 }};
static const XRect _Const00FF = {{ 0, 0 }, { 272, 60 }};
static const XPoint _Const0100 = { 272, 60 };
static const XPoint _Const0101 = { 0, 60 };
static const XRect _Const0102 = {{ 3, 441 }, { 269, 473 }};
static const XRect _Const0103 = {{ 241, 4 }, { 266, 29 }};
static const XRect _Const0104 = {{ 90, 5 }, { 182, 60 }};
static const XStringRes _Const0105 = { _StringsDefault0, 0x01A5 };
static const XRect _Const0106 = {{ 0, 0 }, { 272, 55 }};
static const XRect _Const0107 = {{ -2, 0 }, { 272, 50 }};
static const XPoint _Const0108 = { 272, 0 };
static const XPoint _Const0109 = { 272, 48 };
static const XPoint _Const010A = { 0, 48 };
static const XRect _Const010B = {{ 34, 60 }, { 239, 150 }};
static const XPoint _Const010C = { 220, 0 };
static const XRect _Const010D = {{ 186, 9 }, { 202, 21 }};
static const XStringRes _Const010E = { _StringsDefault0, 0x01AE };
static const XRect _Const010F = {{ 221, 10 }, { 268, 35 }};
static const XStringRes _Const0110 = { _StringsDefault0, 0x01B5 };
static const XPoint _Const0111 = { 10, 10 };
static const XRect _Const0112 = {{ 0, 100 }, { 272, 481 }};
static const XRect _Const0113 = {{ 11, 111 }, { 261, 435 }};
static const XRect _Const0114 = {{ 12, 100 }, { 261, 435 }};
static const XRect _Const0115 = {{ 3, 4 }, { 53, 79 }};
static const XStringRes _Const0116 = { _StringsDefault0, 0x01BE };
static const XColor _Const0117 = { 0xAA, 0xAA, 0xAA, 0xFF };
static const XRect _Const0118 = {{ 0, 420 }, { 272, 480 }};
static const XColor _Const0119 = { 0x94, 0x94, 0x94, 0x96 };
static const XColor _Const011A = { 0xB9, 0xB9, 0xB9, 0xAD };
static const XColor _Const011B = { 0xC3, 0xC3, 0xC3, 0xB0 };
static const XColor _Const011C = { 0xCD, 0xCD, 0xCD, 0xDA };
static const XColor _Const011D = { 0x79, 0x79, 0x79, 0x86 };
static const XRect _Const011E = {{ 53, 425 }, { 103, 475 }};
static const XRect _Const011F = {{ 170, 425 }, { 220, 475 }};
static const XRect _Const0120 = {{ 195, 400 }, { 245, 450 }};
static const XColor _Const0121 = { 0x5E, 0x5E, 0x5E, 0xFF };
static const XColor _Const0122 = { 0x00, 0x00, 0x00, 0xFF };
static const XColor _Const0123 = { 0xF0, 0xF0, 0xF0, 0xFF };
static const XRect _Const0124 = {{ 101, 205 }, { 171, 275 }};
static const XPoint _Const0125 = { 1, 0 };
static const XPoint _Const0126 = { 271, 480 };
static const XPoint _Const0127 = { 0, 480 };

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
  ComponentsInputBtnEtxt__Init( &_this->SearchExt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TitleTxt, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->PlusButton, &_this->_.XObject, 0 );
  ApplicationMyCardItem__Init( &_this->MyCardItem, &_this->_.XObject, 0 );
  ApplicationContactsInsideSearch__Init( &_this->ContactsInsideSearch, &_this->_.XObject, 0 );

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
  ComponentsInputBtnEtxt_OnSetString( &_this->SearchExt, 0 );
  ComponentsInputBtnEtxt_OnSetColor( &_this->SearchExt, ResBlack );
  ComponentsInputBtnEtxt_OnSetPlaceholder( &_this->SearchExt, EwLoadString( &_Const0007 ));
  CoreRectView__OnSetBounds( &_this->TitleTxt, _Const0008 );
  ViewsText_OnSetAlignment( &_this->TitleTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TitleTxt, EwLoadString( &StringsContactsTxtx ));
  ViewsText_OnSetColor( &_this->TitleTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->PlusButton, _Const0009 );
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
  CoreRectView__OnSetBounds( &_this->MyCardItem, _Const000A );
  CoreRectView__OnSetBounds( &_this->ContactsInsideSearch, _Const000B );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UpButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DownButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SearchExt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PlusButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MyCardItem ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ContactsInsideSearch ), 0 );
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
  _this->SearchExt.OnIcon = EwNewSlot( _this, ApplicationContactsPage_onCancelSearch );
  ViewsText_OnSetFont( &_this->TitleTxt, EwLoadResource( &ResTitileFont32, ResourcesFont ));
  _this->PlusButton.Super1.OnActivate = EwNewSlot( _this, ApplicationContactsPage_onCreateContactPressed );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->PlusButton, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->PlusButton, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  _this->MyCardItem.OnActivate = EwNewSlot( _this, ApplicationContactsPage_onMyCardPress );
  _this->ContactsInsideSearch.OnSelectedContact = EwNewSlot( _this, ApplicationContactsPage_onFilteredContactPressed );

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
  ComponentsInputBtnEtxt__ReInit( &_this->SearchExt );
  ViewsText__ReInit( &_this->TitleTxt );
  ComponentsSButton25x25__ReInit( &_this->PlusButton );
  ApplicationMyCardItem__ReInit( &_this->MyCardItem );
  ApplicationContactsInsideSearch__ReInit( &_this->ContactsInsideSearch );
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
  ComponentsInputBtnEtxt__Done( &_this->SearchExt );
  ViewsText__Done( &_this->TitleTxt );
  ComponentsSButton25x25__Done( &_this->PlusButton );
  ApplicationMyCardItem__Done( &_this->MyCardItem );
  ApplicationContactsInsideSearch__Done( &_this->ContactsInsideSearch );

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

  EwAttachRefObserver( EwNewSlot( _this, ApplicationContactsPage_onUpdate ), EwNewRef( 
    &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, DeviceContactsList_OnGetNoOfItems, 
    DeviceContactsList_OnSetNoOfItems ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationContactsPage_onUpdate ), ((XObject)_this ));
  EwAttachRefObserver( EwNewSlot( _this, ApplicationContactsPage_onUpdate ), EwNewRef( 
    &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, DeviceContactsList_OnGetSorting, 
    DeviceContactsList_OnSetSorting ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationContactsPage_onUpdate ), ((XObject)_this ));
  EwAttachRefObserver( EwNewSlot( _this, ApplicationContactsPage_onUpdate ), EwNewRef( 
    EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), DeviceDeviceClass_OnGetMyContact, 
    DeviceDeviceClass_OnSetMyContact ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationContactsPage_onUpdate ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::ContactsPage.onCreateContactPressed()' */
void ApplicationContactsPage_onCreateContactPressed( ApplicationContactsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->createContact = EwNewObject( ApplicationAddContactPage, 0 );
  _this->createContact->OnSave = EwNewSlot( _this, ApplicationContactsPage_onSaveAdd );
  _this->createContact->OnClose = EwNewSlot( _this, ApplicationContactsPage_onCancelAdd );
  ApplicationAddContactPage_OnSetContact( _this->createContact, EwNewObject( DeviceContact, 
  0 ));
  CoreGroup__SwitchToDialog( _this, ((CoreGroup)_this->createContact ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideUpCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::ContactsPage.onSaveAdd()' */
void ApplicationContactsPage_onSaveAdd( ApplicationContactsPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceContactsList_AddLast( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
  _this->createContact->Contact );
  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->createContact ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->createContact = 0;
}

/* 'C' function for method : 'Application::ContactsPage.onCancelAdd()' */
void ApplicationContactsPage_onCancelAdd( ApplicationContactsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->createContact ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::ContactsPage.onDelete()' */
void ApplicationContactsPage_onDelete( ApplicationContactsPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, ApplicationContactsPage_onUpdate ), ((XObject)_this ));
  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideRightCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::ContactsPage.onSearch()' */
void ApplicationContactsPage_onSearch( ApplicationContactsPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwCompString( ComponentsInputBtnEtxt_OnGetString( &_this->SearchExt ), 0 ) 
      != 0 )
  {
    DeviceContactsList_Search( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
    ComponentsInputBtnEtxt_OnGetString( &_this->SearchExt ));
    CoreRectView__OnSetBounds( &_this->ContactsInsideSearch, EwSetRectOrigin( _this->ContactsInsideSearch.Super2.Bounds, 
    _Const000C ));
    ComponentsInputBtnEtxt_OnSetIcon( &_this->SearchExt, EwLoadString( &ResXIcon ));
  }
  else
    EwPostSignal( EwNewSlot( _this, ApplicationContactsPage_onCancelSearch ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::ContactsPage.onClose()' */
void ApplicationContactsPage_onClose( ApplicationContactsPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideRightCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  EwPostSignal( EwNewSlot( _this, ApplicationContactsPage_onUpdate ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::ContactsPage.onUpPress()' */
void ApplicationContactsPage_onUpPress( ApplicationContactsPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  DeviceContactsList_OnSetSorting( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
  DeviceSortingAscending );
}

/* 'C' function for method : 'Application::ContactsPage.onDownPress()' */
void ApplicationContactsPage_onDownPress( ApplicationContactsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  DeviceContactsList_OnSetSorting( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
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
  contact = DeviceContactsList_GetContact( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
  itemNo );
  itemView = EwCastObject( _this->VerticalList.View, ApplicationContactItem );

  if ( itemView == 0 )
    return;

  ApplicationContactItem_OnSetContact( itemView, contact );
  itemView->OnActivate = EwNewSlot( _this, ApplicationContactsPage__onContactPressed );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->VerticalList.Super2.Bounds ), _this->VerticalList.ItemHeight )));
}

/* 'C' function for method : 'Application::ContactsPage.onContactPressed()' */
void ApplicationContactsPage_onContactPressed( ApplicationContactsPage _this, XObject 
  sender )
{
  ApplicationContactItem itemView = EwCastObject( sender, ApplicationContactItem );

  if ( itemView != 0 )
  {
    _this->detailsPage = EwNewObject( ApplicationDetailsPage, 0 );
    _this->detailsPage->OnBack = EwNewSlot( _this, ApplicationContactsPage_onClose );
    _this->detailsPage->OnDelete = EwNewSlot( _this, ApplicationContactsPage_onDelete );
    ApplicationDetailsPage_OnSetContact( _this->detailsPage, itemView->Contact );
    CoreGroup__SwitchToDialog( _this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
    &ResSlideLeftCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
    EwNullSlot, 0 );
  }
}

/* Wrapper function for the virtual method : 'Application::ContactsPage.onContactPressed()' */
void ApplicationContactsPage__onContactPressed( void* _this, XObject sender )
{
  ((ApplicationContactsPage)_this)->_.VMT->onContactPressed((ApplicationContactsPage)_this
  , sender );
}

/* 'C' function for method : 'Application::ContactsPage.onUpdate()' */
void ApplicationContactsPage_onUpdate( ApplicationContactsPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, EwGetAutoObject( &DeviceDevice, 
  DeviceDeviceClass )->Contacts.NoOfItems );
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
}

/* 'C' function for method : 'Application::ContactsPage.onMyCardPress()' */
void ApplicationContactsPage_onMyCardPress( ApplicationContactsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact != 0 )
  {
    DeviceContact contact = DeviceContactsList_FindByID( &EwGetAutoObject( &DeviceDevice, 
      DeviceDeviceClass )->Contacts, EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact );

    if ( contact != 0 )
    {
      _this->detailsPage = EwNewObject( ApplicationDetailsPage, 0 );
      _this->detailsPage->OnBack = EwNewSlot( _this, ApplicationContactsPage_onClose );
      ApplicationDetailsPage_OnSetContact( _this->detailsPage, contact );
      CoreGroup__SwitchToDialog( _this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
      &ResSlideLeftCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
      EwNullSlot, 0 );
    }
  }
}

/* 'C' function for method : 'Application::ContactsPage.onCancelSearch()' */
void ApplicationContactsPage_onCancelSearch( ApplicationContactsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceContactsList_CancelSearch( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts );
  CoreRectView__OnSetBounds( &_this->ContactsInsideSearch, EwSetRectY( _this->ContactsInsideSearch.Super2.Bounds, 
  _this->Super2.Bounds.Point2.Y ));
  ViewsText_OnSetString( &_this->SearchExt.Text, EwLoadString( &_Const000D ));
  ComponentsInputBtnEtxt_OnSetIcon( &_this->SearchExt, EwLoadString( &ResSerachIcon ));
}

/* 'C' function for method : 'Application::ContactsPage.onFilteredContactPressed()' */
void ApplicationContactsPage_onFilteredContactPressed( ApplicationContactsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->detailsPage = EwNewObject( ApplicationDetailsPage, 0 );
  _this->detailsPage->OnBack = EwNewSlot( _this, ApplicationContactsPage_onClose );
  _this->detailsPage->OnDelete = EwNewSlot( _this, ApplicationContactsPage_onDelete );
  ApplicationDetailsPage_OnSetContact( _this->detailsPage, _this->ContactsInsideSearch.Contact );
  CoreGroup__SwitchToDialog( _this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideLeftCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::ContactsPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactsPage )
EW_END_OF_CLASS_VARIANTS( ApplicationContactsPage )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsPage' */
EW_DEFINE_CLASS( ApplicationContactsPage, CoreGroup, Background, createContact, 
                 _.VMT, _.VMT, _.VMT, _.VMT, "Application::ContactsPage" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
  ApplicationContactsPage_onContactPressed,
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
  CoreRectView__OnSetBounds( _this, _Const000E );
  _this->ButtonColor = ResWhite;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  _this->TextColor = ResBlack;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const000F );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0010 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0011 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const000C );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Background, _Const000E );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const0012 );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const0012 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0013 );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const0014 );
  ViewsText_OnSetAlignment( &_this->LastNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->LastNameTxt, 0 );
  ViewsText_OnSetColor( &_this->LastNameTxt, ResBlack );
  CoreView_OnSetStackingPriority((CoreView)&_this->FirstNameTxt, 0 );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const0015 );
  ViewsText_OnSetAlignment( &_this->FirstNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->FirstNameTxt, 0 );
  ViewsText_OnSetColor( &_this->FirstNameTxt, ResBlack );
  CoreView_OnSetLayout((CoreView)&_this->Line, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const0010 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const000F );
  ViewsLine_OnSetWidth( &_this->Line, 2 );
  ViewsLine_OnSetColor( &_this->Line, ResGreyLight );
  CoreRectView__OnSetBounds( &_this->PrfofilButton, _Const0016 );
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->PrfofilButton, 
  ResWhite );
  CoreView_OnSetLayout((CoreView)&_this->Line1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const0011 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const000C );
  ViewsLine_OnSetWidth( &_this->Line1, 2 );
  ViewsLine_OnSetColor( &_this->Line1, ResGreyLight );
  CoreRectView__OnSetBounds( &_this->MeTxt, _Const0017 );
  ViewsText_OnSetAutoSize( &_this->MeTxt, 1 );
  ViewsText_OnSetAlignment( &_this->MeTxt, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MeTxt, EwLoadString( &_Const0018 ));
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
    EwNewRef( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), DeviceDeviceClass_OnGetMyContact, 
    DeviceDeviceClass_OnSetMyContact ), 0 );
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

    if (( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact != 0 ) 
        && ( _this->Contact->ID == EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact->ID ))
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
EW_DEFINE_CLASS( ApplicationContactItem, CoreGroup, FlashTimer, Contact, OnActivate, 
                 ButtonColor, ButtonColor, ButtonColor, "Application::ContactItem" )
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
  ApplicationContactItem_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationContactItem )

/* Initializer for the class 'Application::DetailsPage' */
void ApplicationDetailsPage__Init( ApplicationDetailsPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationDetailsPage );

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
  _this->_.VMT = EW_CLASS( ApplicationDetailsPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const0019 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const001A );
  ViewsLine_OnSetColor( &_this->Line2, _Const001B );
  CoreView_OnSetLayout((CoreView)&_this->NumberTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->NumberTxt, _Const001C );
  ViewsText_OnSetColorBR( &_this->NumberTxt, _Const001D );
  ViewsText_OnSetAlignment( &_this->NumberTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->NumberTxt, EwLoadString( &_Const001E ));
  ViewsText_OnSetColor( &_this->NumberTxt, ResBlue );
  CoreView_OnSetLayout((CoreView)&_this->MobileTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->MobileTxt, _Const001F );
  ViewsText_OnSetAlignment( &_this->MobileTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MobileTxt, EwLoadString( &StringsMobileTxt ));
  ViewsText_OnSetColor( &_this->MobileTxt, ResBlack );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const0020 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const0021 );
  ViewsLine_OnSetColor( &_this->Line1, _Const001B );
  CoreRectView__OnSetBounds( &_this->CallBtn, _Const0022 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->CallBtn, 
  EwLoadString( &ResCallIcon ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->CallBtn, 
  EwLoadString( &StringscallTxt ));
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->CallBtn, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->CallBtn, 
  ResBlueLight );
  CoreRectView__OnSetBounds( &_this->VideoCallBtn, _Const0023 );
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
  CoreRectView__OnSetBounds( &_this->PushButtonMediumBlue2, _Const0024 );
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
  CoreRectView__OnSetBounds( &_this->ContactName, _Const0025 );
  ViewsText_OnSetAlignment( &_this->ContactName, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ContactName, EwLoadString( &_Const0026 ));
  ViewsText_OnSetColor( &_this->ContactName, ResBlack );
  CoreRectView__OnSetBounds( &_this->UserInitialsBtn, _Const0027 );
  CoreRectView__OnSetBounds( &_this->EditBtn, _Const0028 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->EditBtn, 
  EwLoadString( &ResEditIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->EditBtn, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->EditBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->EditBtn, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->BackBtn, _Const0029 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->BackBtn, 
  EwLoadString( &ResBackIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->BackBtn, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->BackBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->BackBtn, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->FavoritTxt, _Const002A );
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
  _this->CallBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationDetailsPage_onCall );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->CallBtn, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->CallBtn, 
  EwLoadResource( &ResButtonRoundMedium, ResourcesBitmap ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  EwLoadResource( &ResButtonRoundMedium, ResourcesBitmap ));
  _this->PushButtonMediumBlue2.Super1.OnActivate = EwNewSlot( _this, ApplicationDetailsPage_onTapMessage );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->PushButtonMediumBlue2, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->PushButtonMediumBlue2, 
  EwLoadResource( &ResButtonRoundMedium, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->ContactName, EwLoadResource( &ResTitileFont29, ResourcesFont ));
  _this->EditBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationDetailsPage__onTapEdit );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->EditBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->EditBtn, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  _this->BackBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationDetailsPage_onBackHome );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->BackBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->BackBtn, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->FavoritTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::DetailsPage' */
void ApplicationDetailsPage__ReInit( ApplicationDetailsPage _this )
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

/* Finalizer method for the class 'Application::DetailsPage' */
void ApplicationDetailsPage__Done( ApplicationDetailsPage _this )
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

/* 'C' function for method : 'Application::DetailsPage.onTapEdit()' */
void ApplicationDetailsPage_onTapEdit( ApplicationDetailsPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->editPage = EwNewObject( ApplicationEditPage, 0 );
  _this->editPage->OnSave = EwNewSlot( _this, ApplicationDetailsPage_onSaveEdit );
  _this->editPage->OnClose = EwNewSlot( _this, ApplicationDetailsPage_onCancelEdit );
  ApplicationEditPage_OnSetContact( _this->editPage, _this->Contact );
  _this->editPage->OnDelete = EwNewSlot( _this, ApplicationDetailsPage_onDelete );
  CoreGroup__SwitchToDialog( _this, ((CoreGroup)_this->editPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideLeftCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* Wrapper function for the virtual method : 'Application::DetailsPage.onTapEdit()' */
void ApplicationDetailsPage__onTapEdit( void* _this, XObject sender )
{
  ((ApplicationDetailsPage)_this)->_.VMT->onTapEdit((ApplicationDetailsPage)_this
  , sender );
}

/* 'C' function for method : 'Application::DetailsPage.onDelete()' */
void ApplicationDetailsPage_onDelete( ApplicationDetailsPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnDelete, ((XObject)_this ));
  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->editPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::DetailsPage.onCall()' */
void ApplicationDetailsPage_onCall( ApplicationDetailsPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_SendCallFromContact( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  _this->Contact );
}

/* 'C' function for method : 'Application::DetailsPage.onSaveEdit()' */
void ApplicationDetailsPage_onSaveEdit( ApplicationDetailsPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->editPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::DetailsPage.onCancelEdit()' */
void ApplicationDetailsPage_onCancelEdit( ApplicationDetailsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->editPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::DetailsPage.onBackHome()' */
void ApplicationDetailsPage_onBackHome( ApplicationDetailsPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnBack, ((XObject)_this ));
}

/* 'C' function for method : 'Application::DetailsPage.OnSetContact()' */
void ApplicationDetailsPage_OnSetContact( ApplicationDetailsPage _this, DeviceContact 
  value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationDetailsPage__onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationDetailsPage__onContactUpdated ), 
      (XObject)_this->Contact, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationDetailsPage__onContactUpdated ), 
      ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::DetailsPage.onContactUpdated()' */
void ApplicationDetailsPage_onContactUpdated( ApplicationDetailsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Contact != 0 )
  {
    ViewsText_OnSetString( &_this->ContactName, EwConcatString( EwConcatString( 
    _this->Contact->LastName, EwLoadString( &_Const000D )), _this->Contact->FirstName ));
    ViewsText_OnSetString( &_this->NumberTxt, _this->Contact->PhoneNumber );
    ComponentsButtonBase70x90_OnSetIcon( &_this->UserInitialsBtn, _this->Contact->NameInitials );
    ViewsText_OnSetVisible( &_this->FavoritTxt, ( _this->Contact->IsFavorite? 1 
    : 0 ));
  }
}

/* Wrapper function for the virtual method : 'Application::DetailsPage.onContactUpdated()' */
void ApplicationDetailsPage__onContactUpdated( void* _this, XObject sender )
{
  ((ApplicationDetailsPage)_this)->_.VMT->onContactUpdated((ApplicationDetailsPage)_this
  , sender );
}

/* 'C' function for method : 'Application::DetailsPage.onTapMessage()' */
void ApplicationDetailsPage_onTapMessage( ApplicationDetailsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->chat = EwNewObject( ApplicationChatPage, 0 );
  ApplicationChatPage_OnSetContact( _this->chat, _this->Contact );
  _this->chat->OnBack = EwNewSlot( _this, ApplicationDetailsPage_onBack );
  CoreGroup__SwitchToDialog( _this->Super3.Owner->Super2.Owner->Super2.Owner, ((CoreGroup)_this->chat ), 
  ((EffectsTransition)EwGetAutoObject( &ResSlideLeftCentered, EffectsSlideTransition )), 
  0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::DetailsPage.onBack()' */
void ApplicationDetailsPage_onBack( ApplicationDetailsPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__DismissDialog( _this->Super3.Owner->Super2.Owner->Super2.Owner, ((CoreGroup)_this->chat ), 
  ((EffectsTransition)EwGetAutoObject( &ResFadeInOutCentered, EffectsFadeInOutTransition )), 
  0, 0, EwNullSlot, EwNullSlot, 0 );
  _this->chat = 0;
}

/* Variants derived from the class : 'Application::DetailsPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationDetailsPage )
EW_END_OF_CLASS_VARIANTS( ApplicationDetailsPage )

/* Virtual Method Table (VMT) for the class : 'Application::DetailsPage' */
EW_DEFINE_CLASS( ApplicationDetailsPage, CoreGroup, Background, editPage, OnDelete, 
                 _.VMT, _.VMT, _.VMT, "Application::DetailsPage" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
  ApplicationDetailsPage_onTapEdit,
  ApplicationDetailsPage_onContactUpdated,
EW_END_OF_CLASS( ApplicationDetailsPage )

/* Initializer for the class 'Application::AddContactPage' */
void ApplicationAddContactPage__Init( ApplicationAddContactPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationAddContactPage );

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

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationAddContactPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const002B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const002C );
  ViewsLine_OnSetColor( &_this->Line4, _Const001B );
  CoreView_OnSetLayout((CoreView)&_this->PhoneNumberTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->PhoneNumberTxt, _Const002D );
  ComponentsInputEtxt_OnSetString( &_this->PhoneNumberTxt, 0 );
  ComponentsInputEtxt_OnSetColor( &_this->PhoneNumberTxt, ResBlue );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->PhoneNumberTxt, EwLoadString( &_Const002E ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line3, _Const002F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line3, _Const0030 );
  ViewsLine_OnSetColor( &_this->Line3, _Const001B );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const0031 );
  ComponentsInputEtxt_OnSetString( &_this->FirstNameTxt, 0 );
  ComponentsInputEtxt_OnSetColor( &_this->FirstNameTxt, ResBlack );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->FirstNameTxt, EwLoadString( &_Const0032 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const0033 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const0034 );
  ViewsLine_OnSetColor( &_this->Line2, _Const001B );
  CoreView_OnSetLayout((CoreView)&_this->LastNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const0035 );
  ComponentsInputEtxt_OnSetAlignment( &_this->LastNameTxt, 0 );
  ComponentsInputEtxt_OnSetString( &_this->LastNameTxt, 0 );
  ComponentsInputEtxt_OnSetColor( &_this->LastNameTxt, ResBlack );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->LastNameTxt, EwLoadString( &_Const0036 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const0037 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const0038 );
  ViewsLine_OnSetColor( &_this->Line1, _Const001B );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const0039 );
  ComponentsButtonBase70x90_OnSetDescript( &_this->UserInitials, EwLoadString( &StringsAddPhototTxt ));
  CoreRectView__OnSetBounds( &_this->TitleTxt, _Const003A );
  ViewsText_OnSetString( &_this->TitleTxt, EwLoadString( &StringsNewContactTxt ));
  ViewsText_OnSetColor( &_this->TitleTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->SaveBtn, _Const0028 );
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
  CoreRectView__OnSetBounds( &_this->CloseButton, _Const0029 );
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
  _this->PhoneNumberTxt.OnChange = EwNewSlot( _this, ApplicationAddContactPage_onFieldChanged );
  _this->FirstNameTxt.OnChange = EwNewSlot( _this, ApplicationAddContactPage_onFieldChanged );
  _this->LastNameTxt.OnChange = EwNewSlot( _this, ApplicationAddContactPage_onFieldChanged );
  ViewsText_OnSetFont( &_this->TitleTxt, EwLoadResource( &ResContactFontBold15, 
  ResourcesFont ));
  _this->SaveBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationAddContactPage_onSave );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->SaveBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->SaveBtn, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  _this->CloseButton.Super1.OnActivate = EwNewSlot( _this, ApplicationAddContactPage_onClose );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->CloseButton, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->CloseButton, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
}

/* Re-Initializer for the class 'Application::AddContactPage' */
void ApplicationAddContactPage__ReInit( ApplicationAddContactPage _this )
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
}

/* Finalizer method for the class 'Application::AddContactPage' */
void ApplicationAddContactPage__Done( ApplicationAddContactPage _this )
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
void ApplicationAddContactPage_UpdateLayout( ApplicationAddContactPage _this, XPoint 
  aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, EwSetRectOrigin( _this->LastNameTxt.Super3.Bounds, 
  _Const003B ));
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, EwSetRectOrigin( _this->FirstNameTxt.Super3.Bounds, 
  _Const003C ));
  CoreRectView__OnSetBounds( &_this->PhoneNumberTxt, EwSetRectOrigin( _this->PhoneNumberTxt.Super3.Bounds, 
  _Const003D ));
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
void ApplicationAddContactPage_UpdateViewState( ApplicationAddContactPage _this, 
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

/* 'C' function for method : 'Application::AddContactPage.onSave()' */
void ApplicationAddContactPage_onSave( ApplicationAddContactPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNotifyObjObservers((XObject)_this->Contact, 0 );
  EwSignal( _this->OnSave, ((XObject)_this ));
}

/* 'C' function for method : 'Application::AddContactPage.OnSetContact()' */
void ApplicationAddContactPage_OnSetContact( ApplicationAddContactPage _this, DeviceContact 
  value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationAddContactPage_onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationAddContactPage_onContactUpdated ), 
      (XObject)_this->Contact, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationAddContactPage_onContactUpdated ), 
      ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::AddContactPage.onContactUpdated()' */
void ApplicationAddContactPage_onContactUpdated( ApplicationAddContactPage _this, 
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
  DeviceContact_OnSetNameInitials( _this->Contact, DeviceContactsList_GetInitials( 
  &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, ComponentsInputEtxt_OnGetString( 
  &_this->LastNameTxt ), ComponentsInputEtxt_OnGetString( &_this->FirstNameTxt )));

  if ( !EwCompString( _this->Contact->LastName, 0 ) && !EwCompString( _this->Contact->FirstName, 
      0 ))
    DeviceContact_OnSetLastName( _this->Contact, _this->Contact->PhoneNumber );
}

/* 'C' function for method : 'Application::AddContactPage.onClose()' */
void ApplicationAddContactPage_onClose( ApplicationAddContactPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnClose, ((XObject)_this ));
}

/* 'C' function for method : 'Application::AddContactPage.onFieldChanged()' */
void ApplicationAddContactPage_onFieldChanged( ApplicationAddContactPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ComponentsButtonBase70x90_OnSetIcon( &_this->UserInitials, DeviceContactsList_GetInitials( 
  &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, ComponentsInputEtxt_OnGetString( 
  &_this->LastNameTxt ), ComponentsInputEtxt_OnGetString( &_this->FirstNameTxt )));
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::AddContactPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationAddContactPage )
EW_END_OF_CLASS_VARIANTS( ApplicationAddContactPage )

/* Virtual Method Table (VMT) for the class : 'Application::AddContactPage' */
EW_DEFINE_CLASS( ApplicationAddContactPage, CoreGroup, Background, Contact, OnSave, 
                 _.VMT, _.VMT, _.VMT, "Application::AddContactPage" )
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
  ApplicationAddContactPage_UpdateLayout,
  ApplicationAddContactPage_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationAddContactPage )

/* Initializer for the class 'Application::EditPage' */
void ApplicationEditPage__Init( ApplicationEditPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationEditPage );

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

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationEditPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreRectView__OnSetBounds( &_this->DeleteBtn, _Const003E );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->DeleteBtn, 1 );
  ComponentsButton265x470_OnSetString( &_this->DeleteBtn, EwLoadString( &StringsDeleteContactTxt ));
  CoreView_OnSetLayout((CoreView)&_this->NumberTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->NumberTxt, _Const003F );
  ComponentsInputEtxt_OnSetAlignment( &_this->NumberTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ComponentsInputEtxt_OnSetString( &_this->NumberTxt, EwLoadString( &_Const0040 ));
  ComponentsInputEtxt_OnSetColor( &_this->NumberTxt, ResBlue );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->NumberTxt, EwLoadString( &_Const0040 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const0041 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const0042 );
  ViewsLine_OnSetColor( &_this->Line4, _Const001B );
  CoreView_OnSetLayout((CoreView)&_this->MobileTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->MobileTxt, _Const0043 );
  ViewsText_OnSetAlignment( &_this->MobileTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MobileTxt, EwLoadString( &StringsMobileTxt ));
  ViewsText_OnSetColor( &_this->MobileTxt, ResGrey );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line3, _Const0044 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line3, _Const0045 );
  ViewsLine_OnSetColor( &_this->Line3, _Const001B );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const0046 );
  ComponentsInputEtxt_OnSetString( &_this->FirstNameTxt, EwLoadString( &_Const0047 ));
  ComponentsInputEtxt_OnSetColor( &_this->FirstNameTxt, ResBlack );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->FirstNameTxt, EwLoadString( &_Const0047 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const0048 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const0049 );
  ViewsLine_OnSetColor( &_this->Line2, _Const001B );
  CoreView_OnSetLayout((CoreView)&_this->LastNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const004A );
  ComponentsInputEtxt_OnSetString( &_this->LastNameTxt, EwLoadString( &_Const004B ));
  ComponentsInputEtxt_OnSetColor( &_this->LastNameTxt, ResBlack );
  ComponentsInputEtxt_OnSetPlaceholder( &_this->LastNameTxt, EwLoadString( &_Const004B ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const004C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const004D );
  ViewsLine_OnSetColor( &_this->Line1, _Const001B );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const004E );
  ComponentsButtonBase70x90_OnSetIcon( &_this->UserInitials, 0 );
  ComponentsButtonBase70x90_OnSetDescript( &_this->UserInitials, EwLoadString( &StringsAddPhototTxt ));
  CoreRectView__OnSetBounds( &_this->CloseBtn, _Const0029 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->CloseBtn, 
  EwLoadString( &ResCloseIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->CloseBtn, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->CloseBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->CloseBtn, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->SaveBtn, _Const0028 );
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
  _this->DeleteBtn.OnActivate = EwNewSlot( _this, ApplicationEditPage_onDeleteContact );
  _this->NumberTxt.OnChange = EwNewSlot( _this, ApplicationEditPage_onFieldModified );
  ComponentsInputEtxt_OnSetFont( &_this->NumberTxt, EwLoadResource( &ResContactFont15, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->MobileTxt, EwLoadResource( &ResContactFont15, ResourcesFont ));
  _this->FirstNameTxt.OnChange = EwNewSlot( _this, ApplicationEditPage_onFieldModified );
  _this->LastNameTxt.OnChange = EwNewSlot( _this, ApplicationEditPage_onFieldModified );
  _this->CloseBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationEditPage_onClose );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->CloseBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->CloseBtn, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  _this->SaveBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationEditPage_onSave );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->SaveBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->SaveBtn, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
}

/* Re-Initializer for the class 'Application::EditPage' */
void ApplicationEditPage__ReInit( ApplicationEditPage _this )
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
}

/* Finalizer method for the class 'Application::EditPage' */
void ApplicationEditPage__Done( ApplicationEditPage _this )
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
void ApplicationEditPage_UpdateLayout( ApplicationEditPage _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, EwSetRectOrigin( _this->LastNameTxt.Super3.Bounds, 
  _Const004F ));
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, EwSetRectOrigin( _this->FirstNameTxt.Super3.Bounds, 
  _Const0050 ));
  CoreRectView__OnSetBounds( &_this->NumberTxt, EwSetRectOrigin( _this->NumberTxt.Super3.Bounds, 
  _Const0051 ));
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
void ApplicationEditPage_UpdateViewState( ApplicationEditPage _this, XSet aState )
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

/* 'C' function for method : 'Application::EditPage.onSave()' */
void ApplicationEditPage_onSave( ApplicationEditPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceContact_OnSetFirstName( _this->Contact, ComponentsInputEtxt_OnGetString( 
  &_this->FirstNameTxt ));
  DeviceContact_OnSetLastName( _this->Contact, ComponentsInputEtxt_OnGetString( 
  &_this->LastNameTxt ));
  DeviceContact_OnSetPhoneNumber( _this->Contact, ComponentsInputEtxt_OnGetString( 
  &_this->NumberTxt ));
  DeviceContact_OnSetNameInitials( _this->Contact, DeviceContactsList_GetInitials( 
  &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, _this->Contact->LastName, 
  _this->Contact->FirstName ));
  EwSignal( _this->OnSave, ((XObject)_this ));
}

/* 'C' function for method : 'Application::EditPage.onClose()' */
void ApplicationEditPage_onClose( ApplicationEditPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnClose, ((XObject)_this ));
}

/* 'C' function for method : 'Application::EditPage.onDeleteContact()' */
void ApplicationEditPage_onDeleteContact( ApplicationEditPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceContactsList_Remove( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
  _this->Contact );
  EwSignal( _this->OnDelete, ((XObject)_this ));
}

/* 'C' function for method : 'Application::EditPage.OnSetContact()' */
void ApplicationEditPage_OnSetContact( ApplicationEditPage _this, DeviceContact 
  value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationEditPage_onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationEditPage_onContactUpdated ), 
      (XObject)_this->Contact, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationEditPage_onContactUpdated ), ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::EditPage.onContactUpdated()' */
void ApplicationEditPage_onContactUpdated( ApplicationEditPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Contact != 0 )
  {
    ComponentsInputEtxt_OnSetString( &_this->FirstNameTxt, _this->Contact->FirstName );
    ComponentsInputEtxt_OnSetString( &_this->LastNameTxt, _this->Contact->LastName );
    ComponentsInputEtxt_OnSetString( &_this->NumberTxt, _this->Contact->PhoneNumber );
    ComponentsButtonBase70x90_OnSetIcon( &_this->UserInitials, _this->Contact->NameInitials );
  }
}

/* 'C' function for method : 'Application::EditPage.onFieldModified()' */
void ApplicationEditPage_onFieldModified( ApplicationEditPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ComponentsButtonBase70x90_OnSetIcon( &_this->UserInitials, DeviceContactsList_GetInitials( 
  &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, ComponentsInputEtxt_OnGetString( 
  &_this->LastNameTxt ), ComponentsInputEtxt_OnGetString( &_this->FirstNameTxt )));
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::EditPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationEditPage )
EW_END_OF_CLASS_VARIANTS( ApplicationEditPage )

/* Virtual Method Table (VMT) for the class : 'Application::EditPage' */
EW_DEFINE_CLASS( ApplicationEditPage, CoreGroup, Background, Contact, OnSave, _.VMT, 
                 _.VMT, _.VMT, "Application::EditPage" )
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
  ApplicationEditPage_UpdateLayout,
  ApplicationEditPage_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationEditPage )

/* Initializer for the class 'Application::OngoingCall' */
void ApplicationOngoingCall__Init( ApplicationOngoingCall _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationCallBase__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationOngoingCall );

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
  _this->_.VMT = EW_CLASS( ApplicationOngoingCall );

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
  _this->ContactsBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationOngoingCall_onContactsPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->ContactsBtn, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->ContactsBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->ContactsBtn, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->VideoCallBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationOngoingCall_onVideoCallPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->VideoCallBtn, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->AddCallBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationOngoingCall_onAddCallPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->AddCallBtn, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->AddCallBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->AddCallBtn, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->SpeakerBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationOngoingCall_onSpeakerPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->SpeakerBtn, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->SpeakerBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->SpeakerBtn, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->KeyPadBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationOngoingCall_onKeypadPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->KeyPadBtn, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->KeyPadBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->KeyPadBtn, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->MuteBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationOngoingCall_onMicPress );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->MuteBtn, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->MuteBtn, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->MuteBtn, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  _this->Keypad.Super1.OnEditTextChanged = EwNewSlot( _this, ApplicationOngoingCall_onKeypadEdit );
  _this->Stoper.OnTrigger = EwNewSlot( _this, ApplicationOngoingCall_upDateTalkDuration );

  /* Call the user defined constructor */
  ApplicationOngoingCall_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::OngoingCall' */
void ApplicationOngoingCall__ReInit( ApplicationOngoingCall _this )
{
  /* At first re-initialize the super class ... */
  ApplicationCallBase__ReInit( &_this->_.Super );

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

/* Finalizer method for the class 'Application::OngoingCall' */
void ApplicationOngoingCall__Done( ApplicationOngoingCall _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationCallBase );

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
  ApplicationCallBase__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationOngoingCall_Init( ApplicationOngoingCall _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwSignal( EwNewSlot( &_this->Stoper, CoreTimer_StartTimer ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::OngoingCall.onContactUpdated()' */
void ApplicationOngoingCall_onContactUpdated( ApplicationOngoingCall _this, XObject 
  sender )
{
  if ( _this->Super1.Contact->CallState == DeviceCallStateSpeaking )
  {
    CoreGroup_OnSetEnabled((CoreGroup)&_this->AddCallBtn, 1 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->VideoCallBtn, 1 );
  }

  ApplicationCallBase_onContactUpdated((ApplicationCallBase)_this, sender );
}

/* 'C' function for method : 'Application::OngoingCall.onSpeakerPress()' */
void ApplicationOngoingCall_onSpeakerPress( ApplicationOngoingCall _this, XObject 
  sender )
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

/* 'C' function for method : 'Application::OngoingCall.onMicPress()' */
void ApplicationOngoingCall_onMicPress( ApplicationOngoingCall _this, XObject sender )
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

/* 'C' function for method : 'Application::OngoingCall.onKeypadPress()' */
void ApplicationOngoingCall_onKeypadPress( ApplicationOngoingCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->Keypad, EwSetRectOrigin( _this->Keypad.Super3.Bounds, 
  _Const005B ));
  _this->Keypad.Super1.OnHide = EwNewSlot( _this, ApplicationOngoingCall_onHide );
}

/* 'C' function for method : 'Application::OngoingCall.onAddCallPress()' */
void ApplicationOngoingCall_onAddCallPress( ApplicationOngoingCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->addCall = EwNewObject( ApplicationContactsAppInsideCall, 0 );
  _this->addCall->OnCancel = EwNewSlot( _this, ApplicationOngoingCall_onCancel1 );
  CoreGroup__PresentDialog( _this, ((CoreGroup)_this->addCall ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideUpCenteredLimit, EffectsSlideTransition )), 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::OngoingCall.onVideoCallPress()' */
void ApplicationOngoingCall_onVideoCallPress( ApplicationOngoingCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Application::OngoingCall.onContactsPress()' */
void ApplicationOngoingCall_onContactsPress( ApplicationOngoingCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->contactsPage = EwNewObject( ApplicationContactsInsideCall, 0 );
  _this->contactsPage->OnCancel = EwNewSlot( _this, ApplicationOngoingCall_onCancel );
  CoreGroup__SwitchToDialog( _this, ((CoreGroup)_this->contactsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideUpCenteredLimit, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::OngoingCall.onCancel()' */
void ApplicationOngoingCall_onCancel( ApplicationOngoingCall _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->contactsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->contactsPage = 0;
}

/* 'C' function for method : 'Application::OngoingCall.onHide()' */
void ApplicationOngoingCall_onHide( ApplicationOngoingCall _this, XObject sender )
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

/* 'C' function for method : 'Application::OngoingCall.onKeypadEdit()' */
void ApplicationOngoingCall_onKeypadEdit( ApplicationOngoingCall _this, XObject 
  sender )
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

/* 'C' function for method : 'Application::OngoingCall.onCancel1()' */
void ApplicationOngoingCall_onCancel1( ApplicationOngoingCall _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->addCall ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->addCall = 0;
}

/* 'C' function for method : 'Application::OngoingCall.upDateTalkDuration()' */
void ApplicationOngoingCall_upDateTalkDuration( ApplicationOngoingCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super1.Contact->CallState == DeviceCallStateSpeaking )
    ViewsText_OnSetString( &_this->Super1.TimeTxt, DeviceHistoryContact_GetDuration( 
    _this->Super1.Contact ));
}

/* Variants derived from the class : 'Application::OngoingCall' */
EW_DEFINE_CLASS_VARIANTS( ApplicationOngoingCall )
EW_END_OF_CLASS_VARIANTS( ApplicationOngoingCall )

/* Virtual Method Table (VMT) for the class : 'Application::OngoingCall' */
EW_DEFINE_CLASS( ApplicationOngoingCall, ApplicationCallBase, ContactsBtn, contactsPage, 
                 _.VMT, _.VMT, _.VMT, _.VMT, "Application::OngoingCall" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
  ApplicationOngoingCall_onContactUpdated,
EW_END_OF_CLASS( ApplicationOngoingCall )

/* Initializer for the class 'Application::DetailsInsideCall' */
void ApplicationDetailsInsideCall__Init( ApplicationDetailsInsideCall _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationDetailsPage__Init( &_this->_.Super, aLink, aArg );

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
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line1, _Const002F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Super1.Line1, _Const0030 );
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
  ApplicationDetailsPage__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::DetailsInsideCall' */
void ApplicationDetailsInsideCall__Done( ApplicationDetailsInsideCall _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationDetailsPage );

  /* Don't forget to deinitialize the super class ... */
  ApplicationDetailsPage__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::DetailsInsideCall.onTapEdit()' */
void ApplicationDetailsInsideCall_onTapEdit( ApplicationDetailsInsideCall _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->Super1.editPage = EwNewObject( ApplicationEditPage, 0 );
  _this->Super1.editPage->OnSave = EwNewSlot( _this, ApplicationDetailsPage_onSaveEdit );
  _this->Super1.editPage->OnClose = EwNewSlot( _this, ApplicationDetailsPage_onCancelEdit );
  ApplicationEditPage_OnSetContact( _this->Super1.editPage, _this->Super1.Contact );
  _this->Super1.editPage->OnDelete = EwNewSlot( _this, ApplicationDetailsPage_onDelete );
  CoreGroup__SwitchToDialog( _this, ((CoreGroup)_this->Super1.editPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::DetailsInsideCall' */
EW_DEFINE_CLASS_VARIANTS( ApplicationDetailsInsideCall )
EW_END_OF_CLASS_VARIANTS( ApplicationDetailsInsideCall )

/* Virtual Method Table (VMT) for the class : 'Application::DetailsInsideCall' */
EW_DEFINE_CLASS( ApplicationDetailsInsideCall, ApplicationDetailsPage, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, "Application::DetailsInsideCall" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
  ApplicationDetailsInsideCall_onTapEdit,
  ApplicationDetailsPage_onContactUpdated,
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
  ViewsRectangle_OnSetColor( &_this->Background, _Const0013 );
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
    DeviceDeviceClass_SendCallFromNumber( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
    ComponentsInputEtxt_OnGetString( &_this->InputEtxt ));
}

/* Variants derived from the class : 'Application::KeypadPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationKeypadPage )
EW_END_OF_CLASS_VARIANTS( ApplicationKeypadPage )

/* Virtual Method Table (VMT) for the class : 'Application::KeypadPage' */
EW_DEFINE_CLASS( ApplicationKeypadPage, CoreGroup, Background, OnHide, OnHide, BackgoundColor, 
                 BackgoundColor, BackgoundColor, "Application::KeypadPage" )
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
  ApplicationKeypadPage_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationKeypadPage )

/* Initializer for the class 'Application::PhoneApp' */
void ApplicationPhoneApp__Init( ApplicationPhoneApp _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationPhoneApp );

  /* ... then construct all embedded objects */
  CoreGroup__Init( &_this->Outline, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ComponentsNavBarButton64x40__Init( &_this->NavBarButtons, &_this->_.XObject, 0 );
  ComponentsNavBarButton64x40__Init( &_this->NavBarButtons1, &_this->_.XObject, 0 );
  ComponentsNavBarButton64x40__Init( &_this->NavBarButtons2, &_this->_.XObject, 0 );
  ComponentsNavBarButton64x40__Init( &_this->NavBarButtons3, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationPhoneApp );

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
  ApplicationPhoneApp_OnGetSelectedPage, ApplicationPhoneApp_OnSetSelectedPage ));
  ComponentsNavBarButton64x40_OnSetOutlet( &_this->NavBarButtons1, EwNewRef( _this, 
  ApplicationPhoneApp_OnGetSelectedPage, ApplicationPhoneApp_OnSetSelectedPage ));
  ComponentsNavBarButton64x40_OnSetOutlet( &_this->NavBarButtons2, EwNewRef( _this, 
  ApplicationPhoneApp_OnGetSelectedPage, ApplicationPhoneApp_OnSetSelectedPage ));
  ComponentsNavBarButton64x40_OnSetOutlet( &_this->NavBarButtons3, EwNewRef( _this, 
  ApplicationPhoneApp_OnGetSelectedPage, ApplicationPhoneApp_OnSetSelectedPage ));

  /* Call the user defined constructor */
  ApplicationPhoneApp_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::PhoneApp' */
void ApplicationPhoneApp__ReInit( ApplicationPhoneApp _this )
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

/* Finalizer method for the class 'Application::PhoneApp' */
void ApplicationPhoneApp__Done( ApplicationPhoneApp _this )
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
void ApplicationPhoneApp_Init( ApplicationPhoneApp _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ApplicationPhoneApp_OnSetSelectedPage( _this, 2 );
}

/* 'C' function for method : 'Application::PhoneApp.OnSetSelectedPage()' */
void ApplicationPhoneApp_OnSetSelectedPage( ApplicationPhoneApp _this, XInt32 value )
{
  if ( _this->SelectedPage == value )
    return;

  _this->SelectedPage = value;
  EwNotifyRefObservers( EwNewRef( _this, ApplicationPhoneApp_OnGetSelectedPage, 
    ApplicationPhoneApp_OnSetSelectedPage ), 0 );

  switch ( _this->SelectedPage )
  {
    case 0 :
    {
      CoreGroup favorites = ((CoreGroup)EwNewObject( ApplicationFavoritesPage, 0 ));
      CoreGroup__SwitchToDialog( &_this->Outline, favorites, 0, 0, 0, 0, 0, 0, 0, 
      EwNullSlot, EwNullSlot, 0 );
    }
    break;

    case 1 :
    {
      CoreGroup recent = ((CoreGroup)EwNewObject( ApplicationRecentPage, 0 ));
      CoreGroup__SwitchToDialog( &_this->Outline, recent, 0, 0, 0, 0, 0, 0, 0, EwNullSlot, 
      EwNullSlot, 0 );
    }
    break;

    case 2 :
    {
      CoreGroup contacts = ((CoreGroup)EwNewObject( ApplicationContactsPage, 0 ));
      CoreGroup__SwitchToDialog( &_this->Outline, contacts, 0, 0, 0, 0, 0, 0, 0, 
      EwNullSlot, EwNullSlot, 0 );
    }
    break;

    case 3 :
    {
      CoreGroup keypad = ((CoreGroup)EwNewObject( ApplicationKeypadPage, 0 ));
      CoreGroup__SwitchToDialog( &_this->Outline, keypad, 0, 0, 0, 0, 0, 0, 0, EwNullSlot, 
      EwNullSlot, 0 );
    }
    break;

    default : 
      EwTrace( "%s%i", EwLoadString( &_Const008A ), _this->SelectedPage );
  }
}

/* 'C' function for method : 'Application::PhoneApp.OnGetSelectedPage()' */
XInt32 ApplicationPhoneApp_OnGetSelectedPage( ApplicationPhoneApp _this )
{
  return _this->SelectedPage;
}

/* Variants derived from the class : 'Application::PhoneApp' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPhoneApp )
EW_END_OF_CLASS_VARIANTS( ApplicationPhoneApp )

/* Virtual Method Table (VMT) for the class : 'Application::PhoneApp' */
EW_DEFINE_CLASS( ApplicationPhoneApp, CoreGroup, Outline, SelectedPage, SelectedPage, 
                 SelectedPage, SelectedPage, SelectedPage, "Application::PhoneApp" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationPhoneApp )

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
  CoreRectView__OnSetBounds( &_this->BackgroundSmall, _Const008B );
  ViewsRectangle_OnSetColorBL( &_this->BackgroundSmall, _Const008C );
  ViewsRectangle_OnSetColorBR( &_this->BackgroundSmall, _Const008D );
  ViewsRectangle_OnSetColorTR( &_this->BackgroundSmall, _Const008E );
  ViewsRectangle_OnSetColorTL( &_this->BackgroundSmall, _Const008E );
  ViewsRectangle_OnSetColor( &_this->BackgroundSmall, _Const008F );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super1.callbtn, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Super1.btn3, 1 );
  CoreRectView__OnSetBounds( &_this->Super1.InputEtxt, _Const0090 );
  ComponentsInputEtxt_OnSetColor( &_this->Super1.InputEtxt, ResWhite );
  ComponentsTextButton_OnSetTextColor( &_this->Super1.HideBtn, ResWhite );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->Super1.BtnErase, 
  ResWhite );
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
                 _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, "Application::KeypadInsideCall" )
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
  ApplicationKeypadPage_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
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
  CoreRectView__OnSetBounds( &_this->Super1.VerticalList, _Const0091 );
  CoreRectView__OnSetBounds( &_this->Super1.SlideTouchHandler, _Const0092 );
  CoreRectView__OnSetBounds( &_this->Super1.UpButton, _Const0093 );
  CoreRectView__OnSetBounds( &_this->Super1.DownButton, _Const0094 );
  CoreRectView__OnSetBounds( &_this->Super1.TitleTxt, _Const0095 );
  CoreRectView__OnSetBounds( &_this->Super1.PlusButton, _Const0096 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super1.MyCardItem, 0 );
  CoreRectView__OnSetBounds( &_this->TextButton, _Const0097 );
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

/* 'C' function for method : 'Application::ContactsInsideCall.onContactPressed()' */
void ApplicationContactsInsideCall_onContactPressed( ApplicationContactsInsideCall _this, 
  XObject sender )
{
  ApplicationContactItem itemView = EwCastObject( sender, ApplicationContactItem );

  if ( itemView != 0 )
  {
    _this->Super1.detailsPage = ((ApplicationDetailsPage)EwNewObject( ApplicationDetailsInsideCall, 
    0 ));
    _this->Super1.detailsPage->OnBack = EwNewSlot( _this, ApplicationContactsPage_onClose );
    _this->Super1.detailsPage->OnDelete = EwNewSlot( _this, ApplicationContactsPage_onDelete );
    ApplicationDetailsPage_OnSetContact( _this->Super1.detailsPage, itemView->Contact );
    CoreGroup__SwitchToDialog( _this, ((CoreGroup)_this->Super1.detailsPage ), ((EffectsTransition)EwGetAutoObject( 
    &ResSlideLeftCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
    EwNullSlot, 0 );
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
EW_DEFINE_CLASS( ApplicationContactsInsideCall, ApplicationContactsPage, TextButton, 
                 OnCancel, OnCancel, _.VMT, _.VMT, _.VMT, "Application::ContactsInsideCall" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
  ApplicationContactsInsideCall_onContactPressed,
EW_END_OF_CLASS( ApplicationContactsInsideCall )

/* Initializer for the class 'Application::IncomingCall' */
void ApplicationIncomingCall__Init( ApplicationIncomingCall _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationCallBase__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationIncomingCall );

  /* ... then construct all embedded objects */
  ComponentsButton65x90__Init( &_this->AcceptButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationIncomingCall );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0052 );
  ComponentsButtonBase70x90_OnSetIconColorPressed( &_this->Super1.UserInitials, 
  ResGrey );
  CoreRectView__OnSetBounds( &_this->AcceptButton, _Const0098 );
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
  ApplicationCallBase__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ComponentsButton65x90__ReInit( &_this->AcceptButton );
}

/* Finalizer method for the class 'Application::IncomingCall' */
void ApplicationIncomingCall__Done( ApplicationIncomingCall _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationCallBase );

  /* Finalize all embedded objects */
  ComponentsButton65x90__Done( &_this->AcceptButton );

  /* Don't forget to deinitialize the super class ... */
  ApplicationCallBase__Done( &_this->_.Super );
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
EW_DEFINE_CLASS( ApplicationIncomingCall, ApplicationCallBase, AcceptButton, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, "Application::IncomingCall" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
  ApplicationCallBase_onContactUpdated,
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
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const0099 );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 32 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( ApplicationFavContactItem ));
  CoreView_OnSetStackingPriority((CoreView)&_this->SlideTouchHandler, -2 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0099 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreRectView__OnSetBounds( &_this->TitleTxt1, _Const009A );
  ViewsText_OnSetAlignment( &_this->TitleTxt1, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TitleTxt1, EwLoadString( &StringsFavoritesTxt ));
  ViewsText_OnSetColor( &_this->TitleTxt1, ResBlack );
  CoreRectView__OnSetBounds( &_this->PlusButton, _Const009B );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->PlusButton, 1 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->PlusButton, 
  EwLoadString( &ResPlusIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->PlusButton, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->PlusButton, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->PlusButton, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->TextButton, _Const009C );
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
    EwNewRef( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Favorites, DeviceContactsList_OnGetNoOfItems, 
    DeviceContactsList_OnSetNoOfItems ), 0 );
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
  CoreGroup__SwitchToDialog( _this, ((CoreGroup)_this->addFav ), ((EffectsTransition)EwGetAutoObject( 
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
  contact = DeviceContactsList_GetContact( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Favorites, 
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
  DeviceDeviceClass_SendCallFromContact( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  _this->Contact );
  ApplicationFavoritesPage_OnSetContact( _this, 0 );
}

/* 'C' function for method : 'Application::FavoritesPage.onClose()' */
void ApplicationFavoritesPage_onClose( ApplicationFavoritesPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->addFav ), ((EffectsTransition)EwGetAutoObject( 
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
  _this->detailsPage = EwNewObject( ApplicationDetailsPage, 0 );
  ApplicationDetailsPage_OnSetContact( _this->detailsPage, EwCastObject( sender, 
  ApplicationFavContactItem )->Super1.Contact );
  _this->detailsPage->OnBack = EwNewSlot( _this, ApplicationFavoritesPage_onCloseDetailsPage );
  CoreGroup__SwitchToDialog( _this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideLeftCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::FavoritesPage.onDeleteContact()' */
void ApplicationFavoritesPage_onDeleteContact( ApplicationFavoritesPage _this, XObject 
  sender )
{
  DeviceContact contact;

  ApplicationFavoritesPage_OnSetContact( _this, EwCastObject( sender, ApplicationFavContactItem )->Super1.Contact );
  contact = DeviceContactsList_FindByID( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
  _this->Contact );

  if ( contact != 0 )
    DeviceContact_OnSetIsFavorite( contact, 0 );

  DeviceContactsList_Remove( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Favorites, 
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

  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
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
  ComponentsTextButton_OnSetText( &_this->TextButton, (( _this->EditMode == 0 )? 
  EwLoadString( &_Const009D ) : EwLoadString( &_Const009E )));
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
}

/* 'C' function for method : 'Application::FavoritesPage.onAdd()' */
void ApplicationFavoritesPage_onAdd( ApplicationFavoritesPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceContactsList_AddLast( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Favorites, 
  _this->addFav->Contact );
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->addFav ), ((EffectsTransition)EwGetAutoObject( 
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
EW_DEFINE_CLASS( ApplicationFavoritesPage, CoreGroup, Background, addFav, EditMode, 
                 EditMode, EditMode, EditMode, "Application::FavoritesPage" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
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
  CoreRectView__OnSetBounds( &_this->TitleTxt1, _Const009A );
  ViewsText_OnSetAlignment( &_this->TitleTxt1, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TitleTxt1, EwLoadString( &StringsRecentTxt ));
  ViewsText_OnSetColor( &_this->TitleTxt1, ResBlack );
  CoreView_OnSetLayout((CoreView)&_this->TextButton, CoreLayoutAlignToRight | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextButton, _Const009F );
  ComponentsTextButton_OnSetText( &_this->TextButton, EwLoadString( &StringsEditTxt ));
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const0099 );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 50 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( ApplicationRecentItm ));
  CoreView_OnSetStackingPriority((CoreView)&_this->SlideTouchHandler, -1 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0099 );
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
    EwNewRef( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->History, DeviceContactsList_OnGetNoOfItems, 
    DeviceContactsList_OnSetNoOfItems ), 0 );
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
  contactHistory = EwCastObject( DeviceContactsList_GetContact( &EwGetAutoObject( 
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
  ComponentsTextButton_OnSetText( &_this->TextButton, (( _this->EditMode == 0 )? 
  EwLoadString( &_Const009D ) : EwLoadString( &_Const009E )));
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
}

/* 'C' function for method : 'Application::RecentPage.onPressedContact()' */
void ApplicationRecentPage_onPressedContact( ApplicationRecentPage _this, XObject 
  sender )
{
  ApplicationRecentItm itemView = EwCastObject( sender, ApplicationRecentItm );

  ApplicationRecentPage_OnSetSelectedContact( _this, itemView->ContactHistory );
  DeviceDeviceClass_SendCallFromContact( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
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
    ApplicationDetailsPage_OnSetContact((ApplicationDetailsPage)_this->detailsPage, 
    ((DeviceContact)itemView->ContactHistory ));
    _this->detailsPage->Super1.OnBack = EwNewSlot( _this, ApplicationRecentPage_onCloseDetailsPage );
    _this->detailsPage->Super1.OnDelete = EwNewSlot( _this, ApplicationRecentPage_onCloseDetailsPage );
    ApplicationRecentDetailsPage_OnSetHistoryContact( _this->detailsPage, itemView->ContactHistory );
    CoreGroup__SwitchToDialog( _this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
    &ResSlideLeftCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
    EwNullSlot, 0 );
  }
}

/* 'C' function for method : 'Application::RecentPage.onDeleteContact()' */
void ApplicationRecentPage_onDeleteContact( ApplicationRecentPage _this, XObject 
  sender )
{
  ApplicationRecentItm itemView = EwCastObject( sender, ApplicationRecentItm );

  ApplicationRecentPage_OnSetSelectedContact( _this, itemView->ContactHistory );
  DeviceContactsList_Remove( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->History, 
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
  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
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
EW_DEFINE_CLASS( ApplicationRecentPage, CoreGroup, Background, SelectedContact, 
                 EditMode, EditMode, EditMode, EditMode, "Application::RecentPage" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
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
  CoreRectView__OnSetBounds( &_this->Super1.TextButton, _Const00A0 );
  CoreRectView__OnSetBounds( &_this->Text, _Const00A1 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &StringsAddToFavTxt ));
  ViewsText_OnSetColor( &_this->Text, ResBlack );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->Super2.ContactsInsideSearch.OnSelectedContact = EwNewSlot( _this, ApplicationContactsList_Slot1 );
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

/* 'C' function for method : 'Application::ContactsList.onContactPressed()' */
void ApplicationContactsList_onContactPressed( ApplicationContactsList _this, XObject 
  sender )
{
  ApplicationContactsList_OnSetContact( _this, EwCastObject( sender, ApplicationContactItem )->Contact );

  if ( _this->Contact->IsFavorite == 0 )
  {
    DeviceContact_OnSetIsFavorite( _this->Contact, 1 );
    EwPostSignal( _this->OnAddFav, ((XObject)_this ));
  }
  else
  {
    EwTrace( "%s", EwLoadString( &_Const00A2 ));
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

/* 'C' function for method : 'Application::ContactsList.Slot1()' */
void ApplicationContactsList_Slot1( ApplicationContactsList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationContactsList_OnSetContact( _this, _this->Super2.ContactsInsideSearch.Contact );

  if ( _this->Contact->IsFavorite == 0 )
  {
    DeviceContact_OnSetIsFavorite( _this->Contact, 1 );
    EwPostSignal( _this->OnAddFav, ((XObject)_this ));
  }
  else
  {
    EwTrace( "%s", EwLoadString( &_Const00A2 ));
    EwPostSignal( _this->Super1.OnCancel, ((XObject)_this ));
  }
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
EW_DEFINE_CLASS( ApplicationContactsList, ApplicationContactsInsideCall, Text, Contact, 
                 OnAddFav, _.VMT, _.VMT, _.VMT, "Application::ContactsList" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
  ApplicationContactsList_onContactPressed,
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
  CoreRectView__OnSetBounds( _this, _Const000E );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->EditEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->EditEffect, 250 );
  _this->EditEffect.Value2 = 25;
  _this->EditEffect.Value1 = 0;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->DeleteEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->DeleteEffect, 250 );
  _this->DeleteEffect.Value2 = 110;
  _this->DeleteEffect.Value1 = 0;
  CoreView_OnSetStackingPriority((CoreView)&_this->Super1.TouchHandler, -1 );
  CoreQuadView__OnSetPoint3( &_this->Super1.TouchHandler, _Const00A3 );
  CoreQuadView__OnSetPoint2( &_this->Super1.TouchHandler, _Const00A4 );
  CoreView_OnSetLayout((CoreView)&_this->Super1.Background, CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Super1.Background, _Const000E );
  CoreView_OnSetLayout((CoreView)&_this->Super1.LastNameTxt, CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Super1.LastNameTxt, _Const00A5 );
  ViewsText_OnSetAutoSize( &_this->Super1.LastNameTxt, 1 );
  CoreRectView__OnSetBounds( &_this->DeleteButton, _Const00A6 );
  ComponentsTextButton_OnSetText( &_this->DeleteButton, EwLoadString( &StringsdeleteTxt ));
  ComponentsTextButton_OnSetTextColor( &_this->DeleteButton, ResWhite );
  ComponentsTextButton_OnSetTextColorPress( &_this->DeleteButton, ResWhiteSemiTransparent );
  ComponentsTextButton_OnSetBackgoundColor( &_this->DeleteButton, ResRed );
  CoreView_OnSetLayout((CoreView)&_this->InfoButton, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->InfoButton, _Const00A7 );
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
  CoreRectView__OnSetBounds( &_this->Super1.FirstNameTxt, _Const00A8 );
  ViewsText_OnSetAutoSize( &_this->Super1.FirstNameTxt, 1 );
  ViewsText_OnSetString( &_this->Super1.FirstNameTxt, EwLoadString( &_Const00A9 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line, _Const0010 );
  ViewsLine_OnSetWidth( &_this->Super1.Line, 2 );
  ViewsLine_OnSetColor( &_this->Super1.Line, ResGreyLight );
  CoreView_OnSetLayout((CoreView)&_this->Super1.PrfofilButton, CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Super1.PrfofilButton, _Const0016 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line1, _Const0011 );
  CoreRectView__OnSetBounds( &_this->RemoveButton, _Const00AA );
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
EW_DEFINE_CLASS( ApplicationFavContactItem, ApplicationContactItem, EditEffect, 
                 OnDelete, OnDelete, EditMode, EditMode, EditMode, "Application::FavContactItem" )
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
  ApplicationContactItem_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
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
  ComponentsSButton25x25__Init( &_this->IconBtn, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->RemoveButton, &_this->_.XObject, 0 );
  ComponentsTextButton__Init( &_this->DeleteButton, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->EditEffect, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->DeleteEffect, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationRecentItm );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00AB );
  _this->Icon = EwShareString( EwLoadString( &ResOutgoingCallIcon ));
  _this->ButtonColor = ResWhite;
  _this->IconColor = ResWhite;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreRectView__OnSetBounds( &_this->Background, _Const00AC );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const0012 );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const0012 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0013 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00AD );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00AE );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00AF );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const00B0 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreView_OnSetLayout((CoreView)&_this->Line, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const00B1 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const00B2 );
  ViewsLine_OnSetWidth( &_this->Line, 2 );
  ViewsLine_OnSetColor( &_this->Line, ResGreyLight );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const00B3 );
  ViewsText_OnSetAutoSize( &_this->LastNameTxt, 1 );
  ViewsText_OnSetAlignment( &_this->LastNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->LastNameTxt, EwLoadString( &_Const00B4 ));
  ViewsText_OnSetColor( &_this->LastNameTxt, ResBlack );
  CoreView_OnSetStackingPriority((CoreView)&_this->FirstNameTxt, 0 );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const00B5 );
  ViewsText_OnSetAutoSize( &_this->FirstNameTxt, 1 );
  ViewsText_OnSetAlignment( &_this->FirstNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->FirstNameTxt, EwLoadString( &_Const00A9 ));
  ViewsText_OnSetColor( &_this->FirstNameTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->CallTypeTxt, _Const00B6 );
  ViewsText_OnSetAutoSize( &_this->CallTypeTxt, 1 );
  ViewsText_OnSetAlignment( &_this->CallTypeTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->CallTypeTxt, EwLoadString( &_Const00B7 ));
  CoreRectView__OnSetBounds( &_this->TimeTxt, _Const00B8 );
  ViewsText_OnSetAutoSize( &_this->TimeTxt, 1 );
  ViewsText_OnSetAlignment( &_this->TimeTxt, ViewsTextAlignmentAlignHorzRight | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TimeTxt, EwLoadString( &_Const00B9 ));
  _this->ColorText1 = ResBlack;
  _this->ColorText2 = ResGrey;
  CoreView_OnSetLayout((CoreView)&_this->InfoButton, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->InfoButton, _Const00BA );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->InfoButton, 
  EwLoadString( &ResInfoIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->InfoButton, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->InfoButton, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->InfoButton, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->IconBtn, _Const00BB );
  CoreGroup_OnSetAlphaBlended((CoreGroup)&_this->IconBtn, 1 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->IconBtn, 
  0 );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->IconBtn, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->IconBtn, 
  ResWhiteTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->IconBtn, 
  ResWhiteTransparent );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->IconBtn, 
  ResWhiteTransparent );
  CoreRectView__OnSetBounds( &_this->RemoveButton, _Const00BC );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->RemoveButton, 
  EwLoadString( &ResRemoveIcon ));
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->RemoveButton, 
  ResRed );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->RemoveButton, 
  ResTransparent );
  CoreRectView__OnSetBounds( &_this->DeleteButton, _Const00BD );
  ComponentsTextButton_OnSetText( &_this->DeleteButton, EwLoadString( &StringsdeleteTxt ));
  ComponentsTextButton_OnSetTextColor( &_this->DeleteButton, ResWhite );
  ComponentsTextButton_OnSetTextColorPress( &_this->DeleteButton, ResWhiteSemiTransparent );
  ComponentsTextButton_OnSetBackgoundColor( &_this->DeleteButton, ResRed );
  CoreView_OnSetLayout((CoreView)&_this->Line1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const0011 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const000C );
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
  CoreGroup__Add( _this, ((CoreView)&_this->IconBtn ), 0 );
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
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->IconBtn, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->IconBtn, 
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
  ComponentsSButton25x25__ReInit( &_this->IconBtn );
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
  ComponentsSButton25x25__Done( &_this->IconBtn );
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
  CoreRectView__OnSetBounds( &_this->IconBtn, EwSetRectX( _this->IconBtn.Super4.Bounds, 
  _this->EditEffect.Value - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->LastNameTxt, EwSetRectX( _this->LastNameTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 32 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, EwSetRectX( _this->FirstNameTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 114 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->CallTypeTxt, EwSetRectX( _this->CallTypeTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 32 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->InfoButton, EwSetRectX( _this->InfoButton.Super4.Bounds, 
  ( _this->EditEffect.Value + 225 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->TimeTxt, EwSetRectX( _this->TimeTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 162 ) - _this->DeleteEffect.Value ));
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
      ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->IconBtn, 
      EwLoadString( &ResIncomingCallIcon ));
    else
      ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->IconBtn, 
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
EW_DEFINE_CLASS( ApplicationRecentItm, CoreGroup, FlashTimer, ContactHistory, OnActivate, 
                 Icon, Icon, ButtonColor, "Application::RecentItm" )
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
  ApplicationRecentItm_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationRecentItm )

/* Initializer for the class 'Application::RecentDetailsPage' */
void ApplicationRecentDetailsPage__Init( ApplicationRecentDetailsPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationDetailsPage__Init( &_this->_.Super, aLink, aArg );

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
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line2, _Const00BE );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Super1.Line2, _Const00BF );
  CoreRectView__OnSetBounds( &_this->Super1.NumberTxt, _Const00C0 );
  CoreRectView__OnSetBounds( &_this->Super1.MobileTxt, _Const00C1 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line1, _Const00C2 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Super1.Line1, _Const00C3 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const00C4 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const00C5 );
  ViewsLine_OnSetColor( &_this->Line4, _Const001B );
  CoreRectView__OnSetBounds( &_this->DateTxt, _Const00C6 );
  ViewsText_OnSetAlignment( &_this->DateTxt, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DateTxt, EwLoadString( &_Const00C7 ));
  ViewsText_OnSetColor( &_this->DateTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->TypeTxt, _Const00C8 );
  ViewsText_OnSetAlignment( &_this->TypeTxt, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TypeTxt, EwLoadString( &_Const00C9 ));
  ViewsText_OnSetColor( &_this->TypeTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->TimeTxt, _Const00CA );
  ViewsText_OnSetAlignment( &_this->TimeTxt, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TimeTxt, EwLoadString( &_Const00CB ));
  ViewsText_OnSetColor( &_this->TimeTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->DurationTxt, _Const00CC );
  ViewsText_OnSetAlignment( &_this->DurationTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DurationTxt, EwLoadString( &_Const00CD ));
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
  ApplicationDetailsPage__ReInit( &_this->_.Super );

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
  _this->_.Super._.VMT = EW_CLASS( ApplicationDetailsPage );

  /* Finalize all embedded objects */
  ViewsLine__Done( &_this->Line4 );
  ViewsText__Done( &_this->DateTxt );
  ViewsText__Done( &_this->TypeTxt );
  ViewsText__Done( &_this->TimeTxt );
  ViewsText__Done( &_this->DurationTxt );

  /* Don't forget to deinitialize the super class ... */
  ApplicationDetailsPage__Done( &_this->_.Super );
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
    _this->HistoryContact->Super1.LastName, EwLoadString( &_Const000D )), _this->HistoryContact->Super1.FirstName ));
    ViewsText_OnSetString( &_this->Super1.NumberTxt, _this->HistoryContact->Super1.PhoneNumber );
    ViewsText_OnSetString( &_this->DateTxt, CoreTime_Format( _this->HistoryContact->TimeOfCall, 
    EwLoadString( &_Const00CE )));
    ViewsText_OnSetString( &_this->TimeTxt, CoreTime_Format( _this->HistoryContact->TimeOfCall, 
    EwLoadString( &_Const00CF )));

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
    EwDetachObjObserver( EwNewSlot( _this, ApplicationDetailsPage__onContactUpdated ), 
      (XObject)_this->HistoryContact, 0 );

  _this->HistoryContact = value;

  if ( _this->HistoryContact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationDetailsPage__onContactUpdated ), 
      (XObject)_this->HistoryContact, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationDetailsPage__onContactUpdated ), 
      ((XObject)_this ));
  }
}

/* Variants derived from the class : 'Application::RecentDetailsPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationRecentDetailsPage )
EW_END_OF_CLASS_VARIANTS( ApplicationRecentDetailsPage )

/* Virtual Method Table (VMT) for the class : 'Application::RecentDetailsPage' */
EW_DEFINE_CLASS( ApplicationRecentDetailsPage, ApplicationDetailsPage, Line4, HistoryContact, 
                 _.VMT, _.VMT, _.VMT, _.VMT, "Application::RecentDetailsPage" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
  ApplicationDetailsPage_onTapEdit,
  ApplicationRecentDetailsPage_onContactUpdated,
EW_END_OF_CLASS( ApplicationRecentDetailsPage )

/* Initializer for the class 'Application::CallBase' */
void ApplicationCallBase__Init( ApplicationCallBase _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationCallBase );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ComponentsButton65x90__Init( &_this->DesclineButton, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TimeTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ContactNameTxt, &_this->_.XObject, 0 );
  ComponentsButtonBase70x90__Init( &_this->UserInitials, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationCallBase );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0052 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0052 );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const008C );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const008D );
  ViewsRectangle_OnSetColorTR( &_this->Background, _Const008E );
  ViewsRectangle_OnSetColorTL( &_this->Background, _Const008E );
  ViewsRectangle_OnSetColor( &_this->Background, _Const008F );
  CoreRectView__OnSetBounds( &_this->DesclineButton, _Const00D0 );
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
  CoreRectView__OnSetBounds( &_this->TimeTxt, _Const00D1 );
  ViewsText_OnSetAlignment( &_this->TimeTxt, ViewsTextAlignmentAlignHorzCenter | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TimeTxt, EwLoadString( &_Const00D2 ));
  ViewsText_OnSetColor( &_this->TimeTxt, ResWhite );
  CoreView_OnSetLayout((CoreView)&_this->ContactNameTxt, CoreLayoutAlignToLeft | 
  CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->ContactNameTxt, _Const00D3 );
  ViewsText_OnSetEnableBidiText( &_this->ContactNameTxt, 0 );
  ViewsText_OnSetAutoSize( &_this->ContactNameTxt, 1 );
  ViewsText_OnSetAlignment( &_this->ContactNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ContactNameTxt, EwLoadString( &_Const0026 ));
  ViewsText_OnSetColor( &_this->ContactNameTxt, ResWhite );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const00D4 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->UserInitials, 0 );
  ComponentsButtonBase70x90_OnSetDescript( &_this->UserInitials, 0 );
  ComponentsButtonBase70x90_OnSetIconColor( &_this->UserInitials, ResBlack );
  ComponentsButtonBase70x90_OnSetIconColorEnabled( &_this->UserInitials, ResBlack );
  ComponentsButtonBase70x90_OnSetIconColorPressed( &_this->UserInitials, ResGrey );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DesclineButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TimeTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ContactNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UserInitials ), 0 );
  _this->DesclineButton.Super1.OnActivate = EwNewSlot( _this, ApplicationCallBase_onDesclineCall );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->DesclineButton, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->DesclineButton, 
  EwLoadResource( &ResButtonRoundMedium1, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->TimeTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
  ViewsText_OnSetFont( &_this->ContactNameTxt, EwLoadResource( &ResTitileFont25, 
  ResourcesFont ));
}

/* Re-Initializer for the class 'Application::CallBase' */
void ApplicationCallBase__ReInit( ApplicationCallBase _this )
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

/* Finalizer method for the class 'Application::CallBase' */
void ApplicationCallBase__Done( ApplicationCallBase _this )
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

/* 'C' function for method : 'Application::CallBase.onContactUpdated()' */
void ApplicationCallBase_onContactUpdated( ApplicationCallBase _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Contact != 0 )
  {
    ViewsText_OnSetString( &_this->ContactNameTxt, EwConcatString( EwConcatString( 
    _this->Contact->Super1.LastName, EwLoadString( &_Const000D )), _this->Contact->Super1.FirstName ));
    ComponentsButtonBase70x90_OnSetIcon( &_this->UserInitials, _this->Contact->Super1.NameInitials );
  }
  else
  {
    ViewsText_OnSetString( &_this->ContactNameTxt, DeviceContactsList_GetContact( 
    &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->OngoingCalls, 0 )->PhoneNumber );
    CoreGroup_OnSetVisible((CoreGroup)&_this->UserInitials, 0 );
  }
}

/* Wrapper function for the virtual method : 'Application::CallBase.onContactUpdated()' */
void ApplicationCallBase__onContactUpdated( void* _this, XObject sender )
{
  ((ApplicationCallBase)_this)->_.VMT->onContactUpdated((ApplicationCallBase)_this
  , sender );
}

/* 'C' function for method : 'Application::CallBase.onDesclineCall()' */
void ApplicationCallBase_onDesclineCall( ApplicationCallBase _this, XObject sender )
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

/* 'C' function for method : 'Application::CallBase.OnSetContact()' */
void ApplicationCallBase_OnSetContact( ApplicationCallBase _this, DeviceHistoryContact 
  value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationCallBase__onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationCallBase__onContactUpdated ), 
      (XObject)_this->Contact, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationCallBase__onContactUpdated ), ((XObject)_this ));
  }
}

/* Variants derived from the class : 'Application::CallBase' */
EW_DEFINE_CLASS_VARIANTS( ApplicationCallBase )
EW_END_OF_CLASS_VARIANTS( ApplicationCallBase )

/* Virtual Method Table (VMT) for the class : 'Application::CallBase' */
EW_DEFINE_CLASS( ApplicationCallBase, CoreGroup, Background, Contact, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::CallBase" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
  ApplicationCallBase_onContactUpdated,
EW_END_OF_CLASS( ApplicationCallBase )

/* Initializer for the class 'Application::ContactsAppInsideCall' */
void ApplicationContactsAppInsideCall__Init( ApplicationContactsAppInsideCall _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationPhoneApp__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactsAppInsideCall );

  /* ... then construct all embedded objects */
  ComponentsTextButton__Init( &_this->TextButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsAppInsideCall );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Super1.Rectangle, _Const00D5 );
  CoreRectView__OnSetBounds( &_this->Super1.NavBarButtons, _Const00D6 );
  CoreRectView__OnSetBounds( &_this->Super1.NavBarButtons1, _Const00D7 );
  CoreRectView__OnSetBounds( &_this->Super1.NavBarButtons2, _Const00D8 );
  CoreRectView__OnSetBounds( &_this->Super1.NavBarButtons3, _Const00D9 );
  CoreRectView__OnSetBounds( &_this->TextButton, _Const00DA );
  ComponentsTextButton_OnSetText( &_this->TextButton, EwLoadString( &StringsCancelTxt ));
  CoreGroup__Add( _this, ((CoreView)&_this->TextButton ), 0 );
  _this->TextButton.OnActivate = EwNewSlot( _this, ApplicationContactsAppInsideCall_onCancel );
}

/* Re-Initializer for the class 'Application::ContactsAppInsideCall' */
void ApplicationContactsAppInsideCall__ReInit( ApplicationContactsAppInsideCall _this )
{
  /* At first re-initialize the super class ... */
  ApplicationPhoneApp__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ComponentsTextButton__ReInit( &_this->TextButton );
}

/* Finalizer method for the class 'Application::ContactsAppInsideCall' */
void ApplicationContactsAppInsideCall__Done( ApplicationContactsAppInsideCall _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationPhoneApp );

  /* Finalize all embedded objects */
  ComponentsTextButton__Done( &_this->TextButton );

  /* Don't forget to deinitialize the super class ... */
  ApplicationPhoneApp__Done( &_this->_.Super );
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
EW_DEFINE_CLASS( ApplicationContactsAppInsideCall, ApplicationPhoneApp, TextButton, 
                 OnCancel, OnCancel, _.VMT, _.VMT, _.VMT, "Application::ContactsAppInsideCall" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
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
  CoreRectView__OnSetBounds( _this, _Const00DB );
  _this->ButtonColor = ResWhite;
  _this->IconColor = ResWhite;
  _this->TextColor = ResBlack;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00DC );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00DD );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00DE );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const000C );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Background, _Const00DB );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const0012 );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const0012 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0013 );
  CoreRectView__OnSetBounds( &_this->NameTxt, _Const00DF );
  ViewsText_OnSetAlignment( &_this->NameTxt, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->NameTxt, EwLoadString( &StringsMyCardTxt ));
  ViewsText_OnSetColor( &_this->NameTxt, ResBlack );
  CoreView_OnSetLayout((CoreView)&_this->Line1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const00DE );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const000C );
  ViewsLine_OnSetWidth( &_this->Line1, 2 );
  ViewsLine_OnSetColor( &_this->Line1, ResGreyLight );
  CoreRectView__OnSetBounds( &_this->MyCardTxt, _Const00E0 );
  ViewsText_OnSetAlignment( &_this->MyCardTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MyCardTxt, EwLoadString( &StringsMyCardTxt ));
  ViewsText_OnSetColor( &_this->MyCardTxt, ResGrey );
  CoreRectView__OnSetBounds( &_this->PushButtonSmall1, _Const00E1 );
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
    EwNewRef( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), DeviceDeviceClass_OnGetMyContact, 
    DeviceDeviceClass_OnSetMyContact ), 0 );
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

  if ( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact != 0 )
  {
    ViewsText_OnSetString( &_this->NameTxt, EwConcatString( EwConcatString( EwGetAutoObject( 
    &DeviceDevice, DeviceDeviceClass )->MyContact->LastName, EwLoadString( &_Const000D )), 
    EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact->FirstName ));
    ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->PushButtonSmall1, 
    EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact->NameInitials );
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
EW_DEFINE_CLASS( ApplicationMyCardItem, CoreGroup, FlashTimer, OnActivate, OnActivate, 
                 ButtonColor, ButtonColor, ButtonColor, "Application::MyCardItem" )
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
  ApplicationMyCardItem_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationMyCardItem )

/* Initializer for the class 'Application::MessagesApp' */
void ApplicationMessagesApp__Init( ApplicationMessagesApp _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationMessagesApp );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->VerticalList, &_this->_.XObject, 0 );
  ComponentsInputBtnEtxt__Init( &_this->SearchExt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TitleTxt, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->createBtn, &_this->_.XObject, 0 );
  ComponentsTextButton__Init( &_this->editBtn, &_this->_.XObject, 0 );
  ComponentsTextButton__Init( &_this->deleteBtn, &_this->_.XObject, 0 );
  DeviceContactsList__Init( &_this->SelectedContacts, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  ApplicationContactsInsideSearch__Init( &_this->ContactsInsideSearch, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationMessagesApp );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00E2 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0052 );
  CoreView_OnSetLayout((CoreView)&_this->VerticalList, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const00E3 );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 45 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( ApplicationMessegeItem ));
  CoreView_OnSetLayout((CoreView)&_this->SearchExt, CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->SearchExt, _Const00E4 );
  ComponentsInputBtnEtxt_OnSetString( &_this->SearchExt, 0 );
  ComponentsInputBtnEtxt_OnSetColor( &_this->SearchExt, ResGrey );
  ComponentsInputBtnEtxt_OnSetPlaceholder( &_this->SearchExt, EwLoadString( &_Const0007 ));
  CoreRectView__OnSetBounds( &_this->TitleTxt, _Const00E5 );
  ViewsText_OnSetAlignment( &_this->TitleTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TitleTxt, EwLoadString( &StringsMessagesTxt ));
  ViewsText_OnSetColor( &_this->TitleTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->createBtn, _Const00E6 );
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
  CoreRectView__OnSetBounds( &_this->editBtn, _Const00E7 );
  ComponentsTextButton_OnSetText( &_this->editBtn, EwLoadString( &StringsEditTxt ));
  CoreRectView__OnSetBounds( &_this->deleteBtn, _Const00E8 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->deleteBtn, 0 );
  ComponentsTextButton_OnSetText( &_this->deleteBtn, EwLoadString( &StringsDeleteContactTxt ));
  CoreView_OnSetStackingPriority((CoreView)&_this->SlideTouchHandler, -1 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const00E9 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreRectView__OnSetBounds( &_this->ContactsInsideSearch, _Const00EA );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SearchExt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->createBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->editBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->deleteBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ContactsInsideSearch ), 0 );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationMessagesApp_OnLoadItem );
  CoreVerticalList_OnSetSlideHandler( &_this->VerticalList, &_this->SlideTouchHandler );
  _this->SearchExt.OnChange = EwNewSlot( _this, ApplicationMessagesApp_onSearch );
  _this->SearchExt.OnIcon = EwNewSlot( _this, ApplicationMessagesApp_onCancelSearch );
  ViewsText_OnSetFont( &_this->TitleTxt, EwLoadResource( &ResTitileFont32, ResourcesFont ));
  _this->createBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationMessagesApp_onAddChat );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->createBtn, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
  _this->editBtn.OnActivate = EwNewSlot( _this, ApplicationMessagesApp_onEdit );
  _this->deleteBtn.OnActivate = EwNewSlot( _this, ApplicationMessagesApp_onDelete );
  _this->ContactsInsideSearch.OnSelectedContact = EwNewSlot( _this, ApplicationMessagesApp_onOpenChat );

  /* Call the user defined constructor */
  ApplicationMessagesApp_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::MessagesApp' */
void ApplicationMessagesApp__ReInit( ApplicationMessagesApp _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  CoreVerticalList__ReInit( &_this->VerticalList );
  ComponentsInputBtnEtxt__ReInit( &_this->SearchExt );
  ViewsText__ReInit( &_this->TitleTxt );
  ComponentsSButton25x25__ReInit( &_this->createBtn );
  ComponentsTextButton__ReInit( &_this->editBtn );
  ComponentsTextButton__ReInit( &_this->deleteBtn );
  DeviceContactsList__ReInit( &_this->SelectedContacts );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  ApplicationContactsInsideSearch__ReInit( &_this->ContactsInsideSearch );
}

/* Finalizer method for the class 'Application::MessagesApp' */
void ApplicationMessagesApp__Done( ApplicationMessagesApp _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  CoreVerticalList__Done( &_this->VerticalList );
  ComponentsInputBtnEtxt__Done( &_this->SearchExt );
  ViewsText__Done( &_this->TitleTxt );
  ComponentsSButton25x25__Done( &_this->createBtn );
  ComponentsTextButton__Done( &_this->editBtn );
  ComponentsTextButton__Done( &_this->deleteBtn );
  DeviceContactsList__Done( &_this->SelectedContacts );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  ApplicationContactsInsideSearch__Done( &_this->ContactsInsideSearch );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationMessagesApp_Init( ApplicationMessagesApp _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationMessagesApp_onNoOfContactsChanged ), 
    EwNewRef( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MessageHistory, 
    DeviceContactsList_OnGetNoOfItems, DeviceContactsList_OnSetNoOfItems ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationMessagesApp_onNoOfContactsChanged ), 
    ((XObject)_this ));
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationMessagesApp_OnLoadItem( ApplicationMessagesApp _this, XObject sender )
{
  XInt32 itemNo;
  DeviceContact contact;
  ApplicationMessegeItem messageItem;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  contact = DeviceContactsList_GetContact((DeviceContactsList)&EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass )->MessageHistory, itemNo );
  messageItem = EwCastObject( _this->VerticalList.View, ApplicationMessegeItem );

  if ( messageItem == 0 )
    return;

  ApplicationMessegeItem_OnSetContact( messageItem, contact );
  messageItem->OnActivate = EwNewSlot( _this, ApplicationMessagesApp_onOpenChat );
  ApplicationMessegeItem_OnSetEditMode( messageItem, _this->EditMode );
  messageItem->OnCheck = EwNewSlot( _this, ApplicationMessagesApp_onSelectedChats );
  CoreRectView__OnSetBounds( messageItem, EwSetRectSize( messageItem->Super2.Bounds, 
  EwNewPoint( EwGetRectW( _this->VerticalList.Super2.Bounds ), _this->VerticalList.ItemHeight )));
}

/* 'C' function for method : 'Application::MessagesApp.onEdit()' */
void ApplicationMessagesApp_onEdit( ApplicationMessagesApp _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->EditMode = (XBool)!_this->EditMode;
  ComponentsTextButton_OnSetText( &_this->editBtn, (( _this->EditMode == 0 )? EwLoadString( 
  &_Const009D ) : EwLoadString( &_Const00EB )));
  CoreGroup_OnSetVisible((CoreGroup)&_this->deleteBtn, (( _this->EditMode == 0 )? 
  0 : 1 ));
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
}

/* 'C' function for method : 'Application::MessagesApp.onAddChat()' */
void ApplicationMessagesApp_onAddChat( ApplicationMessagesApp _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->addNewChat = EwNewObject( ApplicationContactsListInsideMessages, 0 );
  _this->addNewChat->Super2.OnCancel = EwNewSlot( _this, ApplicationMessagesApp_onCloseAdd );
  _this->addNewChat->Super1.OnAddFav = EwNewSlot( _this, ApplicationMessagesApp_onAdd );
  ApplicationContactsList_OnSetContact((ApplicationContactsList)_this->addNewChat, 
  EwNewObject( DeviceContact, 0 ));
  CoreGroup__SwitchToDialog( _this, ((CoreGroup)_this->addNewChat ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideUpCenteredLimit, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::MessagesApp.onCloseAdd()' */
void ApplicationMessagesApp_onCloseAdd( ApplicationMessagesApp _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->addNewChat ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->addNewChat = 0;
}

/* 'C' function for method : 'Application::MessagesApp.onAdd()' */
void ApplicationMessagesApp_onAdd( ApplicationMessagesApp _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceContactsList_AddFirst((DeviceContactsList)&EwGetAutoObject( &DeviceDevice, 
  DeviceDeviceClass )->MessageHistory, _this->addNewChat->Super1.Contact );
  EwPostSignal( EwNewSlot( _this, ApplicationMessagesApp_onUpdateList ), ((XObject)_this ));
  EwPostSignal( EwNewSlot( _this, ApplicationMessagesApp_onCloseAdd ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::MessagesApp.onBack()' */
void ApplicationMessagesApp_onBack( ApplicationMessagesApp _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( EwNewSlot( _this, ApplicationMessagesApp_onUpdateList ), ((XObject)_this ));
  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->chat ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->chat = 0;
}

/* 'C' function for method : 'Application::MessagesApp.onDelete()' */
void ApplicationMessagesApp_onDelete( ApplicationMessagesApp _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( &_this->SelectedContacts != 0 )
  {
    DeviceContactListElement contact = _this->SelectedContacts.head;

    while ( contact != 0 )
    {
      DeviceContact mCont = DeviceContactsList_FindByPhoneNumber((DeviceContactsList)&EwGetAutoObject( 
        &DeviceDevice, DeviceDeviceClass )->MessageHistory, contact->Data->PhoneNumber );

      if ( mCont != 0 )
      {
        DeviceContactsList_Remove((DeviceContactsList)&EwGetAutoObject( &DeviceDevice, 
        DeviceDeviceClass )->MessageHistory, mCont );
        DeviceMessagesList_RemoveAll( &mCont->MessagesList );
      }

      contact = contact->next;
    }
  }

  EwPostSignal( EwNewSlot( _this, ApplicationMessagesApp_onEdit ), ((XObject)_this ));
  EwPostSignal( EwNewSlot( _this, ApplicationMessagesApp_onUpdateList ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::MessagesApp.onUpdateList()' */
void ApplicationMessagesApp_onUpdateList( ApplicationMessagesApp _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, EwGetAutoObject( &DeviceDevice, 
  DeviceDeviceClass )->MessageHistory.Super1.NoOfItems - 1 );
}

/* 'C' function for method : 'Application::MessagesApp.onNoOfContactsChanged()' */
void ApplicationMessagesApp_onNoOfContactsChanged( ApplicationMessagesApp _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, EwGetAutoObject( &DeviceDevice, 
  DeviceDeviceClass )->MessageHistory.Super1.NoOfItems );
}

/* 'C' function for method : 'Application::MessagesApp.onOpenChat()' */
void ApplicationMessagesApp_onOpenChat( ApplicationMessagesApp _this, XObject sender )
{
  ApplicationMessegeItem itemView = EwCastObject( sender, ApplicationMessegeItem );

  if ( itemView != 0 )
  {
    _this->chat = EwNewObject( ApplicationChatPage, 0 );
    ApplicationChatPage_OnSetContact( _this->chat, itemView->Contact );
    _this->chat->OnBack = EwNewSlot( _this, ApplicationMessagesApp_onBack );
    CoreGroup__SwitchToDialog( _this, ((CoreGroup)_this->chat ), ((EffectsTransition)EwGetAutoObject( 
    &ResSlideUpCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
    EwNullSlot, 0 );
  }
}

/* 'C' function for method : 'Application::MessagesApp.onSelectedChats()' */
void ApplicationMessagesApp_onSelectedChats( ApplicationMessagesApp _this, XObject 
  sender )
{
  ApplicationMessegeItem messageItem = EwCastObject( sender, ApplicationMessegeItem );

  if ( messageItem->Contact != 0 )
    DeviceContactsList_AddFirst( &_this->SelectedContacts, messageItem->Contact );
  else
    DeviceContactsList_Remove( &_this->SelectedContacts, messageItem->Contact );
}

/* 'C' function for method : 'Application::MessagesApp.onSearch()' */
void ApplicationMessagesApp_onSearch( ApplicationMessagesApp _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwCompString( ComponentsInputBtnEtxt_OnGetString( &_this->SearchExt ), 0 ) 
      != 0 )
  {
    DeviceContactsList_Search((DeviceContactsList)&EwGetAutoObject( &DeviceDevice, 
    DeviceDeviceClass )->MessageHistory, ComponentsInputBtnEtxt_OnGetString( &_this->SearchExt ));
    CoreRectView__OnSetBounds( &_this->ContactsInsideSearch, EwSetRectOrigin( _this->ContactsInsideSearch.Super2.Bounds, 
    _Const00EC ));
    ComponentsInputBtnEtxt_OnSetIcon( &_this->SearchExt, EwLoadString( &ResXIcon ));
  }
  else
    EwPostSignal( EwNewSlot( _this, ApplicationMessagesApp_onCancelSearch ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::MessagesApp.onCancelSearch()' */
void ApplicationMessagesApp_onCancelSearch( ApplicationMessagesApp _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceContactsList_CancelSearch((DeviceContactsList)&EwGetAutoObject( &DeviceDevice, 
  DeviceDeviceClass )->MessageHistory );
  CoreRectView__OnSetBounds( &_this->ContactsInsideSearch, EwSetRectY( _this->ContactsInsideSearch.Super2.Bounds, 
  _this->Super2.Bounds.Point2.Y ));
  ComponentsInputBtnEtxt_OnSetString( &_this->SearchExt, 0 );
  ComponentsInputBtnEtxt_OnSetPlaceholder( &_this->SearchExt, EwLoadString( &_Const00ED ));
  ViewsText_OnSetString( &_this->SearchExt.Text, EwConcatString( ComponentsInputBtnEtxt_OnGetString( 
  &_this->SearchExt ), EwLoadString( &_Const00EE )));
  ComponentsInputBtnEtxt_OnSetIcon( &_this->SearchExt, EwLoadString( &ResSerachIcon ));
}

/* Variants derived from the class : 'Application::MessagesApp' */
EW_DEFINE_CLASS_VARIANTS( ApplicationMessagesApp )
EW_END_OF_CLASS_VARIANTS( ApplicationMessagesApp )

/* Virtual Method Table (VMT) for the class : 'Application::MessagesApp' */
EW_DEFINE_CLASS( ApplicationMessagesApp, CoreGroup, Rectangle, addNewChat, EditMode, 
                 EditMode, EditMode, EditMode, "Application::MessagesApp" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationMessagesApp )

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
  ComponentsSButton25x25__Init( &_this->ArrowBtn, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TimeTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->MessageTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->NameTxt, &_this->_.XObject, 0 );
  ComponentsSButton50x50__Init( &_this->UserIcon, &_this->_.XObject, 0 );
  ComponentsToggleButton__Init( &_this->CheckButton, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->SButton50x50, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationMessegeItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00EF );
  _this->ButtonColor = ResWhite;
  _this->IconColor = ResWhite;
  _this->TextColor = ResBlack;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->EditEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->EditEffect, 250 );
  _this->EditEffect.Value2 = 30;
  _this->EditEffect.Value1 = 0;
  CoreRectView__OnSetBounds( &_this->Background, _Const00EF );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const0012 );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const0012 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0013 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00F0 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00F1 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00F2 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const000C );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->ArrowBtn, _Const00F3 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ArrowBtn, 0 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->ArrowBtn, 
  EwLoadString( &ResForwardIcon ));
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->ArrowBtn, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->ArrowBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->ArrowBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->ArrowBtn, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetIconColorEnabled((ComponentsButtonBase70x90)&_this->ArrowBtn, 
  ResGreyLight );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->ArrowBtn, 
  ResGrey );
  CoreRectView__OnSetBounds( &_this->TimeTxt, _Const00F4 );
  ViewsText_OnSetAlignment( &_this->TimeTxt, ViewsTextAlignmentAlignHorzRight );
  ViewsText_OnSetString( &_this->TimeTxt, EwLoadString( &_Const00B9 ));
  ViewsText_OnSetColor( &_this->TimeTxt, ResGrey );
  CoreView_OnSetLayout((CoreView)&_this->Line2, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const00F5 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const00F6 );
  ViewsLine_OnSetWidth( &_this->Line2, 2 );
  ViewsLine_OnSetColor( &_this->Line2, ResGreyLight );
  CoreRectView__OnSetBounds( &_this->MessageTxt, _Const00F7 );
  ViewsText_OnSetEllipsis( &_this->MessageTxt, 1 );
  ViewsText_OnSetAlignment( &_this->MessageTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MessageTxt, EwLoadString( &StringsmessageTxt ));
  ViewsText_OnSetColor( &_this->MessageTxt, ResGrey );
  CoreRectView__OnSetBounds( &_this->NameTxt, _Const00F8 );
  ViewsText_OnSetAlignment( &_this->NameTxt, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->NameTxt, EwLoadString( &_Const00F9 ));
  ViewsText_OnSetColor( &_this->NameTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->UserIcon, _Const00FA );
  CoreView_OnSetStackingPriority((CoreView)&_this->CheckButton, 1 );
  CoreRectView__OnSetBounds( &_this->CheckButton, _Const00FB );
  ComponentsToggleButton_OnSetBackgroundColor( &_this->CheckButton, ResGreyLight );
  ComponentsToggleButton_OnSetIconSelectedColor( &_this->CheckButton, ResWhite );
  CoreView_OnSetLayout((CoreView)&_this->Line1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const00F2 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const00FC );
  ViewsLine_OnSetWidth( &_this->Line1, 2 );
  ViewsLine_OnSetColor( &_this->Line1, ResGreyLight );
  CoreView_OnSetStackingPriority((CoreView)&_this->SButton50x50, 0 );
  CoreRectView__OnSetBounds( &_this->SButton50x50, _Const00FD );
  CoreGroup_OnSetVisible((CoreGroup)&_this->SButton50x50, 0 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->SButton50x50, 
  EwLoadString( &ResCircleFillIcon ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResWhite );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetDescriptColorEnabled((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetIconColorEnabled((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetDescriptColorPressed((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResWhite );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResBlueLight );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ArrowBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TimeTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MessageTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UserIcon ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CheckButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SButton50x50 ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationMessegeItem_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationMessegeItem_onPressKey );
  _this->EditEffect.Super1.OnAnimate = EwNewSlot( _this, ApplicationMessegeItem_onAnimate );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationMessegeItem_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationMessegeItem_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationMessegeItem_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationMessegeItem_onPressTouch );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->ArrowBtn, 
  EwLoadResource( &ResIconsFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->ArrowBtn, 
  EwLoadResource( &ResButtonRoundSmall, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->TimeTxt, EwLoadResource( &ResourcesDefaultFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->MessageTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
  ViewsText_OnSetFont( &_this->NameTxt, EwLoadResource( &ResContactFontBold15, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->UserIcon, 
  EwLoadResource( &ResButtonRoundMedium, ResourcesBitmap ));
  _this->CheckButton.OnToggle = EwNewSlot( _this, ApplicationMessegeItem_onCheck );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->SButton50x50, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->SButton50x50, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
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
  ComponentsSButton25x25__ReInit( &_this->ArrowBtn );
  ViewsText__ReInit( &_this->TimeTxt );
  ViewsLine__ReInit( &_this->Line2 );
  ViewsText__ReInit( &_this->MessageTxt );
  ViewsText__ReInit( &_this->NameTxt );
  ComponentsSButton50x50__ReInit( &_this->UserIcon );
  ComponentsToggleButton__ReInit( &_this->CheckButton );
  ViewsLine__ReInit( &_this->Line1 );
  ComponentsSButton25x25__ReInit( &_this->SButton50x50 );
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
  ComponentsSButton25x25__Done( &_this->ArrowBtn );
  ViewsText__Done( &_this->TimeTxt );
  ViewsLine__Done( &_this->Line2 );
  ViewsText__Done( &_this->MessageTxt );
  ViewsText__Done( &_this->NameTxt );
  ComponentsSButton50x50__Done( &_this->UserIcon );
  ComponentsToggleButton__Done( &_this->CheckButton );
  ViewsLine__Done( &_this->Line1 );
  ComponentsSButton25x25__Done( &_this->SButton50x50 );

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
    EwLoadString( &_Const000D )), _this->Contact->FirstName ));
    ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->UserIcon, 
    _this->Contact->NameInitials );
    ComponentsToggleButton_OnSetActive( &_this->CheckButton, 0 );

    if ( _this->Contact->MessagesList.head != 0 )
    {
      ViewsText_OnSetString( &_this->MessageTxt, DeviceMessagesList_GetLastMessage( 
      &_this->Contact->MessagesList )->MessageContent );
      ViewsText_OnSetString( &_this->TimeTxt, DeviceMessage_GetTimeOfCall( DeviceMessagesList_GetLastMessage( 
      &_this->Contact->MessagesList )));
      CoreGroup_OnSetVisible((CoreGroup)&_this->ArrowBtn, 1 );
      ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->SButton50x50, 
      EwNewStringInt( _this->Contact->UnreadMessagesNr, 0, 10 ));
      CoreGroup_OnSetVisible((CoreGroup)&_this->SButton50x50, (XBool)( _this->Contact->UnreadMessagesNr 
      > 0 ));
    }
    else
    {
      ViewsText_OnSetString( &_this->MessageTxt, 0 );
      ViewsText_OnSetString( &_this->TimeTxt, 0 );
      CoreGroup_OnSetVisible((CoreGroup)&_this->ArrowBtn, 0 );
    }
  }
}

/* 'C' function for method : 'Application::MessegeItem.onAnimate()' */
void ApplicationMessegeItem_onAnimate( ApplicationMessegeItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->CheckButton, EwSetRectX( _this->CheckButton.Super3.Bounds, 
  _this->EditEffect.Value - 30 ));
  CoreRectView__OnSetBounds( &_this->UserIcon, EwSetRectX( _this->UserIcon.Super4.Bounds, 
  _this->EditEffect.Value ));
  CoreRectView__OnSetBounds( &_this->NameTxt, EwSetRectX( _this->NameTxt.Super1.Bounds, 
  _this->EditEffect.Value + 56 ));
  CoreRectView__OnSetBounds( &_this->MessageTxt, EwSetRectX( _this->MessageTxt.Super1.Bounds, 
  _this->EditEffect.Value + 56 ));
  CoreRectView__OnSetBounds( &_this->TimeTxt, EwSetRectX( _this->TimeTxt.Super1.Bounds, 
  _this->EditEffect.Value + 145 ));
  CoreRectView__OnSetBounds( &_this->ArrowBtn, EwSetRectX( _this->ArrowBtn.Super4.Bounds, 
  _this->EditEffect.Value + 251 ));
}

/* 'C' function for method : 'Application::MessegeItem.OnSetEditMode()' */
void ApplicationMessegeItem_OnSetEditMode( ApplicationMessegeItem _this, XBool value )
{
  if ( _this->EditMode == value )
    return;

  _this->EditMode = value;
  EffectsEffect_OnSetReversed((EffectsEffect)&_this->EditEffect, (XBool)!_this->EditMode );
  EwSignal( EwNewSlot( &_this->EditEffect, EffectsEffect_StartEffect ), ((XObject)_this ));
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

/* 'C' function for method : 'Application::MessegeItem.onCheck()' */
void ApplicationMessegeItem_onCheck( ApplicationMessegeItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->CheckButton.Active == 1 )
    EwPostSignal( _this->OnCheck, ((XObject)_this ));
}

/* Variants derived from the class : 'Application::MessegeItem' */
EW_DEFINE_CLASS_VARIANTS( ApplicationMessegeItem )
EW_END_OF_CLASS_VARIANTS( ApplicationMessegeItem )

/* Virtual Method Table (VMT) for the class : 'Application::MessegeItem' */
EW_DEFINE_CLASS( ApplicationMessegeItem, CoreGroup, FlashTimer, Contact, OnActivate, 
                 ButtonColor, ButtonColor, ButtonColor, "Application::MessegeItem" )
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
  ApplicationMessegeItem_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationMessegeItem )

/* Initializer for the class 'Application::ContactsListInsideMessages' */
void ApplicationContactsListInsideMessages__Init( ApplicationContactsListInsideMessages _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationContactsList__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactsListInsideMessages );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsListInsideMessages );

  /* ... and initialize objects, variables, properties, etc. */
  ViewsText_OnSetString( &_this->Super3.TitleTxt, EwLoadString( &StringsNewMessage ));
  ViewsText_OnSetVisible( &_this->Super1.Text, 0 );
  _this->Super3.ContactsInsideSearch.OnSelectedContact = EwNewSlot( _this, ApplicationContactsListInsideMessages_Slot2 );
}

/* Re-Initializer for the class 'Application::ContactsListInsideMessages' */
void ApplicationContactsListInsideMessages__ReInit( ApplicationContactsListInsideMessages _this )
{
  /* At first re-initialize the super class ... */
  ApplicationContactsList__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::ContactsListInsideMessages' */
void ApplicationContactsListInsideMessages__Done( ApplicationContactsListInsideMessages _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationContactsList );

  /* Don't forget to deinitialize the super class ... */
  ApplicationContactsList__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::ContactsListInsideMessages.onContactPressed()' */
void ApplicationContactsListInsideMessages_onContactPressed( ApplicationContactsListInsideMessages _this, 
  XObject sender )
{
  ApplicationContactsList_OnSetContact((ApplicationContactsList)_this, EwCastObject( 
  sender, ApplicationContactItem )->Contact );
  EwPostSignal( _this->Super1.OnAddFav, ((XObject)_this ));
}

/* 'C' function for method : 'Application::ContactsListInsideMessages.Slot2()' */
void ApplicationContactsListInsideMessages_Slot2( ApplicationContactsListInsideMessages _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationContactsList_OnSetContact((ApplicationContactsList)_this, _this->Super3.ContactsInsideSearch.Contact );
  EwPostSignal( _this->Super1.OnAddFav, ((XObject)_this ));
}

/* Variants derived from the class : 'Application::ContactsListInsideMessages' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactsListInsideMessages )
EW_END_OF_CLASS_VARIANTS( ApplicationContactsListInsideMessages )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsListInsideMessages' */
EW_DEFINE_CLASS( ApplicationContactsListInsideMessages, ApplicationContactsList, 
                 _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, "Application::ContactsListInsideMessages" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
  ApplicationContactsListInsideMessages_onContactPressed,
EW_END_OF_CLASS( ApplicationContactsListInsideMessages )

/* Initializer for the class 'Application::ChatPage' */
void ApplicationChatPage__Init( ApplicationChatPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationChatPage );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreOutline__Init( &_this->Outline, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Header, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->BackBtn, &_this->_.XObject, 0 );
  ComponentsInputBtnEtxt__Init( &_this->SearchEtxt, &_this->_.XObject, 0 );
  ComponentsSButton25x25__Init( &_this->BackBtn1, &_this->_.XObject, 0 );
  ComponentsButton40x55__Init( &_this->Button40x55, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationChatPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0052 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0052 );
  ViewsRectangle_OnSetColor( &_this->Background, ResWhite );
  CoreRectView__OnSetBounds( &_this->Outline, _Const00FE );
  CoreOutline_OnSetSpace( &_this->Outline, 1 );
  CoreOutline_OnSetFormation( &_this->Outline, CoreFormationBottomToTop );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const00FE );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreRectView__OnSetBounds( &_this->Header, _Const00FF );
  ViewsRectangle_OnSetColor( &_this->Header, ResPressColor );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const0100 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const0101 );
  ViewsLine_OnSetColor( &_this->Line, ResGrey );
  CoreRectView__OnSetBounds( &_this->BackBtn, _Const0029 );
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
  CoreRectView__OnSetBounds( &_this->SearchEtxt, _Const0102 );
  ComponentsInputBtnEtxt_OnSetString( &_this->SearchEtxt, 0 );
  ComponentsInputBtnEtxt_OnSetColor( &_this->SearchEtxt, ResBlack );
  ComponentsInputBtnEtxt_OnSetPlaceholder( &_this->SearchEtxt, EwLoadString( &_Const00ED ));
  ComponentsInputBtnEtxt_OnSetIcon( &_this->SearchEtxt, EwLoadString( &ResSendIcon ));
  CoreRectView__OnSetBounds( &_this->BackBtn1, _Const0103 );
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
  CoreRectView__OnSetBounds( &_this->Button40x55, _Const0104 );
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->Button40x55, 
  EwLoadString( &_Const00F9 ));
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
  _this->BackBtn.Super1.OnActivate = EwNewSlot( _this, ApplicationChatPage_onBack );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->BackBtn, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
  _this->SearchEtxt.OnIcon = EwNewSlot( _this, ApplicationChatPage_onSend );
  _this->BackBtn1.Super1.OnActivate = EwNewSlot( _this, ApplicationChatPage_onCall );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->BackBtn1, 
  EwLoadResource( &ResIconsFont20, ResourcesFont ));
  _this->Button40x55.Super1.OnActivate = EwNewSlot( _this, ApplicationChatPage_onUser );
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->Button40x55, 
  EwLoadResource( &ResButtonRoundMedium, ResourcesBitmap ));

  /* Call the user defined constructor */
  ApplicationChatPage_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::ChatPage' */
void ApplicationChatPage__ReInit( ApplicationChatPage _this )
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
  ComponentsInputBtnEtxt__ReInit( &_this->SearchEtxt );
  ComponentsSButton25x25__ReInit( &_this->BackBtn1 );
  ComponentsButton40x55__ReInit( &_this->Button40x55 );
}

/* Finalizer method for the class 'Application::ChatPage' */
void ApplicationChatPage__Done( ApplicationChatPage _this )
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
  ComponentsInputBtnEtxt__Done( &_this->SearchEtxt );
  ComponentsSButton25x25__Done( &_this->BackBtn1 );
  ComponentsButton40x55__Done( &_this->Button40x55 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationChatPage_Init( ApplicationChatPage _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
}

/* 'C' function for method : 'Application::ChatPage.onBack()' */
void ApplicationChatPage_onBack( ApplicationChatPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnBack, ((XObject)_this ));
}

/* 'C' function for method : 'Application::ChatPage.onUser()' */
void ApplicationChatPage_onUser( ApplicationChatPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->detailsPage = EwNewObject( ApplicationDetailsPage, 0 );
  _this->detailsPage->OnBack = EwNewSlot( _this, ApplicationChatPage_onCloseUser );
  ApplicationDetailsPage_OnSetContact( _this->detailsPage, _this->Contact );
  CoreGroup__SwitchToDialog( _this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideUpCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::ChatPage.onCall()' */
void ApplicationChatPage_onCall( ApplicationChatPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_SendCallFromContact( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  _this->Contact );
}

/* 'C' function for method : 'Application::ChatPage.onCloseUser()' */
void ApplicationChatPage_onCloseUser( ApplicationChatPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->detailsPage = 0;
}

/* 'C' function for method : 'Application::ChatPage.OnSetContact()' */
void ApplicationChatPage_OnSetContact( ApplicationChatPage _this, DeviceContact 
  value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationChatPage_onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationChatPage_onContactUpdated ), 
      (XObject)_this->Contact, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationChatPage_onContactUpdated ), ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::ChatPage.onContactUpdated()' */
void ApplicationChatPage_onContactUpdated( ApplicationChatPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Contact != 0 )
  {
    ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->Button40x55, 
    _this->Contact->FirstName );
    ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->Button40x55, 
    _this->Contact->NameInitials );
  }

  EwSignal( EwNewSlot( _this, ApplicationChatPage_onMessageUpdate ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::ChatPage.onSend()' */
void ApplicationChatPage_onSend( ApplicationChatPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwCompString( ComponentsInputBtnEtxt_OnGetString( &_this->SearchEtxt ), 0 ) 
      != 0 )
  {
    DeviceDeviceClass_SendMessage( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
    _this->Contact, ComponentsInputBtnEtxt_OnGetString( &_this->SearchEtxt ));
    ViewsText_OnSetString( &_this->SearchEtxt.Text, EwLoadString( &_Const000D ));
  }
}

/* 'C' function for method : 'Application::ChatPage.onMessageUpdate()' */
void ApplicationChatPage_onMessageUpdate( ApplicationChatPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationChatPage_RemoveMessages( _this );

  if (( _this->Contact != 0 ) && ( _this->Contact->MessagesList.head != 0 ))
  {
    ComponentsTextButton unreadText = EwNewObject( ComponentsTextButton, 0 );
    XBool isAdded;
    XInt32 order;
    DeviceMessage message;
    ComponentsTextButton_OnSetText( unreadText, EwLoadString( &_Const0105 ));
    ViewsText_OnSetAlignment( &unreadText->TextTxt, ViewsTextAlignmentAlignHorzCenter 
    | ViewsTextAlignmentAlignVertCenter );
    ViewsText_OnSetFont( &unreadText->TextTxt, EwLoadResource( &ResContactFontBold15, 
    ResourcesFont ));
    ComponentsTextButton_OnSetTextColor( unreadText, ResGrey );
    ComponentsTextButton_OnSetBackgoundColor( unreadText, ResPressColor );
    CoreRectView__OnSetBounds( unreadText, EwSetRectH( unreadText->Super3.Bounds, 
    20 ));
    CoreRectView__OnSetBounds( unreadText, EwSetRectW( unreadText->Super3.Bounds, 
    272 ));
    _this->lastItem = 0;
    isAdded = 0;
    order = -1;
    message = _this->Contact->MessagesList.head;

    while ( message != 0 )
    {
      ApplicationChatItem chatItem = EwNewObject( ApplicationChatItem, 0 );
      chatItem->OnDelete = EwNewSlot( _this, ApplicationChatPage_onDeleteMessage );

      if ( !message->IsSeen )
      {
        if ( !isAdded )
        {
          CoreGroup_OnSetEmbedded((CoreGroup)unreadText, 1 );
          CoreGroup__Add( _this, ((CoreView)unreadText ), order-- );
          isAdded = 1;
        }

        DeviceMessage_OnSetIsSeen( message, 1 );
      }

      if ( message->Sender == EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact )
      {
        ApplicationChatItem_OnSetLeftAligned( chatItem, 0 );
        ApplicationChatItem_OnSetBubbleColor( chatItem, ResBlue );
        ApplicationChatItem_OnSetMessage( chatItem, message );
        ApplicationChatItem_OnSetMessageColor( chatItem, ResWhite );
      }
      else
        if ( message->Receiver == EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact )
        {
          ApplicationChatItem_OnSetLeftAligned( chatItem, 1 );
          ApplicationChatItem_OnSetBubbleColor( chatItem, ResGreyLight );
          ApplicationChatItem_OnSetMessage( chatItem, message );
          ApplicationChatItem_OnSetMessageColor( chatItem, ResBlack );
        }

      CoreGroup_OnSetEmbedded((CoreGroup)chatItem, 1 );
      CoreGroup__Add( _this, ((CoreView)chatItem ), order-- );

      if ( _this->lastItem == 0 )
        _this->lastItem = chatItem;

      message = message->next;
    }

    DeviceContact_OnSetUnreadMessagesNr( _this->Contact, 0 );
    CoreOutline_OnSetScrollOffset( &_this->Outline, _Const000C );
  }

  DeviceHistoryMessagesList_FindUnreadMessagesNr( &EwGetAutoObject( &DeviceDevice, 
  DeviceDeviceClass )->MessageHistory );
}

/* 'C' function for method : 'Application::ChatPage.RemoveMessages()' */
void ApplicationChatPage_RemoveMessages( ApplicationChatPage _this )
{
  CoreView view = CoreOutline_FindNextView( &_this->Outline, 0, CoreViewStateEmbedded );

  while ( view != 0 )
  {
    if ( view != 0 )
      CoreGroup__Remove( _this, view );

    view = CoreOutline_FindNextView( &_this->Outline, 0, CoreViewStateEmbedded );
  }
}

/* 'C' function for method : 'Application::ChatPage.onDeleteMessage()' */
void ApplicationChatPage_onDeleteMessage( ApplicationChatPage _this, XObject sender )
{
  ApplicationChatItem chatitm = EwCastObject( sender, ApplicationChatItem );

  DeviceMessagesList_Remove( &_this->Contact->MessagesList, chatitm->Message );
  EwTrace( "", DeviceMessagesList_TraceMessages( &_this->Contact->MessagesList ));
  EwPostSignal( EwNewSlot( _this, ApplicationChatPage_onMessageUpdate ), ((XObject)_this ));
}

/* Variants derived from the class : 'Application::ChatPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationChatPage )
EW_END_OF_CLASS_VARIANTS( ApplicationChatPage )

/* Virtual Method Table (VMT) for the class : 'Application::ChatPage' */
EW_DEFINE_CLASS( ApplicationChatPage, CoreGroup, Background, detailsPage, OnBack, 
                 _.VMT, _.VMT, _.VMT, "Application::ChatPage" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationChatPage )

/* Initializer for the class 'Application::ChatItem' */
void ApplicationChatItem__Init( ApplicationChatItem _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationChatItem );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Backgound, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->ChatOutline, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ComponentsTextButton__Init( &_this->DeleteBtn, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationChatItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0106 );
  _this->BubbleColor = ResGreyLight;
  _this->MessageColor = ResBlack;
  CoreRectView__OnSetBounds( &_this->Backgound, _Const0107 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const000C );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0108 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0109 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const010A );
  CoreView_OnSetLayout((CoreView)&_this->ChatOutline, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->ChatOutline, _Const010B );
  ViewsFrame_OnSetNoEdgesLimit( &_this->ChatOutline, _Const010C );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Text, _Const010D );
  ViewsText_OnSetPadding( &_this->Text, 2 );
  ViewsText_OnSetEllipsis( &_this->Text, 1 );
  ViewsText_OnSetAutoSize( &_this->Text, 1 );
  ViewsText_OnSetWrapWidth( &_this->Text, 195 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const010E ));
  CoreRectView__OnSetBounds( &_this->DeleteBtn, _Const010F );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->DeleteBtn, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->DeleteBtn, 0 );
  ComponentsTextButton_OnSetText( &_this->DeleteBtn, EwLoadString( &_Const0110 ));
  ComponentsTextButton_OnSetTextColor( &_this->DeleteBtn, ResWhite );
  ComponentsTextButton_OnSetTextColorPress( &_this->DeleteBtn, ResGreyLight );
  CoreGroup__Add( _this, ((CoreView)&_this->Backgound ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ChatOutline ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DeleteBtn ), 0 );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationChatItem_onPress );
  ViewsFrame_OnSetBitmap( &_this->ChatOutline, EwLoadResource( &ResChatLeft, ResourcesBitmap ));
  ViewsText_OnSetOnUpdate( &_this->Text, EwNewSlot( _this, ApplicationChatItem_onUpdateText ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResContactFont15, ResourcesFont ));
  _this->DeleteBtn.OnActivate = EwNewSlot( _this, ApplicationChatItem_onDelete );
}

/* Re-Initializer for the class 'Application::ChatItem' */
void ApplicationChatItem__ReInit( ApplicationChatItem _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Backgound );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsFrame__ReInit( &_this->ChatOutline );
  ViewsText__ReInit( &_this->Text );
  ComponentsTextButton__ReInit( &_this->DeleteBtn );
}

/* Finalizer method for the class 'Application::ChatItem' */
void ApplicationChatItem__Done( ApplicationChatItem _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Backgound );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsFrame__Done( &_this->ChatOutline );
  ViewsText__Done( &_this->Text );
  ComponentsTextButton__Done( &_this->DeleteBtn );

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
    ViewsFrame_OnSetBitmap( &_this->ChatOutline, EwLoadResource( &ResChatRight, 
    ResourcesBitmap ));
    CoreView_OnSetLayout((CoreView)&_this->ChatOutline, CoreLayoutAlignToRight | 
    CoreLayoutAlignToTop );
    CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToRight | CoreLayoutAlignToTop );
    CoreRectView__OnSetBounds( &_this->Text, EwSetRectX( _this->Text.Super1.Bounds, 
    ( 272 - EwGetRectW( ViewsText_GetContentArea( &_this->Text ))) - 20 ));
    CoreRectView__OnSetBounds( &_this->Text, EwSetRectY( _this->Text.Super1.Bounds, 
    10 ));
  }
  else
    if ( _this->LeftAligned == 1 )
    {
      ViewsFrame_OnSetBitmap( &_this->ChatOutline, EwLoadResource( &ResChatLeft, 
      ResourcesBitmap ));
      CoreRectView__OnSetBounds( &_this->Text, EwSetRectX( _this->Text.Super1.Bounds, 
      15 ));
      CoreRectView__OnSetBounds( &_this->Text, EwSetRectY( _this->Text.Super1.Bounds, 
      10 ));
    }

  ViewsFrame_OnSetColor( &_this->ChatOutline, _this->BubbleColor );
  ViewsText_OnSetColor( &_this->Text, _this->MessageColor );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft );
  ViewsRectangle_OnSetColor( &_this->Backgound, ResTransparent );
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
void ApplicationChatItem_OnSetMessage( ApplicationChatItem _this, DeviceMessage 
  value )
{
  if ( _this->Message == value )
    return;

  _this->Message = value;
  EwPostSignal( EwNewSlot( _this, ApplicationChatItem_onUpdateMessage ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::ChatItem.OnSetBubbleColor()' */
void ApplicationChatItem_OnSetBubbleColor( ApplicationChatItem _this, XColor value )
{
  if ( !EwCompColor( _this->BubbleColor, value ))
    return;

  _this->BubbleColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::ChatItem.onPress()' */
void ApplicationChatItem_onPress( ApplicationChatItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_OnSetEnabled((CoreGroup)&_this->DeleteBtn, (( CoreGroup_OnGetEnabled((CoreGroup)&_this->DeleteBtn ) 
  == 1 )? 0 : 1 ));
  CoreGroup_OnSetVisible((CoreGroup)&_this->DeleteBtn, (( CoreGroup_OnGetVisible((CoreGroup)&_this->DeleteBtn ) 
  == 1 )? 0 : 1 ));
  ViewsRectangle_OnSetColor( &_this->Backgound, ( !EwCompColor( _this->Backgound.Color, 
  ResBlueLight1 )? ResTransparent : ResBlueLight1 ));
}

/* 'C' function for method : 'Application::ChatItem.onUpdateMessage()' */
void ApplicationChatItem_onUpdateMessage( ApplicationChatItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Message != 0 )
    ViewsText_OnSetString( &_this->Text, _this->Message->MessageContent );
}

/* 'C' function for method : 'Application::ChatItem.onDelete()' */
void ApplicationChatItem_onDelete( ApplicationChatItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnDelete, ((XObject)_this ));
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
    CoreRectView__OnSetBounds( &_this->ChatOutline, EwInflateRect( ViewsText_GetContentArea( 
    &_this->Text ), _Const0111 ));
    ((void)( _tmpK0 = _this->ChatOutline.Super1.Bounds ), CoreRectView__OnSetBounds( 
    &_this->ChatOutline, EwSetRectH( _tmpK0, EwGetRectH( _tmpK0 ) + 10 )));
    CoreRectView__OnSetBounds( &_this->DeleteBtn, EwSetRectX( _this->DeleteBtn.Super3.Bounds, 
    5 ));
  }
  else
    if ( _this->LeftAligned == 1 )
    {
      CoreRectView__OnSetBounds( &_this->ChatOutline, EwInflateRect( ViewsText_GetContentArea( 
      &_this->Text ), _Const0111 ));
      ((void)( _tmpK0 = _this->ChatOutline.Super1.Bounds ), CoreRectView__OnSetBounds( 
      &_this->ChatOutline, EwSetRectH( _tmpK0, EwGetRectH( _tmpK0 ) + 10 )));
      CoreView_OnSetLayout((CoreView)&_this->ChatOutline, CoreLayoutAlignToRight 
      | CoreLayoutAlignToTop );
    }

  CoreRectView__OnSetBounds( _this, EwSetRectH( _this->Super2.Bounds, _this->ChatOutline.Super1.Bounds.Point2.Y ));
  CoreRectView__OnSetBounds( &_this->Backgound, EwSetRectH( _this->Backgound.Super1.Bounds, 
  EwGetRectH( _this->Super2.Bounds )));
}

/* 'C' function for method : 'Application::ChatItem.OnSetMessageColor()' */
void ApplicationChatItem_OnSetMessageColor( ApplicationChatItem _this, XColor value )
{
  if ( !EwCompColor( _this->MessageColor, value ))
    return;

  _this->MessageColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::ChatItem' */
EW_DEFINE_CLASS_VARIANTS( ApplicationChatItem )
EW_END_OF_CLASS_VARIANTS( ApplicationChatItem )

/* Virtual Method Table (VMT) for the class : 'Application::ChatItem' */
EW_DEFINE_CLASS( ApplicationChatItem, CoreGroup, Backgound, Message, OnDelete, BubbleColor, 
                 BubbleColor, BubbleColor, "Application::ChatItem" )
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
  ApplicationChatItem_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationChatItem )

/* Initializer for the class 'Application::ContactsInsideSearch' */
void ApplicationContactsInsideSearch__Init( ApplicationContactsInsideSearch _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactsInsideSearch );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->VerticalList, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsInsideSearch );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0052 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0112 );
  CoreView_OnSetLayout((CoreView)&_this->VerticalList, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const0113 );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 32 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( ApplicationContactItem ));
  CoreView_OnSetStackingPriority((CoreView)&_this->SlideTouchHandler, -1 );
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToLeft 
  | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0114 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const0003 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationContactsInsideSearch_OnLoadItem );
  CoreVerticalList_OnSetSlideHandler( &_this->VerticalList, &_this->SlideTouchHandler );

  /* Call the user defined constructor */
  ApplicationContactsInsideSearch_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::ContactsInsideSearch' */
void ApplicationContactsInsideSearch__ReInit( ApplicationContactsInsideSearch _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  CoreVerticalList__ReInit( &_this->VerticalList );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
}

/* Finalizer method for the class 'Application::ContactsInsideSearch' */
void ApplicationContactsInsideSearch__Done( ApplicationContactsInsideSearch _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  CoreVerticalList__Done( &_this->VerticalList );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationContactsInsideSearch_Init( ApplicationContactsInsideSearch _this, 
  XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationContactsInsideSearch_onNoOfContactsChanged ), 
    EwNewRef( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->FilteredContacts, 
    DeviceContactsList_OnGetNoOfItems, DeviceContactsList_OnSetNoOfItems ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationContactsInsideSearch_onNoOfContactsChanged ), 
    ((XObject)_this ));
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationContactsInsideSearch_OnLoadItem( ApplicationContactsInsideSearch _this, 
  XObject sender )
{
  XInt32 itemNo;
  DeviceContact contact;
  ApplicationContactItem itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  contact = DeviceContactsList_GetContact( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->FilteredContacts, 
  itemNo );
  itemView = EwCastObject( _this->VerticalList.View, ApplicationContactItem );

  if ( itemView == 0 )
    return;

  ApplicationContactItem_OnSetContact( itemView, contact );
  itemView->OnActivate = EwNewSlot( _this, ApplicationContactsInsideSearch_onSelectedContact );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->VerticalList.Super2.Bounds ), _this->VerticalList.ItemHeight )));
}

/* 'C' function for method : 'Application::ContactsInsideSearch.onNoOfContactsChanged()' */
void ApplicationContactsInsideSearch_onNoOfContactsChanged( ApplicationContactsInsideSearch _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, EwGetAutoObject( &DeviceDevice, 
  DeviceDeviceClass )->FilteredContacts.NoOfItems );
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
}

/* 'C' function for method : 'Application::ContactsInsideSearch.onSelectedContact()' */
void ApplicationContactsInsideSearch_onSelectedContact( ApplicationContactsInsideSearch _this, 
  XObject sender )
{
  ApplicationContactsInsideSearch_OnSetContact( _this, EwCastObject( sender, ApplicationContactItem )->Contact );
  EwSignal( _this->OnSelectedContact, ((XObject)_this ));
}

/* 'C' function for method : 'Application::ContactsInsideSearch.OnSetContact()' */
void ApplicationContactsInsideSearch_OnSetContact( ApplicationContactsInsideSearch _this, 
  DeviceContact value )
{
  if ( _this->Contact == value )
    return;

  _this->Contact = value;
  EwNotifyRefObservers( EwNewRef( _this, ApplicationContactsInsideSearch_OnGetContact, 
    ApplicationContactsInsideSearch_OnSetContact ), 0 );
}

/* Default onget method for the property 'Contact' */
DeviceContact ApplicationContactsInsideSearch_OnGetContact( ApplicationContactsInsideSearch _this )
{
  return _this->Contact;
}

/* Variants derived from the class : 'Application::ContactsInsideSearch' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactsInsideSearch )
EW_END_OF_CLASS_VARIANTS( ApplicationContactsInsideSearch )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsInsideSearch' */
EW_DEFINE_CLASS( ApplicationContactsInsideSearch, CoreGroup, Background, Contact, 
                 OnSelectedContact, _.VMT, _.VMT, _.VMT, "Application::ContactsInsideSearch" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationContactsInsideSearch )

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

  EwPostSignal( EwNewSlot( _this, ApplicationApplication_onPresentSplash ), ((XObject)_this ));
  EwAttachRefObserver( EwNewSlot( _this, ApplicationApplication_onCallState ), EwNewRef( 
    &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->OngoingCalls, DeviceContactsList_OnGetNoOfItems, 
    DeviceContactsList_OnSetNoOfItems ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationApplication_onCallState ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Application.onCallState()' */
void ApplicationApplication_onCallState( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationApplication_onCallState ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = EwCastObject( DeviceContactsList_GetContact( &EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass )->OngoingCalls, 0 ), DeviceHistoryContact );

  if ( _this->ongoingPage != 0 )
  {
    CoreGroup__DismissDialog( _this, ((CoreGroup)_this->ongoingPage ), ((EffectsTransition)EwGetAutoObject( 
    &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
    0 );
    _this->ongoingPage = 0;
  }

  if ( _this->Contact != 0 )
  {
    if (((( _this->Contact->CallState == DeviceCallStateCancelled ) || ( _this->Contact->CallState 
        == DeviceCallStateEndCall )) || ( _this->Contact->CallState == DeviceCallStateRejected )) 
        || ( _this->Contact->CallState == DeviceCallStateMissed ))
      CoreGroup__DismissDialog( _this, ((CoreGroup)_this->ongoingPage ), ((EffectsTransition)EwGetAutoObject( 
      &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
      0 );

    if ( _this->Contact->CallDirection == DeviceCallDirectionIncoming )
    {
      if ( _this->Contact->CallState == DeviceCallStateSpeaking )
      {
        _this->ongoingPage = ((ApplicationCallBase)EwNewObject( ApplicationOngoingCall, 
        0 ));
        ApplicationCallBase_OnSetContact( _this->ongoingPage, _this->Contact );
      }
      else
      {
        _this->ongoingPage = ((ApplicationCallBase)EwNewObject( ApplicationIncomingCall, 
        0 ));
        ApplicationCallBase_OnSetContact( _this->ongoingPage, _this->Contact );
      }

      CoreGroup__PresentDialog( _this, ((CoreGroup)_this->ongoingPage ), ((EffectsTransition)EwGetAutoObject( 
      &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, 0, 0, 0, EwNullSlot, 
      EwNullSlot, 0 );
    }
    else
      if ( _this->Contact->CallDirection == DeviceCallDirectionOutgoing )
      {
        _this->ongoingPage = ((ApplicationCallBase)EwNewObject( ApplicationOngoingCall, 
        0 ));
        ApplicationCallBase_OnSetContact( _this->ongoingPage, _this->Contact );
        CoreGroup__PresentDialog( _this, ((CoreGroup)_this->ongoingPage ), ((EffectsTransition)EwGetAutoObject( 
        &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, 0, 0, 0, EwNullSlot, 
        EwNullSlot, 0 );
      }

    EwAttachObjObserver( EwNewSlot( _this, ApplicationApplication_onCallState ), 
      (XObject)_this->Contact, 0 );
  }
}

/* 'C' function for method : 'Application::Application.onPresentSplash()' */
void ApplicationApplication_onPresentSplash( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->splashScreen = EwNewObject( ApplicationSplashScreen, 0 );
  _this->splashScreen->OnStart = EwNewSlot( _this, ApplicationApplication_onDismissSplash );
  CoreGroup__PresentDialog( _this, ((CoreGroup)_this->splashScreen ), 0, 0, 0, 0, 
  0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::Application.onDismissSplash()' */
void ApplicationApplication_onDismissSplash( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->splashScreen ), 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationApplication_onHomeBtnPressed ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Application.onHomeBtnPressed()' */
void ApplicationApplication_onHomeBtnPressed( ApplicationApplication _this, XObject 
  sender )
{
  ApplicationHomePage page;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  page = EwNewObject( ApplicationHomePage, 0 );
  CoreGroup__PresentDialog( _this, ((CoreGroup)page ), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::Application.SetMyNumber()' */
void ApplicationApplication_SetMyNumber( ApplicationApplication _this, XInt32 aMyNumber )
{
  _this->myID = aMyNumber;
  EwIdleSignal( EwNewSlot( _this, ApplicationApplication_onSetMyContact ), ((XObject)_this ));
}

/* Wrapper function for the non virtual method : 'Application::Application.SetMyNumber()' */
void ApplicationApplication__SetMyNumber( void* _this, XInt32 aMyNumber )
{
  ApplicationApplication_SetMyNumber((ApplicationApplication)_this, aMyNumber );
}

/* 'C' function for method : 'Application::Application.onSetMyContact()' */
void ApplicationApplication_onSetMyContact( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_OnSetMyContact( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  DeviceContactsList_FindByID1( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
  _this->myID ));
  EwTrace( "%i", _this->myID );
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, deviceInstance, deviceInstance, 
                 myID, myID, myID, myID, "Application::Application" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetBuffered,
  CoreRoot_OnSetOpacity,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationApplication )

/* Initializer for the class 'Application::HomePage' */
void ApplicationHomePage__Init( ApplicationHomePage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationHomePage );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ComponentsButton50x75__Init( &_this->Button50x77, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Footer, &_this->_.XObject, 0 );
  ComponentsSButton50x50__Init( &_this->Contacts, &_this->_.XObject, 0 );
  ComponentsSButton50x50__Init( &_this->Messeges, &_this->_.XObject, 0 );
  ComponentsSButton50x50__Init( &_this->SButton50x50, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationHomePage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0052 );
  CoreRectView__OnSetBounds( &_this->Image, _Const0052 );
  ViewsImage_OnSetColor( &_this->Image, _Const0013 );
  CoreRectView__OnSetBounds( &_this->Button50x77, _Const0115 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->Button50x77, 
  EwLoadString( &ResSettingsIcon ));
  ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->Button50x77, 
  EwLoadString( &_Const0116 ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->Button50x77, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->Button50x77, 
  _Const0117 );
  ComponentsButtonBase70x90_OnSetDescriptColorPressed((ComponentsButtonBase70x90)&_this->Button50x77, 
  ResGrey );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->Button50x77, 
  ResPressColor );
  CoreView_OnSetLayout((CoreView)&_this->Footer, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Footer, _Const0118 );
  ViewsRectangle_OnSetColorBL( &_this->Footer, _Const0119 );
  ViewsRectangle_OnSetColorBR( &_this->Footer, _Const011A );
  ViewsRectangle_OnSetColorTR( &_this->Footer, _Const011B );
  ViewsRectangle_OnSetColorTL( &_this->Footer, _Const011C );
  ViewsRectangle_OnSetColor( &_this->Footer, _Const011D );
  CoreView_OnSetLayout((CoreView)&_this->Contacts, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Contacts, _Const011E );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->Contacts, 
  EwLoadString( &ResCallIcon ));
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->Contacts, 
  ResGreenDark );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->Contacts, 
  ResGreen );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->Contacts, 
  ResGreyLight );
  CoreView_OnSetLayout((CoreView)&_this->Messeges, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Messeges, _Const011F );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->Messeges, 
  EwLoadString( &ResMessageIcon ));
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->Messeges, 
  ResGreenDark );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->Messeges, 
  ResGreen );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->Messeges, 
  ResGreyLight );
  CoreView_OnSetStackingPriority((CoreView)&_this->SButton50x50, 0 );
  CoreRectView__OnSetBounds( &_this->SButton50x50, _Const0120 );
  ComponentsButtonBase70x90_OnSetIcon((ComponentsButtonBase70x90)&_this->SButton50x50, 
  EwLoadString( &ResCircleFillIcon ));
  ComponentsButtonBase70x90_OnSetDescriptColor((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResWhite );
  ComponentsButtonBase70x90_OnSetIconColor((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResBlue );
  ComponentsButtonBase70x90_OnSetBackgoundColor((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgoundColorPressed((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetBackgroundColorEnabled((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetDescriptColorEnabled((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetIconColorEnabled((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResTransparent );
  ComponentsButtonBase70x90_OnSetDescriptColorPressed((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResWhite );
  ComponentsButtonBase70x90_OnSetIconColorPressed((ComponentsButtonBase70x90)&_this->SButton50x50, 
  ResBlueLight );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Button50x77 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Footer ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Contacts ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Messeges ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SButton50x50 ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &Resbackground, ResourcesBitmap ));
  _this->Button50x77.Super1.OnActivate = EwNewSlot( _this, ApplicationHomePage_onSettingsAppPressed );
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->Button50x77, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->Button50x77, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->Button50x77, 
  EwLoadResource( &ResSuqareButton, ResourcesBitmap ));
  _this->Contacts.Super1.OnActivate = EwNewSlot( _this, ApplicationHomePage_onPhoneAppPressed );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->Contacts, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->Contacts, 
  EwLoadResource( &ResSuqareButton, ResourcesBitmap ));
  _this->Messeges.Super1.OnActivate = EwNewSlot( _this, ApplicationHomePage_onMessagesAppPressed );
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->Messeges, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetBackgound((ComponentsButtonBase70x90)&_this->Messeges, 
  EwLoadResource( &ResSuqareButton, ResourcesBitmap ));
  ComponentsButtonBase70x90_OnSetDescriptFont((ComponentsButtonBase70x90)&_this->SButton50x50, 
  EwLoadResource( &ResContactFont12, ResourcesFont ));
  ComponentsButtonBase70x90_OnSetIconFont((ComponentsButtonBase70x90)&_this->SButton50x50, 
  EwLoadResource( &ResIconsFont25, ResourcesFont ));

  /* Call the user defined constructor */
  ApplicationHomePage_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::HomePage' */
void ApplicationHomePage__ReInit( ApplicationHomePage _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  ComponentsButton50x75__ReInit( &_this->Button50x77 );
  ViewsRectangle__ReInit( &_this->Footer );
  ComponentsSButton50x50__ReInit( &_this->Contacts );
  ComponentsSButton50x50__ReInit( &_this->Messeges );
  ComponentsSButton50x50__ReInit( &_this->SButton50x50 );
}

/* Finalizer method for the class 'Application::HomePage' */
void ApplicationHomePage__Done( ApplicationHomePage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  ComponentsButton50x75__Done( &_this->Button50x77 );
  ViewsRectangle__Done( &_this->Footer );
  ComponentsSButton50x50__Done( &_this->Contacts );
  ComponentsSButton50x50__Done( &_this->Messeges );
  ComponentsSButton50x50__Done( &_this->SButton50x50 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationHomePage_Init( ApplicationHomePage _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationHomePage_ShowUnreadMessages ), 
    EwNewRef( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MessageHistory, 
    DeviceHistoryMessagesList_OnGetUnreadMessagesNr, DeviceHistoryMessagesList_OnSetUnreadMessagesNr ), 
    0 );
  EwPostSignal( EwNewSlot( _this, ApplicationHomePage_ShowUnreadMessages ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::HomePage.onPhoneAppPressed()' */
void ApplicationHomePage_onPhoneAppPressed( ApplicationHomePage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->phoneApp = EwNewObject( ApplicationPhoneApp, 0 );
  CoreGroup__PresentDialog( _this, ((CoreGroup)_this->phoneApp ), 0, 0, 0, 0, 0, 
  0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::HomePage.onMessagesAppPressed()' */
void ApplicationHomePage_onMessagesAppPressed( ApplicationHomePage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->messageApp = EwNewObject( ApplicationMessagesApp, 0 );
  CoreGroup__PresentDialog( _this, ((CoreGroup)_this->messageApp ), 0, 0, 0, 0, 
  0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::HomePage.onSettingsAppPressed()' */
void ApplicationHomePage_onSettingsAppPressed( ApplicationHomePage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->settingsApp = EwNewObject( ApplicationEditPage, 0 );
  CoreRectView__OnSetBounds( _this->settingsApp, EwSetRectH( _this->settingsApp->Super2.Bounds, 
  480 ));

  if ( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact != 0 )
    ApplicationEditPage_OnSetContact( _this->settingsApp, EwGetAutoObject( &DeviceDevice, 
    DeviceDeviceClass )->MyContact );
  else
    ApplicationEditPage_OnSetContact( _this->settingsApp, EwNewObject( DeviceContact, 
    0 ));

  _this->settingsApp->OnClose = EwNewSlot( _this, ApplicationHomePage_onClose );
  _this->settingsApp->OnSave = EwNewSlot( _this, ApplicationHomePage_onSave );
  CoreGroup__PresentDialog( _this, ((CoreGroup)_this->settingsApp ), 0, 0, 0, 0, 
  0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::HomePage.onClose()' */
void ApplicationHomePage_onClose( ApplicationHomePage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__DismissDialog( _this, ((CoreGroup)_this->settingsApp ), 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  _this->settingsApp = 0;
}

/* 'C' function for method : 'Application::HomePage.onSave()' */
void ApplicationHomePage_onSave( ApplicationHomePage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_OnSetMyContact( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
  _this->settingsApp->Contact );
  DeviceContactsList_AddLast( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->Contacts, 
  _this->settingsApp->Contact );
  EwPostSignal( EwNewSlot( _this, ApplicationHomePage_onClose ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::HomePage.ShowUnreadMessages()' */
void ApplicationHomePage_ShowUnreadMessages( ApplicationHomePage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MessageHistory.UnreadMessagesNr 
      != 0 )
  {
    CoreGroup_OnSetVisible((CoreGroup)&_this->SButton50x50, 1 );
    ComponentsButtonBase70x90_OnSetDescript((ComponentsButtonBase70x90)&_this->SButton50x50, 
    EwNewStringInt( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MessageHistory.UnreadMessagesNr, 
    0, 10 ));
  }
  else
    CoreGroup_OnSetVisible((CoreGroup)&_this->SButton50x50, 0 );
}

/* Variants derived from the class : 'Application::HomePage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationHomePage )
EW_END_OF_CLASS_VARIANTS( ApplicationHomePage )

/* Virtual Method Table (VMT) for the class : 'Application::HomePage' */
EW_DEFINE_CLASS( ApplicationHomePage, CoreGroup, Image, phoneApp, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::HomePage" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationHomePage )

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
  ViewsRectangle_OnSetColorBL( &_this->Rectangle, _Const0121 );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle, _Const0122 );
  ViewsRectangle_OnSetColorTL( &_this->Rectangle, _Const0123 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, ResBlack );
  CoreRectView__OnSetBounds( &_this->Image, _Const0124 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0125 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0108 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0126 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0127 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &Reslogog, ResourcesBitmap ));
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationSplashScreen_onScreenTouched );
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

/* 'C' function for method : 'Application::SplashScreen.onScreenTouched()' */
void ApplicationSplashScreen_onScreenTouched( ApplicationSplashScreen _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnStart, ((XObject)_this ));
}

/* Variants derived from the class : 'Application::SplashScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSplashScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationSplashScreen )

/* Virtual Method Table (VMT) for the class : 'Application::SplashScreen' */
EW_DEFINE_CLASS( ApplicationSplashScreen, CoreGroup, Rectangle, OnStart, OnStart, 
                 _.VMT, _.VMT, _.VMT, "Application::SplashScreen" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSplashScreen )

/* Embedded Wizard */
