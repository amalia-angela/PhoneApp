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
#include "_ApplicationContact.h"
#include "_ApplicationContactAddPage.h"
#include "_ApplicationContactDetailsPage.h"
#include "_ApplicationContactEditPage.h"
#include "_ApplicationContactItem.h"
#include "_ApplicationContacts.h"
#include "_ApplicationContactsApp.h"
#include "_ApplicationContactsInsideCall.h"
#include "_ApplicationContactsList.h"
#include "_ApplicationContactsManager.h"
#include "_ApplicationContactsManager1.h"
#include "_ApplicationContactsPage.h"
#include "_ApplicationDetailsInsideCall.h"
#include "_ApplicationDeviceClass.h"
#include "_ApplicationFavContactItem.h"
#include "_ApplicationFavoritesPage.h"
#include "_ApplicationInComingCall.h"
#include "_ApplicationInputEtxt.h"
#include "_ApplicationKeyPadButtons.h"
#include "_ApplicationKeypadInsideCall.h"
#include "_ApplicationKeypadPage.h"
#include "_ApplicationNavBarButtons.h"
#include "_ApplicationPushButtonBig.h"
#include "_ApplicationPushButtonDelete.h"
#include "_ApplicationPushButtonMediumBlue.h"
#include "_ApplicationPushButtonMediumRed.h"
#include "_ApplicationPushButtonMediumTrans.h"
#include "_ApplicationPushButtonNoBackground.h"
#include "_ApplicationPushButtonSmall.h"
#include "_ApplicationRecentPage.h"
#include "_ApplicationSearchEtxt.h"
#include "_ApplicationTextButton.h"
#include "_CoreGroup.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreVerticalList.h"
#include "_CoreView.h"
#include "_EffectsBoolEffect.h"
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
#include "_ViewsWarpGroup.h"
#include "Application.h"
#include "Core.h"
#include "Res.h"
#include "Resources.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x00000412, /* ratio 52.21 % */
  0xB8001700, 0x80086452, 0x00DC0037, 0x0C2003A0, 0x010B3180, 0xD14001CC, 0x0E22C0C0,
  0x78AC4227, 0x87C48C91, 0x24080114, 0x47E1A4C8, 0xB64C4E86, 0x24265001, 0x00468B83,
  0xE72001A4, 0x0E948024, 0xF8A4B657, 0x000822E0, 0x00C0002B, 0x0D000370, 0xCC003900,
  0x28432000, 0x7000A453, 0x13E05484, 0x62844AC0, 0xC3600264, 0x8B81E432, 0xE5721D10,
  0x45C1114A, 0xB63D5A3B, 0x2A914844, 0x271F9D41, 0x95D33C3A, 0x088345E7, 0x08743215,
  0x854FE191, 0x2002EB39, 0xC5EDB550, 0xD61D5D29, 0x00068884, 0x09848A55, 0xB17C1E3E,
  0x17084844, 0x90041C9B, 0x96D72675, 0xB1D4017F, 0x4D6BB9CA, 0x6A600D8A, 0xEFD139AD,
  0x5F82954D, 0x1AD93492, 0xA49C4FC0, 0x5D900277, 0x8F000824, 0x01427F1E, 0x432118D0,
  0x5C1C00B6, 0x8EF2D94C, 0x1378006D, 0x911BE446, 0x448B8462, 0x088E7EBA, 0xE9DE641A,
  0xBEA21920, 0xD1E8B438, 0x0E9B4BA4, 0x68836A6D, 0x6304D4C8, 0x311D64CE, 0xBCDD6074,
  0x2FAC664B, 0x8BD7BEFD, 0x47857454, 0x704C0075, 0x4DD21251, 0xAE4D52D4, 0x80D2D805,
  0xA0B635AE, 0xE4116660, 0x3A100020, 0x45645216, 0x1152364C, 0x57B77D10, 0xC4511F78,
  0x7569159B, 0x62419085, 0x87D2156D, 0x5CF7010E, 0xA5922E58, 0xC1134121, 0x6B001891,
  0x02521698, 0x52D8F517, 0x18E8001E, 0x896F7FE3, 0x607BDDC6, 0x56963499, 0x02E5D10A,
  0x094E5300, 0x6C3145D9, 0x5752D178, 0x9754D412, 0x66051C45, 0xA0D6607B, 0x81454125,
  0x52981499, 0x99C2A981, 0xE7008C45, 0x457D1450, 0xE2291210, 0x68439AA7, 0x4CD35421,
  0x1134B50C, 0x24124045, 0xB5105745, 0x178FD7A4, 0x9115D12D, 0xD216FE46, 0x0115044F,
  0x3E87A1C0, 0x3A002971, 0x4293373C, 0x5338B568, 0xB4B51F70, 0x915D5F5D, 0xDD5D291A,
  0x49977A11, 0xA2EA250A, 0x06F904AB, 0x8A3AAC91, 0x5D761227, 0xA7E2E469, 0x8459D982,
  0x1A011EA5, 0x0101B1D2, 0x00000000
};

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault1[] =
{
  0x0000011C, /* ratio 63.38 % */
  0xB8005100, 0x00086452, 0x24DE0034, 0x40073004, 0x00200019, 0x60088184, 0x003742CC,
  0x98AC48E8, 0x8546A291, 0x01922711, 0x47E23230, 0xDA36468A, 0x80075859, 0x3A69001C,
  0x00086C3E, 0x45818240, 0xC0043888, 0x87C6A766, 0x14E00F35, 0xC625A002, 0xE0113589,
  0x6170C2D4, 0x71418D4F, 0x12433436, 0x009A99C0, 0x89DD0C14, 0x87C8E1F1, 0x256AB06B,
  0x4BE164E8, 0x425F3B31, 0x2A406005, 0x9357AA00, 0xA0020CE2, 0x488D42CD, 0x48250801,
  0xAC4F2BF7, 0x79EA7005, 0x4129558B, 0x362D13A2, 0x26F3597C, 0x7B1BBADF, 0x96DBCCC6,
  0x58AAD4E0, 0x000406B1, 0x00000000
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
static const XStringRes _Const0008 = { _StringsDefault0, 0x0002 };
static const XRect _Const0009 = {{ 242, 12 }, { 272, 42 }};
static const XStringRes _Const000A = { _StringsDefault0, 0x000D };
static const XStringRes _Const000B = { _StringsDefault0, 0x0013 };
static const XRect _Const000C = {{ 0, 0 }, { 272, 32 }};
static const XColor _Const000D = { 0xFD, 0xFD, 0xFD, 0xC8 };
static const XColor _Const000E = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const000F = {{ 55, 2 }, { 146, 32 }};
static const XStringRes _Const0010 = { _StringsDefault0, 0x0019 };
static const XRect _Const0011 = {{ 146, 2 }, { 268, 32 }};
static const XStringRes _Const0012 = { _StringsDefault0, 0x0024 };
static const XPoint _Const0013 = { 268, 32 };
static const XPoint _Const0014 = { 0, 32 };
static const XColor _Const0015 = { 0xE2, 0xE2, 0xE2, 0xFD };
static const XRect _Const0016 = {{ 6, 4 }, { 31, 29 }};
static const XPoint _Const0017 = { 268, 0 };
static const XPoint _Const0018 = { 0, 0 };
static const XPoint _Const0019 = { 265, 310 };
static const XPoint _Const001A = { 7, 310 };
static const XRect _Const001B = {{ 19, 281 }, { 263, 310 }};
static const XColor _Const001C = { 0xFF, 0xFF, 0xFF, 0x00 };
static const XStringRes _Const001D = { _StringsDefault0, 0x0030 };
static const XRect _Const001E = {{ 7, 255 }, { 265, 288 }};
static const XStringRes _Const001F = { _StringsDefault0, 0x003F };
static const XPoint _Const0020 = { 265, 255 };
static const XPoint _Const0021 = { 7, 255 };
static const XRect _Const0022 = {{ 51, 160 }, { 101, 235 }};
static const XStringRes _Const0023 = { _StringsDefault0, 0x0049 };
static const XRect _Const0024 = {{ 111, 160 }, { 161, 235 }};
static const XStringRes _Const0025 = { _StringsDefault0, 0x0050 };
static const XRect _Const0026 = {{ 171, 160 }, { 221, 235 }};
static const XStringRes _Const0027 = { _StringsDefault0, 0x0058 };
static const XRect _Const0028 = {{ 11, 113 }, { 268, 143 }};
static const XStringRes _Const0029 = { _StringsDefault0, 0x0062 };
static const XRect _Const002A = {{ 101, 22 }, { 171, 113 }};
static const XRect _Const002B = {{ 240, 4 }, { 265, 29 }};
static const XRect _Const002C = {{ 7, 4 }, { 32, 29 }};
static const XStringRes _Const002D = { _StringsDefault0, 0x0071 };
static const XRect _Const002E = {{ 0, 0 }, { 50, 75 }};
static const XRect _Const002F = {{ 0, 0 }, { 50, 50 }};
static const XPoint _Const0030 = { 0, 50 };
static const XPoint _Const0031 = { 50, 50 };
static const XPoint _Const0032 = { 50, 0 };
static const XRect _Const0033 = {{ 1, 0 }, { 50, 50 }};
static const XRect _Const0034 = {{ 0, 50 }, { 50, 75 }};
static const XRect _Const0035 = {{ 0, 0 }, { 70, 91 }};
static const XRect _Const0036 = {{ 0, 0 }, { 70, 70 }};
static const XPoint _Const0037 = { 0, 91 };
static const XPoint _Const0038 = { 70, 91 };
static const XPoint _Const0039 = { 70, 0 };
static const XRect _Const003A = {{ 0, 70 }, { 70, 91 }};
static const XRect _Const003B = {{ 0, 0 }, { 25, 25 }};
static const XPoint _Const003C = { 0, 25 };
static const XPoint _Const003D = { 25, 25 };
static const XPoint _Const003E = { 25, 0 };
static const XRect _Const003F = {{ 0, 0 }, { 266, 32 }};
static const XColor _Const0040 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0041 = {{ 0, 0 }, { 268, 32 }};
static const XColor _Const0042 = { 0xF0, 0xF0, 0xF0, 0xFD };
static const XPoint _Const0043 = { 272, 32 };
static const XPoint _Const0044 = { 272, 0 };
static const XRect _Const0045 = {{ 48, 2 }, { 272, 32 }};
static const XStringRes _Const0046 = { _StringsDefault0, 0x0075 };
static const XColor _Const0047 = { 0xB9, 0xB9, 0xB9, 0xFD };
static const XPoint _Const0048 = { 50, 70 };
static const XRect _Const0049 = {{ 11, 2 }, { 41, 27 }};
static const XPoint _Const004A = { 20, 20 };
static const XPoint _Const004B = { -10, -10 };
static const XColor _Const004C = { 0xEE, 0xEE, 0xEE, 0xCC };
static const XStringRes _Const004D = { _StringsDefault0, 0x007F };
static const XStringRes _Const004E = { _StringsDefault0, 0x0083 };
static const XPoint _Const004F = { 265, 289 };
static const XPoint _Const0050 = { 7, 289 };
static const XRect _Const0051 = {{ 3, 257 }, { 269, 289 }};
static const XStringRes _Const0052 = { _StringsDefault0, 0x0087 };
static const XPoint _Const0053 = { 264, 256 };
static const XPoint _Const0054 = { 6, 256 };
static const XRect _Const0055 = {{ 3, 224 }, { 269, 256 }};
static const XStringRes _Const0056 = { _StringsDefault0, 0x0097 };
static const XPoint _Const0057 = { 264, 223 };
static const XPoint _Const0058 = { 6, 223 };
static const XRect _Const0059 = {{ 3, 191 }, { 269, 223 }};
static const XStringRes _Const005A = { _StringsDefault0, 0x00A4 };
static const XPoint _Const005B = { 264, 190 };
static const XPoint _Const005C = { 6, 190 };
static const XRect _Const005D = {{ 100, 78 }, { 170, 169 }};
static const XStringRes _Const005E = { _StringsDefault0, 0x00B0 };
static const XRect _Const005F = {{ 86, 7 }, { 186, 37 }};
static const XStringRes _Const0060 = { _StringsDefault0, 0x00BC };
static const XRect _Const0061 = {{ 5, 398 }, { 263, 431 }};
static const XStringRes _Const0062 = { _StringsDefault0, 0x00CA };
static const XRect _Const0063 = {{ 7, 244 }, { 265, 273 }};
static const XStringRes _Const0064 = { _StringsDefault0, 0x00DB };
static const XPoint _Const0065 = { 264, 239 };
static const XPoint _Const0066 = { 6, 239 };
static const XRect _Const0067 = {{ 6, 207 }, { 264, 240 }};
static const XPoint _Const0068 = { 263, 206 };
static const XPoint _Const0069 = { 5, 206 };
static const XRect _Const006A = {{ 2, 174 }, { 268, 206 }};
static const XStringRes _Const006B = { _StringsDefault0, 0x00E8 };
static const XPoint _Const006C = { 263, 173 };
static const XPoint _Const006D = { 5, 173 };
static const XRect _Const006E = {{ 2, 141 }, { 268, 173 }};
static const XStringRes _Const006F = { _StringsDefault0, 0x00F5 };
static const XPoint _Const0070 = { 263, 140 };
static const XPoint _Const0071 = { 5, 140 };
static const XRect _Const0072 = {{ 99, 29 }, { 169, 120 }};
static const XStringRes _Const0073 = { _StringsDefault0, 0x0101 };
static const XStringRes _Const0074 = { _StringsDefault0, 0x0108 };
static const XRect _Const0075 = {{ 13, 2 }, { 272, 32 }};
static const XStringRes _Const0076 = { _StringsDefault0, 0x011B };
static const XColor _Const0077 = { 0x1E, 0x1E, 0x1E, 0xFD };
static const XRect _Const0078 = {{ 14, 2 }, { 272, 32 }};
static const XPoint _Const0079 = { 0, 29 };
static const XPoint _Const007A = { 0, 5 };
static const XStringRes _Const007B = { _StringsDefault0, 0x0123 };
static const XRect _Const007C = {{ 6, 436 }, { 264, 469 }};
static const XRect _Const007D = {{ 0, 0 }, { 258, 33 }};
static const XPoint _Const007E = { 0, 33 };
static const XPoint _Const007F = { 258, 33 };
static const XPoint _Const0080 = { 258, 0 };
static const XRect _Const0081 = {{ 12, 0 }, { 258, 33 }};
static const XColor _Const0082 = { 0xFF, 0x29, 0x5B, 0xFF };
static const XRect _Const0083 = {{ 0, 0 }, { 272, 480 }};
static const XRect _Const0084 = {{ 104, 378 }, { 169, 446 }};
static const XRect _Const0085 = {{ 182, 240 }, { 247, 332 }};
static const XStringRes _Const0086 = { _StringsDefault0, 0x0127 };
static const XRect _Const0087 = {{ 104, 241 }, { 169, 333 }};
static const XStringRes _Const0088 = { _StringsDefault0, 0x0132 };
static const XRect _Const0089 = {{ 26, 242 }, { 91, 334 }};
static const XStringRes _Const008A = { _StringsDefault0, 0x013E };
static const XRect _Const008B = {{ 182, 147 }, { 247, 239 }};
static const XStringRes _Const008C = { _StringsDefault0, 0x0149 };
static const XRect _Const008D = {{ 104, 148 }, { 169, 240 }};
static const XStringRes _Const008E = { _StringsDefault0, 0x0153 };
static const XRect _Const008F = {{ 26, 149 }, { 91, 241 }};
static const XStringRes _Const0090 = { _StringsDefault0, 0x015C };
static const XRect _Const0091 = {{ 16, 73 }, { 89, 103 }};
static const XStringRes _Const0092 = { _StringsDefault0, 0x0163 };
static const XColor _Const0093 = { 0xFA, 0xFA, 0xFA, 0xFF };
static const XRect _Const0094 = {{ 179, 28 }, { 249, 119 }};
static const XRect _Const0095 = {{ 16, 42 }, { 179, 72 }};
static const XRect _Const0096 = {{ 0, 518 }, { 272, 958 }};
static const XPoint _Const0097 = { 0, 30 };
static const XRect _Const0098 = {{ 0, 0 }, { 65, 92 }};
static const XRect _Const0099 = {{ 0, 0 }, { 65, 65 }};
static const XPoint _Const009A = { 0, 65 };
static const XPoint _Const009B = { 65, 65 };
static const XPoint _Const009C = { 65, 0 };
static const XRect _Const009D = {{ 0, 65 }, { 65, 92 }};
static const XPoint _Const009E = { 264, 311 };
static const XPoint _Const009F = { 6, 311 };
static const XRect _Const00A0 = {{ 18, 282 }, { 262, 311 }};
static const XRect _Const00A1 = {{ 6, 256 }, { 264, 289 }};
static const XRect _Const00A2 = {{ 50, 161 }, { 100, 236 }};
static const XRect _Const00A3 = {{ 110, 161 }, { 160, 236 }};
static const XRect _Const00A4 = {{ 170, 161 }, { 220, 236 }};
static const XRect _Const00A5 = {{ 10, 114 }, { 267, 144 }};
static const XRect _Const00A6 = {{ 100, 30 }, { 170, 121 }};
static const XRect _Const00A7 = {{ 239, 5 }, { 264, 30 }};
static const XRect _Const00A8 = {{ 6, 5 }, { 31, 30 }};
static const XRect _Const00A9 = {{ 0, 0 }, { 66, 25 }};
static const XPoint _Const00AA = { 66, 25 };
static const XPoint _Const00AB = { 66, 0 };
static const XRect _Const00AC = {{ 0, -4 }, { 66, 28 }};
static const XRect _Const00AD = {{ 0, 0 }, { 68, 40 }};
static const XPoint _Const00AE = { 0, 40 };
static const XPoint _Const00AF = { 65, 40 };
static const XRect _Const00B0 = {{ 0, 0 }, { 68, 25 }};
static const XRect _Const00B1 = {{ 0, 25 }, { 68, 40 }};
static const XRect _Const00B2 = {{ 104, 340 }, { 169, 405 }};
static const XRect _Const00B3 = {{ 169, 340 }, { 234, 405 }};
static const XRect _Const00B4 = {{ 39, 80 }, { 104, 145 }};
static const XStringRes _Const00B5 = { _StringsDefault0, 0x0170 };
static const XRect _Const00B6 = {{ 169, 80 }, { 234, 145 }};
static const XStringRes _Const00B7 = { _StringsDefault0, 0x0174 };
static const XRect _Const00B8 = {{ 104, 80 }, { 169, 145 }};
static const XStringRes _Const00B9 = { _StringsDefault0, 0x0178 };
static const XRect _Const00BA = {{ 39, 145 }, { 104, 210 }};
static const XStringRes _Const00BB = { _StringsDefault0, 0x017C };
static const XRect _Const00BC = {{ 169, 145 }, { 234, 210 }};
static const XStringRes _Const00BD = { _StringsDefault0, 0x0180 };
static const XRect _Const00BE = {{ 104, 145 }, { 169, 210 }};
static const XStringRes _Const00BF = { _StringsDefault0, 0x0184 };
static const XRect _Const00C0 = {{ 39, 210 }, { 104, 275 }};
static const XStringRes _Const00C1 = { _StringsDefault0, 0x0188 };
static const XRect _Const00C2 = {{ 169, 210 }, { 234, 275 }};
static const XStringRes _Const00C3 = { _StringsDefault0, 0x018C };
static const XRect _Const00C4 = {{ 104, 210 }, { 169, 275 }};
static const XStringRes _Const00C5 = { _StringsDefault0, 0x0190 };
static const XRect _Const00C6 = {{ 39, 275 }, { 104, 340 }};
static const XStringRes _Const00C7 = { _StringsDefault0, 0x0194 };
static const XRect _Const00C8 = {{ 169, 275 }, { 234, 340 }};
static const XStringRes _Const00C9 = { _StringsDefault0, 0x0198 };
static const XRect _Const00CA = {{ 104, 275 }, { 169, 340 }};
static const XStringRes _Const00CB = { _StringsDefault0, 0x019C };
static const XRect _Const00CC = {{ 39, 48 }, { 234, 80 }};
static const XRect _Const00CD = {{ 39, 360 }, { 101, 385 }};
static const XStringRes _Const00CE = { _StringsDefault0, 0x01A0 };
static const XRect _Const00CF = {{ 0, 440 }, { 272, 480 }};
static const XRect _Const00D0 = {{ 0, 440 }, { 68, 480 }};
static const XStringRes _Const00D1 = { _StringsDefault0, 0x01A7 };
static const XRect _Const00D2 = {{ 68, 440 }, { 136, 480 }};
static const XStringRes _Const00D3 = { _StringsDefault0, 0x01B3 };
static const XRect _Const00D4 = {{ 136, 440 }, { 204, 480 }};
static const XRect _Const00D5 = {{ 204, 440 }, { 272, 480 }};
static const XStringRes _Const00D6 = { _StringsDefault0, 0x01BC };
static const XPoint _Const00D7 = { 270, 440 };
static const XPoint _Const00D8 = { 0, 440 };
static const XStringRes _Const00D9 = { _StringsDefault0, 0x01C5 };
static const XRect _Const00DA = {{ 0, 80 }, { 272, 340 }};
static const XRect _Const00DB = {{ 39, 32 }, { 234, 64 }};
static const XRect _Const00DC = {{ 11, 12 }, { 261, 61 }};
static const XRect _Const00DD = {{ 166, 12 }, { 196, 42 }};
static const XRect _Const00DE = {{ 196, 15 }, { 262, 40 }};
static const XStringRes _Const00DF = { _StringsDefault0, 0x01E5 };
static const XColor _Const00E0 = { 0x83, 0x83, 0x83, 0xFA };
static const XColor _Const00E1 = { 0x4F, 0x4F, 0x4F, 0xFF };
static const XColor _Const00E2 = { 0x89, 0x89, 0x89, 0xFF };
static const XColor _Const00E3 = { 0x3C, 0x3C, 0x3C, 0xFF };
static const XRect _Const00E4 = {{ 171, 340 }, { 236, 432 }};
static const XStringRes _Const00E5 = { _StringsDefault0, 0x01EE };
static const XRect _Const00E6 = {{ 36, 340 }, { 101, 432 }};
static const XStringRes _Const00E7 = { _StringsDefault0, 0x01F7 };
static const XRect _Const00E8 = {{ 18, 73 }, { 91, 103 }};
static const XRect _Const00E9 = {{ 18, 42 }, { 171, 72 }};
static const XRect _Const00EA = {{ 184, 28 }, { 254, 119 }};
static const XRect _Const00EB = {{ 11, 95 }, { 261, 408 }};
static const XRect _Const00EC = {{ 11, 12 }, { 41, 42 }};
static const XRect _Const00ED = {{ 213, 12 }, { 263, 37 }};
static const XStringRes _Const00EE = { _StringsDefault0, 0x0202 };
static const XRect _Const00EF = {{ 202, 24 }, { 268, 49 }};
static const XRect _Const00F0 = {{ 12, 0 }, { 261, 30 }};
static const XStringRes _Const00F1 = { _StringsDefault1, 0x0002 };
static const XRect _Const00F2 = {{ -25, 5 }, { 0, 30 }};
static const XRect _Const00F3 = {{ 273, 1 }, { 339, 33 }};
static const XStringRes _Const00F4 = { _StringsDefault1, 0x002A };
static const XStringRes _Const00F5 = { _StringsDefault1, 0x0033 };
static const XStringRes _Const00F6 = { _StringsDefault1, 0x003A };
static const XStringRes _Const00F7 = { _StringsDefault1, 0x0042 };
static const XStringRes _Const00F8 = { _StringsDefault1, 0x0049 };
static const XStringRes _Const00F9 = { _StringsDefault1, 0x0053 };
static const XStringRes _Const00FA = { _StringsDefault1, 0x005D };
static const XStringRes _Const00FB = { _StringsDefault1, 0x0063 };
static const XStringRes _Const00FC = { _StringsDefault1, 0x006B };
static const XStringRes _Const00FD = { _StringsDefault1, 0x0072 };
static const XStringRes _Const00FE = { _StringsDefault1, 0x0077 };
static const XStringRes _Const00FF = { _StringsDefault1, 0x007F };
static const XStringRes _Const0100 = { _StringsDefault1, 0x0088 };

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
  ApplicationPushButtonNoBackground__Init( &_this->UpButton, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->DownButton, &_this->_.XObject, 0 );
  ApplicationSearchEtxt__Init( &_this->SearchExt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TitleTxt, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->PlusButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreView_OnSetLayout((CoreView)&_this->VerticalList, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const0001 );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 35 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( ApplicationContactItem ));
  CoreView_OnSetStackingPriority((CoreView)&_this->SlideTouchHandler, -1 );
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToLeft 
  | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0002 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const0003 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreView_OnSetLayout((CoreView)&_this->UpButton, CoreLayoutAlignToRight | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->UpButton, _Const0004 );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->UpButton, EwLoadString( 
  &ResUptxt ));
  CoreView_OnSetLayout((CoreView)&_this->DownButton, CoreLayoutAlignToRight | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->DownButton, _Const0005 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->DownButton, 1 );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->DownButton, EwLoadString( 
  &ResDownTxt ));
  CoreView_OnSetLayout((CoreView)&_this->SearchExt, CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->SearchExt, _Const0006 );
  ApplicationSearchEtxt_OnSetColor( &_this->SearchExt, ResGrey );
  CoreRectView__OnSetBounds( &_this->TitleTxt, _Const0007 );
  ViewsText_OnSetAlignment( &_this->TitleTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TitleTxt, EwLoadString( &_Const0008 ));
  ViewsText_OnSetColor( &_this->TitleTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->PlusButton, _Const0009 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->PlusButton, 1 );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->PlusButton, EwLoadString( 
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
  ApplicationPushButtonNoBackground__ReInit( &_this->UpButton );
  ApplicationPushButtonNoBackground__ReInit( &_this->DownButton );
  ApplicationSearchEtxt__ReInit( &_this->SearchExt );
  ViewsText__ReInit( &_this->TitleTxt );
  ApplicationPushButtonNoBackground__ReInit( &_this->PlusButton );
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
  ApplicationPushButtonNoBackground__Done( &_this->UpButton );
  ApplicationPushButtonNoBackground__Done( &_this->DownButton );
  ApplicationSearchEtxt__Done( &_this->SearchExt );
  ViewsText__Done( &_this->TitleTxt );
  ApplicationPushButtonNoBackground__Done( &_this->PlusButton );

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
    EwNewRef( &EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager )->Favorites, 
    ApplicationContacts_OnGetNoOfItems, ApplicationContacts_OnSetNoOfItems ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationContactsPage_onNoOfContactsChanged ), 
    ((XObject)_this ));
  EwAttachRefObserver( EwNewSlot( _this, ApplicationContactsPage_onContactsSortingChanged ), 
    EwNewRef( &EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager )->Favorites, 
    ApplicationContacts_OnGetSorting, ApplicationContacts_OnSetSorting ), 0 );
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
  ApplicationContactAddPage_OnSetContact( _this->addContact, EwNewObject( ApplicationContact, 
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

  ApplicationContacts_Add( &EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager )->Contacts, 
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

  ApplicationContacts_OnSetSorting( &EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager )->Contacts, 
  ApplicationSortingAscending );
  EwTrace( "%s", EwLoadString( &_Const000A ));
}

/* 'C' function for method : 'Application::ContactsPage.onDownPress()' */
void ApplicationContactsPage_onDownPress( ApplicationContactsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  ApplicationContacts_OnSetSorting( &EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager )->Contacts, 
  ApplicationSortingDescending );
  EwTrace( "%s", EwLoadString( &_Const000B ));
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationContactsPage_OnLoadItem( ApplicationContactsPage _this, XObject 
  sender )
{
  XInt32 itemNo;
  ApplicationContact contact;
  ApplicationContactItem itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  contact = ApplicationContacts_GetContact( &EwGetAutoObject( &ApplicationMyContacts, 
  ApplicationContactsManager )->Contacts, itemNo );
  itemView = EwCastObject( _this->VerticalList.View, ApplicationContactItem );

  if ( itemView == 0 )
    return;

  if ( contact != 0 )
  {
    ApplicationContactItem_OnSetContact( itemView, contact );
    itemView->OnActivate = EwNewSlot( _this, ApplicationContactsPage__onContactActivated );
  }

  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->VerticalList.Super2.Bounds ), _this->VerticalList.ItemHeight )));
}

/* 'C' function for method : 'Application::ContactsPage.onNoOfContactsChanged()' */
void ApplicationContactsPage_onNoOfContactsChanged( ApplicationContactsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, EwGetAutoObject( &ApplicationMyContacts, 
  ApplicationContactsManager )->Contacts.NoOfItems );
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
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->LastNameTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->FirstnameTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_.XObject, 0 );
  ApplicationPushButtonSmall__Init( &_this->PushButtonSmall, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000C );
  CoreRectView__OnSetBounds( &_this->Background, _Const000C );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const000D );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const000D );
  ViewsRectangle_OnSetColor( &_this->Background, _Const000E );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const000F );
  ViewsText_OnSetAlignment( &_this->LastNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->LastNameTxt, EwLoadString( &_Const0010 ));
  ViewsText_OnSetColor( &_this->LastNameTxt, ResBlack );
  CoreView_OnSetStackingPriority((CoreView)&_this->FirstnameTxt, 0 );
  CoreView_OnSetLayout((CoreView)&_this->FirstnameTxt, CoreLayoutAlignToLeft | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->FirstnameTxt, _Const0011 );
  ViewsText_OnSetAlignment( &_this->FirstnameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->FirstnameTxt, EwLoadString( &_Const0012 ));
  ViewsText_OnSetColor( &_this->FirstnameTxt, ResBlack );
  CoreView_OnSetLayout((CoreView)&_this->Line, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const0013 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const0014 );
  ViewsLine_OnSetWidth( &_this->Line, 1 );
  ViewsLine_OnSetColor( &_this->Line, _Const0015 );
  CoreRectView__OnSetBounds( &_this->PushButtonSmall, _Const0016 );
  _this->ButtonColor = ResWhite;
  _this->IconColor = ResWhite;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  _this->TextColor = ResBlack;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0014 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0013 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0017 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0018 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->LastNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FirstnameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButtonSmall ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  ViewsText_OnSetFont( &_this->LastNameTxt, EwLoadResource( &ResContactFontBold15, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->FirstnameTxt, EwLoadResource( &ResContactFont15, 
  ResourcesFont ));
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationContactItem_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationContactItem_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationContactItem_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationContactItem_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationContactItem_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationContactItem_onPressTouch );
}

/* Re-Initializer for the class 'Application::ContactItem' */
void ApplicationContactItem__ReInit( ApplicationContactItem _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ViewsText__ReInit( &_this->LastNameTxt );
  ViewsText__ReInit( &_this->FirstnameTxt );
  ViewsLine__ReInit( &_this->Line );
  ApplicationPushButtonSmall__ReInit( &_this->PushButtonSmall );
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'Application::ContactItem' */
void ApplicationContactItem__Done( ApplicationContactItem _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ViewsText__Done( &_this->LastNameTxt );
  ViewsText__Done( &_this->FirstnameTxt );
  ViewsLine__Done( &_this->Line );
  ApplicationPushButtonSmall__Done( &_this->PushButtonSmall );
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

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
void ApplicationContactItem_OnSetContact( ApplicationContactItem _this, ApplicationContact 
  value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationContactItem_onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationContactItem_onContactUpdated ), 
      (XObject)_this->Contact, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationContactItem_onContactUpdated ), ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::ContactItem.onContactUpdated()' */
void ApplicationContactItem_onContactUpdated( ApplicationContactItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Contact != 0 )
  {
    ViewsText_OnSetString( &_this->FirstnameTxt, _this->Contact->FirstName );
    ViewsText_OnSetString( &_this->LastNameTxt, _this->Contact->LastName );
    ApplicationPushButtonSmall_OnSetText( &_this->PushButtonSmall, _this->Contact->NameInitials );
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
EW_DEFINE_CLASS( ApplicationContactItem, CoreGroup, Contact, OnActivate, Background, 
                 Background, ButtonColor, ButtonColor, "Application::ContactItem" )
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
  ApplicationPushButtonMediumBlue__Init( &_this->CallBtn, &_this->_.XObject, 0 );
  ApplicationPushButtonMediumBlue__Init( &_this->VideoCallBtn, &_this->_.XObject, 0 );
  ApplicationPushButtonMediumBlue__Init( &_this->PushButtonMediumBlue2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ContactName, &_this->_.XObject, 0 );
  ApplicationPushButtonBig__Init( &_this->UserInitialsBtn, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->EditBtn, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->BackBtn, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactDetailsPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const0019 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const001A );
  ViewsLine_OnSetColor( &_this->Line2, _Const0015 );
  CoreView_OnSetLayout((CoreView)&_this->NumberTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->NumberTxt, _Const001B );
  ViewsText_OnSetColorBR( &_this->NumberTxt, _Const001C );
  ViewsText_OnSetAlignment( &_this->NumberTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->NumberTxt, EwLoadString( &_Const001D ));
  ViewsText_OnSetColor( &_this->NumberTxt, ResBlue );
  CoreView_OnSetLayout((CoreView)&_this->MobileTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->MobileTxt, _Const001E );
  ViewsText_OnSetAlignment( &_this->MobileTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MobileTxt, EwLoadString( &_Const001F ));
  ViewsText_OnSetColor( &_this->MobileTxt, ResBlack );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const0020 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const0021 );
  ViewsLine_OnSetColor( &_this->Line1, _Const0015 );
  CoreRectView__OnSetBounds( &_this->CallBtn, _Const0022 );
  ApplicationPushButtonMediumBlue_OnSetIcon( &_this->CallBtn, EwLoadString( &ResCallTxt ));
  ApplicationPushButtonMediumBlue_OnSetDescrip( &_this->CallBtn, EwLoadString( &_Const0023 ));
  CoreRectView__OnSetBounds( &_this->VideoCallBtn, _Const0024 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->VideoCallBtn, 0 );
  ApplicationPushButtonMediumBlue_OnSetIcon( &_this->VideoCallBtn, EwLoadString( 
  &ResVideoCallTxt ));
  ApplicationPushButtonMediumBlue_OnSetDescrip( &_this->VideoCallBtn, EwLoadString( 
  &_Const0025 ));
  CoreRectView__OnSetBounds( &_this->PushButtonMediumBlue2, _Const0026 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->PushButtonMediumBlue2, 0 );
  ApplicationPushButtonMediumBlue_OnSetIcon( &_this->PushButtonMediumBlue2, EwLoadString( 
  &ResMessageIconTxt ));
  ApplicationPushButtonMediumBlue_OnSetDescrip( &_this->PushButtonMediumBlue2, EwLoadString( 
  &_Const0027 ));
  CoreView_OnSetLayout((CoreView)&_this->ContactName, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->ContactName, _Const0028 );
  ViewsText_OnSetAlignment( &_this->ContactName, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ContactName, EwLoadString( &_Const0029 ));
  ViewsText_OnSetColor( &_this->ContactName, ResBlack );
  CoreRectView__OnSetBounds( &_this->UserInitialsBtn, _Const002A );
  CoreRectView__OnSetBounds( &_this->EditBtn, _Const002B );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->EditBtn, EwLoadString( &ResEditIconTxt ));
  CoreRectView__OnSetBounds( &_this->BackBtn, _Const002C );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->BackBtn, EwLoadString( &ResBackIconTxt ));
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
  ViewsText_OnSetFont( &_this->NumberTxt, EwLoadResource( &ResContactFont15, ResourcesFont ));
  ViewsText_OnSetFont( &_this->MobileTxt, EwLoadResource( &ResContactFont15, ResourcesFont ));
  _this->CallBtn.OnActivate = EwNewSlot( _this, ApplicationContactDetailsPage_onTapCall );
  ViewsText_OnSetFont( &_this->ContactName, EwLoadResource( &ResTitileFont29, ResourcesFont ));
  _this->EditBtn.OnActivate = EwNewSlot( _this, ApplicationContactDetailsPage__onTapEdit );
  _this->BackBtn.OnActivate = EwNewSlot( _this, ApplicationContactDetailsPage_onBack );
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
  ApplicationPushButtonMediumBlue__ReInit( &_this->CallBtn );
  ApplicationPushButtonMediumBlue__ReInit( &_this->VideoCallBtn );
  ApplicationPushButtonMediumBlue__ReInit( &_this->PushButtonMediumBlue2 );
  ViewsText__ReInit( &_this->ContactName );
  ApplicationPushButtonBig__ReInit( &_this->UserInitialsBtn );
  ApplicationPushButtonNoBackground__ReInit( &_this->EditBtn );
  ApplicationPushButtonNoBackground__ReInit( &_this->BackBtn );
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
  ApplicationPushButtonMediumBlue__Done( &_this->CallBtn );
  ApplicationPushButtonMediumBlue__Done( &_this->VideoCallBtn );
  ApplicationPushButtonMediumBlue__Done( &_this->PushButtonMediumBlue2 );
  ViewsText__Done( &_this->ContactName );
  ApplicationPushButtonBig__Done( &_this->UserInitialsBtn );
  ApplicationPushButtonNoBackground__Done( &_this->EditBtn );
  ApplicationPushButtonNoBackground__Done( &_this->BackBtn );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::ContactDetailsPage.onTapEdit()' */
void ApplicationContactDetailsPage_onTapEdit( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->edit = EwNewObject( ApplicationContactEditPage, 0 );
  _this->edit->OnSave = EwNewSlot( _this, ApplicationContactDetailsPage_onSaveEdit );
  _this->edit->OnClose = EwNewSlot( _this, ApplicationContactDetailsPage_onCancelEdit );
  ApplicationContactEditPage_OnSetContact( _this->edit, _this->Contact );
  _this->edit->OnDelete = EwNewSlot( _this, ApplicationContactDetailsPage_onDelete );
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->edit ), ((EffectsTransition)EwGetAutoObject( 
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
  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->edit ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::ContactDetailsPage.onTapCall()' */
void ApplicationContactDetailsPage_onTapCall( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationDeviceClass_UpdateCallState( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  2 );
  ApplicationDeviceClass_UpdateCallingNumber( EwGetAutoObject( &ApplicationDevice, 
  ApplicationDeviceClass ), _this->Contact->PhoneNumber );
}

/* 'C' function for method : 'Application::ContactDetailsPage.onSaveEdit()' */
void ApplicationContactDetailsPage_onSaveEdit( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->edit ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::ContactDetailsPage.onCancelEdit()' */
void ApplicationContactDetailsPage_onCancelEdit( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->edit ), ((EffectsTransition)EwGetAutoObject( 
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
  ApplicationContact value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationContactDetailsPage_onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationContactDetailsPage_onContactUpdated ), 
      (XObject)_this->Contact, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationContactDetailsPage_onContactUpdated ), 
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
    _this->Contact->LastName, EwLoadString( &_Const002D )), _this->Contact->FirstName ));
    ViewsText_OnSetString( &_this->NumberTxt, _this->Contact->PhoneNumber );
    ApplicationPushButtonBig_OnSetInitials( &_this->UserInitialsBtn, ApplicationContacts_GetInitials( 
    &EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager )->Contacts, 
    _this->Contact->LastName, _this->Contact->FirstName ));
  }
}

/* Variants derived from the class : 'Application::ContactDetailsPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactDetailsPage )
EW_END_OF_CLASS_VARIANTS( ApplicationContactDetailsPage )

/* Virtual Method Table (VMT) for the class : 'Application::ContactDetailsPage' */
EW_DEFINE_CLASS( ApplicationContactDetailsPage, CoreGroup, edit, OnDelete, Background, 
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
  ApplicationContactDetailsPage_onTapEdit,
EW_END_OF_CLASS( ApplicationContactDetailsPage )

/* Initializer for the class 'Application::PushButtonMediumBlue' */
void ApplicationPushButtonMediumBlue__Init( ApplicationPushButtonMediumBlue _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationPushButtonMediumBlue );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->IconTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->DescripTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationPushButtonMediumBlue );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const002E );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const002F );
  ViewsImage_OnSetColor( &_this->Background, _Const000E );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0030 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0031 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0032 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0018 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->IconTxt, _Const0033 );
  ViewsText_OnSetString( &_this->IconTxt, 0 );
  ViewsText_OnSetColor( &_this->IconTxt, _Const000E );
  CoreRectView__OnSetBounds( &_this->DescripTxt, _Const0034 );
  ViewsText_OnSetColor( &_this->DescripTxt, ResBlue );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DescripTxt ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationPushButtonMediumBlue_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonMediumBlue_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundMedium, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationPushButtonMediumBlue_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationPushButtonMediumBlue_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationPushButtonMediumBlue_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonMediumBlue_onPressTouch );
  ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::PushButtonMediumBlue' */
void ApplicationPushButtonMediumBlue__ReInit( ApplicationPushButtonMediumBlue _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->IconTxt );
  ViewsText__ReInit( &_this->DescripTxt );
}

/* Finalizer method for the class 'Application::PushButtonMediumBlue' */
void ApplicationPushButtonMediumBlue__Done( ApplicationPushButtonMediumBlue _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->IconTxt );
  ViewsText__Done( &_this->DescripTxt );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
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
void ApplicationPushButtonMediumBlue_UpdateViewState( ApplicationPushButtonMediumBlue _this, 
  XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->IconTxt != 0 )
  {
    XColor clr = ResWhite;
    ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
    ViewsText_OnSetString( &_this->IconTxt, _this->Icon );
    ViewsText_OnSetColor( &_this->IconTxt, clr );
  }

  if ( &_this->DescripTxt != 0 )
  {
    XColor clr = ResBlue;
    ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, 
    ResourcesFont ));
    ViewsText_OnSetString( &_this->DescripTxt, _this->Descrip );
    ViewsText_OnSetColor( &_this->DescripTxt, clr );
  }

  if ( !isEnabled )
  {
    ViewsImage_OnSetColor( &_this->Background, ResGrey );
    ViewsText_OnSetColor( &_this->DescripTxt, ResGrey );
    ViewsText_OnSetColor( &_this->IconTxt, ResGreyLight );
  }
  else
    if ( isPressed )
      ViewsImage_OnSetColor( &_this->Background, ResBlueLight );
    else
      ViewsImage_OnSetColor( &_this->Background, ResBlue );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationPushButtonMediumBlue_onFlashTimer( ApplicationPushButtonMediumBlue _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationPushButtonMediumBlue_onPressKey( ApplicationPushButtonMediumBlue _this, 
  XObject sender )
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
void ApplicationPushButtonMediumBlue_onEnterLeaveTouch( ApplicationPushButtonMediumBlue _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ApplicationPushButtonMediumBlue_onReleaseTouch( ApplicationPushButtonMediumBlue _this, 
  XObject sender )
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
void ApplicationPushButtonMediumBlue_onPressTouch( ApplicationPushButtonMediumBlue _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Application::PushButtonMediumBlue.OnSetIcon()' */
void ApplicationPushButtonMediumBlue_OnSetIcon( ApplicationPushButtonMediumBlue _this, 
  XString value )
{
  if ( !EwCompString( _this->Icon, value ))
    return;

  _this->Icon = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::PushButtonMediumBlue.OnSetDescrip()' */
void ApplicationPushButtonMediumBlue_OnSetDescrip( ApplicationPushButtonMediumBlue _this, 
  XString value )
{
  if ( !EwCompString( _this->Descrip, value ))
    return;

  _this->Descrip = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::PushButtonMediumBlue' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPushButtonMediumBlue )
EW_END_OF_CLASS_VARIANTS( ApplicationPushButtonMediumBlue )

/* Virtual Method Table (VMT) for the class : 'Application::PushButtonMediumBlue' */
EW_DEFINE_CLASS( ApplicationPushButtonMediumBlue, TemplatesPushButton, OnActivate, 
                 OnActivate, FlashTimer, FlashTimer, Icon, enabled, "Application::PushButtonMediumBlue" )
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
  ApplicationPushButtonMediumBlue_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationPushButtonMediumBlue )

/* Initializer for the class 'Application::PushButtonBig' */
void ApplicationPushButtonBig__Init( ApplicationPushButtonBig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationPushButtonBig );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->DescripTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationPushButtonBig );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0035 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0036 );
  ViewsImage_OnSetColor( &_this->Background, _Const000E );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0037 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0038 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0039 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0018 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0036 );
  ViewsText_OnSetString( &_this->Text, 0 );
  ViewsText_OnSetColor( &_this->Text, _Const000E );
  CoreRectView__OnSetBounds( &_this->DescripTxt, _Const003A );
  ViewsText_OnSetAlignment( &_this->DescripTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertBottom );
  ViewsText_OnSetString( &_this->DescripTxt, 0 );
  _this->DescriptColor = ResBlue;
  _this->InitialsColor = ResWhite;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DescripTxt ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationPushButtonBig_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonBig_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundBig, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationPushButtonBig_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationPushButtonBig_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationPushButtonBig_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonBig_onPressTouch );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResIconsFont30, ResourcesFont ));
  ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFontBold15, 
  ResourcesFont ));
}

/* Re-Initializer for the class 'Application::PushButtonBig' */
void ApplicationPushButtonBig__ReInit( ApplicationPushButtonBig _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->DescripTxt );
}

/* Finalizer method for the class 'Application::PushButtonBig' */
void ApplicationPushButtonBig__Done( ApplicationPushButtonBig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->Text );
  ViewsText__Done( &_this->DescripTxt );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
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
void ApplicationPushButtonBig_UpdateViewState( ApplicationPushButtonBig _this, XSet 
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

  if ( &_this->Text != 0 )
  {
    XColor clr = _this->InitialsColor;
    ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResTitileFont25, ResourcesFont ));
    ViewsText_OnSetString( &_this->Text, _this->Initials );
    ViewsText_OnSetColor( &_this->Text, clr );
  }

  if ( &_this->DescripTxt != 0 )
  {
    XColor clr = _this->DescriptColor;
    ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, 
    ResourcesFont ));
    ViewsText_OnSetString( &_this->DescripTxt, _this->Descript );
    ViewsText_OnSetColor( &_this->DescripTxt, clr );
  }

  if ( !isEnabled )
  {
    ViewsImage_OnSetColor( &_this->Background, ResGrey );
    ViewsText_OnSetVisible( &_this->DescripTxt, 0 );
  }
  else
    ViewsImage_OnSetColor( &_this->Background, ResGrey );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationPushButtonBig_onFlashTimer( ApplicationPushButtonBig _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationPushButtonBig_onPressKey( ApplicationPushButtonBig _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->TouchHandler.Down )
    return;

  if ( _this->KeyHandler.Repetition )
    return;

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

  CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user drags the finger while pressing 
   the button. This only updates the button to appear pressed or released. */
void ApplicationPushButtonBig_onEnterLeaveTouch( ApplicationPushButtonBig _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ApplicationPushButtonBig_onReleaseTouch( ApplicationPushButtonBig _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( !( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin ))
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the button's area. */
void ApplicationPushButtonBig_onPressTouch( ApplicationPushButtonBig _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
}

/* 'C' function for method : 'Application::PushButtonBig.OnSetInitials()' */
void ApplicationPushButtonBig_OnSetInitials( ApplicationPushButtonBig _this, XString 
  value )
{
  if ( !EwCompString( _this->Initials, value ))
    return;

  _this->Initials = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::PushButtonBig.OnSetDescript()' */
void ApplicationPushButtonBig_OnSetDescript( ApplicationPushButtonBig _this, XString 
  value )
{
  if ( !EwCompString( _this->Descript, value ))
    return;

  _this->Descript = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::PushButtonBig' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPushButtonBig )
EW_END_OF_CLASS_VARIANTS( ApplicationPushButtonBig )

/* Virtual Method Table (VMT) for the class : 'Application::PushButtonBig' */
EW_DEFINE_CLASS( ApplicationPushButtonBig, TemplatesPushButton, FlashTimer, FlashTimer, 
                 FlashTimer, FlashTimer, Initials, DescriptColor, "Application::PushButtonBig" )
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
  ApplicationPushButtonBig_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationPushButtonBig )

/* Initializer for the class 'Application::PushButtonSmall' */
void ApplicationPushButtonSmall__Init( ApplicationPushButtonSmall _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationPushButtonSmall );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->IconTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextText, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationPushButtonSmall );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const003B );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  _this->ButtonColor = ResGrey;
  _this->TextColor = ResWhite;
  _this->IconColor = ResGrey;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const003B );
  ViewsImage_OnSetColor( &_this->Background, _Const000E );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const003C );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const003D );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const003E );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0018 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->IconTxt, _Const003B );
  ViewsText_OnSetString( &_this->IconTxt, 0 );
  ViewsText_OnSetColor( &_this->IconTxt, _Const000E );
  CoreRectView__OnSetBounds( &_this->TextText, _Const003B );
  ViewsText_OnSetString( &_this->TextText, 0 );
  ViewsText_OnSetColor( &_this->TextText, _Const000E );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextText ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationPushButtonSmall_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonSmall_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundSmall, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationPushButtonSmall_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationPushButtonSmall_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationPushButtonSmall_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonSmall_onPressTouch );
  ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont25, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextText, EwLoadResource( &ResIconsFont25, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::PushButtonSmall' */
void ApplicationPushButtonSmall__ReInit( ApplicationPushButtonSmall _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->IconTxt );
  ViewsText__ReInit( &_this->TextText );
}

/* Finalizer method for the class 'Application::PushButtonSmall' */
void ApplicationPushButtonSmall__Done( ApplicationPushButtonSmall _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->IconTxt );
  ViewsText__Done( &_this->TextText );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
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
void ApplicationPushButtonSmall_UpdateViewState( ApplicationPushButtonSmall _this, 
  XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->TextText != 0 )
  {
    XColor clr = _this->TextColor;
    ViewsText_OnSetFont( &_this->TextText, EwLoadResource( &ResContactFont12, ResourcesFont ));
    ViewsText_OnSetString( &_this->TextText, _this->Text );
    ViewsText_OnSetColor( &_this->TextText, clr );
  }

  if ( &_this->IconTxt != 0 )
  {
    XColor clr = _this->IconColor;
    ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
    ViewsText_OnSetString( &_this->IconTxt, _this->Icon );
    ViewsText_OnSetColor( &_this->IconTxt, clr );
  }

  if ( !isEnabled )
    ViewsImage_OnSetColor( &_this->Background, ResPressColor );
  else
    ViewsImage_OnSetColor( &_this->Background, _this->ButtonColor );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationPushButtonSmall_onFlashTimer( ApplicationPushButtonSmall _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationPushButtonSmall_onPressKey( ApplicationPushButtonSmall _this, XObject 
  sender )
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
void ApplicationPushButtonSmall_onEnterLeaveTouch( ApplicationPushButtonSmall _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ApplicationPushButtonSmall_onReleaseTouch( ApplicationPushButtonSmall _this, 
  XObject sender )
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
void ApplicationPushButtonSmall_onPressTouch( ApplicationPushButtonSmall _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Application::PushButtonSmall.OnSetText()' */
void ApplicationPushButtonSmall_OnSetText( ApplicationPushButtonSmall _this, XString 
  value )
{
  if ( !EwCompString( _this->Text, value ))
    return;

  _this->Text = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::PushButtonSmall.OnSetButtonColor()' */
void ApplicationPushButtonSmall_OnSetButtonColor( ApplicationPushButtonSmall _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ButtonColor, value ))
    return;

  _this->ButtonColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::PushButtonSmall.OnSetIcon()' */
void ApplicationPushButtonSmall_OnSetIcon( ApplicationPushButtonSmall _this, XString 
  value )
{
  if ( !EwCompString( _this->Icon, value ))
    return;

  _this->Icon = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::PushButtonSmall.OnSetIconColor()' */
void ApplicationPushButtonSmall_OnSetIconColor( ApplicationPushButtonSmall _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconColor, value ))
    return;

  _this->IconColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::PushButtonSmall' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPushButtonSmall )
EW_END_OF_CLASS_VARIANTS( ApplicationPushButtonSmall )

/* Virtual Method Table (VMT) for the class : 'Application::PushButtonSmall' */
EW_DEFINE_CLASS( ApplicationPushButtonSmall, TemplatesPushButton, OnActivate, OnActivate, 
                 FlashTimer, FlashTimer, Text, ButtonColor, "Application::PushButtonSmall" )
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
  ApplicationPushButtonSmall_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationPushButtonSmall )

/* Initializer for the class 'Application::PushButtonNoBackground' */
void ApplicationPushButtonNoBackground__Init( ApplicationPushButtonNoBackground _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationPushButtonNoBackground );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationPushButtonNoBackground );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const003B );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const003B );
  ViewsImage_OnSetColor( &_this->Background, _Const000E );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const003C );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const003D );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const003E );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0018 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Text, _Const003B );
  ViewsText_OnSetString( &_this->Text, 0 );
  ViewsText_OnSetColor( &_this->Text, _Const000E );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationPushButtonNoBackground_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonNoBackground_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundMedium, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationPushButtonNoBackground_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationPushButtonNoBackground_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationPushButtonNoBackground_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonNoBackground_onPressTouch );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResIconsFont25, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::PushButtonNoBackground' */
void ApplicationPushButtonNoBackground__ReInit( ApplicationPushButtonNoBackground _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Application::PushButtonNoBackground' */
void ApplicationPushButtonNoBackground__Done( ApplicationPushButtonNoBackground _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
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
void ApplicationPushButtonNoBackground_UpdateViewState( ApplicationPushButtonNoBackground _this, 
  XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->Text != 0 )
  {
    XColor clr = ResBlue;
    ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResIconsFont25, ResourcesFont ));
    ViewsText_OnSetString( &_this->Text, _this->Label );
    ViewsText_OnSetColor( &_this->Text, clr );
  }

  if ( !isEnabled )
  {
    ViewsImage_OnSetColor( &_this->Background, ResWhiteTransparent );
    ViewsText_OnSetColor( &_this->Text, ResGrey );
  }
  else
    if ( isPressed )
    {
      ViewsImage_OnSetColor( &_this->Background, ResWhiteTransparent );
      ViewsText_OnSetColor( &_this->Text, ResBlueLight );
    }
    else
      ViewsImage_OnSetColor( &_this->Background, ResWhiteTransparent );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationPushButtonNoBackground_onFlashTimer( ApplicationPushButtonNoBackground _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationPushButtonNoBackground_onPressKey( ApplicationPushButtonNoBackground _this, 
  XObject sender )
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
void ApplicationPushButtonNoBackground_onEnterLeaveTouch( ApplicationPushButtonNoBackground _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ApplicationPushButtonNoBackground_onReleaseTouch( ApplicationPushButtonNoBackground _this, 
  XObject sender )
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
void ApplicationPushButtonNoBackground_onPressTouch( ApplicationPushButtonNoBackground _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Application::PushButtonNoBackground.OnSetLabel()' */
void ApplicationPushButtonNoBackground_OnSetLabel( ApplicationPushButtonNoBackground _this, 
  XString value )
{
  if ( !EwCompString( _this->Label, value ))
    return;

  _this->Label = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::PushButtonNoBackground' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPushButtonNoBackground )
EW_END_OF_CLASS_VARIANTS( ApplicationPushButtonNoBackground )

/* Virtual Method Table (VMT) for the class : 'Application::PushButtonNoBackground' */
EW_DEFINE_CLASS( ApplicationPushButtonNoBackground, TemplatesPushButton, OnActivate, 
                 OnActivate, FlashTimer, FlashTimer, Label, enabled, "Application::PushButtonNoBackground" )
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
  ApplicationPushButtonNoBackground_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationPushButtonNoBackground )

/* Initializer for the class 'Application::SearchEtxt' */
void ApplicationSearchEtxt__Init( ApplicationSearchEtxt _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesTextEditor__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSearchEtxt );

  /* ... then construct all embedded objects */
  EffectsBoolEffect__Init( &_this->blinkEffect, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->CursorKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->BackspaceKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->DeleteKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->NewlineKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->CharacterKeyHandler, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Caret, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Search, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSearchEtxt );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const003F );
  _this->blinkEffect.Value2 = 0;
  _this->blinkEffect.Value1 = 1;
  EffectsBoolEffect_OnSetCycleDuration( &_this->blinkEffect, 500 );
  EffectsBoolEffect_OnSetInterCycleDelay( &_this->blinkEffect, 500 );
  _this->Color = _Const0040;
  _this->CursorKeyHandler.Filter = CoreKeyCodeCursorKeys;
  _this->BackspaceKeyHandler.Filter = CoreKeyCodeBackspace;
  _this->DeleteKeyHandler.Filter = CoreKeyCodeDelete;
  _this->NewlineKeyHandler.Filter = CoreKeyCodeEnter;
  _this->CharacterKeyHandler.Filter = CoreKeyCodeCharacterKeys;
  CoreView_OnSetLayout((CoreView)&_this->Frame, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame, _Const0041 );
  ViewsFrame_OnSetColor( &_this->Frame, _Const0042 );
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const000C );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.050000f );
  CoreView_OnSetLayout((CoreView)&_this->SimpleTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0014 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0043 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0044 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0018 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->SimpleTouchHandler, 3 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0045 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0046 ));
  ViewsText_OnSetColor( &_this->Text, _Const0047 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, _Const0048 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, _Const0031 );
  ViewsLine_OnSetWidth2( &_this->Caret, 2 );
  ViewsLine_OnSetWidth1( &_this->Caret, 2 );
  ViewsLine_OnSetColor( &_this->Caret, _Const0040 );
  ViewsLine_OnSetVisible( &_this->Caret, 0 );
  CoreView_OnSetLayout((CoreView)&_this->Search, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Search, _Const0049 );
  ViewsText_OnSetWrapText( &_this->Search, 1 );
  ViewsText_OnSetString( &_this->Search, EwLoadString( &ResSerachIconTxt ));
  ViewsText_OnSetColor( &_this->Search, _Const0047 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Caret ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Search ), 0 );
  _this->blinkEffect.Outlet = EwNewRef( &_this->Caret, ViewsLine_OnGetVisible, ViewsLine_OnSetVisible );
  _this->Font = EwLoadResource( &ResourcesFontMedium, ResourcesFont );
  _this->CursorKeyHandler.OnPress = EwNewSlot( _this, ApplicationSearchEtxt_onCursorKey );
  _this->CursorKeyHandler.OnHold = EwNewSlot( _this, ApplicationSearchEtxt_onCursorKey );
  _this->BackspaceKeyHandler.OnPress = EwNewSlot( _this, ApplicationSearchEtxt_onBackspaceKey );
  _this->BackspaceKeyHandler.OnHold = EwNewSlot( _this, ApplicationSearchEtxt_onBackspaceKey );
  _this->DeleteKeyHandler.OnPress = EwNewSlot( _this, ApplicationSearchEtxt_onDeleteKey );
  _this->DeleteKeyHandler.OnHold = EwNewSlot( _this, ApplicationSearchEtxt_onDeleteKey );
  _this->NewlineKeyHandler.OnPress = EwNewSlot( _this, ApplicationSearchEtxt_onNewlineKey );
  _this->NewlineKeyHandler.OnHold = EwNewSlot( _this, ApplicationSearchEtxt_onNewlineKey );
  _this->CharacterKeyHandler.OnPress = EwNewSlot( _this, ApplicationSearchEtxt_onCharacterKey );
  _this->CharacterKeyHandler.OnHold = EwNewSlot( _this, ApplicationSearchEtxt_onCharacterKey );
  ViewsFrame_OnSetBitmap( &_this->Frame, EwLoadResource( &ResSearchButton, ResourcesBitmap ));
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, ApplicationSearchEtxt_onDragTouch );
  _this->SimpleTouchHandler.OnHold = EwNewSlot( _this, ApplicationSearchEtxt_onHoldTouch );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ApplicationSearchEtxt_onReleaseTouch );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationSearchEtxt_onPressTouch );
  ViewsText_OnSetOnUpdate( &_this->Text, EwNewSlot( _this, ApplicationSearchEtxt_updateCaret ));
  ViewsText_OnSetSlideHandler( &_this->Text, &_this->SlideTouchHandler );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Search, EwLoadResource( &ResIconsFont25, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::SearchEtxt' */
void ApplicationSearchEtxt__ReInit( ApplicationSearchEtxt _this )
{
  /* At first re-initialize the super class ... */
  TemplatesTextEditor__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  EffectsBoolEffect__ReInit( &_this->blinkEffect );
  CoreKeyPressHandler__ReInit( &_this->CursorKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->BackspaceKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->DeleteKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->NewlineKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->CharacterKeyHandler );
  ViewsFrame__ReInit( &_this->Frame );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsText__ReInit( &_this->Text );
  ViewsLine__ReInit( &_this->Caret );
  ViewsText__ReInit( &_this->Search );
}

/* Finalizer method for the class 'Application::SearchEtxt' */
void ApplicationSearchEtxt__Done( ApplicationSearchEtxt _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesTextEditor );

  /* Finalize all embedded objects */
  EffectsBoolEffect__Done( &_this->blinkEffect );
  CoreKeyPressHandler__Done( &_this->CursorKeyHandler );
  CoreKeyPressHandler__Done( &_this->BackspaceKeyHandler );
  CoreKeyPressHandler__Done( &_this->DeleteKeyHandler );
  CoreKeyPressHandler__Done( &_this->NewlineKeyHandler );
  CoreKeyPressHandler__Done( &_this->CharacterKeyHandler );
  ViewsFrame__Done( &_this->Frame );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsText__Done( &_this->Text );
  ViewsLine__Done( &_this->Caret );
  ViewsText__Done( &_this->Search );

  /* Don't forget to deinitialize the super class ... */
  TemplatesTextEditor__Done( &_this->_.Super );
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
void ApplicationSearchEtxt_UpdateViewState( ApplicationSearchEtxt _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );

  if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 1 );
  else
  {
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 0 );
    ViewsLine_OnSetVisible( &_this->Caret, 0 );
  }
}

/* This slot method is called after the caret has been adjusted. Its job is to adjust 
   too the position of the magnifying glass view where the augmented text content 
   around the caret is shown. */
void ApplicationSearchEtxt_updateMagnifyingView( ApplicationSearchEtxt _this, XObject 
  sender )
{
  XRect srcArea;
  XRect extent;
  XRect bounds;
  XPoint caret;
  XInt32 srcX;
  XInt32 dstX;
  XPoint ofs;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView == 0 )
    return;

  srcArea = _this->magnifyingView->Super1.SourceArea;
  extent = CoreView__GetExtent( _this->magnifyingView );
  bounds = _this->Super3.Bounds;
  caret = _this->Caret.Super1.Point1;
  srcX = caret.X - ( EwGetRectW( srcArea ) / 2 );

  if ( srcX < 0 )
    srcX = 0;

  if (( srcX + EwGetRectW( srcArea )) > EwGetRectW( bounds ))
    srcX = EwGetRectW( bounds ) - EwGetRectW( srcArea );

  ViewsWarpView_OnSetSourceArea((ViewsWarpView)_this->magnifyingView, EwSetRectOrigin( 
  _this->magnifyingView->Super1.SourceArea, EwNewPoint( srcX, caret.Y )));
  dstX = ( bounds.Point1.X + caret.X ) - (( caret.X - srcX ) * 2 );
  ofs = EwNewPoint( dstX - extent.Point1.X, ( bounds.Point1.Y + caret.Y ) - extent.Point2.Y );
  CoreView__MoveView( _this->magnifyingView, ofs, 0 );
  CoreView__MoveView( _this->magnifyingBack, ofs, 0 );
}

/* This slot method is called after a short delay when the user has moved the caret 
   or modified the text. Its job is to ensure that the caret is still visible. If 
   necessary, the editor content is scrolled. */
void ApplicationSearchEtxt_updateScrollOffset( ApplicationSearchEtxt _this, XObject 
  sender )
{
  XRect bounds;
  XInt32 ofsX;
  XInt32 ofsY;
  XPoint size;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  bounds = _this->Text.Super1.Bounds;
  ofsX = 0;
  ofsY = 0;

  if ( _this->Caret.Super1.Point1.X < bounds.Point1.X )
    ofsX = bounds.Point1.X - _this->Caret.Super1.Point1.X;

  if ( _this->Caret.Super1.Point1.X > bounds.Point2.X )
    ofsX = bounds.Point2.X - _this->Caret.Super1.Point1.X;

  if ( _this->Caret.Super1.Point1.Y < bounds.Point1.Y )
    ofsY = bounds.Point1.Y - _this->Caret.Super1.Point1.Y;

  if ( _this->Caret.Super1.Point2.Y > bounds.Point2.Y )
    ofsY = bounds.Point2.Y - _this->Caret.Super1.Point2.Y;

  if (( ofsX != 0 ) || ( ofsY != 0 ))
    ViewsText_OnSetScrollOffset( &_this->Text, EwMovePointPos( _this->Text.ScrollOffset, 
    EwNewPoint( ofsX, ofsY )));

  ofsX = _this->Text.ScrollOffset.X;
  ofsY = _this->Text.ScrollOffset.Y;
  size = EwGetRectSize( ViewsText_GetContentArea( &_this->Text ));

  if ( size.X <= EwGetRectW( _this->Text.Super1.Bounds ))
    ofsX = 0;

  if ( size.Y <= EwGetRectH( _this->Text.Super1.Bounds ))
    ofsY = 0;

  ViewsText_OnSetScrollOffset( &_this->Text, EwNewPoint( ofsX, ofsY ));
}

/* This slot method is attached to the Text view. Each time the Text view has rearranged 
   the text, this method is called. Its job is to adjust the caret to the evtl. 
   new position. */
void ApplicationSearchEtxt_updateCaret( ApplicationSearchEtxt _this, XObject sender )
{
  XPoint rowCol;
  XPoint pos;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Font == 0 )
    return;

  rowCol = ViewsText_StringIndex2RowCol( &_this->Text, _this->caretIndex );
  pos = ViewsText_RowCol2Position( &_this->Text, rowCol );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, EwMovePointNeg( pos, EwNewPoint( 
  0, _this->Font->Ascent )));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, EwMovePointPos( pos, EwNewPoint( 
  0, _this->Font->Descent )));

  if ( _this->blinkEffect.Enabled )
  {
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 0 );
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 1 );
  }

  if ( _this->autoScroll )
  {
    EwPostSignal( EwNewSlot( _this, ApplicationSearchEtxt_updateScrollOffset ), 
      ((XObject)_this ));
    _this->autoScroll = 0;
  }

  if ( _this->magnifyingView != 0 )
    EwPostSignal( EwNewSlot( _this, ApplicationSearchEtxt_updateMagnifyingView ), 
      ((XObject)_this ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   hide the magnifying glass view again. */
void ApplicationSearchEtxt_onReleaseTouch( ApplicationSearchEtxt _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView != 0 )
  {
    CoreGroup__Remove( _this->Super4.Owner, ((CoreView)_this->magnifyingView ));
    CoreGroup__Remove( _this->Super4.Owner, ((CoreView)_this->magnifyingBack ));
    _this->magnifyingView = 0;
    _this->magnifyingBack = 0;
    CoreGroup__OnSetBuffered( _this, 0 );
  }
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   move the caret accordingly to the user's finger movement. */
void ApplicationSearchEtxt_onDragTouch( ApplicationSearchEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView != 0 )
  {
    XPoint rc = ViewsText_Position2RowCol( &_this->Text, _this->SimpleTouchHandler.CurrentPos );
    XInt32 newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

    if ( newCaretIndex != _this->caretIndex )
    {
      _this->caretIndex = newCaretIndex;
      EwPostSignal( EwNewSlot( _this, ApplicationSearchEtxt_updateCaret ), ((XObject)_this ));
      _this->autoScroll = 1;
    }
  }
  else
  {
    XPoint ofs = EwMovePointNeg( _this->SimpleTouchHandler.CurrentPos, _this->SimpleTouchHandler.HittingPos );

    if (((( ofs.X < -8 ) || ( ofs.X > 8 )) || ( ofs.Y < -8 )) || ( ofs.Y > 8 ))
      CoreRoot_DeflectCursor( CoreView__GetRoot( _this ), ((CoreView)&_this->SlideTouchHandler ), 
      _Const0018 );
  }
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   activate the caret movement mode if the user has pressed the finger on the screen 
   for a while. The method also shows a small magnifying glass where the text around 
   the caret is shown. This should help the user to navigate the caret with the 
   finger. */
void ApplicationSearchEtxt_onHoldTouch( ApplicationSearchEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->SimpleTouchHandler.HoldPeriod >= 300 ) && ( _this->magnifyingView 
      == 0 ))
  {
    XInt32 height = _this->Caret.Super1.Point2.Y - _this->Caret.Super1.Point1.Y;
    XInt32 width = height * 3;

    if ( height > EwGetRectH( _this->Super3.Bounds ))
      height = EwGetRectH( _this->Super3.Bounds );

    if ( width > EwGetRectW( _this->Super3.Bounds ))
      width = EwGetRectW( _this->Super3.Bounds );

    CoreGroup__OnSetBuffered( _this, 1 );
    _this->magnifyingView = EwNewObject( ViewsWarpGroup, 0 );
    _this->magnifyingBack = EwNewObject( ViewsRectangle, 0 );
    ViewsWarpGroup_OnSetGroup( _this->magnifyingView, ((CoreGroup)_this ));
    ViewsWarpView_OnSetQuality((ViewsWarpView)_this->magnifyingView, 1 );
    ViewsWarpGroup_OnSetOpacity( _this->magnifyingView, 200 );
    ViewsWarpView_OnSetSourceArea((ViewsWarpView)_this->magnifyingView, EwNewRect( 
    0, 0, width, height ));
    CoreQuadView__OnSetPoint2( _this->magnifyingView, EwSetPointX( _this->magnifyingView->Super2.Point2, 
    width * 2 ));
    CoreQuadView__OnSetPoint3( _this->magnifyingView, EwSetPointX( _this->magnifyingView->Super2.Point3, 
    width * 2 ));
    CoreQuadView__OnSetPoint3( _this->magnifyingView, EwSetPointY( _this->magnifyingView->Super2.Point3, 
    height * 2 ));
    CoreQuadView__OnSetPoint4( _this->magnifyingView, EwSetPointY( _this->magnifyingView->Super2.Point4, 
    height * 2 ));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectSize( _this->magnifyingBack->Super1.Bounds, 
    EwMovePointPos( EwNewPoint( width * 2, height * 2 ), _Const004A )));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectOrigin( _this->magnifyingBack->Super1.Bounds, 
    _Const004B ));
    ViewsRectangle_OnSetColor( _this->magnifyingBack, _Const004C );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingBack ), 0 );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingView ), 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationSearchEtxt_updateMagnifyingView ), 
      ((XObject)_this ));
  }

  if ( _this->magnifyingView != 0 )
    EwSignal( EwNewSlot( _this, ApplicationSearchEtxt_onDragTouch ), ((XObject)_this ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   obtain the focused state for the editor so the user can interact with the editor 
   content and to place the caret at the touched position. */
void ApplicationSearchEtxt_onPressTouch( ApplicationSearchEtxt _this, XObject sender )
{
  XPoint rc;
  XInt32 newCaretIndex;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !CoreGroup_HasViewState((CoreGroup)_this, CoreViewStateFocused ))
    CoreGroup_ObtainFocus((CoreGroup)_this );

  rc = ViewsText_Position2RowCol( &_this->Text, _this->SimpleTouchHandler.CurrentPos );
  newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

  if ( newCaretIndex != _this->caretIndex )
  {
    _this->caretIndex = newCaretIndex;
    EwPostSignal( EwNewSlot( _this, ApplicationSearchEtxt_updateCaret ), ((XObject)_this ));
    _this->autoScroll = 1;
  }
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   move the caret up/down/left or right in the editor text. */
void ApplicationSearchEtxt_onCursorKey( ApplicationSearchEtxt _this, XObject sender )
{
  XPoint rc;
  XInt32 newCaretIndex;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Font == 0 )
    return;

  rc = ViewsText_StringIndex2RowCol( &_this->Text, _this->caretIndex );

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeLeft )
  {
    rc.X = ( rc.X - 1 );

    if ( ViewsText_RowCol2StringIndex( &_this->Text, rc ) == _this->caretIndex )
    {
      rc.Y = ( rc.Y - 1 );
      rc.X = EwGetStringLength( ViewsText_GetRowString( &_this->Text, rc.Y ));
    }
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeRight )
  {
    rc.X = ( rc.X + 1 );

    if ( ViewsText_RowCol2StringIndex( &_this->Text, rc ) == _this->caretIndex )
    {
      rc.Y = ( rc.Y + 1 );
      rc.X = 0;
    }
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeUp )
  {
    XPoint pos = ViewsText_RowCol2Position( &_this->Text, rc );
    XInt32 rowHeight = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;
    rc = ViewsText_Position2RowCol( &_this->Text, EwMovePointNeg( pos, EwNewPoint( 
    0, rowHeight )));
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeDown )
  {
    XPoint pos = ViewsText_RowCol2Position( &_this->Text, rc );
    XInt32 rowHeight = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;
    rc = ViewsText_Position2RowCol( &_this->Text, EwMovePointPos( pos, EwNewPoint( 
    0, rowHeight )));
  }

  newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

  if ( newCaretIndex != _this->caretIndex )
  {
    _this->caretIndex = newCaretIndex;
    EwPostSignal( EwNewSlot( _this, ApplicationSearchEtxt_updateCaret ), ((XObject)_this ));
    _this->autoScroll = 1;
  }
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign preceding the current caret position and to move the caret accordingly. */
void ApplicationSearchEtxt_onBackspaceKey( ApplicationSearchEtxt _this, XObject 
  sender )
{
  XChar ch;
  XInt32 count;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->caretIndex == 0 )
    return;

  ch = EwGetStringChar( _this->Text.String, _this->caretIndex - 1 );
  count = 1;

  if ((( ch == '^' ) || ( ch == '~' )) || ( ch == '%' ))
    count = 2;

  ViewsText_OnSetString( &_this->Text, EwStringRemove( _this->Text.String, _this->caretIndex 
  - count, count ));
  _this->caretIndex = _this->caretIndex - count;
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign at the current caret position. */
void ApplicationSearchEtxt_onDeleteKey( ApplicationSearchEtxt _this, XObject sender )
{
  XChar ch;
  XInt32 count;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->caretIndex >= ( EwGetStringLength( _this->Text.String ) - 1 ))
    return;

  ch = EwGetStringChar( _this->Text.String, _this->caretIndex );
  count = 1;

  if ( ch == '%' )
    count = 2;

  ViewsText_OnSetString( &_this->Text, EwStringRemove( _this->Text.String, _this->caretIndex, 
  count ));
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the <new line> sign and to move the caret 
   to the next row. */
void ApplicationSearchEtxt_onNewlineKey( ApplicationSearchEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, EwLoadString( 
  &_Const004D ), _this->caretIndex ));
  _this->caretIndex = _this->caretIndex + 1;
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the sign which has been input by the user 
   and to move the caret to the next column. */
void ApplicationSearchEtxt_onCharacterKey( ApplicationSearchEtxt _this, XObject 
  sender )
{
  XChar ch;
  XString str;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ch = _this->CharacterKeyHandler.CharCode;
  str = EwNewStringChar( ch, 1 );

  if (((( ch == '^' ) || ( ch == '~' )) || ( ch == 0x00AD )) || ( ch == '%' ))
    str = EwConcatStringChar( EwLoadString( &_Const004E ), ch );

  ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, str, 
  _this->caretIndex ));
  _this->caretIndex = _this->caretIndex + EwGetStringLength( str );
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* 'C' function for method : 'Application::SearchEtxt.OnSetColor()' */
void ApplicationSearchEtxt_OnSetColor( ApplicationSearchEtxt _this, XColor value )
{
  if ( !EwCompColor( _this->Color, value ))
    return;

  _this->Color = value;
  ViewsText_OnSetColor( &_this->Text, value );
  ViewsLine_OnSetColor( &_this->Caret, value );
}

/* Variants derived from the class : 'Application::SearchEtxt' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSearchEtxt )
EW_END_OF_CLASS_VARIANTS( ApplicationSearchEtxt )

/* Virtual Method Table (VMT) for the class : 'Application::SearchEtxt' */
EW_DEFINE_CLASS( ApplicationSearchEtxt, TemplatesTextEditor, magnifyingBack, OnChange, 
                 blinkEffect, blinkEffect, caretIndex, caretIndex, "Application::SearchEtxt" )
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
  ApplicationSearchEtxt_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSearchEtxt )

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
  ApplicationInputEtxt__Init( &_this->PhoneNumberTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line3, &_this->_.XObject, 0 );
  ApplicationInputEtxt__Init( &_this->FirstNameTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line2, &_this->_.XObject, 0 );
  ApplicationInputEtxt__Init( &_this->LastNameTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );
  ApplicationPushButtonBig__Init( &_this->UserInitials, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TitleTxt, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->SaveBtn, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->CloseButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactAddPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const004F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const0050 );
  ViewsLine_OnSetColor( &_this->Line4, _Const0015 );
  CoreView_OnSetLayout((CoreView)&_this->PhoneNumberTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->PhoneNumberTxt, _Const0051 );
  ApplicationInputEtxt_OnSetString( &_this->PhoneNumberTxt, 0 );
  ApplicationInputEtxt_OnSetColor( &_this->PhoneNumberTxt, ResBlue );
  ApplicationInputEtxt_OnSetPlaceholder( &_this->PhoneNumberTxt, EwLoadString( &_Const0052 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line3, _Const0053 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line3, _Const0054 );
  ViewsLine_OnSetColor( &_this->Line3, _Const0015 );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const0055 );
  ApplicationInputEtxt_OnSetString( &_this->FirstNameTxt, 0 );
  ApplicationInputEtxt_OnSetColor( &_this->FirstNameTxt, ResBlack );
  ApplicationInputEtxt_OnSetPlaceholder( &_this->FirstNameTxt, EwLoadString( &_Const0056 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const0057 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const0058 );
  ViewsLine_OnSetColor( &_this->Line2, _Const0015 );
  CoreView_OnSetLayout((CoreView)&_this->LastNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const0059 );
  ApplicationInputEtxt_OnSetString( &_this->LastNameTxt, 0 );
  ApplicationInputEtxt_OnSetColor( &_this->LastNameTxt, ResBlack );
  ApplicationInputEtxt_OnSetPlaceholder( &_this->LastNameTxt, EwLoadString( &_Const005A ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const005B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const005C );
  ViewsLine_OnSetColor( &_this->Line1, _Const0015 );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const005D );
  ApplicationPushButtonBig_OnSetDescript( &_this->UserInitials, EwLoadString( &_Const005E ));
  CoreRectView__OnSetBounds( &_this->TitleTxt, _Const005F );
  ViewsText_OnSetString( &_this->TitleTxt, EwLoadString( &_Const0060 ));
  ViewsText_OnSetColor( &_this->TitleTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->SaveBtn, _Const002B );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->SaveBtn, 0 );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->SaveBtn, EwLoadString( &ResCkeckIconTxt ));
  CoreRectView__OnSetBounds( &_this->CloseButton, _Const002C );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->CloseButton, EwLoadString( 
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
  ApplicationInputEtxt__ReInit( &_this->PhoneNumberTxt );
  ViewsLine__ReInit( &_this->Line3 );
  ApplicationInputEtxt__ReInit( &_this->FirstNameTxt );
  ViewsLine__ReInit( &_this->Line2 );
  ApplicationInputEtxt__ReInit( &_this->LastNameTxt );
  ViewsLine__ReInit( &_this->Line1 );
  ApplicationPushButtonBig__ReInit( &_this->UserInitials );
  ViewsText__ReInit( &_this->TitleTxt );
  ApplicationPushButtonNoBackground__ReInit( &_this->SaveBtn );
  ApplicationPushButtonNoBackground__ReInit( &_this->CloseButton );
}

/* Finalizer method for the class 'Application::ContactAddPage' */
void ApplicationContactAddPage__Done( ApplicationContactAddPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ViewsLine__Done( &_this->Line4 );
  ApplicationInputEtxt__Done( &_this->PhoneNumberTxt );
  ViewsLine__Done( &_this->Line3 );
  ApplicationInputEtxt__Done( &_this->FirstNameTxt );
  ViewsLine__Done( &_this->Line2 );
  ApplicationInputEtxt__Done( &_this->LastNameTxt );
  ViewsLine__Done( &_this->Line1 );
  ApplicationPushButtonBig__Done( &_this->UserInitials );
  ViewsText__Done( &_this->TitleTxt );
  ApplicationPushButtonNoBackground__Done( &_this->SaveBtn );
  ApplicationPushButtonNoBackground__Done( &_this->CloseButton );

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
    if ((( EwCompString( ApplicationInputEtxt_OnGetString( &_this->FirstNameTxt ), 
        0 ) != 0 ) || ( EwCompString( ApplicationInputEtxt_OnGetString( &_this->LastNameTxt ), 
        0 ) != 0 )) || ( EwCompString( ApplicationInputEtxt_OnGetString( &_this->PhoneNumberTxt ), 
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
void ApplicationContactAddPage_OnSetContact( ApplicationContactAddPage _this, ApplicationContact 
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

  ApplicationContact_OnSetFirstName( _this->Contact, ApplicationInputEtxt_OnGetString( 
  &_this->FirstNameTxt ));
  ApplicationContact_OnSetLastName( _this->Contact, ApplicationInputEtxt_OnGetString( 
  &_this->LastNameTxt ));
  ApplicationContact_OnSetPhoneNumber( _this->Contact, ApplicationInputEtxt_OnGetString( 
  &_this->PhoneNumberTxt ));
  ApplicationContact_OnSetNameInitials( _this->Contact, ApplicationContacts_GetInitials( 
  &EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager )->Contacts, 
  ApplicationInputEtxt_OnGetString( &_this->LastNameTxt ), ApplicationInputEtxt_OnGetString( 
  &_this->FirstNameTxt )));
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

  ApplicationPushButtonBig_OnSetInitials( &_this->UserInitials, ApplicationContacts_GetInitials( 
  &EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager )->Contacts, 
  ApplicationInputEtxt_OnGetString( &_this->LastNameTxt ), ApplicationInputEtxt_OnGetString( 
  &_this->FirstNameTxt )));
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
  ApplicationPushButtonDelete__Init( &_this->DeleteBtn, &_this->_.XObject, 0 );
  ApplicationInputEtxt__Init( &_this->NumberTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line4, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->MobileTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line3, &_this->_.XObject, 0 );
  ApplicationInputEtxt__Init( &_this->FirstNameTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line2, &_this->_.XObject, 0 );
  ApplicationInputEtxt__Init( &_this->LastNameTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );
  ApplicationPushButtonBig__Init( &_this->UserInitials, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->CloseBtn, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->SaveBtn, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactEditPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreRectView__OnSetBounds( &_this->DeleteBtn, _Const0061 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->DeleteBtn, 1 );
  ApplicationPushButtonDelete_OnSetLabel( &_this->DeleteBtn, EwLoadString( &_Const0062 ));
  CoreView_OnSetLayout((CoreView)&_this->NumberTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->NumberTxt, _Const0063 );
  ApplicationInputEtxt_OnSetAlignment( &_this->NumberTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ApplicationInputEtxt_OnSetString( &_this->NumberTxt, EwLoadString( &_Const0064 ));
  ApplicationInputEtxt_OnSetColor( &_this->NumberTxt, ResBlue );
  ApplicationInputEtxt_OnSetPlaceholder( &_this->NumberTxt, EwLoadString( &_Const0064 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const0065 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const0066 );
  ViewsLine_OnSetColor( &_this->Line4, _Const0015 );
  CoreView_OnSetLayout((CoreView)&_this->MobileTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->MobileTxt, _Const0067 );
  ViewsText_OnSetAlignment( &_this->MobileTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MobileTxt, EwLoadString( &_Const001F ));
  ViewsText_OnSetColor( &_this->MobileTxt, ResGrey );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line3, _Const0068 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line3, _Const0069 );
  ViewsLine_OnSetColor( &_this->Line3, _Const0015 );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const006A );
  ApplicationInputEtxt_OnSetString( &_this->FirstNameTxt, EwLoadString( &_Const006B ));
  ApplicationInputEtxt_OnSetColor( &_this->FirstNameTxt, ResBlack );
  ApplicationInputEtxt_OnSetPlaceholder( &_this->FirstNameTxt, EwLoadString( &_Const006B ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const006C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const006D );
  ViewsLine_OnSetColor( &_this->Line2, _Const0015 );
  CoreView_OnSetLayout((CoreView)&_this->LastNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const006E );
  ApplicationInputEtxt_OnSetString( &_this->LastNameTxt, EwLoadString( &_Const006F ));
  ApplicationInputEtxt_OnSetColor( &_this->LastNameTxt, ResBlack );
  ApplicationInputEtxt_OnSetPlaceholder( &_this->LastNameTxt, EwLoadString( &_Const006F ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const0070 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const0071 );
  ViewsLine_OnSetColor( &_this->Line1, _Const0015 );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const0072 );
  ApplicationPushButtonBig_OnSetInitials( &_this->UserInitials, 0 );
  ApplicationPushButtonBig_OnSetDescript( &_this->UserInitials, EwLoadString( &_Const005E ));
  CoreRectView__OnSetBounds( &_this->CloseBtn, _Const002C );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->CloseBtn, EwLoadString( 
  &ResCloseIconTxt ));
  CoreRectView__OnSetBounds( &_this->SaveBtn, _Const002B );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->SaveBtn, 0 );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->SaveBtn, EwLoadString( &ResCkeckIconTxt ));
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
  ApplicationInputEtxt_OnSetFont( &_this->NumberTxt, EwLoadResource( &ResContactFont15, 
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
  ApplicationPushButtonDelete__ReInit( &_this->DeleteBtn );
  ApplicationInputEtxt__ReInit( &_this->NumberTxt );
  ViewsLine__ReInit( &_this->Line4 );
  ViewsText__ReInit( &_this->MobileTxt );
  ViewsLine__ReInit( &_this->Line3 );
  ApplicationInputEtxt__ReInit( &_this->FirstNameTxt );
  ViewsLine__ReInit( &_this->Line2 );
  ApplicationInputEtxt__ReInit( &_this->LastNameTxt );
  ViewsLine__ReInit( &_this->Line1 );
  ApplicationPushButtonBig__ReInit( &_this->UserInitials );
  ApplicationPushButtonNoBackground__ReInit( &_this->CloseBtn );
  ApplicationPushButtonNoBackground__ReInit( &_this->SaveBtn );
}

/* Finalizer method for the class 'Application::ContactEditPage' */
void ApplicationContactEditPage__Done( ApplicationContactEditPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ApplicationPushButtonDelete__Done( &_this->DeleteBtn );
  ApplicationInputEtxt__Done( &_this->NumberTxt );
  ViewsLine__Done( &_this->Line4 );
  ViewsText__Done( &_this->MobileTxt );
  ViewsLine__Done( &_this->Line3 );
  ApplicationInputEtxt__Done( &_this->FirstNameTxt );
  ViewsLine__Done( &_this->Line2 );
  ApplicationInputEtxt__Done( &_this->LastNameTxt );
  ViewsLine__Done( &_this->Line1 );
  ApplicationPushButtonBig__Done( &_this->UserInitials );
  ApplicationPushButtonNoBackground__Done( &_this->CloseBtn );
  ApplicationPushButtonNoBackground__Done( &_this->SaveBtn );

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
    if ((( EwCompString( _this->Contact->FirstName, ApplicationInputEtxt_OnGetString( 
        &_this->FirstNameTxt )) != 0 ) || ( EwCompString( _this->Contact->LastName, 
        ApplicationInputEtxt_OnGetString( &_this->LastNameTxt )) != 0 )) || ( EwCompString( 
        _this->Contact->PhoneNumber, ApplicationInputEtxt_OnGetString( &_this->NumberTxt )) 
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

  ApplicationContact_OnSetFirstName( _this->Contact, ApplicationInputEtxt_OnGetString( 
  &_this->FirstNameTxt ));
  ApplicationContact_OnSetLastName( _this->Contact, ApplicationInputEtxt_OnGetString( 
  &_this->LastNameTxt ));
  ApplicationContact_OnSetPhoneNumber( _this->Contact, ApplicationInputEtxt_OnGetString( 
  &_this->NumberTxt ));
  ApplicationContact_OnSetNameInitials( _this->Contact, ApplicationContacts_GetInitials( 
  &EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager )->Contacts, 
  _this->Contact->LastName, _this->Contact->FirstName ));
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

  ApplicationContacts_Remove( &EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager )->Contacts, 
  _this->Contact );
  EwSignal( _this->OnDelete, ((XObject)_this ));
}

/* 'C' function for method : 'Application::ContactEditPage.OnSetContact()' */
void ApplicationContactEditPage_OnSetContact( ApplicationContactEditPage _this, 
  ApplicationContact value )
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
    ApplicationInputEtxt_OnSetString( &_this->FirstNameTxt, _this->Contact->FirstName );
    ApplicationInputEtxt_OnSetString( &_this->LastNameTxt, _this->Contact->LastName );
    ApplicationInputEtxt_OnSetString( &_this->NumberTxt, _this->Contact->PhoneNumber );
    ApplicationPushButtonBig_OnSetInitials( &_this->UserInitials, _this->Contact->NameInitials );
  }
}

/* 'C' function for method : 'Application::ContactEditPage.onFieldModified()' */
void ApplicationContactEditPage_onFieldModified( ApplicationContactEditPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationPushButtonBig_OnSetInitials( &_this->UserInitials, ApplicationContacts_GetInitials( 
  &EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager )->Contacts, 
  ApplicationInputEtxt_OnGetString( &_this->LastNameTxt ), ApplicationInputEtxt_OnGetString( 
  &_this->FirstNameTxt )));
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

/* Initializer for the class 'Application::Contact' */
void ApplicationContact__Init( ApplicationContact _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContact );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContact );
}

/* Re-Initializer for the class 'Application::Contact' */
void ApplicationContact__ReInit( ApplicationContact _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::Contact' */
void ApplicationContact__Done( ApplicationContact _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::Contact.OnSetFirstName()' */
void ApplicationContact_OnSetFirstName( ApplicationContact _this, XString value )
{
  if ( !EwCompString( _this->FirstName, value ))
    return;

  _this->FirstName = EwShareString( value );
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Application::Contact.OnSetLastName()' */
void ApplicationContact_OnSetLastName( ApplicationContact _this, XString value )
{
  if ( !EwCompString( _this->LastName, value ))
    return;

  _this->LastName = EwShareString( value );
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Application::Contact.OnSetPhoneNumber()' */
void ApplicationContact_OnSetPhoneNumber( ApplicationContact _this, XString value )
{
  if ( !EwCompString( _this->PhoneNumber, value ))
    return;

  _this->PhoneNumber = EwShareString( value );
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Application::Contact.OnSetNameInitials()' */
void ApplicationContact_OnSetNameInitials( ApplicationContact _this, XString value )
{
  if ( !EwCompString( _this->NameInitials, value ))
    return;

  _this->NameInitials = EwShareString( value );
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Variants derived from the class : 'Application::Contact' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContact )
EW_END_OF_CLASS_VARIANTS( ApplicationContact )

/* Virtual Method Table (VMT) for the class : 'Application::Contact' */
EW_DEFINE_CLASS( ApplicationContact, XObject, next, FirstName, FirstName, FirstName, 
                 FirstName, _.VMT, "Application::Contact" )
EW_END_OF_CLASS( ApplicationContact )

/* Initializer for the class 'Application::Contacts' */
void ApplicationContacts__Init( ApplicationContacts _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContacts );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContacts );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Sorting = ApplicationSortingAscending;
}

/* Re-Initializer for the class 'Application::Contacts' */
void ApplicationContacts__ReInit( ApplicationContacts _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::Contacts' */
void ApplicationContacts__Done( ApplicationContacts _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::Contacts.Add()' */
void ApplicationContacts_Add( ApplicationContacts _this, ApplicationContact aContact )
{
  if ( _this->head == 0 )
    _this->head = aContact;
  else
  {
    ApplicationContact lastNode = _this->head;

    while ( lastNode->next != 0 )
      lastNode = lastNode->next;

    lastNode->next = aContact;
  }

  ApplicationContacts_OnSetNoOfItems( _this, _this->NoOfItems + 1 );
}

/* 'C' function for method : 'Application::Contacts.Remove()' */
void ApplicationContacts_Remove( ApplicationContacts _this, ApplicationContact aContact )
{
  ApplicationContact contact = _this->head;
  ApplicationContact prev = 0;

  if (( contact != 0 ) && ( contact == aContact ))
  {
    _this->head = contact->next;
    ApplicationContacts_OnSetNoOfItems( _this, _this->NoOfItems - 1 );
  }
  else
  {
    while (( contact != 0 ) && ( contact != aContact ))
    {
      prev = contact;
      contact = contact->next;
    }

    prev->next = contact->next;
    ApplicationContacts_OnSetNoOfItems( _this, _this->NoOfItems - 1 );
  }
}

/* 'C' function for method : 'Application::Contacts.OnSetNoOfItems()' */
void ApplicationContacts_OnSetNoOfItems( ApplicationContacts _this, XInt32 value )
{
  if ( _this->NoOfItems == value )
    return;

  _this->NoOfItems = value;
  EwNotifyRefObservers( EwNewRef( _this, ApplicationContacts_OnGetNoOfItems, ApplicationContacts_OnSetNoOfItems ), 
    0 );
}

/* 'C' function for method : 'Application::Contacts.GetContact()' */
ApplicationContact ApplicationContacts_GetContact( ApplicationContacts _this, XInt32 
  aNo )
{
  ApplicationContact contact = _this->head;
  XInt32 it = 0;

  while ( it != aNo )
  {
    contact = contact->next;
    it += 1;
  }

  return contact;
}

/* 'C' function for method : 'Application::Contacts.GetInitials()' */
XString ApplicationContacts_GetInitials( ApplicationContacts _this, XString aLastName, 
  XString aFirstName )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  return EwConcatStringChar( EwConcatCharString( EwGetStringChar( aLastName, 0 ), 
    0 ), EwGetStringChar( aFirstName, 0 ));
}

/* 'C' function for method : 'Application::Contacts.insertionSort()' */
void ApplicationContacts_insertionSort( ApplicationContacts _this )
{
  ApplicationContact current = _this->head;

  while ( current != 0 )
  {
    ApplicationContact next = current->next;
    ApplicationContacts_sortedInsert( _this, current );
    current = next;
  }

  _this->head = _this->sorted;
  _this->sorted = 0;
}

/* 'C' function for method : 'Application::Contacts.sortedInsert()' */
void ApplicationContacts_sortedInsert( ApplicationContacts _this, ApplicationContact 
  aContact )
{
  if ((( _this->sorted == 0 ) || (( _this->Sorting == ApplicationSortingAscending ) 
      && ( EwCompString( _this->sorted->LastName, aContact->LastName ) >= 0 ))) 
      || (( _this->Sorting == ApplicationSortingDescending ) && ( EwCompString( 
      _this->sorted->LastName, aContact->LastName ) <= 0 )))
  {
    aContact->next = _this->sorted;
    _this->sorted = aContact;
  }
  else
  {
    ApplicationContact current = _this->sorted;

    while (( current->next != 0 ) && ((( _this->Sorting == ApplicationSortingAscending ) 
           && ( EwCompString( current->next->LastName, aContact->LastName ) < 0 )) 
           || (( _this->Sorting == ApplicationSortingDescending ) && ( EwCompString( 
           current->next->LastName, aContact->LastName ) > 0 ))))
      current = current->next;

    aContact->next = current->next;
    current->next = aContact;
  }
}

/* 'C' function for method : 'Application::Contacts.OnSetSorting()' */
void ApplicationContacts_OnSetSorting( ApplicationContacts _this, XEnum value )
{
  if ( _this->Sorting == value )
    return;

  _this->Sorting = value;
  ApplicationContacts_insertionSort( _this );
  EwNotifyRefObservers( EwNewRef( _this, ApplicationContacts_OnGetSorting, ApplicationContacts_OnSetSorting ), 
    0 );
}

/* 'C' function for method : 'Application::Contacts.FindByNumber()' */
ApplicationContact ApplicationContacts_FindByNumber( ApplicationContacts _this, 
  XString aNumber )
{
  ApplicationContact contact = _this->head;

  while ( contact != 0 )
  {
    if ( !EwCompString( contact->PhoneNumber, aNumber ))
      return contact;

    contact = contact->next;
  }

  return 0;
}

/* Default onget method for the property 'NoOfItems' */
XInt32 ApplicationContacts_OnGetNoOfItems( ApplicationContacts _this )
{
  return _this->NoOfItems;
}

/* Default onget method for the property 'Sorting' */
XEnum ApplicationContacts_OnGetSorting( ApplicationContacts _this )
{
  return _this->Sorting;
}

/* Variants derived from the class : 'Application::Contacts' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContacts )
EW_END_OF_CLASS_VARIANTS( ApplicationContacts )

/* Virtual Method Table (VMT) for the class : 'Application::Contacts' */
EW_DEFINE_CLASS( ApplicationContacts, XObject, head, NoOfItems, NoOfItems, NoOfItems, 
                 NoOfItems, NoOfItems, "Application::Contacts" )
EW_END_OF_CLASS( ApplicationContacts )

/* User defined auto object: 'Application::MyContacts' */
EW_DEFINE_AUTOOBJECT( ApplicationMyContacts, ApplicationContactsManager )

/* Initializer for the auto object 'Application::MyContacts' */
void ApplicationMyContacts__Init( ApplicationContactsManager _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::MyContacts' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationMyContacts )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationMyContacts )

/* Initializer for the class 'Application::InputEtxt' */
void ApplicationInputEtxt__Init( ApplicationInputEtxt _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesTextEditor__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationInputEtxt );

  /* ... then construct all embedded objects */
  EffectsBoolEffect__Init( &_this->blinkEffect, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->CursorKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->BackspaceKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->DeleteKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->NewlineKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->CharacterKeyHandler, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextPlaceholder, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Caret, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationInputEtxt );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const003F );
  _this->blinkEffect.Value2 = 0;
  _this->blinkEffect.Value1 = 1;
  EffectsBoolEffect_OnSetCycleDuration( &_this->blinkEffect, 500 );
  EffectsBoolEffect_OnSetInterCycleDelay( &_this->blinkEffect, 500 );
  _this->Alignment = ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter;
  _this->String = EwShareString( EwLoadString( &_Const0073 ));
  _this->Color = _Const0040;
  _this->CursorKeyHandler.Filter = CoreKeyCodeCursorKeys;
  _this->BackspaceKeyHandler.Filter = CoreKeyCodeBackspace;
  _this->Placeholder = EwShareString( EwLoadString( &_Const0074 ));
  _this->DeleteKeyHandler.Filter = CoreKeyCodeDelete;
  _this->NewlineKeyHandler.Filter = CoreKeyCodeEnter;
  _this->CharacterKeyHandler.Filter = CoreKeyCodeCharacterKeys;
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const000C );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.050000f );
  CoreView_OnSetLayout((CoreView)&_this->SimpleTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0014 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0043 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0044 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0018 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->SimpleTouchHandler, 3 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0075 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0076 ));
  ViewsText_OnSetColor( &_this->Text, _Const0077 );
  CoreView_OnSetLayout((CoreView)&_this->TextPlaceholder, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextPlaceholder, _Const0078 );
  ViewsText_OnSetAlignment( &_this->TextPlaceholder, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextPlaceholder, 0 );
  ViewsText_OnSetColor( &_this->TextPlaceholder, _Const0047 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, _Const0079 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, _Const007A );
  ViewsLine_OnSetWidth2( &_this->Caret, 2 );
  ViewsLine_OnSetWidth1( &_this->Caret, 2 );
  ViewsLine_OnSetColor( &_this->Caret, _Const0040 );
  ViewsLine_OnSetVisible( &_this->Caret, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextPlaceholder ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Caret ), 0 );
  _this->blinkEffect.Outlet = EwNewRef( &_this->Caret, ViewsLine_OnGetVisible, ViewsLine_OnSetVisible );
  _this->Font = EwLoadResource( &ResourcesFontMedium, ResourcesFont );
  _this->CursorKeyHandler.OnPress = EwNewSlot( _this, ApplicationInputEtxt_onCursorKey );
  _this->CursorKeyHandler.OnHold = EwNewSlot( _this, ApplicationInputEtxt_onCursorKey );
  _this->BackspaceKeyHandler.OnPress = EwNewSlot( _this, ApplicationInputEtxt_onBackspaceKey );
  _this->BackspaceKeyHandler.OnHold = EwNewSlot( _this, ApplicationInputEtxt_onBackspaceKey );
  _this->DeleteKeyHandler.OnPress = EwNewSlot( _this, ApplicationInputEtxt_onDeleteKey );
  _this->DeleteKeyHandler.OnHold = EwNewSlot( _this, ApplicationInputEtxt_onDeleteKey );
  _this->NewlineKeyHandler.OnPress = EwNewSlot( _this, ApplicationInputEtxt_onNewlineKey );
  _this->NewlineKeyHandler.OnHold = EwNewSlot( _this, ApplicationInputEtxt_onNewlineKey );
  _this->CharacterKeyHandler.OnPress = EwNewSlot( _this, ApplicationInputEtxt_onCharacterKey );
  _this->CharacterKeyHandler.OnHold = EwNewSlot( _this, ApplicationInputEtxt_onCharacterKey );
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, ApplicationInputEtxt_onDragTouch );
  _this->SimpleTouchHandler.OnHold = EwNewSlot( _this, ApplicationInputEtxt_onHoldTouch );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ApplicationInputEtxt_onReleaseTouch );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationInputEtxt_onPressTouch );
  ViewsText_OnSetOnUpdate( &_this->Text, EwNewSlot( _this, ApplicationInputEtxt_updateCaret ));
  ViewsText_OnSetSlideHandler( &_this->Text, &_this->SlideTouchHandler );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextPlaceholder, EwLoadResource( &ResourcesFontSmall, 
  ResourcesFont ));
}

/* Re-Initializer for the class 'Application::InputEtxt' */
void ApplicationInputEtxt__ReInit( ApplicationInputEtxt _this )
{
  /* At first re-initialize the super class ... */
  TemplatesTextEditor__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  EffectsBoolEffect__ReInit( &_this->blinkEffect );
  CoreKeyPressHandler__ReInit( &_this->CursorKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->BackspaceKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->DeleteKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->NewlineKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->CharacterKeyHandler );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->TextPlaceholder );
  ViewsLine__ReInit( &_this->Caret );
}

/* Finalizer method for the class 'Application::InputEtxt' */
void ApplicationInputEtxt__Done( ApplicationInputEtxt _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesTextEditor );

  /* Finalize all embedded objects */
  EffectsBoolEffect__Done( &_this->blinkEffect );
  CoreKeyPressHandler__Done( &_this->CursorKeyHandler );
  CoreKeyPressHandler__Done( &_this->BackspaceKeyHandler );
  CoreKeyPressHandler__Done( &_this->DeleteKeyHandler );
  CoreKeyPressHandler__Done( &_this->NewlineKeyHandler );
  CoreKeyPressHandler__Done( &_this->CharacterKeyHandler );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsText__Done( &_this->Text );
  ViewsText__Done( &_this->TextPlaceholder );
  ViewsLine__Done( &_this->Caret );

  /* Don't forget to deinitialize the super class ... */
  TemplatesTextEditor__Done( &_this->_.Super );
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
void ApplicationInputEtxt_UpdateViewState( ApplicationInputEtxt _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );

  if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 1 );
  else
  {
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 0 );
    ViewsLine_OnSetVisible( &_this->Caret, 0 );
  }
}

/* This slot method is called after the caret has been adjusted. Its job is to adjust 
   too the position of the magnifying glass view where the augmented text content 
   around the caret is shown. */
void ApplicationInputEtxt_updateMagnifyingView( ApplicationInputEtxt _this, XObject 
  sender )
{
  XRect srcArea;
  XRect extent;
  XRect bounds;
  XPoint caret;
  XInt32 srcX;
  XInt32 dstX;
  XPoint ofs;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView == 0 )
    return;

  srcArea = _this->magnifyingView->Super1.SourceArea;
  extent = CoreView__GetExtent( _this->magnifyingView );
  bounds = _this->Super3.Bounds;
  caret = _this->Caret.Super1.Point1;
  srcX = caret.X - ( EwGetRectW( srcArea ) / 2 );

  if ( srcX < 0 )
    srcX = 0;

  if (( srcX + EwGetRectW( srcArea )) > EwGetRectW( bounds ))
    srcX = EwGetRectW( bounds ) - EwGetRectW( srcArea );

  ViewsWarpView_OnSetSourceArea((ViewsWarpView)_this->magnifyingView, EwSetRectOrigin( 
  _this->magnifyingView->Super1.SourceArea, EwNewPoint( srcX, caret.Y )));
  dstX = ( bounds.Point1.X + caret.X ) - (( caret.X - srcX ) * 2 );
  ofs = EwNewPoint( dstX - extent.Point1.X, ( bounds.Point1.Y + caret.Y ) - extent.Point2.Y );
  CoreView__MoveView( _this->magnifyingView, ofs, 0 );
  CoreView__MoveView( _this->magnifyingBack, ofs, 0 );
}

/* This slot method is called after a short delay when the user has moved the caret 
   or modified the text. Its job is to ensure that the caret is still visible. If 
   necessary, the editor content is scrolled. */
void ApplicationInputEtxt_updateScrollOffset( ApplicationInputEtxt _this, XObject 
  sender )
{
  XRect bounds;
  XInt32 ofsX;
  XInt32 ofsY;
  XPoint size;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  bounds = _this->Text.Super1.Bounds;
  ofsX = 0;
  ofsY = 0;

  if ( _this->Caret.Super1.Point1.X < bounds.Point1.X )
    ofsX = bounds.Point1.X - _this->Caret.Super1.Point1.X;

  if ( _this->Caret.Super1.Point1.X > bounds.Point2.X )
    ofsX = bounds.Point2.X - _this->Caret.Super1.Point1.X;

  if ( _this->Caret.Super1.Point1.Y < bounds.Point1.Y )
    ofsY = bounds.Point1.Y - _this->Caret.Super1.Point1.Y;

  if ( _this->Caret.Super1.Point2.Y > bounds.Point2.Y )
    ofsY = bounds.Point2.Y - _this->Caret.Super1.Point2.Y;

  if (( ofsX != 0 ) || ( ofsY != 0 ))
    ViewsText_OnSetScrollOffset( &_this->Text, EwMovePointPos( _this->Text.ScrollOffset, 
    EwNewPoint( ofsX, ofsY )));

  ofsX = _this->Text.ScrollOffset.X;
  ofsY = _this->Text.ScrollOffset.Y;
  size = EwGetRectSize( ViewsText_GetContentArea( &_this->Text ));

  if ( size.X <= EwGetRectW( _this->Text.Super1.Bounds ))
    ofsX = 0;

  if ( size.Y <= EwGetRectH( _this->Text.Super1.Bounds ))
    ofsY = 0;

  ViewsText_OnSetScrollOffset( &_this->Text, EwNewPoint( ofsX, ofsY ));
}

/* This slot method is attached to the Text view. Each time the Text view has rearranged 
   the text, this method is called. Its job is to adjust the caret to the evtl. 
   new position. */
void ApplicationInputEtxt_updateCaret( ApplicationInputEtxt _this, XObject sender )
{
  XPoint rowCol;
  XPoint pos;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Font == 0 )
    return;

  rowCol = ViewsText_StringIndex2RowCol( &_this->Text, _this->caretIndex );
  pos = ViewsText_RowCol2Position( &_this->Text, rowCol );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, EwMovePointNeg( pos, EwNewPoint( 
  0, _this->Font->Ascent )));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, EwMovePointPos( pos, EwNewPoint( 
  0, _this->Font->Descent )));

  if ( _this->blinkEffect.Enabled )
  {
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 0 );
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 1 );
  }

  if ( _this->autoScroll )
  {
    EwPostSignal( EwNewSlot( _this, ApplicationInputEtxt_updateScrollOffset ), ((XObject)_this ));
    _this->autoScroll = 0;
  }

  if ( _this->magnifyingView != 0 )
    EwPostSignal( EwNewSlot( _this, ApplicationInputEtxt_updateMagnifyingView ), 
      ((XObject)_this ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   hide the magnifying glass view again. */
void ApplicationInputEtxt_onReleaseTouch( ApplicationInputEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView != 0 )
  {
    CoreGroup__Remove( _this->Super4.Owner, ((CoreView)_this->magnifyingView ));
    CoreGroup__Remove( _this->Super4.Owner, ((CoreView)_this->magnifyingBack ));
    _this->magnifyingView = 0;
    _this->magnifyingBack = 0;
    CoreGroup__OnSetBuffered( _this, 0 );
  }
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   move the caret accordingly to the user's finger movement. */
void ApplicationInputEtxt_onDragTouch( ApplicationInputEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView != 0 )
  {
    XPoint rc = ViewsText_Position2RowCol( &_this->Text, _this->SimpleTouchHandler.CurrentPos );
    XInt32 newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

    if ( newCaretIndex != _this->caretIndex )
    {
      _this->caretIndex = newCaretIndex;
      EwPostSignal( EwNewSlot( _this, ApplicationInputEtxt_updateCaret ), ((XObject)_this ));
      _this->autoScroll = 1;
    }
  }
  else
  {
    XPoint ofs = EwMovePointNeg( _this->SimpleTouchHandler.CurrentPos, _this->SimpleTouchHandler.HittingPos );

    if (((( ofs.X < -8 ) || ( ofs.X > 8 )) || ( ofs.Y < -8 )) || ( ofs.Y > 8 ))
      CoreRoot_DeflectCursor( CoreView__GetRoot( _this ), ((CoreView)&_this->SlideTouchHandler ), 
      _Const0018 );
  }
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   activate the caret movement mode if the user has pressed the finger on the screen 
   for a while. The method also shows a small magnifying glass where the text around 
   the caret is shown. This should help the user to navigate the caret with the 
   finger. */
void ApplicationInputEtxt_onHoldTouch( ApplicationInputEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->SimpleTouchHandler.HoldPeriod >= 300 ) && ( _this->magnifyingView 
      == 0 ))
  {
    XInt32 height = _this->Caret.Super1.Point2.Y - _this->Caret.Super1.Point1.Y;
    XInt32 width = height * 3;

    if ( height > EwGetRectH( _this->Super3.Bounds ))
      height = EwGetRectH( _this->Super3.Bounds );

    if ( width > EwGetRectW( _this->Super3.Bounds ))
      width = EwGetRectW( _this->Super3.Bounds );

    CoreGroup__OnSetBuffered( _this, 1 );
    _this->magnifyingView = EwNewObject( ViewsWarpGroup, 0 );
    _this->magnifyingBack = EwNewObject( ViewsRectangle, 0 );
    ViewsWarpGroup_OnSetGroup( _this->magnifyingView, ((CoreGroup)_this ));
    ViewsWarpView_OnSetQuality((ViewsWarpView)_this->magnifyingView, 1 );
    ViewsWarpGroup_OnSetOpacity( _this->magnifyingView, 200 );
    ViewsWarpView_OnSetSourceArea((ViewsWarpView)_this->magnifyingView, EwNewRect( 
    0, 0, width, height ));
    CoreQuadView__OnSetPoint2( _this->magnifyingView, EwSetPointX( _this->magnifyingView->Super2.Point2, 
    width * 2 ));
    CoreQuadView__OnSetPoint3( _this->magnifyingView, EwSetPointX( _this->magnifyingView->Super2.Point3, 
    width * 2 ));
    CoreQuadView__OnSetPoint3( _this->magnifyingView, EwSetPointY( _this->magnifyingView->Super2.Point3, 
    height * 2 ));
    CoreQuadView__OnSetPoint4( _this->magnifyingView, EwSetPointY( _this->magnifyingView->Super2.Point4, 
    height * 2 ));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectSize( _this->magnifyingBack->Super1.Bounds, 
    EwMovePointPos( EwNewPoint( width * 2, height * 2 ), _Const004A )));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectOrigin( _this->magnifyingBack->Super1.Bounds, 
    _Const004B ));
    ViewsRectangle_OnSetColor( _this->magnifyingBack, _Const004C );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingBack ), 0 );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingView ), 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationInputEtxt_updateMagnifyingView ), 
      ((XObject)_this ));
  }

  if ( _this->magnifyingView != 0 )
    EwSignal( EwNewSlot( _this, ApplicationInputEtxt_onDragTouch ), ((XObject)_this ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   obtain the focused state for the editor so the user can interact with the editor 
   content and to place the caret at the touched position. */
void ApplicationInputEtxt_onPressTouch( ApplicationInputEtxt _this, XObject sender )
{
  XPoint rc;
  XInt32 newCaretIndex;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !CoreGroup_HasViewState((CoreGroup)_this, CoreViewStateFocused ))
    CoreGroup_ObtainFocus((CoreGroup)_this );

  rc = ViewsText_Position2RowCol( &_this->Text, _this->SimpleTouchHandler.CurrentPos );
  newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

  if ( newCaretIndex != _this->caretIndex )
  {
    _this->caretIndex = newCaretIndex;
    EwPostSignal( EwNewSlot( _this, ApplicationInputEtxt_updateCaret ), ((XObject)_this ));
    _this->autoScroll = 1;
  }
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   move the caret up/down/left or right in the editor text. */
void ApplicationInputEtxt_onCursorKey( ApplicationInputEtxt _this, XObject sender )
{
  XPoint rc;
  XInt32 newCaretIndex;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Font == 0 )
    return;

  rc = ViewsText_StringIndex2RowCol( &_this->Text, _this->caretIndex );

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeLeft )
  {
    rc.X = ( rc.X - 1 );

    if ( ViewsText_RowCol2StringIndex( &_this->Text, rc ) == _this->caretIndex )
    {
      rc.Y = ( rc.Y - 1 );
      rc.X = EwGetStringLength( ViewsText_GetRowString( &_this->Text, rc.Y ));
    }
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeRight )
  {
    rc.X = ( rc.X + 1 );

    if ( ViewsText_RowCol2StringIndex( &_this->Text, rc ) == _this->caretIndex )
    {
      rc.Y = ( rc.Y + 1 );
      rc.X = 0;
    }
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeUp )
  {
    XPoint pos = ViewsText_RowCol2Position( &_this->Text, rc );
    XInt32 rowHeight = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;
    rc = ViewsText_Position2RowCol( &_this->Text, EwMovePointNeg( pos, EwNewPoint( 
    0, rowHeight )));
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeDown )
  {
    XPoint pos = ViewsText_RowCol2Position( &_this->Text, rc );
    XInt32 rowHeight = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;
    rc = ViewsText_Position2RowCol( &_this->Text, EwMovePointPos( pos, EwNewPoint( 
    0, rowHeight )));
  }

  newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

  if ( newCaretIndex != _this->caretIndex )
  {
    _this->caretIndex = newCaretIndex;
    EwPostSignal( EwNewSlot( _this, ApplicationInputEtxt_updateCaret ), ((XObject)_this ));
    _this->autoScroll = 1;
  }
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign preceding the current caret position and to move the caret accordingly. */
void ApplicationInputEtxt_onBackspaceKey( ApplicationInputEtxt _this, XObject sender )
{
  XChar ch;
  XInt32 count;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->caretIndex == 0 )
    return;

  ch = EwGetStringChar( _this->Text.String, _this->caretIndex - 1 );
  count = 1;

  if ((( ch == '^' ) || ( ch == '~' )) || ( ch == '%' ))
    count = 2;

  ViewsText_OnSetString( &_this->Text, EwStringRemove( _this->Text.String, _this->caretIndex 
  - count, count ));
  _this->caretIndex = _this->caretIndex - count;
  _this->autoScroll = 1;
  EwPostSignal( EwNewSlot( _this, ApplicationInputEtxt_onChange ), ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign at the current caret position. */
void ApplicationInputEtxt_onDeleteKey( ApplicationInputEtxt _this, XObject sender )
{
  XChar ch;
  XInt32 count;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->caretIndex >= ( EwGetStringLength( _this->Text.String ) - 1 ))
    return;

  ch = EwGetStringChar( _this->Text.String, _this->caretIndex );
  count = 1;

  if ( ch == '%' )
    count = 2;

  ViewsText_OnSetString( &_this->Text, EwStringRemove( _this->Text.String, _this->caretIndex, 
  count ));
  _this->autoScroll = 1;
  EwPostSignal( EwNewSlot( _this, ApplicationInputEtxt_onChange ), ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the <new line> sign and to move the caret 
   to the next row. */
void ApplicationInputEtxt_onNewlineKey( ApplicationInputEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, EwLoadString( 
  &_Const004D ), _this->caretIndex ));
  _this->caretIndex = _this->caretIndex + 1;
  _this->autoScroll = 1;
  EwPostSignal( EwNewSlot( _this, ApplicationInputEtxt_onChange ), ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the sign which has been input by the user 
   and to move the caret to the next column. */
void ApplicationInputEtxt_onCharacterKey( ApplicationInputEtxt _this, XObject sender )
{
  XChar ch;
  XString str;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ch = _this->CharacterKeyHandler.CharCode;
  str = EwNewStringChar( ch, 1 );

  if (((( ch == '^' ) || ( ch == '~' )) || ( ch == 0x00AD )) || ( ch == '%' ))
    str = EwConcatStringChar( EwLoadString( &_Const004E ), ch );

  ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, str, 
  _this->caretIndex ));
  _this->caretIndex = _this->caretIndex + EwGetStringLength( str );
  _this->autoScroll = 1;
  EwPostSignal( EwNewSlot( _this, ApplicationInputEtxt_onChange ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::InputEtxt.OnSetAlignment()' */
void ApplicationInputEtxt_OnSetAlignment( ApplicationInputEtxt _this, XSet value )
{
  if ( _this->Alignment == value )
    return;

  _this->Alignment = value;
  ViewsText_OnSetAlignment( &_this->Text, value );
  _this->autoScroll = 1;
  ViewsText_OnSetScrollOffset( &_this->Text, _Const0018 );
}

/* 'C' function for method : 'Application::InputEtxt.OnGetString()' */
XString ApplicationInputEtxt_OnGetString( ApplicationInputEtxt _this )
{
  XString str = _this->Text.String;
  XInt32 inx = EwStringFindChar( str, '%', 0 );

  while ( inx >= 0 )
  {
    str = EwStringRemove( str, inx, 1 );
    inx = EwStringFindChar( str, '%', inx + 1 );
  }

  return EwStringLeft( str, EwGetStringLength( str ) - 1 );
}

/* 'C' function for method : 'Application::InputEtxt.OnSetString()' */
void ApplicationInputEtxt_OnSetString( ApplicationInputEtxt _this, XString value )
{
  XString str;
  XInt32 inx;

  if ( !EwCompString( _this->String, value ))
    return;

  _this->String = EwShareString( value );
  str = value;
  inx = EwStringFindChar( str, '%', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const004E ), inx );
    inx = EwStringFindChar( str, '%', inx + 2 );
  }

  inx = EwStringFindChar( str, '^', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const004E ), inx );
    inx = EwStringFindChar( str, '^', inx + 2 );
  }

  inx = EwStringFindChar( str, '~', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const004E ), inx );
    inx = EwStringFindChar( str, '~', inx + 2 );
  }

  inx = EwStringFindChar( str, 0x00AD, 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const004E ), inx );
    inx = EwStringFindChar( str, 0x00AD, inx + 2 );
  }

  if ( _this->caretIndex > EwGetStringLength( str ))
    _this->caretIndex = EwGetStringLength( str );

  ViewsText_OnSetString( &_this->Text, EwConcatString( str, EwLoadString( &_Const007B )));
  _this->autoScroll = 1;
  ViewsText_OnSetScrollOffset( &_this->Text, _Const0018 );
  EwPostSignal( EwNewSlot( _this, ApplicationInputEtxt_updatePlaceholder ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::InputEtxt.OnSetColor()' */
void ApplicationInputEtxt_OnSetColor( ApplicationInputEtxt _this, XColor value )
{
  if ( !EwCompColor( _this->Color, value ))
    return;

  _this->Color = value;
  ViewsText_OnSetColor( &_this->Text, value );
  ViewsLine_OnSetColor( &_this->Caret, value );
}

/* 'C' function for method : 'Application::InputEtxt.OnSetFont()' */
void ApplicationInputEtxt_OnSetFont( ApplicationInputEtxt _this, ResourcesFont value )
{
  if ( _this->Font == value )
    return;

  _this->Font = value;
  ViewsText_OnSetFont( &_this->Text, value );
  _this->autoScroll = 1;
  ViewsText_OnSetScrollOffset( &_this->Text, _Const0018 );
}

/* 'C' function for method : 'Application::InputEtxt.OnSetPlaceholder()' */
void ApplicationInputEtxt_OnSetPlaceholder( ApplicationInputEtxt _this, XString 
  value )
{
  if ( !EwCompString( _this->Placeholder, value ))
    return;

  _this->Placeholder = EwShareString( value );
  ViewsText_OnSetString( &_this->TextPlaceholder, _this->Placeholder );
  EwPostSignal( EwNewSlot( _this, ApplicationInputEtxt_updatePlaceholder ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::InputEtxt.onChange()' */
void ApplicationInputEtxt_onChange( ApplicationInputEtxt _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnChange, ((XObject)_this ));
  EwPostSignal( EwNewSlot( _this, ApplicationInputEtxt_updatePlaceholder ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::InputEtxt.updatePlaceholder()' */
void ApplicationInputEtxt_updatePlaceholder( ApplicationInputEtxt _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !EwCompString( ApplicationInputEtxt_OnGetString( _this ), EwLoadString( &_Const0076 )) 
      || !EwCompString( ApplicationInputEtxt_OnGetString( _this ), 0 ))
    ViewsText_OnSetVisible( &_this->TextPlaceholder, 1 );
  else
    ViewsText_OnSetVisible( &_this->TextPlaceholder, 0 );
}

/* Variants derived from the class : 'Application::InputEtxt' */
EW_DEFINE_CLASS_VARIANTS( ApplicationInputEtxt )
EW_END_OF_CLASS_VARIANTS( ApplicationInputEtxt )

/* Virtual Method Table (VMT) for the class : 'Application::InputEtxt' */
EW_DEFINE_CLASS( ApplicationInputEtxt, TemplatesTextEditor, magnifyingBack, OnChange, 
                 blinkEffect, blinkEffect, String, caretIndex, "Application::InputEtxt" )
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
  ApplicationInputEtxt_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationInputEtxt )

/* Initializer for the class 'Application::PushButtonDelete' */
void ApplicationPushButtonDelete__Init( ApplicationPushButtonDelete _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationPushButtonDelete );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationPushButtonDelete );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const007C );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const007D );
  ViewsRectangle_OnSetColor( &_this->Background, _Const000E );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const007E );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const007F );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0080 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0018 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Text, _Const0081 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0062 ));
  ViewsText_OnSetColor( &_this->Text, _Const0082 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationPushButtonDelete_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonDelete_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationPushButtonDelete_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationPushButtonDelete_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationPushButtonDelete_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonDelete_onPressTouch );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::PushButtonDelete' */
void ApplicationPushButtonDelete__ReInit( ApplicationPushButtonDelete _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsRectangle__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Application::PushButtonDelete' */
void ApplicationPushButtonDelete__Done( ApplicationPushButtonDelete _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsRectangle__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
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
void ApplicationPushButtonDelete_UpdateViewState( ApplicationPushButtonDelete _this, 
  XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->Text != 0 )
  {
    XColor clr = ResRed;
    ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResContactFont15, ResourcesFont ));
    ViewsText_OnSetString( &_this->Text, _this->Label );
    ViewsText_OnSetColor( &_this->Text, clr );
  }

  if ( !isEnabled )
  {
    ViewsRectangle_OnSetColor( &_this->Background, ResWhiteTransparent );
    ViewsText_OnSetColor( &_this->Text, ResGrey );
  }
  else
    if ( isPressed )
    {
      ViewsRectangle_OnSetColor( &_this->Background, ResPressColor );
      ViewsText_OnSetColor( &_this->Text, ResRedLight );
    }
    else
      ViewsRectangle_OnSetColor( &_this->Background, ResWhiteTransparent );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationPushButtonDelete_onFlashTimer( ApplicationPushButtonDelete _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationPushButtonDelete_onPressKey( ApplicationPushButtonDelete _this, 
  XObject sender )
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
void ApplicationPushButtonDelete_onEnterLeaveTouch( ApplicationPushButtonDelete _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ApplicationPushButtonDelete_onReleaseTouch( ApplicationPushButtonDelete _this, 
  XObject sender )
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
void ApplicationPushButtonDelete_onPressTouch( ApplicationPushButtonDelete _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Application::PushButtonDelete.OnSetLabel()' */
void ApplicationPushButtonDelete_OnSetLabel( ApplicationPushButtonDelete _this, 
  XString value )
{
  if ( !EwCompString( _this->Label, value ))
    return;

  _this->Label = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::PushButtonDelete' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPushButtonDelete )
EW_END_OF_CLASS_VARIANTS( ApplicationPushButtonDelete )

/* Virtual Method Table (VMT) for the class : 'Application::PushButtonDelete' */
EW_DEFINE_CLASS( ApplicationPushButtonDelete, TemplatesPushButton, OnActivate, OnActivate, 
                 FlashTimer, FlashTimer, Label, enabled, "Application::PushButtonDelete" )
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
  ApplicationPushButtonDelete_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationPushButtonDelete )

/* Initializer for the class 'Application::CallPage' */
void ApplicationCallPage__Init( ApplicationCallPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationCallPage );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ApplicationPushButtonMediumRed__Init( &_this->EndCallBtn, &_this->_.XObject, 0 );
  ApplicationPushButtonMediumTrans__Init( &_this->ContactsBtn, &_this->_.XObject, 0 );
  ApplicationPushButtonMediumTrans__Init( &_this->VideoCallBtn, &_this->_.XObject, 0 );
  ApplicationPushButtonMediumTrans__Init( &_this->AddCallBtn, &_this->_.XObject, 0 );
  ApplicationPushButtonMediumTrans__Init( &_this->SpeakerBtn, &_this->_.XObject, 0 );
  ApplicationPushButtonMediumTrans__Init( &_this->KeyPadBtn, &_this->_.XObject, 0 );
  ApplicationPushButtonMediumTrans__Init( &_this->MuteBtn, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TimeTxt, &_this->_.XObject, 0 );
  ApplicationPushButtonBig__Init( &_this->UserInitials, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ContactNameTxt, &_this->_.XObject, 0 );
  ApplicationKeypadInsideCall__Init( &_this->Keypad1, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationCallPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0083 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0083 );
  ViewsRectangle_OnSetColorBL( &_this->Background, ResGrey );
  ViewsRectangle_OnSetColorBR( &_this->Background, ResGreyLight );
  ViewsRectangle_OnSetColorTR( &_this->Background, ResGrey );
  ViewsRectangle_OnSetColorTL( &_this->Background, ResGrey );
  ViewsRectangle_OnSetColor( &_this->Background, ResBlack );
  CoreRectView__OnSetBounds( &_this->EndCallBtn, _Const0084 );
  ApplicationPushButtonMediumRed_OnSetLabel( &_this->EndCallBtn, EwLoadString( &ResEndCallTxt ));
  CoreRectView__OnSetBounds( &_this->ContactsBtn, _Const0085 );
  ApplicationPushButtonMediumTrans_OnSetIcon( &_this->ContactsBtn, EwLoadString( 
  &ResUserIconTxt ));
  ApplicationPushButtonMediumTrans_OnSetDescript( &_this->ContactsBtn, EwLoadString( 
  &_Const0086 ));
  CoreRectView__OnSetBounds( &_this->VideoCallBtn, _Const0087 );
  ApplicationPushButtonMediumTrans_OnSetIcon( &_this->VideoCallBtn, EwLoadString( 
  &ResVideoCallTxt ));
  ApplicationPushButtonMediumTrans_OnSetDescript( &_this->VideoCallBtn, EwLoadString( 
  &_Const0088 ));
  CoreRectView__OnSetBounds( &_this->AddCallBtn, _Const0089 );
  ApplicationPushButtonMediumTrans_OnSetIcon( &_this->AddCallBtn, EwLoadString( 
  &ResPlusIconTxt ));
  ApplicationPushButtonMediumTrans_OnSetDescript( &_this->AddCallBtn, EwLoadString( 
  &_Const008A ));
  CoreRectView__OnSetBounds( &_this->SpeakerBtn, _Const008B );
  ApplicationPushButtonMediumTrans_OnSetIcon( &_this->SpeakerBtn, EwLoadString( 
  &ResSpeakerTxt ));
  ApplicationPushButtonMediumTrans_OnSetDescript( &_this->SpeakerBtn, EwLoadString( 
  &_Const008C ));
  CoreRectView__OnSetBounds( &_this->KeyPadBtn, _Const008D );
  ApplicationPushButtonMediumTrans_OnSetIcon( &_this->KeyPadBtn, EwLoadString( &ResKeypadTxt ));
  ApplicationPushButtonMediumTrans_OnSetDescript( &_this->KeyPadBtn, EwLoadString( 
  &_Const008E ));
  CoreRectView__OnSetBounds( &_this->MuteBtn, _Const008F );
  ApplicationPushButtonMediumTrans_OnSetIcon( &_this->MuteBtn, EwLoadString( &ResMicOffTxt ));
  ApplicationPushButtonMediumTrans_OnSetDescript( &_this->MuteBtn, EwLoadString( 
  &_Const0090 ));
  CoreView_OnSetLayout((CoreView)&_this->TimeTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->TimeTxt, _Const0091 );
  ViewsText_OnSetAlignment( &_this->TimeTxt, ViewsTextAlignmentAlignHorzCenter | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TimeTxt, EwLoadString( &_Const0092 ));
  ViewsText_OnSetColor( &_this->TimeTxt, _Const0093 );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const0094 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->UserInitials, 0 );
  CoreView_OnSetLayout((CoreView)&_this->ContactNameTxt, CoreLayoutAlignToLeft | 
  CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->ContactNameTxt, _Const0095 );
  ViewsText_OnSetEllipsis( &_this->ContactNameTxt, 1 );
  ViewsText_OnSetWrapText( &_this->ContactNameTxt, 0 );
  ViewsText_OnSetAlignment( &_this->ContactNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ContactNameTxt, EwLoadString( &_Const0029 ));
  ViewsText_OnSetColor( &_this->ContactNameTxt, _Const0093 );
  CoreRectView__OnSetBounds( &_this->Keypad1, _Const0096 );
  ApplicationKeypadPage_OnSetHideFunction((ApplicationKeypadPage)&_this->Keypad1, 
  0 );
  ApplicationKeypadPage_OnSetHideCall((ApplicationKeypadPage)&_this->Keypad1, 1 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->EndCallBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ContactsBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VideoCallBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->AddCallBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SpeakerBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->KeyPadBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MuteBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TimeTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UserInitials ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ContactNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Keypad1 ), 0 );
  _this->EndCallBtn.OnActivate = EwNewSlot( _this, ApplicationCallPage_onEndCallPress );
  _this->ContactsBtn.OnActivate = EwNewSlot( _this, ApplicationCallPage_onContactsPress );
  _this->VideoCallBtn.OnActivate = EwNewSlot( _this, ApplicationCallPage_onVideoCallPress );
  _this->AddCallBtn.OnActivate = EwNewSlot( _this, ApplicationCallPage_onAddCallPress );
  _this->SpeakerBtn.OnActivate = EwNewSlot( _this, ApplicationCallPage_onSpeakerPress );
  _this->KeyPadBtn.OnActivate = EwNewSlot( _this, ApplicationCallPage_onKeypadPress );
  _this->MuteBtn.OnActivate = EwNewSlot( _this, ApplicationCallPage_onMicPress );
  ViewsText_OnSetFont( &_this->TimeTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
  ViewsText_OnSetFont( &_this->ContactNameTxt, EwLoadResource( &ResTitileFont25, 
  ResourcesFont ));
  _this->Keypad1.Super1.OnEditTextChanged = EwNewSlot( _this, ApplicationCallPage_onKeypadEdit );

  /* Call the user defined constructor */
  ApplicationCallPage_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::CallPage' */
void ApplicationCallPage__ReInit( ApplicationCallPage _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ApplicationPushButtonMediumRed__ReInit( &_this->EndCallBtn );
  ApplicationPushButtonMediumTrans__ReInit( &_this->ContactsBtn );
  ApplicationPushButtonMediumTrans__ReInit( &_this->VideoCallBtn );
  ApplicationPushButtonMediumTrans__ReInit( &_this->AddCallBtn );
  ApplicationPushButtonMediumTrans__ReInit( &_this->SpeakerBtn );
  ApplicationPushButtonMediumTrans__ReInit( &_this->KeyPadBtn );
  ApplicationPushButtonMediumTrans__ReInit( &_this->MuteBtn );
  ViewsText__ReInit( &_this->TimeTxt );
  ApplicationPushButtonBig__ReInit( &_this->UserInitials );
  ViewsText__ReInit( &_this->ContactNameTxt );
  ApplicationKeypadInsideCall__ReInit( &_this->Keypad1 );
}

/* Finalizer method for the class 'Application::CallPage' */
void ApplicationCallPage__Done( ApplicationCallPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ApplicationPushButtonMediumRed__Done( &_this->EndCallBtn );
  ApplicationPushButtonMediumTrans__Done( &_this->ContactsBtn );
  ApplicationPushButtonMediumTrans__Done( &_this->VideoCallBtn );
  ApplicationPushButtonMediumTrans__Done( &_this->AddCallBtn );
  ApplicationPushButtonMediumTrans__Done( &_this->SpeakerBtn );
  ApplicationPushButtonMediumTrans__Done( &_this->KeyPadBtn );
  ApplicationPushButtonMediumTrans__Done( &_this->MuteBtn );
  ViewsText__Done( &_this->TimeTxt );
  ApplicationPushButtonBig__Done( &_this->UserInitials );
  ViewsText__Done( &_this->ContactNameTxt );
  ApplicationKeypadInsideCall__Done( &_this->Keypad1 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationCallPage_Init( ApplicationCallPage _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationCallPage_onCallState ), EwNewRef( 
    EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetCallState, 
    ApplicationDeviceClass_OnSetCallState ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationCallPage_onCallState ), ((XObject)_this ));
  ApplicationCallPage_getContact( _this );
}

/* 'C' function for method : 'Application::CallPage.OnSetContact()' */
void ApplicationCallPage_OnSetContact( ApplicationCallPage _this, ApplicationContact 
  value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationCallPage_onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationCallPage_onContactUpdated ), 
      (XObject)_this->Contact, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationCallPage_onContactUpdated ), ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::CallPage.onContactUpdated()' */
void ApplicationCallPage_onContactUpdated( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Contact != 0 )
  {
    ViewsText_OnSetString( &_this->ContactNameTxt, EwConcatString( EwConcatString( 
    _this->Contact->LastName, EwLoadString( &_Const002D )), _this->Contact->FirstName ));
    ApplicationPushButtonBig_OnSetInitials( &_this->UserInitials, _this->Contact->NameInitials );
  }
  else
  {
    ViewsText_OnSetString( &_this->ContactNameTxt, EwGetAutoObject( &ApplicationDevice, 
    ApplicationDeviceClass )->CallingNumber );
    CoreGroup_OnSetVisible((CoreGroup)&_this->UserInitials, 0 );
  }
}

/* 'C' function for method : 'Application::CallPage.onEndCallPress()' */
void ApplicationCallPage_onEndCallPress( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationDeviceClass_UpdateCallState( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  0 );
  EwPostSignal( EwNewSlot( _this, ApplicationCallPage_onCallState ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::CallPage.onSpeakerPress()' */
void ApplicationCallPage_onSpeakerPress( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationDeviceClass_OnSetSpeaker( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  (XBool)!EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->Speaker );
  ApplicationPushButtonMediumTrans_OnSetButtonColor( &_this->SpeakerBtn, ( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass )->Speaker? ResWhite : ResWhiteTransparent ));
  ApplicationPushButtonMediumTrans_OnSetIconColor( &_this->SpeakerBtn, ( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass )->Speaker? ResBlack : ResWhite ));
}

/* 'C' function for method : 'Application::CallPage.onMicPress()' */
void ApplicationCallPage_onMicPress( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationDeviceClass_OnSetMicrophone( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  (XBool)!EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->Microphone );
  ApplicationPushButtonMediumTrans_OnSetButtonColor( &_this->MuteBtn, ( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass )->Microphone? ResWhite : ResWhiteTransparent ));
  ApplicationPushButtonMediumTrans_OnSetIconColor( &_this->MuteBtn, ( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass )->Microphone? ResBlack : ResWhite ));
}

/* 'C' function for method : 'Application::CallPage.onKeypadPress()' */
void ApplicationCallPage_onKeypadPress( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->Keypad1, EwSetRectOrigin( _this->Keypad1.Super3.Bounds, 
  _Const0097 ));
  _this->Keypad1.Super1.OnHide = EwNewSlot( _this, ApplicationCallPage_onHide );
}

/* 'C' function for method : 'Application::CallPage.onAddCallPress()' */
void ApplicationCallPage_onAddCallPress( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
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
  ((EffectsTransition)EwGetAutoObject( &ApplicationSlideUpCentered, EffectsSlideTransition )), 
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
}

/* 'C' function for method : 'Application::CallPage.onHide()' */
void ApplicationCallPage_onHide( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->Keypad1, EwSetRectY( _this->Keypad1.Super3.Bounds, 
  _this->Super2.Bounds.Point2.Y ));
  ApplicationInputEtxt_OnSetString( &_this->Keypad1.Super1.InputEtxt, 0 );
  ViewsText_OnSetVisible( &_this->ContactNameTxt, 1 );
  ViewsText_OnSetVisible( &_this->TimeTxt, 1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->UserInitials, 1 );
}

/* 'C' function for method : 'Application::CallPage.onKeypadEdit()' */
void ApplicationCallPage_onKeypadEdit( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetVisible( &_this->ContactNameTxt, (XBool)!EwCompString( ApplicationInputEtxt_OnGetString( 
  &_this->Keypad1.Super1.InputEtxt ), 0 ));
  ViewsText_OnSetVisible( &_this->TimeTxt, (XBool)!EwCompString( ApplicationInputEtxt_OnGetString( 
  &_this->Keypad1.Super1.InputEtxt ), 0 ));
  CoreGroup_OnSetVisible((CoreGroup)&_this->UserInitials, (XBool)!EwCompString( 
  ApplicationInputEtxt_OnGetString( &_this->Keypad1.Super1.InputEtxt ), 0 ));
}

/* 'C' function for method : 'Application::CallPage.onCallState()' */
void ApplicationCallPage_onCallState( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwTrace( "%e%s", EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CallState, 
    EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CallingNumber );

  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CallState 
      == ApplicationCallStateRingOutgoing )
  {
    CoreGroup_OnSetEnabled((CoreGroup)&_this->AddCallBtn, 0 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->VideoCallBtn, 0 );
  }
  else
    if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CallState 
        == ApplicationCallStateTalk )
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->AddCallBtn, 1 );
      CoreGroup_OnSetEnabled((CoreGroup)&_this->VideoCallBtn, 1 );
      ViewsText_OnSetVisible( &_this->TimeTxt, 0 );
    }
    else
      CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this ), 0, 0, 0, EwNullSlot, 
      EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::CallPage.getContact()' */
void ApplicationCallPage_getContact( ApplicationCallPage _this )
{
  ApplicationCallPage_OnSetContact( _this, ApplicationContacts_FindByNumber( &EwGetAutoObject( 
  &ApplicationMyContacts, ApplicationContactsManager )->Contacts, EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass )->CallingNumber ));
  EwPostSignal( EwNewSlot( _this, ApplicationCallPage_onContactUpdated ), ((XObject)_this ));
}

/* Variants derived from the class : 'Application::CallPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationCallPage )
EW_END_OF_CLASS_VARIANTS( ApplicationCallPage )

/* Virtual Method Table (VMT) for the class : 'Application::CallPage' */
EW_DEFINE_CLASS( ApplicationCallPage, CoreGroup, Contact, Background, Background, 
                 Background, _.VMT, _.VMT, "Application::CallPage" )
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
EW_END_OF_CLASS( ApplicationCallPage )

/* Initializer for the class 'Application::PushButtonMediumTrans' */
void ApplicationPushButtonMediumTrans__Init( ApplicationPushButtonMediumTrans _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationPushButtonMediumTrans );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->IconTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->DescripTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationPushButtonMediumTrans );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0098 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0099 );
  ViewsImage_OnSetColor( &_this->Background, _Const000E );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const009A );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const009B );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const009C );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0018 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->IconTxt, _Const0099 );
  ViewsText_OnSetString( &_this->IconTxt, 0 );
  ViewsText_OnSetColor( &_this->IconTxt, _Const000E );
  CoreView_OnSetLayout((CoreView)&_this->DescripTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->DescripTxt, _Const009D );
  ViewsText_OnSetAlignment( &_this->DescripTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DescripTxt, 0 );
  _this->ButtonColor = ResWhiteTransparent;
  _this->IconColor = ResWhite;
  _this->ButtonColorPressed = ResWhiteSemiTransparent;
  _this->DescriptColor = ResWhite;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DescripTxt ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationPushButtonMediumTrans_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonMediumTrans_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundMedium1, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationPushButtonMediumTrans_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationPushButtonMediumTrans_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationPushButtonMediumTrans_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonMediumTrans_onPressTouch );
  ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::PushButtonMediumTrans' */
void ApplicationPushButtonMediumTrans__ReInit( ApplicationPushButtonMediumTrans _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->IconTxt );
  ViewsText__ReInit( &_this->DescripTxt );
}

/* Finalizer method for the class 'Application::PushButtonMediumTrans' */
void ApplicationPushButtonMediumTrans__Done( ApplicationPushButtonMediumTrans _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->IconTxt );
  ViewsText__Done( &_this->DescripTxt );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
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
void ApplicationPushButtonMediumTrans_UpdateViewState( ApplicationPushButtonMediumTrans _this, 
  XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->IconTxt != 0 )
  {
    XColor clr = _this->IconColor;
    ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont25, ResourcesFont ));
    ViewsText_OnSetString( &_this->IconTxt, _this->Icon );
    ViewsText_OnSetColor( &_this->IconTxt, clr );
  }

  if ( &_this->DescripTxt != 0 )
  {
    XColor clr = _this->DescriptColor;
    ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, 
    ResourcesFont ));
    ViewsText_OnSetString( &_this->DescripTxt, _this->Descript );
    ViewsText_OnSetColor( &_this->DescripTxt, clr );
  }

  if ( !isEnabled )
  {
    ViewsImage_OnSetColor( &_this->Background, ResTransparent );
    ViewsText_OnSetColor( &_this->DescripTxt, ResWhiteTransparent );
    ViewsText_OnSetColor( &_this->IconTxt, ResWhiteTransparent );
  }
  else
    if ( isPressed )
      ViewsImage_OnSetColor( &_this->Background, _this->ButtonColorPressed );
    else
      ViewsImage_OnSetColor( &_this->Background, _this->ButtonColor );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationPushButtonMediumTrans_onFlashTimer( ApplicationPushButtonMediumTrans _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationPushButtonMediumTrans_onPressKey( ApplicationPushButtonMediumTrans _this, 
  XObject sender )
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
void ApplicationPushButtonMediumTrans_onEnterLeaveTouch( ApplicationPushButtonMediumTrans _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ApplicationPushButtonMediumTrans_onReleaseTouch( ApplicationPushButtonMediumTrans _this, 
  XObject sender )
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
void ApplicationPushButtonMediumTrans_onPressTouch( ApplicationPushButtonMediumTrans _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Application::PushButtonMediumTrans.OnSetIcon()' */
void ApplicationPushButtonMediumTrans_OnSetIcon( ApplicationPushButtonMediumTrans _this, 
  XString value )
{
  if ( !EwCompString( _this->Icon, value ))
    return;

  _this->Icon = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::PushButtonMediumTrans.OnSetDescript()' */
void ApplicationPushButtonMediumTrans_OnSetDescript( ApplicationPushButtonMediumTrans _this, 
  XString value )
{
  if ( !EwCompString( _this->Descript, value ))
    return;

  _this->Descript = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::PushButtonMediumTrans.OnSetButtonColor()' */
void ApplicationPushButtonMediumTrans_OnSetButtonColor( ApplicationPushButtonMediumTrans _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ButtonColor, value ))
    return;

  _this->ButtonColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::PushButtonMediumTrans.OnSetIconColor()' */
void ApplicationPushButtonMediumTrans_OnSetIconColor( ApplicationPushButtonMediumTrans _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconColor, value ))
    return;

  _this->IconColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::PushButtonMediumTrans' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPushButtonMediumTrans )
EW_END_OF_CLASS_VARIANTS( ApplicationPushButtonMediumTrans )

/* Virtual Method Table (VMT) for the class : 'Application::PushButtonMediumTrans' */
EW_DEFINE_CLASS( ApplicationPushButtonMediumTrans, TemplatesPushButton, OnActivate, 
                 OnActivate, FlashTimer, FlashTimer, Icon, ButtonColor, "Application::PushButtonMediumTrans" )
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
  ApplicationPushButtonMediumTrans_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationPushButtonMediumTrans )

/* Initializer for the class 'Application::PushButtonMediumRed' */
void ApplicationPushButtonMediumRed__Init( ApplicationPushButtonMediumRed _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationPushButtonMediumRed );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationPushButtonMediumRed );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0099 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0099 );
  ViewsImage_OnSetColor( &_this->Background, _Const000E );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const009A );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const009B );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const009C );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0018 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0099 );
  ViewsText_OnSetString( &_this->Text, 0 );
  ViewsText_OnSetColor( &_this->Text, _Const000E );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationPushButtonMediumRed_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonMediumRed_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundMedium1, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationPushButtonMediumRed_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationPushButtonMediumRed_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationPushButtonMediumRed_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonMediumRed_onPressTouch );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResIconsFont20, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::PushButtonMediumRed' */
void ApplicationPushButtonMediumRed__ReInit( ApplicationPushButtonMediumRed _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Application::PushButtonMediumRed' */
void ApplicationPushButtonMediumRed__Done( ApplicationPushButtonMediumRed _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
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
void ApplicationPushButtonMediumRed_UpdateViewState( ApplicationPushButtonMediumRed _this, 
  XSet aState )
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
    ViewsImage_OnSetColor( &_this->Background, ResRed );
  else
    if ( isPressed )
      ViewsImage_OnSetColor( &_this->Background, ResRedLight );
    else
      ViewsImage_OnSetColor( &_this->Background, ResRed );

  if ( &_this->Text != 0 )
  {
    ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResIconsFont25, ResourcesFont ));
    ViewsText_OnSetString( &_this->Text, _this->Label );
    ViewsText_OnSetColor( &_this->Text, _Const000E );
  }

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationPushButtonMediumRed_onFlashTimer( ApplicationPushButtonMediumRed _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationPushButtonMediumRed_onPressKey( ApplicationPushButtonMediumRed _this, 
  XObject sender )
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
void ApplicationPushButtonMediumRed_onEnterLeaveTouch( ApplicationPushButtonMediumRed _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ApplicationPushButtonMediumRed_onReleaseTouch( ApplicationPushButtonMediumRed _this, 
  XObject sender )
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
void ApplicationPushButtonMediumRed_onPressTouch( ApplicationPushButtonMediumRed _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Application::PushButtonMediumRed.OnSetLabel()' */
void ApplicationPushButtonMediumRed_OnSetLabel( ApplicationPushButtonMediumRed _this, 
  XString value )
{
  if ( !EwCompString( _this->Label, value ))
    return;

  _this->Label = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::PushButtonMediumRed' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPushButtonMediumRed )
EW_END_OF_CLASS_VARIANTS( ApplicationPushButtonMediumRed )

/* Virtual Method Table (VMT) for the class : 'Application::PushButtonMediumRed' */
EW_DEFINE_CLASS( ApplicationPushButtonMediumRed, TemplatesPushButton, OnActivate, 
                 OnActivate, FlashTimer, FlashTimer, Label, enabled, "Application::PushButtonMediumRed" )
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
  ApplicationPushButtonMediumRed_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationPushButtonMediumRed )

/* Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Init( ApplicationDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesDeviceClass__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationDeviceClass );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationDeviceClass );

  /* ... and initialize objects, variables, properties, etc. */
  _this->CallState = ApplicationCallStateNone;

  /* Call the user defined constructor */
  ApplicationDeviceClass_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__ReInit( ApplicationDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  TemplatesDeviceClass__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Done( ApplicationDeviceClass _this )
{
  /* Call the user defined destructor of the class */
  ApplicationDeviceClass_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesDeviceClass );

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::DeviceClass.Done()' */
void ApplicationDeviceClass_Done( ApplicationDeviceClass _this )
{
  XObject thisObject = ((XObject)_this );

  {
    /*
       TO DO:

       Depending on your application case you call functions of the underlying
       middleware (or access the device directly) in order to perform the necessary
       de-initialization steps. For example, you invoke some 'C' function:

         YourDevice_DeInitialize();

       IMPORTANT:
       ----------

       The variable 'thisObject' represents the actually de-initialized instance of the
       Application::DeviceClass. If you have stored this object at the initialization
       time (in the 'Init' method) in some global C variable or registered it by the
       middleware, it is important to perform now the opposite operation. Set the
       global variable to NULL or de-register 'thisObject' object from the middleware.

    */
  }
}

/* 'C' function for method : 'Application::DeviceClass.Init()' */
void ApplicationDeviceClass_Init( ApplicationDeviceClass _this, XHandle aArg )
{
  XObject thisObject;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  thisObject = ((XObject)_this );
  {
    /*
       TO DO:

       Depending on your application case you call functions of the underlying
       middleware (or access the device directly) in order to perform the necessary
       initialization steps. For example, you invoke some 'C' function:

         YourDevice_Initialize();

       The variable 'thisObject' represents the actually initialized instance of the
       Application::DeviceClass. You can store this variable e.g. in the middleware
       and use it whenever the middleware needs to notify the GUI application about
       some state alternation or events. In this manner, the middleware will be able
       to invoke methods of the interface device object.

       For example, you can store 'thisObject' in some global C variable:

         // Declaration of the global C variable
         XObject theDeviceObject;

         // Store the instance in the global variable
         theDeviceObject = thisObject;

       Later use the global variable e.g. to provide the GUI application with events:

         ApplicationDeviceClass__TriggerSomeEvent( theDeviceObject );

       IMPORTANT:
       ----------

       If you store 'thisObject' for later use, don't forget to implement the opposite
       operation in the method 'Done'. Concrete, 'Done' should set the global variable
       again to the value NULL.

    */
  }
}

/* 'C' function for method : 'Application::DeviceClass.OnGetMicrophone()' */
XBool ApplicationDeviceClass_OnGetMicrophone( ApplicationDeviceClass _this )
{
  return _this->Microphone;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetMicrophone()' */
void ApplicationDeviceClass_OnSetMicrophone( ApplicationDeviceClass _this, XBool 
  value )
{
  if ( _this->Microphone == value )
    return;

  _this->Microphone = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetMicrophone, 
    ApplicationDeviceClass_OnSetMicrophone ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateMicrophone( ApplicationDeviceClass _this, XBool 
  aNewValue )
{
  if ( aNewValue != _this->Microphone )
  {
    _this->Microphone = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetMicrophone, 
      ApplicationDeviceClass_OnSetMicrophone ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateMicrophone()' */
__declspec( naked ) void ApplicationDeviceClass__UpdateMicrophone( void* _this, 
  XBool aNewValue )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aNewValue );

  __asm jmp ApplicationDeviceClass_UpdateMicrophone
}

/* 'C' function for method : 'Application::DeviceClass.OnGetSpeaker()' */
XBool ApplicationDeviceClass_OnGetSpeaker( ApplicationDeviceClass _this )
{
  return _this->Speaker;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetSpeaker()' */
void ApplicationDeviceClass_OnSetSpeaker( ApplicationDeviceClass _this, XBool value )
{
  if ( _this->Speaker == value )
    return;

  _this->Speaker = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetSpeaker, ApplicationDeviceClass_OnSetSpeaker ), 
    0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateSpeaker( ApplicationDeviceClass _this, XBool aNewValue )
{
  if ( aNewValue != _this->Speaker )
  {
    _this->Speaker = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetSpeaker, 
      ApplicationDeviceClass_OnSetSpeaker ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateSpeaker()' */
__declspec( naked ) void ApplicationDeviceClass__UpdateSpeaker( void* _this, XBool 
  aNewValue )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aNewValue );

  __asm jmp ApplicationDeviceClass_UpdateSpeaker
}

/* 'C' function for method : 'Application::DeviceClass.OnGetCallState()' */
XEnum ApplicationDeviceClass_OnGetCallState( ApplicationDeviceClass _this )
{
  return _this->CallState;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetCallState()' */
void ApplicationDeviceClass_OnSetCallState( ApplicationDeviceClass _this, XEnum 
  value )
{
  if ( _this->CallState == value )
    return;

  _this->CallState = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetCallState, 
    ApplicationDeviceClass_OnSetCallState ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateCallState( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->CallState )
  {
    _this->CallState = (XEnum)aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetCallState, 
      ApplicationDeviceClass_OnSetCallState ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateCallState()' */
__declspec( naked ) void ApplicationDeviceClass__UpdateCallState( void* _this, XInt32 
  aNewValue )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aNewValue );

  __asm jmp ApplicationDeviceClass_UpdateCallState
}

/* 'C' function for method : 'Application::DeviceClass.OnGetCallingNumber()' */
XString ApplicationDeviceClass_OnGetCallingNumber( ApplicationDeviceClass _this )
{
  return _this->CallingNumber;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetCallingNumber()' */
void ApplicationDeviceClass_OnSetCallingNumber( ApplicationDeviceClass _this, XString 
  value )
{
  if ( !EwCompString( _this->CallingNumber, value ))
    return;

  _this->CallingNumber = EwShareString( value );
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetCallingNumber, 
    ApplicationDeviceClass_OnSetCallingNumber ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateCallingNumber( ApplicationDeviceClass _this, XString 
  aNewValue )
{
  if ( EwCompString( aNewValue, _this->CallingNumber ) != 0 )
  {
    _this->CallingNumber = EwShareString( aNewValue );
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetCallingNumber, 
      ApplicationDeviceClass_OnSetCallingNumber ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateCallingNumber()' */
__declspec( naked ) void ApplicationDeviceClass__UpdateCallingNumber( void* _this, 
  XString aNewValue )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aNewValue );

  __asm jmp ApplicationDeviceClass_UpdateCallingNumber
}

/* Variants derived from the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( ApplicationDeviceClass )
EW_END_OF_CLASS_VARIANTS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS( ApplicationDeviceClass, TemplatesDeviceClass, CallingNumber, CallingNumber, 
                 CallingNumber, CallingNumber, CallingNumber, CallState, "Application::DeviceClass" )
EW_END_OF_CLASS( ApplicationDeviceClass )

/* User defined auto object: 'Application::Device' */
EW_DEFINE_AUTOOBJECT( ApplicationDevice, ApplicationDeviceClass )

/* Initializer for the auto object 'Application::Device' */
void ApplicationDevice__Init( ApplicationDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::Device' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationDevice )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationDevice )

/* Initializer for the class 'Application::KeyPadButtons' */
void ApplicationKeyPadButtons__Init( ApplicationKeyPadButtons _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationKeyPadButtons );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->IconTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->DescripTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationKeyPadButtons );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0099 );
  _this->ButtonColor = ResWhiteTransparent;
  _this->IconColor = ResWhite;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0099 );
  ViewsImage_OnSetColor( &_this->Background, _Const000E );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const009A );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const009B );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const009C );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0018 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->IconTxt, _Const0099 );
  ViewsText_OnSetString( &_this->IconTxt, 0 );
  ViewsText_OnSetColor( &_this->IconTxt, _Const000E );
  CoreRectView__OnSetBounds( &_this->DescripTxt, _Const0099 );
  ViewsText_OnSetString( &_this->DescripTxt, 0 );
  ViewsText_OnSetColor( &_this->DescripTxt, _Const000E );
  _this->TextColor = ResWhite;
  _this->ButtonColorPressed = ResWhiteSemiTransparent;
  _this->IconColorPressed = ResWhiteSemiTransparent;
  _this->TextColorPressed = ResWhiteSemiTransparent;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DescripTxt ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationKeyPadButtons_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationKeyPadButtons_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundMedium1, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationKeyPadButtons_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationKeyPadButtons_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationKeyPadButtons_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationKeyPadButtons_onPressTouch );
  ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::KeyPadButtons' */
void ApplicationKeyPadButtons__ReInit( ApplicationKeyPadButtons _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->IconTxt );
  ViewsText__ReInit( &_this->DescripTxt );
}

/* Finalizer method for the class 'Application::KeyPadButtons' */
void ApplicationKeyPadButtons__Done( ApplicationKeyPadButtons _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->IconTxt );
  ViewsText__Done( &_this->DescripTxt );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
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
void ApplicationKeyPadButtons_UpdateViewState( ApplicationKeyPadButtons _this, XSet 
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

  if ( &_this->IconTxt != 0 )
  {
    XColor clr = _this->IconColor;
    ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont25, ResourcesFont ));
    ViewsText_OnSetString( &_this->IconTxt, _this->Icon );
    ViewsText_OnSetColor( &_this->IconTxt, clr );
  }

  if ( &_this->DescripTxt != 0 )
  {
    XColor clr = _this->TextColor;
    ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResTitileFont25, ResourcesFont ));
    ViewsText_OnSetString( &_this->DescripTxt, _this->Text );
    ViewsText_OnSetColor( &_this->DescripTxt, clr );
  }

  if ( !isEnabled )
  {
    ViewsImage_OnSetColor( &_this->Background, ResPressColor );
    ViewsText_OnSetColor( &_this->IconTxt, ResGrey );
    ViewsText_OnSetColor( &_this->DescripTxt, ResGrey );
  }
  else
    if ( isPressed )
    {
      ViewsImage_OnSetColor( &_this->Background, _this->ButtonColorPressed );
      ViewsText_OnSetColor( &_this->IconTxt, _this->IconColorPressed );
      ViewsText_OnSetColor( &_this->DescripTxt, _this->TextColorPressed );
    }
    else
      ViewsImage_OnSetColor( &_this->Background, _this->ButtonColor );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* 'C' function for method : 'Application::KeyPadButtons.OnSetText()' */
void ApplicationKeyPadButtons_OnSetText( ApplicationKeyPadButtons _this, XString 
  value )
{
  if ( !EwCompString( _this->Text, value ))
    return;

  _this->Text = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::KeyPadButtons.OnSetButtonColor()' */
void ApplicationKeyPadButtons_OnSetButtonColor( ApplicationKeyPadButtons _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ButtonColor, value ))
    return;

  _this->ButtonColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::KeyPadButtons.OnSetIconColor()' */
void ApplicationKeyPadButtons_OnSetIconColor( ApplicationKeyPadButtons _this, XColor 
  value )
{
  if ( !EwCompColor( _this->IconColor, value ))
    return;

  _this->IconColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationKeyPadButtons_onFlashTimer( ApplicationKeyPadButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationKeyPadButtons_onPressKey( ApplicationKeyPadButtons _this, XObject 
  sender )
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

/* 'C' function for method : 'Application::KeyPadButtons.OnSetIcon()' */
void ApplicationKeyPadButtons_OnSetIcon( ApplicationKeyPadButtons _this, XString 
  value )
{
  if ( !EwCompString( _this->Icon, value ))
    return;

  _this->Icon = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user drags the finger while pressing 
   the button. This only updates the button to appear pressed or released. */
void ApplicationKeyPadButtons_onEnterLeaveTouch( ApplicationKeyPadButtons _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ApplicationKeyPadButtons_onReleaseTouch( ApplicationKeyPadButtons _this, XObject 
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
void ApplicationKeyPadButtons_onPressTouch( ApplicationKeyPadButtons _this, XObject 
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

/* 'C' function for method : 'Application::KeyPadButtons.OnSetTextColor()' */
void ApplicationKeyPadButtons_OnSetTextColor( ApplicationKeyPadButtons _this, XColor 
  value )
{
  if ( !EwCompColor( _this->TextColor, value ))
    return;

  _this->TextColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::KeyPadButtons.OnSetButtonColorPressed()' */
void ApplicationKeyPadButtons_OnSetButtonColorPressed( ApplicationKeyPadButtons _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ButtonColorPressed, value ))
    return;

  _this->ButtonColorPressed = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::KeyPadButtons.OnSetIconColorPressed()' */
void ApplicationKeyPadButtons_OnSetIconColorPressed( ApplicationKeyPadButtons _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconColorPressed, value ))
    return;

  _this->IconColorPressed = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::KeyPadButtons.OnSetTextColorPressed()' */
void ApplicationKeyPadButtons_OnSetTextColorPressed( ApplicationKeyPadButtons _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TextColorPressed, value ))
    return;

  _this->TextColorPressed = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::KeyPadButtons' */
EW_DEFINE_CLASS_VARIANTS( ApplicationKeyPadButtons )
EW_END_OF_CLASS_VARIANTS( ApplicationKeyPadButtons )

/* Virtual Method Table (VMT) for the class : 'Application::KeyPadButtons' */
EW_DEFINE_CLASS( ApplicationKeyPadButtons, TemplatesPushButton, OnActivate, OnActivate, 
                 FlashTimer, FlashTimer, Icon, ButtonColor, "Application::KeyPadButtons" )
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
  ApplicationKeyPadButtons_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationKeyPadButtons )

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
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line2, _Const009E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Super1.Line2, _Const009F );
  CoreRectView__OnSetBounds( &_this->Super1.NumberTxt, _Const00A0 );
  CoreRectView__OnSetBounds( &_this->Super1.MobileTxt, _Const00A1 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Super1.Line1, _Const0053 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Super1.Line1, _Const0054 );
  CoreRectView__OnSetBounds( &_this->Super1.CallBtn, _Const00A2 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Super1.CallBtn, 0 );
  CoreRectView__OnSetBounds( &_this->Super1.VideoCallBtn, _Const00A3 );
  CoreRectView__OnSetBounds( &_this->Super1.PushButtonMediumBlue2, _Const00A4 );
  CoreRectView__OnSetBounds( &_this->Super1.ContactName, _Const00A5 );
  CoreRectView__OnSetBounds( &_this->Super1.UserInitialsBtn, _Const00A6 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Super1.UserInitialsBtn, 0 );
  CoreRectView__OnSetBounds( &_this->Super1.EditBtn, _Const00A7 );
  CoreRectView__OnSetBounds( &_this->Super1.BackBtn, _Const00A8 );
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

  _this->Super1.edit = EwNewObject( ApplicationContactEditPage, 0 );
  _this->Super1.edit->OnSave = EwNewSlot( _this, ApplicationContactDetailsPage_onSaveEdit );
  _this->Super1.edit->OnClose = EwNewSlot( _this, ApplicationContactDetailsPage_onCancelEdit );
  ApplicationContactEditPage_OnSetContact( _this->Super1.edit, _this->Super1.Contact );
  _this->Super1.edit->OnDelete = EwNewSlot( _this, ApplicationContactDetailsPage_onDelete );
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->Super1.edit ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
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
EW_END_OF_CLASS( ApplicationDetailsInsideCall )

/* Initializer for the class 'Application::TextButton' */
void ApplicationTextButton__Init( ApplicationTextButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationTextButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationTextButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00A9 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const003C );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00AA );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00AB );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0018 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Background, _Const00AC );
  ViewsRectangle_OnSetColor( &_this->Background, _Const001C );
  CoreRectView__OnSetBounds( &_this->TextTxt, _Const00A9 );
  ViewsText_OnSetAlignment( &_this->TextTxt, ViewsTextAlignmentAlignHorzCenter | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextTxt, 0 );
  ViewsText_OnSetColor( &_this->TextTxt, _Const000E );
  _this->TextColor = ResBlue;
  _this->TextColorPress = ResBlueLight;
  _this->BackgoundColor = ResTransparent;
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextTxt ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationTextButton_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationTextButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationTextButton_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationTextButton_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationTextButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationTextButton_onPressTouch );
  ViewsText_OnSetFont( &_this->TextTxt, EwLoadResource( &ResIconsFont25, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::TextButton' */
void ApplicationTextButton__ReInit( ApplicationTextButton _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsRectangle__ReInit( &_this->Background );
  ViewsText__ReInit( &_this->TextTxt );
}

/* Finalizer method for the class 'Application::TextButton' */
void ApplicationTextButton__Done( ApplicationTextButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsRectangle__Done( &_this->Background );
  ViewsText__Done( &_this->TextTxt );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
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
void ApplicationTextButton_UpdateViewState( ApplicationTextButton _this, XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->TextTxt != 0 )
  {
    XColor clr = _this->TextColor;
    ViewsText_OnSetFont( &_this->TextTxt, EwLoadResource( &ResContactFont15, ResourcesFont ));
    ViewsText_OnSetString( &_this->TextTxt, _this->Text );
    ViewsText_OnSetColor( &_this->TextTxt, clr );
  }

  if ( !isEnabled )
  {
    ViewsRectangle_OnSetColor( &_this->Background, _this->BackgoundColor );
    ViewsText_OnSetColor( &_this->TextTxt, ResGrey );
  }
  else
    if ( isPressed )
    {
      ViewsRectangle_OnSetColor( &_this->Background, _this->BackgoundColor );
      ViewsText_OnSetColor( &_this->TextTxt, _this->TextColorPress );
    }
    else
      ViewsRectangle_OnSetColor( &_this->Background, _this->BackgoundColor );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationTextButton_onFlashTimer( ApplicationTextButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationTextButton_onPressKey( ApplicationTextButton _this, XObject sender )
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
void ApplicationTextButton_onEnterLeaveTouch( ApplicationTextButton _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ApplicationTextButton_onReleaseTouch( ApplicationTextButton _this, XObject 
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
void ApplicationTextButton_onPressTouch( ApplicationTextButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }
}

/* 'C' function for method : 'Application::TextButton.OnSetText()' */
void ApplicationTextButton_OnSetText( ApplicationTextButton _this, XString value )
{
  if ( !EwCompString( _this->Text, value ))
    return;

  _this->Text = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::TextButton.OnSetTextColor()' */
void ApplicationTextButton_OnSetTextColor( ApplicationTextButton _this, XColor value )
{
  if ( !EwCompColor( _this->TextColor, value ))
    return;

  _this->TextColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::TextButton.OnSetTextColorPress()' */
void ApplicationTextButton_OnSetTextColorPress( ApplicationTextButton _this, XColor 
  value )
{
  if ( !EwCompColor( _this->TextColorPress, value ))
    return;

  _this->TextColorPress = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::TextButton.OnSetBackgoundColor()' */
void ApplicationTextButton_OnSetBackgoundColor( ApplicationTextButton _this, XColor 
  value )
{
  if ( !EwCompColor( _this->BackgoundColor, value ))
    return;

  _this->BackgoundColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::TextButton' */
EW_DEFINE_CLASS_VARIANTS( ApplicationTextButton )
EW_END_OF_CLASS_VARIANTS( ApplicationTextButton )

/* Virtual Method Table (VMT) for the class : 'Application::TextButton' */
EW_DEFINE_CLASS( ApplicationTextButton, TemplatesPushButton, OnActivate, OnActivate, 
                 FlashTimer, FlashTimer, Text, TextColor, "Application::TextButton" )
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
  ApplicationTextButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationTextButton )

/* Initializer for the class 'Application::NavBarButtons' */
void ApplicationNavBarButtons__Init( ApplicationNavBarButtons _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPushButton__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationNavBarButtons );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->IconTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->DescripTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationNavBarButtons );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00AD );
  _this->selected = 1;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00AE );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00AF );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const009C );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0018 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->IconTxt, _Const00B0 );
  ViewsText_OnSetString( &_this->IconTxt, 0 );
  ViewsText_OnSetColor( &_this->IconTxt, _Const000E );
  CoreView_OnSetLayout((CoreView)&_this->DescripTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->DescripTxt, _Const00B1 );
  ViewsText_OnSetAlignment( &_this->DescripTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DescripTxt, 0 );
  _this->Descript = EwShareString( EwLoadString( &_Const0073 ));
  _this->IconColor = ResGrey;
  _this->DescrpitColor = ResGrey;
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DescripTxt ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationNavBarButtons_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationNavBarButtons_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationNavBarButtons_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationNavBarButtons_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationNavBarButtons_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationNavBarButtons_onPressTouch );
  ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
  ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::NavBarButtons' */
void ApplicationNavBarButtons__ReInit( ApplicationNavBarButtons _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPushButton__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsText__ReInit( &_this->IconTxt );
  ViewsText__ReInit( &_this->DescripTxt );
}

/* Finalizer method for the class 'Application::NavBarButtons' */
void ApplicationNavBarButtons__Done( ApplicationNavBarButtons _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPushButton );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsText__Done( &_this->IconTxt );
  ViewsText__Done( &_this->DescripTxt );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPushButton__Done( &_this->_.Super );
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
void ApplicationNavBarButtons_UpdateViewState( ApplicationNavBarButtons _this, XSet 
  aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = ApplicationNavBarButtons_isSelected( _this );
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( &_this->IconTxt != 0 )
  {
    XColor clr = _this->IconColor;
    ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
    ViewsText_OnSetString( &_this->IconTxt, _this->Icon );
    ViewsText_OnSetColor( &_this->IconTxt, clr );
  }

  if ( &_this->DescripTxt != 0 )
  {
    XColor clr = _this->DescrpitColor;
    ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, 
    ResourcesFont ));
    ViewsText_OnSetString( &_this->DescripTxt, _this->Descript );
    ViewsText_OnSetColor( &_this->DescripTxt, clr );
  }

  if ( !isEnabled )
  {
    ViewsText_OnSetColor( &_this->IconTxt, ResGreyLight );
    ViewsText_OnSetColor( &_this->DescripTxt, ResGreyLight );
  }
  else
    if ( isPressed )
    {
      ViewsText_OnSetColor( &_this->IconTxt, ResBlueLight );
      ViewsText_OnSetColor( &_this->DescripTxt, ResBlueLight );
    }
    else
      if ( isSelected )
      {
        ViewsText_OnSetColor( &_this->IconTxt, ResBlue );
        ViewsText_OnSetColor( &_this->DescripTxt, ResBlue );
      }
      else
      {
        ViewsText_OnSetColor( &_this->IconTxt, ResGrey );
        ViewsText_OnSetColor( &_this->DescripTxt, ResGrey );
      }

  if ( isPressed && isSelected )
    ViewsText_OnSetColor( &_this->IconTxt, ResBlue );
  else
    if ( isPressed && !isSelected )
      ViewsText_OnSetColor( &_this->IconTxt, ResBlueLight );
    else
      if ( isEnabled && isSelected )
        ViewsText_OnSetColor( &_this->IconTxt, ResBlue );
      else
        if ( isEnabled && !isSelected )
          ViewsText_OnSetColor( &_this->IconTxt, ResGrey );
        else
          if ( isSelected )
            ViewsText_OnSetColor( &_this->IconTxt, ResBlue );
          else
            ViewsText_OnSetColor( &_this->IconTxt, ResRedLight );

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->pressed = isPressed;
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationNavBarButtons_onFlashTimer( ApplicationNavBarButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the '@KeyHandler' is activated (when 
   the user has pressed the key specified in the property 'Filter' of the key handler). */
void ApplicationNavBarButtons_onPressKey( ApplicationNavBarButtons _this, XObject 
  sender )
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
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

    if ( !ApplicationNavBarButtons_isSelected( _this ) && ( _this->Outlet.Object 
        != 0 ))
    {
      EwOnSetInt32( _this->Outlet, _this->OutletSelector );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }

  CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user drags the finger while pressing 
   the button. This only updates the button to appear pressed or released. */
void ApplicationNavBarButtons_onEnterLeaveTouch( ApplicationNavBarButtons _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the button's area. This activates the button. */
void ApplicationNavBarButtons_onReleaseTouch( ApplicationNavBarButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin )
  {
    if ( !ApplicationNavBarButtons_isSelected( _this ) && ( _this->Outlet.Object 
        != 0 ))
    {
      EwOnSetInt32( _this->Outlet, _this->OutletSelector );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }
  else
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the button's area. */
void ApplicationNavBarButtons_onPressTouch( ApplicationNavBarButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

    if ( !ApplicationNavBarButtons_isSelected( _this ) && ( _this->Outlet.Object 
        != 0 ))
    {
      EwOnSetInt32( _this->Outlet, _this->OutletSelector );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }
}

/* 'C' function for method : 'Application::NavBarButtons.OnSetIcon()' */
void ApplicationNavBarButtons_OnSetIcon( ApplicationNavBarButtons _this, XString 
  value )
{
  if ( !EwCompString( _this->Icon, value ))
    return;

  _this->Icon = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::NavBarButtons.OnSetDescript()' */
void ApplicationNavBarButtons_OnSetDescript( ApplicationNavBarButtons _this, XString 
  value )
{
  if ( !EwCompString( _this->Descript, value ))
    return;

  _this->Descript = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::NavBarButtons.OnSetOutletSelector()' */
void ApplicationNavBarButtons_OnSetOutletSelector( ApplicationNavBarButtons _this, 
  XInt32 value )
{
  if ( _this->OutletSelector == value )
    return;

  _this->OutletSelector = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::NavBarButtons.OnSetOutlet()' */
void ApplicationNavBarButtons_OnSetOutlet( ApplicationNavBarButtons _this, XRef 
  value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, ApplicationNavBarButtons_onOutlet ), 
      _this->Outlet, 0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, ApplicationNavBarButtons_onOutlet ), 
      value, 0 );

  if ( value.Object != 0 )
    EwPostSignal( EwNewSlot( _this, ApplicationNavBarButtons_onOutlet ), ((XObject)_this ));
}

/* This slot method will receive a signal, if the value of the property assigned 
   to @Outlet has been changed by another widget or by the application logic. In 
   response to this notification, the widget will update itself. */
void ApplicationNavBarButtons_onOutlet( ApplicationNavBarButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::NavBarButtons.isSelected()' */
XBool ApplicationNavBarButtons_isSelected( ApplicationNavBarButtons _this )
{
  return (XBool)(( _this->Outlet.Object != 0 ) && ( EwOnGetInt32( _this->Outlet ) 
    == _this->OutletSelector ));
}

/* Variants derived from the class : 'Application::NavBarButtons' */
EW_DEFINE_CLASS_VARIANTS( ApplicationNavBarButtons )
EW_END_OF_CLASS_VARIANTS( ApplicationNavBarButtons )

/* Virtual Method Table (VMT) for the class : 'Application::NavBarButtons' */
EW_DEFINE_CLASS( ApplicationNavBarButtons, TemplatesPushButton, Outlet, Outlet, 
                 Outlet, FlashTimer, Icon, IconColor, "Application::NavBarButtons" )
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
  ApplicationNavBarButtons_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationNavBarButtons )

/* Initializer for the class 'Application::KeypadPage' */
void ApplicationKeypadPage__Init( ApplicationKeypadPage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationKeypadPage );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->callbtn, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->BtnErase, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->btn1, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->btn3, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->btn2, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->btn4, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->btn6, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->btn5, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->btn7, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->btn9, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->btn8, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->btnstar, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->btnDiez, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->btn0, &_this->_.XObject, 0 );
  ApplicationInputEtxt__Init( &_this->InputEtxt, &_this->_.XObject, 0 );
  ApplicationTextButton__Init( &_this->HideBtn, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationKeypadPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  _this->BackgoundColor = ResWhite;
  _this->HideFunction = 1;
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const000E );
  CoreRectView__OnSetBounds( &_this->callbtn, _Const00B2 );
  ApplicationKeyPadButtons_OnSetIcon( &_this->callbtn, EwLoadString( &ResCallTxt ));
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->callbtn, ResGreenDark );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->callbtn, ResGreen );
  CoreRectView__OnSetBounds( &_this->BtnErase, _Const00B3 );
  ApplicationKeyPadButtons_OnSetIcon( &_this->BtnErase, EwLoadString( &ResBackspaceTxt ));
  ApplicationKeyPadButtons_OnSetText( &_this->BtnErase, 0 );
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->BtnErase, ResTransparent );
  ApplicationKeyPadButtons_OnSetIconColor( &_this->BtnErase, ResBlack );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->BtnErase, ResTransparent );
  ApplicationKeyPadButtons_OnSetIconColorPressed( &_this->BtnErase, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn1, _Const00B4 );
  ApplicationKeyPadButtons_OnSetText( &_this->btn1, EwLoadString( &_Const00B5 ));
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->btn1, ResGreyLight );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->btn1, ResBlack );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->btn1, ResPressColor );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->btn1, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn3, _Const00B6 );
  ApplicationKeyPadButtons_OnSetText( &_this->btn3, EwLoadString( &_Const00B7 ));
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->btn3, ResGreyLight );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->btn3, ResBlack );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->btn3, ResPressColor );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->btn3, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn2, _Const00B8 );
  ApplicationKeyPadButtons_OnSetText( &_this->btn2, EwLoadString( &_Const00B9 ));
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->btn2, ResGreyLight );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->btn2, ResBlack );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->btn2, ResPressColor );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->btn2, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn4, _Const00BA );
  ApplicationKeyPadButtons_OnSetText( &_this->btn4, EwLoadString( &_Const00BB ));
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->btn4, ResGreyLight );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->btn4, ResBlack );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->btn4, ResPressColor );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->btn4, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn6, _Const00BC );
  ApplicationKeyPadButtons_OnSetText( &_this->btn6, EwLoadString( &_Const00BD ));
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->btn6, ResGreyLight );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->btn6, ResBlack );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->btn6, ResPressColor );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->btn6, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn5, _Const00BE );
  ApplicationKeyPadButtons_OnSetText( &_this->btn5, EwLoadString( &_Const00BF ));
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->btn5, ResGreyLight );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->btn5, ResBlack );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->btn5, ResPressColor );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->btn5, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn7, _Const00C0 );
  ApplicationKeyPadButtons_OnSetText( &_this->btn7, EwLoadString( &_Const00C1 ));
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->btn7, ResGreyLight );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->btn7, ResBlack );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->btn7, ResPressColor );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->btn7, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn9, _Const00C2 );
  ApplicationKeyPadButtons_OnSetText( &_this->btn9, EwLoadString( &_Const00C3 ));
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->btn9, ResGreyLight );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->btn9, ResBlack );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->btn9, ResPressColor );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->btn9, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn8, _Const00C4 );
  ApplicationKeyPadButtons_OnSetText( &_this->btn8, EwLoadString( &_Const00C5 ));
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->btn8, ResGreyLight );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->btn8, ResBlack );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->btn8, ResPressColor );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->btn8, ResGrey );
  CoreRectView__OnSetBounds( &_this->btnstar, _Const00C6 );
  ApplicationKeyPadButtons_OnSetText( &_this->btnstar, EwLoadString( &_Const00C7 ));
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->btnstar, ResGreyLight );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->btnstar, ResBlack );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->btnstar, ResPressColor );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->btnstar, ResGrey );
  CoreRectView__OnSetBounds( &_this->btnDiez, _Const00C8 );
  ApplicationKeyPadButtons_OnSetText( &_this->btnDiez, EwLoadString( &_Const00C9 ));
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->btnDiez, ResGreyLight );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->btnDiez, ResBlack );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->btnDiez, ResPressColor );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->btnDiez, ResGrey );
  CoreRectView__OnSetBounds( &_this->btn0, _Const00CA );
  ApplicationKeyPadButtons_OnSetText( &_this->btn0, EwLoadString( &_Const00CB ));
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->btn0, ResGreyLight );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->btn0, ResBlack );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->btn0, ResPressColor );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->btn0, ResGrey );
  CoreRectView__OnSetBounds( &_this->InputEtxt, _Const00CC );
  ApplicationInputEtxt_OnSetString( &_this->InputEtxt, 0 );
  ApplicationInputEtxt_OnSetColor( &_this->InputEtxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->HideBtn, _Const00CD );
  ApplicationTextButton_OnSetText( &_this->HideBtn, EwLoadString( &_Const00CE ));
  ApplicationTextButton_OnSetTextColor( &_this->HideBtn, ResBlack );
  ApplicationTextButton_OnSetTextColorPress( &_this->HideBtn, ResGrey );
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
  ApplicationInputEtxt_OnSetFont( &_this->InputEtxt, EwLoadResource( &ResTitileFont25, 
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
  ApplicationKeyPadButtons__ReInit( &_this->callbtn );
  ApplicationKeyPadButtons__ReInit( &_this->BtnErase );
  ApplicationKeyPadButtons__ReInit( &_this->btn1 );
  ApplicationKeyPadButtons__ReInit( &_this->btn3 );
  ApplicationKeyPadButtons__ReInit( &_this->btn2 );
  ApplicationKeyPadButtons__ReInit( &_this->btn4 );
  ApplicationKeyPadButtons__ReInit( &_this->btn6 );
  ApplicationKeyPadButtons__ReInit( &_this->btn5 );
  ApplicationKeyPadButtons__ReInit( &_this->btn7 );
  ApplicationKeyPadButtons__ReInit( &_this->btn9 );
  ApplicationKeyPadButtons__ReInit( &_this->btn8 );
  ApplicationKeyPadButtons__ReInit( &_this->btnstar );
  ApplicationKeyPadButtons__ReInit( &_this->btnDiez );
  ApplicationKeyPadButtons__ReInit( &_this->btn0 );
  ApplicationInputEtxt__ReInit( &_this->InputEtxt );
  ApplicationTextButton__ReInit( &_this->HideBtn );
}

/* Finalizer method for the class 'Application::KeypadPage' */
void ApplicationKeypadPage__Done( ApplicationKeypadPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ApplicationKeyPadButtons__Done( &_this->callbtn );
  ApplicationKeyPadButtons__Done( &_this->BtnErase );
  ApplicationKeyPadButtons__Done( &_this->btn1 );
  ApplicationKeyPadButtons__Done( &_this->btn3 );
  ApplicationKeyPadButtons__Done( &_this->btn2 );
  ApplicationKeyPadButtons__Done( &_this->btn4 );
  ApplicationKeyPadButtons__Done( &_this->btn6 );
  ApplicationKeyPadButtons__Done( &_this->btn5 );
  ApplicationKeyPadButtons__Done( &_this->btn7 );
  ApplicationKeyPadButtons__Done( &_this->btn9 );
  ApplicationKeyPadButtons__Done( &_this->btn8 );
  ApplicationKeyPadButtons__Done( &_this->btnstar );
  ApplicationKeyPadButtons__Done( &_this->btnDiez );
  ApplicationKeyPadButtons__Done( &_this->btn0 );
  ApplicationInputEtxt__Done( &_this->InputEtxt );
  ApplicationTextButton__Done( &_this->HideBtn );

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
  ApplicationKeyPadButtons b = EwCastObject( sender, ApplicationKeyPadButtons );

  if ( sender == ((XObject)&_this->BtnErase ))
    ApplicationInputEtxt_OnSetString( &_this->InputEtxt, EwStringRemove( ApplicationInputEtxt_OnGetString( 
    &_this->InputEtxt ), EwGetStringLength( ApplicationInputEtxt_OnGetString( &_this->InputEtxt )) 
    - 1, 1 ));
  else
    if ( b != 0 )
      ApplicationInputEtxt_OnSetString( &_this->InputEtxt, EwConcatString( ApplicationInputEtxt_OnGetString( 
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

  if ( EwCompString( ApplicationInputEtxt_OnGetString( &_this->InputEtxt ), 0 ) 
      != 0 )
  {
    ApplicationDeviceClass_UpdateCallingNumber( EwGetAutoObject( &ApplicationDevice, 
    ApplicationDeviceClass ), ApplicationInputEtxt_OnGetString( &_this->InputEtxt ));
    ApplicationDeviceClass_OnSetCallState( EwGetAutoObject( &ApplicationDevice, 
    ApplicationDeviceClass ), ApplicationCallStateRingOutgoing );
  }
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
  ApplicationNavBarButtons__Init( &_this->NavBarButtons, &_this->_.XObject, 0 );
  ApplicationNavBarButtons__Init( &_this->NavBarButtons1, &_this->_.XObject, 0 );
  ApplicationNavBarButtons__Init( &_this->NavBarButtons2, &_this->_.XObject, 0 );
  ApplicationNavBarButtons__Init( &_this->NavBarButtons3, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsApp );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0083 );
  CoreRectView__OnSetBounds( &_this->Outline, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const00CF );
  CoreRectView__OnSetBounds( &_this->NavBarButtons, _Const00D0 );
  ApplicationNavBarButtons_OnSetIcon( &_this->NavBarButtons, EwLoadString( &ResHeartTxt ));
  ApplicationNavBarButtons_OnSetDescript( &_this->NavBarButtons, EwLoadString( &_Const00D1 ));
  CoreRectView__OnSetBounds( &_this->NavBarButtons1, _Const00D2 );
  ApplicationNavBarButtons_OnSetIcon( &_this->NavBarButtons1, EwLoadString( &ResCallTxt ));
  ApplicationNavBarButtons_OnSetDescript( &_this->NavBarButtons1, EwLoadString( 
  &_Const00D3 ));
  ApplicationNavBarButtons_OnSetOutletSelector( &_this->NavBarButtons1, 1 );
  CoreRectView__OnSetBounds( &_this->NavBarButtons2, _Const00D4 );
  ApplicationNavBarButtons_OnSetIcon( &_this->NavBarButtons2, EwLoadString( &ResUserIconTxt ));
  ApplicationNavBarButtons_OnSetDescript( &_this->NavBarButtons2, EwLoadString( 
  &_Const0008 ));
  ApplicationNavBarButtons_OnSetOutletSelector( &_this->NavBarButtons2, 2 );
  CoreRectView__OnSetBounds( &_this->NavBarButtons3, _Const00D5 );
  ApplicationNavBarButtons_OnSetIcon( &_this->NavBarButtons3, EwLoadString( &ResKeypadTxt ));
  ApplicationNavBarButtons_OnSetDescript( &_this->NavBarButtons3, EwLoadString( 
  &_Const00D6 ));
  ApplicationNavBarButtons_OnSetOutletSelector( &_this->NavBarButtons3, 3 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const00D7 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const00D8 );
  ViewsLine_OnSetColor( &_this->Line, ResGrey );
  _this->SelectedPage = -1;
  CoreGroup__Add( _this, ((CoreView)&_this->Outline ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NavBarButtons ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NavBarButtons1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NavBarButtons2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NavBarButtons3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line ), 0 );
  ApplicationNavBarButtons_OnSetOutlet( &_this->NavBarButtons, EwNewRef( _this, 
  ApplicationContactsApp_OnGetSelectedPage, ApplicationContactsApp_OnSetSelectedPage ));
  ApplicationNavBarButtons_OnSetOutlet( &_this->NavBarButtons1, EwNewRef( _this, 
  ApplicationContactsApp_OnGetSelectedPage, ApplicationContactsApp_OnSetSelectedPage ));
  ApplicationNavBarButtons_OnSetOutlet( &_this->NavBarButtons2, EwNewRef( _this, 
  ApplicationContactsApp_OnGetSelectedPage, ApplicationContactsApp_OnSetSelectedPage ));
  ApplicationNavBarButtons_OnSetOutlet( &_this->NavBarButtons3, EwNewRef( _this, 
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
  ApplicationNavBarButtons__ReInit( &_this->NavBarButtons );
  ApplicationNavBarButtons__ReInit( &_this->NavBarButtons1 );
  ApplicationNavBarButtons__ReInit( &_this->NavBarButtons2 );
  ApplicationNavBarButtons__ReInit( &_this->NavBarButtons3 );
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
  ApplicationNavBarButtons__Done( &_this->NavBarButtons );
  ApplicationNavBarButtons__Done( &_this->NavBarButtons1 );
  ApplicationNavBarButtons__Done( &_this->NavBarButtons2 );
  ApplicationNavBarButtons__Done( &_this->NavBarButtons3 );
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

  EwAttachRefObserver( EwNewSlot( _this, ApplicationContactsApp_onCallState ), EwNewRef( 
    EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetCallState, 
    ApplicationDeviceClass_OnSetCallState ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationContactsApp_onCallState ), ((XObject)_this ));
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
      EwTrace( "%s%i", EwLoadString( &_Const00D9 ), _this->SelectedPage );
  }
}

/* 'C' function for method : 'Application::ContactsApp.OnGetSelectedPage()' */
XInt32 ApplicationContactsApp_OnGetSelectedPage( ApplicationContactsApp _this )
{
  return _this->SelectedPage;
}

/* 'C' function for method : 'Application::ContactsApp.onCallState()' */
void ApplicationContactsApp_onCallState( ApplicationContactsApp _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CallState 
      != ApplicationCallStateNone )
    CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this ), 0, 0, 0, EwNullSlot, 
    EwNullSlot, 0 );
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

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0083 );
  _this->deviceInstance = EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass );
  _this->myContactInstance = EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager );

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

  EwAttachRefObserver( EwNewSlot( _this, ApplicationApplication_onCallState ), EwNewRef( 
    EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetCallState, 
    ApplicationDeviceClass_OnSetCallState ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationApplication_onCallState ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Application.onCallState()' */
void ApplicationApplication_onCallState( ApplicationApplication _this, XObject sender )
{
  ApplicationCallPage outgoingCall;
  ApplicationInComingCall incomingCall;
  ApplicationContactsApp app;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  outgoingCall = EwNewObject( ApplicationCallPage, 0 );
  incomingCall = EwNewObject( ApplicationInComingCall, 0 );
  app = EwNewObject( ApplicationContactsApp, 0 );
  EwTrace( "%e%s", EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CallState, 
    EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CallingNumber );

  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CallState 
      == ApplicationCallStateNone )
    CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)app ), ((EffectsTransition)EwGetAutoObject( 
    &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, 0, 0, 0, EwNullSlot, 
    EwNullSlot, 0 );
  else
    if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CallState 
        == ApplicationCallStateRingOutgoing )
      CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)outgoingCall ), ((EffectsTransition)EwGetAutoObject( 
      &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, 0, 0, 0, EwNullSlot, 
      EwNullSlot, 0 );
    else
      if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CallState 
          == ApplicationCallStateRingIncoming )
        CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)incomingCall ), ((EffectsTransition)EwGetAutoObject( 
        &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, 0, 0, 0, EwNullSlot, 
        EwNullSlot, 0 );
      else
        CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)outgoingCall ), ((EffectsTransition)EwGetAutoObject( 
        &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, 0, 0, 0, EwNullSlot, 
        EwNullSlot, 0 );
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
  CoreRectView__OnSetBounds( &_this->BackgroundSmall, _Const00DA );
  ViewsRectangle_OnSetColorBL( &_this->BackgroundSmall, ResGrey );
  ViewsRectangle_OnSetColorBR( &_this->BackgroundSmall, ResGrey );
  ViewsRectangle_OnSetColorTR( &_this->BackgroundSmall, ResGreyLight );
  ViewsRectangle_OnSetColorTL( &_this->BackgroundSmall, ResGrey );
  ViewsRectangle_OnSetColor( &_this->BackgroundSmall, ResBlack );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super1.callbtn, 0 );
  ApplicationKeyPadButtons_OnSetText( &_this->Super1.BtnErase, 0 );
  ApplicationKeyPadButtons_OnSetIconColor( &_this->Super1.BtnErase, ResWhite );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.BtnErase, ResTransparent );
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->Super1.btn1, ResWhiteTransparent );
  ApplicationKeyPadButtons_OnSetIconColor( &_this->Super1.btn1, ResWhite );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->Super1.btn1, ResWhite );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn1, ResWhiteSemiTransparent );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn1, ResPressColor );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Super1.btn3, 1 );
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->Super1.btn3, ResWhiteTransparent );
  ApplicationKeyPadButtons_OnSetIconColor( &_this->Super1.btn3, ResWhite );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->Super1.btn3, ResWhite );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn3, ResWhiteSemiTransparent );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn3, ResPressColor );
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->Super1.btn2, ResWhiteTransparent );
  ApplicationKeyPadButtons_OnSetIconColor( &_this->Super1.btn2, ResWhite );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->Super1.btn2, ResWhite );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn2, ResWhiteSemiTransparent );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn2, ResPressColor );
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->Super1.btn4, ResWhiteTransparent );
  ApplicationKeyPadButtons_OnSetIconColor( &_this->Super1.btn4, ResWhite );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->Super1.btn4, ResWhite );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn4, ResWhiteSemiTransparent );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn4, ResPressColor );
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->Super1.btn6, ResWhiteTransparent );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->Super1.btn6, ResWhite );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn6, ResWhiteSemiTransparent );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn6, ResPressColor );
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->Super1.btn5, ResWhiteTransparent );
  ApplicationKeyPadButtons_OnSetIconColor( &_this->Super1.btn5, ResWhite );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->Super1.btn5, ResWhite );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn5, ResWhiteSemiTransparent );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn5, ResPressColor );
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->Super1.btn7, ResWhiteTransparent );
  ApplicationKeyPadButtons_OnSetIconColor( &_this->Super1.btn7, ResWhite );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->Super1.btn7, ResWhite );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn7, ResWhiteSemiTransparent );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn7, ResPressColor );
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->Super1.btn9, ResWhiteTransparent );
  ApplicationKeyPadButtons_OnSetIconColor( &_this->Super1.btn9, ResWhite );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->Super1.btn9, ResWhite );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn9, ResWhiteSemiTransparent );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn9, ResPressColor );
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->Super1.btn8, ResWhiteTransparent );
  ApplicationKeyPadButtons_OnSetIconColor( &_this->Super1.btn8, ResWhite );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->Super1.btn8, ResWhite );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn8, ResWhiteSemiTransparent );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn8, ResPressColor );
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->Super1.btnstar, ResWhiteTransparent );
  ApplicationKeyPadButtons_OnSetIconColor( &_this->Super1.btnstar, ResWhite );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->Super1.btnstar, ResWhite );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btnstar, ResWhiteSemiTransparent );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btnstar, ResPressColor );
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->Super1.btnDiez, ResWhiteTransparent );
  ApplicationKeyPadButtons_OnSetIconColor( &_this->Super1.btnDiez, ResWhite );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->Super1.btnDiez, ResWhite );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btnDiez, ResWhiteSemiTransparent );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btnDiez, ResPressColor );
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->Super1.btn0, ResWhiteTransparent );
  ApplicationKeyPadButtons_OnSetIconColor( &_this->Super1.btn0, ResWhite );
  ApplicationKeyPadButtons_OnSetTextColor( &_this->Super1.btn0, ResWhite );
  ApplicationKeyPadButtons_OnSetButtonColorPressed( &_this->Super1.btn0, ResWhiteSemiTransparent );
  ApplicationKeyPadButtons_OnSetTextColorPressed( &_this->Super1.btn0, ResPressColor );
  CoreRectView__OnSetBounds( &_this->Super1.InputEtxt, _Const00DB );
  ApplicationInputEtxt_OnSetColor( &_this->Super1.InputEtxt, ResWhite );
  ApplicationTextButton_OnSetTextColor( &_this->Super1.HideBtn, ResWhite );
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
  ApplicationTextButton__Init( &_this->TextButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsInsideCall );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Super1.TitleTxt, _Const00DC );
  CoreRectView__OnSetBounds( &_this->Super1.PlusButton, _Const00DD );
  CoreRectView__OnSetBounds( &_this->TextButton, _Const00DE );
  ApplicationTextButton_OnSetText( &_this->TextButton, EwLoadString( &_Const00DF ));
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
  ApplicationTextButton__ReInit( &_this->TextButton );
}

/* Finalizer method for the class 'Application::ContactsInsideCall' */
void ApplicationContactsInsideCall__Done( ApplicationContactsInsideCall _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationContactsPage );

  /* Finalize all embedded objects */
  ApplicationTextButton__Done( &_this->TextButton );

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

/* Initializer for the class 'Application::InComingCall' */
void ApplicationInComingCall__Init( ApplicationInComingCall _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationInComingCall );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ApplicationPushButtonMediumTrans__Init( &_this->PushButtonMediumTrans, &_this->_.XObject, 0 );
  ApplicationPushButtonMediumTrans__Init( &_this->PushButtonMediumTrans1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TimeTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ContactNameTxt, &_this->_.XObject, 0 );
  ApplicationPushButtonBig__Init( &_this->UserInitials, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationInComingCall );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0083 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0083 );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const00E0 );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const00E1 );
  ViewsRectangle_OnSetColorTR( &_this->Background, _Const00E2 );
  ViewsRectangle_OnSetColorTL( &_this->Background, _Const00E2 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const00E3 );
  CoreRectView__OnSetBounds( &_this->PushButtonMediumTrans, _Const00E4 );
  ApplicationPushButtonMediumTrans_OnSetIcon( &_this->PushButtonMediumTrans, EwLoadString( 
  &ResCallTxt ));
  ApplicationPushButtonMediumTrans_OnSetDescript( &_this->PushButtonMediumTrans, 
  EwLoadString( &_Const00E5 ));
  ApplicationPushButtonMediumTrans_OnSetButtonColor( &_this->PushButtonMediumTrans, 
  ResGreenDark );
  CoreRectView__OnSetBounds( &_this->PushButtonMediumTrans1, _Const00E6 );
  ApplicationPushButtonMediumTrans_OnSetIcon( &_this->PushButtonMediumTrans1, EwLoadString( 
  &ResEndCallTxt ));
  ApplicationPushButtonMediumTrans_OnSetDescript( &_this->PushButtonMediumTrans1, 
  EwLoadString( &_Const00E7 ));
  ApplicationPushButtonMediumTrans_OnSetButtonColor( &_this->PushButtonMediumTrans1, 
  ResRed );
  CoreView_OnSetLayout((CoreView)&_this->TimeTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->TimeTxt, _Const00E8 );
  ViewsText_OnSetAlignment( &_this->TimeTxt, ViewsTextAlignmentAlignHorzCenter | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TimeTxt, EwLoadString( &_Const0092 ));
  ViewsText_OnSetColor( &_this->TimeTxt, ResWhite );
  CoreView_OnSetLayout((CoreView)&_this->ContactNameTxt, CoreLayoutAlignToLeft | 
  CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->ContactNameTxt, _Const00E9 );
  ViewsText_OnSetEnableBidiText( &_this->ContactNameTxt, 0 );
  ViewsText_OnSetAutoSize( &_this->ContactNameTxt, 1 );
  ViewsText_OnSetAlignment( &_this->ContactNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ContactNameTxt, EwLoadString( &_Const0029 ));
  ViewsText_OnSetColor( &_this->ContactNameTxt, ResWhite );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const00EA );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->UserInitials, 0 );
  ApplicationPushButtonBig_OnSetDescript( &_this->UserInitials, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButtonMediumTrans ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButtonMediumTrans1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TimeTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ContactNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UserInitials ), 0 );
  _this->PushButtonMediumTrans.OnActivate = EwNewSlot( _this, ApplicationInComingCall_onAcceptCall );
  _this->PushButtonMediumTrans1.OnActivate = EwNewSlot( _this, ApplicationInComingCall_onDesclineCall );
  ViewsText_OnSetFont( &_this->TimeTxt, EwLoadResource( &ResContactFont12, ResourcesFont ));
  ViewsText_OnSetFont( &_this->ContactNameTxt, EwLoadResource( &ResTitileFont25, 
  ResourcesFont ));

  /* Call the user defined constructor */
  ApplicationInComingCall_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::InComingCall' */
void ApplicationInComingCall__ReInit( ApplicationInComingCall _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ApplicationPushButtonMediumTrans__ReInit( &_this->PushButtonMediumTrans );
  ApplicationPushButtonMediumTrans__ReInit( &_this->PushButtonMediumTrans1 );
  ViewsText__ReInit( &_this->TimeTxt );
  ViewsText__ReInit( &_this->ContactNameTxt );
  ApplicationPushButtonBig__ReInit( &_this->UserInitials );
}

/* Finalizer method for the class 'Application::InComingCall' */
void ApplicationInComingCall__Done( ApplicationInComingCall _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ApplicationPushButtonMediumTrans__Done( &_this->PushButtonMediumTrans );
  ApplicationPushButtonMediumTrans__Done( &_this->PushButtonMediumTrans1 );
  ViewsText__Done( &_this->TimeTxt );
  ViewsText__Done( &_this->ContactNameTxt );
  ApplicationPushButtonBig__Done( &_this->UserInitials );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationInComingCall_Init( ApplicationInComingCall _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationInComingCall_onCallState ), 
    EwNewRef( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetCallState, 
    ApplicationDeviceClass_OnSetCallState ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationInComingCall_onCallState ), ((XObject)_this ));
  ApplicationInComingCall_getContact( _this );
}

/* 'C' function for method : 'Application::InComingCall.OnSetContact()' */
void ApplicationInComingCall_OnSetContact( ApplicationInComingCall _this, ApplicationContact 
  value )
{
  if ( _this->Contact == value )
    return;

  if ( _this->Contact != 0 )
    EwDetachObjObserver( EwNewSlot( _this, ApplicationInComingCall_onContactUpdated ), 
      (XObject)_this->Contact, 0 );

  _this->Contact = value;

  if ( _this->Contact != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ApplicationInComingCall_onContactUpdated ), 
      (XObject)_this->Contact, 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationInComingCall_onContactUpdated ), 
      ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::InComingCall.onContactUpdated()' */
void ApplicationInComingCall_onContactUpdated( ApplicationInComingCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Contact != 0 )
  {
    ViewsText_OnSetString( &_this->ContactNameTxt, EwConcatString( EwConcatString( 
    _this->Contact->LastName, EwLoadString( &_Const002D )), _this->Contact->FirstName ));
    ApplicationPushButtonBig_OnSetInitials( &_this->UserInitials, ApplicationContacts_GetInitials( 
    &EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager )->Contacts, 
    _this->Contact->LastName, _this->Contact->FirstName ));
  }
  else
  {
    ViewsText_OnSetString( &_this->ContactNameTxt, EwGetAutoObject( &ApplicationDevice, 
    ApplicationDeviceClass )->CallingNumber );
    CoreGroup_OnSetVisible((CoreGroup)&_this->UserInitials, 0 );
  }
}

/* 'C' function for method : 'Application::InComingCall.onDesclineCall()' */
void ApplicationInComingCall_onDesclineCall( ApplicationInComingCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationDeviceClass_UpdateCallState( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  0 );
  EwPostSignal( EwNewSlot( _this, ApplicationInComingCall_onCallState ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::InComingCall.onCallState()' */
void ApplicationInComingCall_onCallState( ApplicationInComingCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwTrace( "%e%s", EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CallState, 
    EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CallingNumber );

  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CallState 
      != ApplicationCallStateRingIncoming )
    CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this ), 0, 0, 0, EwNullSlot, 
    EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::InComingCall.onAcceptCall()' */
void ApplicationInComingCall_onAcceptCall( ApplicationInComingCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationDeviceClass_UpdateCallState( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  3 );
  EwPostSignal( EwNewSlot( _this, ApplicationInComingCall_onCallState ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::InComingCall.getContact()' */
void ApplicationInComingCall_getContact( ApplicationInComingCall _this )
{
  ApplicationInComingCall_OnSetContact( _this, ApplicationContacts_FindByNumber( 
  &EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager )->Contacts, 
  EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->CallingNumber ));
  EwPostSignal( EwNewSlot( _this, ApplicationInComingCall_onContactUpdated ), ((XObject)_this ));
}

/* Variants derived from the class : 'Application::InComingCall' */
EW_DEFINE_CLASS_VARIANTS( ApplicationInComingCall )
EW_END_OF_CLASS_VARIANTS( ApplicationInComingCall )

/* Virtual Method Table (VMT) for the class : 'Application::InComingCall' */
EW_DEFINE_CLASS( ApplicationInComingCall, CoreGroup, Contact, Background, Background, 
                 Background, _.VMT, _.VMT, "Application::InComingCall" )
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
EW_END_OF_CLASS( ApplicationInComingCall )

/* The global autoobject Effects::SlideUpCentered represents the fade-in/out operation 
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
EW_DEFINE_AUTOOBJECT( ApplicationSlideUpCentered, EffectsSlideTransition )

/* Initializer for the auto object 'Application::SlideUpCentered' */
void ApplicationSlideUpCentered__Init( EffectsSlideTransition _this )
{
  _this->MarginTop = 40;
  _this->Direction = CoreDirectionTop;
}

/* Table with links to derived variants of the auto object : 'Application::SlideUpCentered' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationSlideUpCentered )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationSlideUpCentered )

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
  ApplicationPushButtonNoBackground__Init( &_this->PlusButton, &_this->_.XObject, 0 );
  ApplicationTextButton__Init( &_this->TextButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationFavoritesPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const00EB );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 32 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( ApplicationFavContactItem ));
  CoreView_OnSetStackingPriority((CoreView)&_this->SlideTouchHandler, -1 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const00EB );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreRectView__OnSetBounds( &_this->TitleTxt1, _Const0007 );
  ViewsText_OnSetAlignment( &_this->TitleTxt1, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TitleTxt1, EwLoadString( &_Const00D1 ));
  ViewsText_OnSetColor( &_this->TitleTxt1, ResBlack );
  CoreRectView__OnSetBounds( &_this->PlusButton, _Const00EC );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->PlusButton, 1 );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->PlusButton, EwLoadString( 
  &ResPlusIconTxt ));
  CoreRectView__OnSetBounds( &_this->TextButton, _Const00ED );
  ApplicationTextButton_OnSetText( &_this->TextButton, EwLoadString( &_Const00EE ));
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
  ApplicationPushButtonNoBackground__ReInit( &_this->PlusButton );
  ApplicationTextButton__ReInit( &_this->TextButton );
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
  ApplicationPushButtonNoBackground__Done( &_this->PlusButton );
  ApplicationTextButton__Done( &_this->TextButton );

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
    EwNewRef( &EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager )->Favorites, 
    ApplicationContacts_OnGetNoOfItems, ApplicationContacts_OnSetNoOfItems ), 0 );
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
  _this->addFav->OnAddFav = EwNewSlot( _this, ApplicationFavoritesPage_onClose );
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
  ApplicationContact contact;
  ApplicationFavContactItem itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  contact = ApplicationContacts_GetContact( &EwGetAutoObject( &ApplicationMyContacts, 
  ApplicationContactsManager )->Favorites, itemNo );
  itemView = EwCastObject( _this->VerticalList.View, ApplicationFavContactItem );

  if ( itemView == 0 )
    return;

  if ( contact != 0 )
  {
    ApplicationContactItem_OnSetContact((ApplicationContactItem)itemView, contact );
    itemView->Super1.OnActivate = EwNewSlot( _this, ApplicationFavoritesPage_onContactActivated );
    ApplicationFavContactItem_OnSetEditMode( itemView, _this->EditMode );
  }

  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super3.Bounds, EwNewPoint( 
  EwGetRectW( _this->VerticalList.Super2.Bounds ), _this->VerticalList.ItemHeight )));
}

/* 'C' function for method : 'Application::FavoritesPage.onContactActivated()' */
void ApplicationFavoritesPage_onContactActivated( ApplicationFavoritesPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationDeviceClass_UpdateCallState( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  2 );
  ApplicationDeviceClass_UpdateCallingNumber( EwGetAutoObject( &ApplicationDevice, 
  ApplicationDeviceClass ), _this->SelectedContact->PhoneNumber );
}

/* 'C' function for method : 'Application::FavoritesPage.onClose()' */
void ApplicationFavoritesPage_onClose( ApplicationFavoritesPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
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

  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, EwGetAutoObject( &ApplicationMyContacts, 
  ApplicationContactsManager )->Favorites.NoOfItems );
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
  ApplicationTextButton__Init( &_this->TextButton, &_this->_.XObject, 0 );

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
  ViewsText_OnSetString( &_this->TitleTxt1, EwLoadString( &_Const00D3 ));
  ViewsText_OnSetColor( &_this->TitleTxt1, ResBlack );
  CoreRectView__OnSetBounds( &_this->TextButton, _Const00ED );
  ApplicationTextButton_OnSetText( &_this->TextButton, EwLoadString( &_Const00EE ));
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleTxt1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextButton ), 0 );
  ViewsText_OnSetFont( &_this->TitleTxt1, EwLoadResource( &ResTitileFont32, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::RecentPage' */
void ApplicationRecentPage__ReInit( ApplicationRecentPage _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ViewsText__ReInit( &_this->TitleTxt1 );
  ApplicationTextButton__ReInit( &_this->TextButton );
}

/* Finalizer method for the class 'Application::RecentPage' */
void ApplicationRecentPage__Done( ApplicationRecentPage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ViewsText__Done( &_this->TitleTxt1 );
  ApplicationTextButton__Done( &_this->TextButton );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Application::RecentPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationRecentPage )
EW_END_OF_CLASS_VARIANTS( ApplicationRecentPage )

/* Virtual Method Table (VMT) for the class : 'Application::RecentPage' */
EW_DEFINE_CLASS( ApplicationRecentPage, CoreGroup, Background, Background, Background, 
                 Background, _.VMT, _.VMT, "Application::RecentPage" )
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
  CoreRectView__OnSetBounds( &_this->Super1.TextButton, _Const00EF );
  CoreRectView__OnSetBounds( &_this->Text, _Const00F0 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const00F1 ));
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
  ApplicationContactItem itemView = EwCastObject( sender, ApplicationContactItem );

  ApplicationContacts_Add( &EwGetAutoObject( &ApplicationMyContacts, ApplicationContactsManager )->Favorites, 
  itemView->Contact );
  EwPostSignal( _this->OnAddFav, ((XObject)_this ));
}

/* Variants derived from the class : 'Application::ContactsList' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactsList )
EW_END_OF_CLASS_VARIANTS( ApplicationContactsList )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsList' */
EW_DEFINE_CLASS( ApplicationContactsList, ApplicationContactsInsideCall, OnAddFav, 
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

/* Initializer for the class 'Application::ContactsManager' */
void ApplicationContactsManager__Init( ApplicationContactsManager _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactsManager );

  /* ... then construct all embedded objects */
  ApplicationContacts__Init( &_this->Contacts, &_this->_.XObject, 0 );
  ApplicationContacts__Init( &_this->History, &_this->_.XObject, 0 );
  ApplicationContacts__Init( &_this->Favorites, &_this->_.XObject, 0 );
  ApplicationContacts__Init( &_this->Search, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsManager );

  /* Create and initialize the suitable class variant */
  EwAttachObjectVariant( &_this->_.XObject, aLink, aArg );
}

/* Re-Initializer for the class 'Application::ContactsManager' */
void ApplicationContactsManager__ReInit( ApplicationContactsManager _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationContacts__ReInit( &_this->Contacts );
  ApplicationContacts__ReInit( &_this->History );
  ApplicationContacts__ReInit( &_this->Favorites );
  ApplicationContacts__ReInit( &_this->Search );

  /* Reinitialize the variant */
  if ( _this->_vthis )
    _this->_vthis->_.VMT->_ReInit( &_this->_.XObject );
}

/* Finalizer method for the class 'Application::ContactsManager' */
void ApplicationContactsManager__Done( ApplicationContactsManager _this )
{
  /* Deinitialize the variant */
  EwDetachObjectVariant( &_this->_.XObject );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Finalize all embedded objects */
  ApplicationContacts__Done( &_this->Contacts );
  ApplicationContacts__Done( &_this->History );
  ApplicationContacts__Done( &_this->Favorites );
  ApplicationContacts__Done( &_this->Search );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Application::ContactsManager' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactsManager )
  EW_STATIC_CLASS_VARIANT( ApplicationContactsManager1 ),
EW_END_OF_CLASS_VARIANTS( ApplicationContactsManager )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsManager' */
EW_DEFINE_CLASS( ApplicationContactsManager, XObject, Contacts, Contacts, Contacts, 
                 Contacts, _.VMT, _.VMT, "Application::ContactsManager" )
EW_END_OF_CLASS( ApplicationContactsManager )

/* Initializer for the class 'Application::FavContactItem' */
void ApplicationFavContactItem__Init( ApplicationFavContactItem _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationContactItem__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationFavContactItem );

  /* ... then construct all embedded objects */
  ApplicationPushButtonSmall__Init( &_this->RemoveButton, &_this->_.XObject, 0 );
  ApplicationTextButton__Init( &_this->DeleteButton, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->EditEffect, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->DeleteEffect, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationFavContactItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->RemoveButton, _Const00F2 );
  ApplicationPushButtonSmall_OnSetButtonColor( &_this->RemoveButton, ResRed );
  ApplicationPushButtonSmall_OnSetIcon( &_this->RemoveButton, EwLoadString( &ResRemoveTxt ));
  ApplicationPushButtonSmall_OnSetIconColor( &_this->RemoveButton, ResWhite );
  CoreRectView__OnSetBounds( &_this->DeleteButton, _Const00F3 );
  ApplicationTextButton_OnSetText( &_this->DeleteButton, EwLoadString( &_Const00F4 ));
  ApplicationTextButton_OnSetTextColor( &_this->DeleteButton, ResWhite );
  ApplicationTextButton_OnSetTextColorPress( &_this->DeleteButton, ResWhiteSemiTransparent );
  ApplicationTextButton_OnSetBackgoundColor( &_this->DeleteButton, ResRed );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->EditEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->EditEffect, 250 );
  _this->EditEffect.Value2 = 25;
  _this->EditEffect.Value1 = 0;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->DeleteEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->DeleteEffect, 250 );
  _this->DeleteEffect.Value2 = 66;
  _this->DeleteEffect.Value1 = 0;
  CoreGroup__Restack( _this, ((CoreView)&_this->Super1.FirstnameTxt ), -1 );
  CoreGroup__Add( _this, ((CoreView)&_this->RemoveButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DeleteButton ), 0 );
  _this->RemoveButton.OnActivate = EwNewSlot( _this, ApplicationFavContactItem_onShowDelete );
  _this->DeleteButton.OnActivate = EwNewSlot( _this, ApplicationFavContactItem_onDelete );
  _this->EditEffect.Super1.OnAnimate = EwNewSlot( _this, ApplicationFavContactItem_onAnimate );
  _this->DeleteEffect.Super1.OnAnimate = EwNewSlot( _this, ApplicationFavContactItem_onAnimate );
}

/* Re-Initializer for the class 'Application::FavContactItem' */
void ApplicationFavContactItem__ReInit( ApplicationFavContactItem _this )
{
  /* At first re-initialize the super class ... */
  ApplicationContactItem__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationPushButtonSmall__ReInit( &_this->RemoveButton );
  ApplicationTextButton__ReInit( &_this->DeleteButton );
  EffectsInt32Effect__ReInit( &_this->EditEffect );
  EffectsInt32Effect__ReInit( &_this->DeleteEffect );
}

/* Finalizer method for the class 'Application::FavContactItem' */
void ApplicationFavContactItem__Done( ApplicationFavContactItem _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationContactItem );

  /* Finalize all embedded objects */
  ApplicationPushButtonSmall__Done( &_this->RemoveButton );
  ApplicationTextButton__Done( &_this->DeleteButton );
  EffectsInt32Effect__Done( &_this->EditEffect );
  EffectsInt32Effect__Done( &_this->DeleteEffect );

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
  CoreRectView__OnSetBounds( &_this->Super1.PushButtonSmall, EwSetRectX( _this->Super1.PushButtonSmall.Super3.Bounds, 
  ( _this->EditEffect.Value + 6 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->Super1.LastNameTxt, EwSetRectX( _this->Super1.LastNameTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 55 ) - _this->DeleteEffect.Value ));
  CoreRectView__OnSetBounds( &_this->Super1.FirstnameTxt, EwSetRectX( _this->Super1.FirstnameTxt.Super1.Bounds, 
  ( _this->EditEffect.Value + 146 ) - _this->DeleteEffect.Value ));
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
  EwSignal( EwNewSlot( &_this->EditEffect, EffectsEffect_StartEffect ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::FavContactItem.onDelete()' */
void ApplicationFavContactItem_onDelete( ApplicationFavContactItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Application::FavContactItem.onShowDelete()' */
void ApplicationFavContactItem_onShowDelete( ApplicationFavContactItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( EwNewSlot( &_this->DeleteEffect, EffectsEffect_StartEffect ), ((XObject)_this ));
}

/* Variants derived from the class : 'Application::FavContactItem' */
EW_DEFINE_CLASS_VARIANTS( ApplicationFavContactItem )
EW_END_OF_CLASS_VARIANTS( ApplicationFavContactItem )

/* Virtual Method Table (VMT) for the class : 'Application::FavContactItem' */
EW_DEFINE_CLASS( ApplicationFavContactItem, ApplicationContactItem, RemoveButton, 
                 RemoveButton, RemoveButton, RemoveButton, EditMode, EditMode, "Application::FavContactItem" )
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

/* Initializer for the class variant 'Application::ContactsManager1' */
void ApplicationContactsManager1__Init( ApplicationContactsManager _this, XObject aLink, XHandle aArg )
{
  ApplicationContactsManager1 _vthis = (ApplicationContactsManager1)_this->_vthis;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aLink );

  /* Allow the Immediate Garbage Collection to evalute the members of this class variant. */
  _vthis->_.XObject._.GCT = EW_VCLASS_GCT( ApplicationContactsManager1 );

  /* Setup the VMT pointer */
  _vthis->_.VMT = EW_VCLASS( ApplicationContactsManager1 );

  /* Call the user defined constructor */
  ApplicationContactsManager1_Init( _this, aArg );
}

/* Re-Initializer for the class variant 'Application::ContactsManager1' */
void ApplicationContactsManager1__ReInit( ApplicationContactsManager _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Finalizer method for the class variant 'Application::ContactsManager1' */
void ApplicationContactsManager1__Done( ApplicationContactsManager _this )
{
  ApplicationContactsManager1 _vthis = (ApplicationContactsManager1)_this->_vthis;

  /* Finalize this class */
  _vthis->_.VMT = 0;
}

/* 'C' function for method : 'Application::ContactsManager1.Init()' */
void ApplicationContactsManager1_Init( ApplicationContactsManager _this, XHandle 
  aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ApplicationContactsManager1_CreateContactData( _this );
}

/* 'C' function for method : 'Application::ContactsManager1.CreateContact()' */
void ApplicationContactsManager1_CreateContact( ApplicationContactsManager _this, 
  XString aLastName, XString aFirstName, XString aPhoneNumber )
{
  ApplicationContact MyContact = EwNewObject( ApplicationContact, 0 );

  ApplicationContact_OnSetFirstName( MyContact, aFirstName );
  ApplicationContact_OnSetLastName( MyContact, aLastName );
  ApplicationContact_OnSetPhoneNumber( MyContact, aPhoneNumber );
  ApplicationContacts_Add( &_this->Contacts, MyContact );
}

/* 'C' function for method : 'Application::ContactsManager1.CreateContactData()' */
void ApplicationContactsManager1_CreateContactData( ApplicationContactsManager _this )
{
  ApplicationContactsManager1_CreateContact( _this, EwLoadString( &_Const00F5 ), 
  EwLoadString( &_Const00F6 ), EwLoadString( &_Const00F7 ));
  ApplicationContactsManager1_CreateContact( _this, EwLoadString( &_Const00F8 ), 
  EwLoadString( &_Const00F9 ), EwLoadString( &_Const00FA ));
  ApplicationContactsManager1_CreateContact( _this, EwLoadString( &_Const00FB ), 
  EwLoadString( &_Const00FC ), EwLoadString( &_Const00FD ));
  ApplicationContactsManager1_CreateContact( _this, EwLoadString( &_Const00FE ), 
  EwLoadString( &_Const00FF ), EwLoadString( &_Const0100 ));
  ApplicationContactsManager1_CreateContact1( _this, EwLoadString( &_Const00FB ), 
  EwLoadString( &_Const00FC ), EwLoadString( &_Const00FD ));
  ApplicationContacts_insertionSort( &_this->Contacts );
}

/* 'C' function for method : 'Application::ContactsManager1.CreateContact1()' */
void ApplicationContactsManager1_CreateContact1( ApplicationContactsManager _this, 
  XString aLastName, XString aFirstName, XString aPhoneNumber )
{
  ApplicationContact MyContact = EwNewObject( ApplicationContact, 0 );

  ApplicationContact_OnSetFirstName( MyContact, aFirstName );
  ApplicationContact_OnSetLastName( MyContact, aLastName );
  ApplicationContact_OnSetPhoneNumber( MyContact, aPhoneNumber );
  ApplicationContacts_Add( &_this->Favorites, MyContact );
}

/* Variants derived from the class : 'Application::ContactsManager1' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactsManager1 )
EW_END_OF_CLASS_VARIANTS( ApplicationContactsManager1 )

/* Virtual Method Table (VMT) for the class variant : 'Application::ContactsManager1' */
EW_DEFINE_VCLASS( ApplicationContactsManager1, XObject, ApplicationContactsManager, 
                  _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, "Application::ContactsManager1" )
EW_END_OF_VCLASS( ApplicationContactsManager1 )

/* Embedded Wizard */