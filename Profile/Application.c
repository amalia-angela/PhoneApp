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
#include "_ApplicationContactsCall.h"
#include "_ApplicationContactsPage.h"
#include "_ApplicationDeviceClass.h"
#include "_ApplicationInputEtxt.h"
#include "_ApplicationKeyPadButtons.h"
#include "_ApplicationKeypad.h"
#include "_ApplicationPushButtonBig.h"
#include "_ApplicationPushButtonDelete.h"
#include "_ApplicationPushButtonMediumBlue.h"
#include "_ApplicationPushButtonMediumRed.h"
#include "_ApplicationPushButtonMediumTrans.h"
#include "_ApplicationPushButtonNoBackground.h"
#include "_ApplicationPushButtonSmall.h"
#include "_ApplicationSearchEtxt.h"
#include "_ApplicationTextButton.h"
#include "_ApplicationVariantContacts.h"
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
  0x00000408, /* ratio 52.71 % */
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
  0x2FAC664B, 0x8BD7BEFD, 0x5FD68842, 0xA4116648, 0x710847C5, 0x5F001E25, 0x19913411,
  0x974001BF, 0xD8050461, 0xA92D4292, 0x531AC005, 0x4D59B72D, 0xD354B559, 0x08391682,
  0x02138400, 0xA46F6050, 0x45126719, 0x21A8B20D, 0x70140059, 0x12271E91, 0x1049A008,
  0x025C844D, 0x92B6F917, 0xC4395A58, 0x7A108991, 0x5445E304, 0x75478574, 0x51704C00,
  0x244DD212, 0xB64D7F22, 0x8D6BA4F4, 0x8ADBA95D, 0xA5B00259, 0x56452163, 0x152364C4,
  0x7B77D101, 0x4511F785, 0x569159BC, 0x44190857, 0x3A698D24, 0x6173DC04, 0x8527E56D,
  0x47044C45, 0x169A1B62, 0x71049012, 0x001E52D8, 0x7FE7AA0C, 0x90C8096F, 0x69A9F06E,
  0x295A58D2, 0x000B9744, 0x4529CA70, 0x92641688, 0x44B51042, 0x943199A3, 0x9052D179,
  0xAB54D45D, 0x6B051D04, 0x5ACDED11, 0x1504AA83, 0xB3526B35, 0x0AAB354A, 0x423116B8,
  0x148543B0, 0x00004052, 0x00000000
};

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault1[] =
{
  0x00000012, /* ratio 133.33 % */
  0xB8000F00, 0x80090452, 0x00C80034, 0xA1A00328, 0x01010043, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 272, 480 }};
static const XRect _Const0001 = {{ 10, 126 }, { 260, 469 }};
static const XRect _Const0002 = {{ 11, 126 }, { 260, 469 }};
static const XPoint _Const0003 = { 0, 35 };
static const XPoint _Const0004 = { 11, 126 };
static const XPoint _Const0005 = { 261, 126 };
static const XPoint _Const0006 = { 260, 469 };
static const XPoint _Const0007 = { 11, 469 };
static const XRect _Const0008 = {{ 235, 100 }, { 261, 126 }};
static const XRect _Const0009 = {{ 209, 100 }, { 235, 126 }};
static const XRect _Const000A = {{ 2, 68 }, { 268, 100 }};
static const XRect _Const000B = {{ 11, 27 }, { 261, 61 }};
static const XStringRes _Const000C = { _StringsDefault0, 0x0002 };
static const XRect _Const000D = {{ 242, 12 }, { 272, 42 }};
static const XStringRes _Const000E = { _StringsDefault0, 0x000D };
static const XStringRes _Const000F = { _StringsDefault0, 0x0013 };
static const XRect _Const0010 = {{ 0, 0 }, { 272, 32 }};
static const XRect _Const0011 = {{ 0, 0 }, { 268, 35 }};
static const XColor _Const0012 = { 0xFD, 0xFD, 0xFD, 0xC8 };
static const XColor _Const0013 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0014 = {{ 55, 2 }, { 146, 32 }};
static const XStringRes _Const0015 = { _StringsDefault0, 0x0019 };
static const XRect _Const0016 = {{ 146, 2 }, { 268, 32 }};
static const XStringRes _Const0017 = { _StringsDefault0, 0x0024 };
static const XPoint _Const0018 = { 268, 32 };
static const XPoint _Const0019 = { 0, 32 };
static const XColor _Const001A = { 0xE2, 0xE2, 0xE2, 0xFD };
static const XRect _Const001B = {{ 6, 4 }, { 31, 29 }};
static const XPoint _Const001C = { 265, 310 };
static const XPoint _Const001D = { 7, 310 };
static const XRect _Const001E = {{ 19, 281 }, { 263, 310 }};
static const XColor _Const001F = { 0xFF, 0xFF, 0xFF, 0x00 };
static const XStringRes _Const0020 = { _StringsDefault0, 0x0030 };
static const XRect _Const0021 = {{ 7, 255 }, { 265, 288 }};
static const XStringRes _Const0022 = { _StringsDefault0, 0x003F };
static const XPoint _Const0023 = { 265, 255 };
static const XPoint _Const0024 = { 7, 255 };
static const XRect _Const0025 = {{ 51, 160 }, { 101, 235 }};
static const XStringRes _Const0026 = { _StringsDefault0, 0x0049 };
static const XRect _Const0027 = {{ 111, 160 }, { 161, 235 }};
static const XStringRes _Const0028 = { _StringsDefault0, 0x0050 };
static const XRect _Const0029 = {{ 171, 160 }, { 221, 235 }};
static const XStringRes _Const002A = { _StringsDefault0, 0x0058 };
static const XRect _Const002B = {{ 11, 113 }, { 268, 143 }};
static const XStringRes _Const002C = { _StringsDefault0, 0x0062 };
static const XRect _Const002D = {{ 101, 28 }, { 171, 98 }};
static const XRect _Const002E = {{ 240, 4 }, { 265, 29 }};
static const XRect _Const002F = {{ 7, 4 }, { 32, 29 }};
static const XStringRes _Const0030 = { _StringsDefault0, 0x0071 };
static const XRect _Const0031 = {{ 0, 0 }, { 50, 75 }};
static const XRect _Const0032 = {{ 0, 0 }, { 50, 50 }};
static const XPoint _Const0033 = { 0, 50 };
static const XPoint _Const0034 = { 50, 50 };
static const XPoint _Const0035 = { 50, 0 };
static const XPoint _Const0036 = { 0, 0 };
static const XRect _Const0037 = {{ 1, 0 }, { 50, 50 }};
static const XRect _Const0038 = {{ 0, 50 }, { 50, 75 }};
static const XColor _Const0039 = { 0x1B, 0x0B, 0xFF, 0xFF };
static const XRect _Const003A = {{ 0, 0 }, { 70, 70 }};
static const XPoint _Const003B = { 0, 70 };
static const XPoint _Const003C = { 70, 70 };
static const XPoint _Const003D = { 70, 0 };
static const XRect _Const003E = {{ 0, 0 }, { 25, 25 }};
static const XPoint _Const003F = { 0, 25 };
static const XPoint _Const0040 = { 25, 25 };
static const XPoint _Const0041 = { 25, 0 };
static const XRect _Const0042 = {{ 0, 0 }, { 266, 32 }};
static const XColor _Const0043 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0044 = {{ 0, 0 }, { 268, 32 }};
static const XColor _Const0045 = { 0xF0, 0xF0, 0xF0, 0xFD };
static const XPoint _Const0046 = { 272, 32 };
static const XPoint _Const0047 = { 272, 0 };
static const XRect _Const0048 = {{ 48, 2 }, { 272, 32 }};
static const XStringRes _Const0049 = { _StringsDefault0, 0x0075 };
static const XColor _Const004A = { 0xB9, 0xB9, 0xB9, 0xFD };
static const XPoint _Const004B = { 50, 70 };
static const XRect _Const004C = {{ 11, 2 }, { 41, 27 }};
static const XPoint _Const004D = { 20, 20 };
static const XPoint _Const004E = { -10, -10 };
static const XColor _Const004F = { 0xEE, 0xEE, 0xEE, 0xCC };
static const XStringRes _Const0050 = { _StringsDefault0, 0x007F };
static const XStringRes _Const0051 = { _StringsDefault0, 0x0083 };
static const XRect _Const0052 = {{ -1, 0 }, { 271, 480 }};
static const XPoint _Const0053 = { 265, 289 };
static const XPoint _Const0054 = { 7, 289 };
static const XRect _Const0055 = {{ 3, 257 }, { 269, 289 }};
static const XStringRes _Const0056 = { _StringsDefault0, 0x0087 };
static const XPoint _Const0057 = { 264, 256 };
static const XPoint _Const0058 = { 6, 256 };
static const XRect _Const0059 = {{ 3, 224 }, { 269, 256 }};
static const XStringRes _Const005A = { _StringsDefault0, 0x0097 };
static const XPoint _Const005B = { 264, 223 };
static const XPoint _Const005C = { 6, 223 };
static const XRect _Const005D = {{ 3, 191 }, { 269, 223 }};
static const XStringRes _Const005E = { _StringsDefault0, 0x00A4 };
static const XPoint _Const005F = { 264, 190 };
static const XPoint _Const0060 = { 6, 190 };
static const XRect _Const0061 = {{ 92, 156 }, { 180, 179 }};
static const XStringRes _Const0062 = { _StringsDefault0, 0x00B0 };
static const XRect _Const0063 = {{ 101, 75 }, { 171, 145 }};
static const XRect _Const0064 = {{ 86, 7 }, { 186, 37 }};
static const XStringRes _Const0065 = { _StringsDefault0, 0x00BC };
static const XRect _Const0066 = {{ 5, 431 }, { 263, 464 }};
static const XStringRes _Const0067 = { _StringsDefault0, 0x00CA };
static const XRect _Const0068 = {{ 7, 244 }, { 265, 273 }};
static const XStringRes _Const0069 = { _StringsDefault0, 0x00DB };
static const XPoint _Const006A = { 264, 239 };
static const XPoint _Const006B = { 6, 239 };
static const XRect _Const006C = {{ 6, 207 }, { 264, 240 }};
static const XPoint _Const006D = { 263, 206 };
static const XPoint _Const006E = { 5, 206 };
static const XRect _Const006F = {{ 2, 174 }, { 268, 206 }};
static const XStringRes _Const0070 = { _StringsDefault0, 0x00E8 };
static const XPoint _Const0071 = { 263, 173 };
static const XPoint _Const0072 = { 5, 173 };
static const XRect _Const0073 = {{ 2, 141 }, { 268, 173 }};
static const XStringRes _Const0074 = { _StringsDefault0, 0x00F5 };
static const XPoint _Const0075 = { 263, 140 };
static const XPoint _Const0076 = { 5, 140 };
static const XRect _Const0077 = {{ 92, 102 }, { 180, 125 }};
static const XStringRes _Const0078 = { _StringsDefault0, 0x0101 };
static const XStringRes _Const0079 = { _StringsDefault0, 0x0108 };
static const XStringRes _Const007A = { _StringsDefault0, 0x0110 };
static const XStringRes _Const007B = { _StringsDefault0, 0x0117 };
static const XStringRes _Const007C = { _StringsDefault0, 0x0121 };
static const XStringRes _Const007D = { _StringsDefault0, 0x012B };
static const XStringRes _Const007E = { _StringsDefault0, 0x0131 };
static const XStringRes _Const007F = { _StringsDefault0, 0x0139 };
static const XStringRes _Const0080 = { _StringsDefault0, 0x0140 };
static const XStringRes _Const0081 = { _StringsDefault0, 0x0145 };
static const XStringRes _Const0082 = { _StringsDefault0, 0x014D };
static const XStringRes _Const0083 = { _StringsDefault0, 0x0156 };
static const XStringRes _Const0084 = { _StringsDefault0, 0x015C };
static const XStringRes _Const0085 = { _StringsDefault0, 0x0163 };
static const XRect _Const0086 = {{ 13, 2 }, { 272, 32 }};
static const XStringRes _Const0087 = { _StringsDefault0, 0x0176 };
static const XColor _Const0088 = { 0x1E, 0x1E, 0x1E, 0xFD };
static const XRect _Const0089 = {{ 14, 2 }, { 272, 32 }};
static const XPoint _Const008A = { 0, 29 };
static const XPoint _Const008B = { 0, 5 };
static const XStringRes _Const008C = { _StringsDefault0, 0x017E };
static const XRect _Const008D = {{ 6, 436 }, { 264, 469 }};
static const XRect _Const008E = {{ 0, 0 }, { 258, 33 }};
static const XPoint _Const008F = { 0, 33 };
static const XPoint _Const0090 = { 258, 33 };
static const XPoint _Const0091 = { 258, 0 };
static const XRect _Const0092 = {{ 12, 0 }, { 258, 33 }};
static const XColor _Const0093 = { 0xFF, 0x29, 0x5B, 0xFF };
static const XColor _Const0094 = { 0x83, 0x83, 0x83, 0xFA };
static const XColor _Const0095 = { 0x4F, 0x4F, 0x4F, 0xFF };
static const XColor _Const0096 = { 0x89, 0x89, 0x89, 0xFF };
static const XColor _Const0097 = { 0x3C, 0x3C, 0x3C, 0xFF };
static const XRect _Const0098 = {{ 104, 363 }, { 169, 431 }};
static const XRect _Const0099 = {{ 191, 252 }, { 256, 344 }};
static const XStringRes _Const009A = { _StringsDefault0, 0x0182 };
static const XRect _Const009B = {{ 104, 253 }, { 169, 345 }};
static const XStringRes _Const009C = { _StringsDefault0, 0x018D };
static const XRect _Const009D = {{ 16, 253 }, { 81, 345 }};
static const XStringRes _Const009E = { _StringsDefault0, 0x0199 };
static const XRect _Const009F = {{ 191, 159 }, { 256, 251 }};
static const XStringRes _Const00A0 = { _StringsDefault0, 0x01A4 };
static const XRect _Const00A1 = {{ 104, 160 }, { 169, 252 }};
static const XStringRes _Const00A2 = { _StringsDefault0, 0x01AE };
static const XRect _Const00A3 = {{ 16, 160 }, { 81, 252 }};
static const XStringRes _Const00A4 = { _StringsDefault0, 0x01B7 };
static const XRect _Const00A5 = {{ 8, 57 }, { 81, 87 }};
static const XStringRes _Const00A6 = { _StringsDefault0, 0x01BE };
static const XColor _Const00A7 = { 0xFA, 0xFA, 0xFA, 0xFF };
static const XRect _Const00A8 = {{ 191, 14 }, { 261, 84 }};
static const XRect _Const00A9 = {{ 8, 27 }, { 174, 57 }};
static const XRect _Const00AA = {{ 0, 0 }, { 65, 92 }};
static const XRect _Const00AB = {{ 0, 0 }, { 65, 65 }};
static const XPoint _Const00AC = { 0, 65 };
static const XPoint _Const00AD = { 65, 65 };
static const XPoint _Const00AE = { 65, 0 };
static const XRect _Const00AF = {{ 0, 65 }, { 65, 92 }};
static const XRect _Const00B0 = {{ 0, 42 }, { 272, 480 }};
static const XRect _Const00B1 = {{ 11, 146 }, { 261, 468 }};
static const XRect _Const00B2 = {{ 12, 146 }, { 261, 480 }};
static const XPoint _Const00B3 = { 9, 146 };
static const XPoint _Const00B4 = { 259, 146 };
static const XPoint _Const00B5 = { 258, 480 };
static const XPoint _Const00B6 = { 9, 480 };
static const XRect _Const00B7 = {{ 235, 120 }, { 261, 146 }};
static const XRect _Const00B8 = {{ 209, 120 }, { 235, 146 }};
static const XRect _Const00B9 = {{ 2, 88 }, { 273, 120 }};
static const XRect _Const00BA = {{ 9, 50 }, { 113, 84 }};
static const XRect _Const00BB = {{ 178, 54 }, { 208, 84 }};
static const XRect _Const00BC = {{ 207, 57 }, { 273, 82 }};
static const XStringRes _Const00BD = { _StringsDefault0, 0x01CB };
static const XRect _Const00BE = {{ 39, 104 }, { 104, 169 }};
static const XStringRes _Const00BF = { _StringsDefault0, 0x01D4 };
static const XRect _Const00C0 = {{ 169, 104 }, { 234, 169 }};
static const XStringRes _Const00C1 = { _StringsDefault0, 0x01D8 };
static const XRect _Const00C2 = {{ 104, 104 }, { 169, 169 }};
static const XStringRes _Const00C3 = { _StringsDefault0, 0x01DC };
static const XRect _Const00C4 = {{ 39, 169 }, { 104, 234 }};
static const XStringRes _Const00C5 = { _StringsDefault0, 0x01E0 };
static const XRect _Const00C6 = {{ 169, 169 }, { 234, 234 }};
static const XStringRes _Const00C7 = { _StringsDefault0, 0x01E4 };
static const XRect _Const00C8 = {{ 104, 169 }, { 169, 234 }};
static const XStringRes _Const00C9 = { _StringsDefault0, 0x01E8 };
static const XRect _Const00CA = {{ 39, 234 }, { 104, 299 }};
static const XStringRes _Const00CB = { _StringsDefault0, 0x01EC };
static const XRect _Const00CC = {{ 169, 234 }, { 234, 299 }};
static const XStringRes _Const00CD = { _StringsDefault0, 0x01F0 };
static const XRect _Const00CE = {{ 104, 234 }, { 169, 299 }};
static const XStringRes _Const00CF = { _StringsDefault0, 0x01F4 };
static const XRect _Const00D0 = {{ 39, 299 }, { 104, 364 }};
static const XStringRes _Const00D1 = { _StringsDefault0, 0x01F8 };
static const XRect _Const00D2 = {{ 169, 299 }, { 234, 364 }};
static const XStringRes _Const00D3 = { _StringsDefault0, 0x01FC };
static const XRect _Const00D4 = {{ 104, 299 }, { 169, 364 }};
static const XStringRes _Const00D5 = { _StringsDefault0, 0x0200 };
static const XRect _Const00D6 = {{ 104, 364 }, { 169, 429 }};
static const XRect _Const00D7 = {{ 9, 80 }, { 264, 112 }};
static const XRect _Const00D8 = {{ 169, 384 }, { 234, 409 }};
static const XStringRes _Const00D9 = { _StringsDefault1, 0x0002 };
static const XRect _Const00DA = {{ 0, 0 }, { 66, 25 }};
static const XPoint _Const00DB = { 66, 25 };
static const XPoint _Const00DC = { 66, 0 };

/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationApplication );

  /* ... then construct all embedded objects */
  ApplicationContactsPage__Init( &_this->ContactList, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->ContactList, _Const0000 );
  CoreGroup__Add( _this, ((CoreView)&_this->ContactList ), 0 );
  _this->MyContacts = EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationContactsPage__ReInit( &_this->ContactList );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  ApplicationContactsPage__Done( &_this->ContactList );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, MyContacts, ContactList, ContactList, 
                 ContactList, _.VMT, _.VMT, "Application::Application" )
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
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->UpButton, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->DownButton, &_this->_.XObject, 0 );
  ApplicationSearchEtxt__Init( &_this->SearchExt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TitleTxt, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->PlusButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const0001 );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 35 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( ApplicationContactItem ));
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToLeft 
  | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0002 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const0003 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0004 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0005 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0006 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0007 );
  _this->SimpleTouchHandler.RetargetCondition = CoreRetargetReasonLongPress | CoreRetargetReasonWipeDown 
  | CoreRetargetReasonWipeLeft | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreRectView__OnSetBounds( &_this->UpButton, _Const0008 );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->UpButton, EwLoadString( 
  &ResUptxt ));
  CoreRectView__OnSetBounds( &_this->DownButton, _Const0009 );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->DownButton, EwLoadString( 
  &ResDownTxt ));
  CoreRectView__OnSetBounds( &_this->SearchExt, _Const000A );
  ApplicationSearchEtxt_OnSetColor( &_this->SearchExt, ResGery );
  CoreRectView__OnSetBounds( &_this->TitleTxt, _Const000B );
  ViewsText_OnSetAlignment( &_this->TitleTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TitleTxt, EwLoadString( &_Const000C ));
  ViewsText_OnSetColor( &_this->TitleTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->PlusButton, _Const000D );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->PlusButton, EwLoadString( 
  &ResPlusIconTxt ));
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UpButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DownButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SearchExt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PlusButton ), 0 );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationContactsPage_OnLoadItem );
  CoreVerticalList_OnSetSlideHandler( &_this->VerticalList, &_this->SlideTouchHandler );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ApplicationContactsPage_onTapContact );
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
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
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
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
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
    EwNewRef( EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), ApplicationContacts_OnGetNoOfItems, 
    ApplicationContacts_OnSetNoOfItems ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationContactsPage_onNoOfContactsChanged ), 
    ((XObject)_this ));
  EwAttachRefObserver( EwNewSlot( _this, ApplicationContactsPage_onContactsSortingChanged ), 
    EwNewRef( EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), ApplicationContacts_OnGetSorting, 
    ApplicationContacts_OnSetSorting ), 0 );
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

  ApplicationContacts_Add( EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), 
  _this->addContact->Contact );
  EwTrace( "%*", _this->addContact->Contact );
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

/* 'C' function for method : 'Application::ContactsPage.OnSetSelectedContact()' */
void ApplicationContactsPage_OnSetSelectedContact( ApplicationContactsPage _this, 
  XInt32 value )
{
  if ( _this->SelectedContact == value )
    return;

  _this->SelectedContact = value;
  EwNotifyRefObservers( EwNewRef( _this, ApplicationContactsPage_OnGetSelectedContact, 
    ApplicationContactsPage_OnSetSelectedContact ), 0 );
}

/* 'C' function for method : 'Application::ContactsPage.onDeleteContact()' */
void ApplicationContactsPage_onDeleteContact( ApplicationContactsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_InvalidateItems( &_this->VerticalList, _this->SelectedContact, 
  _this->VerticalList.NoOfItems - 1 );
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

/* 'C' function for method : 'Application::ContactsPage.onTapContact()' */
void ApplicationContactsPage_onTapContact( ApplicationContactsPage _this, XObject 
  sender )
{
  XInt32 itemNo;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->detailsPage = EwNewObject( ApplicationContactDetailsPage, 0 );
  _this->detailsPage->OnBack = EwNewSlot( _this, ApplicationContactsPage_onCloseContact );
  _this->detailsPage->OnDelete = EwNewSlot( _this, ApplicationContactsPage_onDeleteContact );

  if ( _this->SimpleTouchHandler.AutoDeflected )
    return;

  itemNo = CoreVerticalList_GetItemAtPosition( &_this->VerticalList, _this->SimpleTouchHandler.CurrentPos );

  if ( itemNo >= 0 )
  {
    CoreVerticalList_OnSetSelectedItem( &_this->VerticalList, itemNo );
    ApplicationContactsPage_OnSetSelectedContact( _this, itemNo );
    ApplicationContactDetailsPage_OnSetContact( _this->detailsPage, ApplicationContacts_GetContact( 
    EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), itemNo ));
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->detailsPage ), 
    ((EffectsTransition)EwGetAutoObject( &ResSlideLeftCentered, EffectsSlideTransition )), 
    0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  }
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

  ApplicationContacts_OnSetSorting( EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), 
  ApplicationSortingAscending );
  EwTrace( "%s", EwLoadString( &_Const000E ));
}

/* 'C' function for method : 'Application::ContactsPage.onDownPress()' */
void ApplicationContactsPage_onDownPress( ApplicationContactsPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  ApplicationContacts_OnSetSorting( EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), 
  ApplicationSortingDescending );
  EwTrace( "%s", EwLoadString( &_Const000F ));
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
  contact = ApplicationContacts_GetContact( EwGetAutoObject( &ApplicationMyContacts, 
  ApplicationContacts ), itemNo );
  itemView = EwCastObject( _this->VerticalList.View, ApplicationContactItem );

  if ( itemView == 0 )
    return;

  if ( contact != 0 )
    ApplicationContactItem_OnSetContact( itemView, contact );

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
  ApplicationContacts )->NoOfItems );
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

/* Default onget method for the property 'SelectedContact' */
XInt32 ApplicationContactsPage_OnGetSelectedContact( ApplicationContactsPage _this )
{
  return _this->SelectedContact;
}

/* Variants derived from the class : 'Application::ContactsPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactsPage )
EW_END_OF_CLASS_VARIANTS( ApplicationContactsPage )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsPage' */
EW_DEFINE_CLASS( ApplicationContactsPage, CoreGroup, addContact, Background, Background, 
                 Background, SelectedContact, SelectedContact, "Application::ContactsPage" )
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
EW_END_OF_CLASS( ApplicationContactsPage )

/* Initializer for the class 'Application::ContactItem' */
void ApplicationContactItem__Init( ApplicationContactItem _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactItem );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->LastNameTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->FirstnameTxt, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_.XObject, 0 );
  ApplicationPushButtonSmall__Init( &_this->PushButtonSmall, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0010 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0011 );
  ViewsRectangle_OnSetColorBL( &_this->Rectangle, _Const0012 );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle, _Const0012 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0013 );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const0014 );
  ViewsText_OnSetAlignment( &_this->LastNameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->LastNameTxt, EwLoadString( &_Const0015 ));
  ViewsText_OnSetColor( &_this->LastNameTxt, ResBlack );
  CoreView_OnSetStackingPriority((CoreView)&_this->FirstnameTxt, 0 );
  CoreView_OnSetLayout((CoreView)&_this->FirstnameTxt, CoreLayoutAlignToLeft | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->FirstnameTxt, _Const0016 );
  ViewsText_OnSetAlignment( &_this->FirstnameTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->FirstnameTxt, EwLoadString( &_Const0017 ));
  ViewsText_OnSetColor( &_this->FirstnameTxt, ResBlack );
  CoreView_OnSetLayout((CoreView)&_this->Line, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const0018 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const0019 );
  ViewsLine_OnSetWidth( &_this->Line, 1 );
  ViewsLine_OnSetColor( &_this->Line, _Const001A );
  CoreRectView__OnSetBounds( &_this->PushButtonSmall, _Const001B );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->LastNameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FirstnameTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButtonSmall ), 0 );
  ViewsText_OnSetFont( &_this->LastNameTxt, EwLoadResource( &ResContactFontBold15, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->FirstnameTxt, EwLoadResource( &ResContactFont15, 
  ResourcesFont ));
}

/* Re-Initializer for the class 'Application::ContactItem' */
void ApplicationContactItem__ReInit( ApplicationContactItem _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->LastNameTxt );
  ViewsText__ReInit( &_this->FirstnameTxt );
  ViewsLine__ReInit( &_this->Line );
  ApplicationPushButtonSmall__ReInit( &_this->PushButtonSmall );
}

/* Finalizer method for the class 'Application::ContactItem' */
void ApplicationContactItem__Done( ApplicationContactItem _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->LastNameTxt );
  ViewsText__Done( &_this->FirstnameTxt );
  ViewsLine__Done( &_this->Line );
  ApplicationPushButtonSmall__Done( &_this->PushButtonSmall );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
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
    ApplicationPushButtonSmall_OnSetLabel( &_this->PushButtonSmall, ApplicationContacts_GetInitials( 
    EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), _this->Contact->LastName, 
    _this->Contact->FirstName ));
  }
}

/* Variants derived from the class : 'Application::ContactItem' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactItem )
EW_END_OF_CLASS_VARIANTS( ApplicationContactItem )

/* Virtual Method Table (VMT) for the class : 'Application::ContactItem' */
EW_DEFINE_CLASS( ApplicationContactItem, CoreGroup, Contact, Rectangle, Rectangle, 
                 Rectangle, _.VMT, _.VMT, "Application::ContactItem" )
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
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const001C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const001D );
  ViewsLine_OnSetColor( &_this->Line2, _Const001A );
  CoreView_OnSetLayout((CoreView)&_this->NumberTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->NumberTxt, _Const001E );
  ViewsText_OnSetColorBR( &_this->NumberTxt, _Const001F );
  ViewsText_OnSetAlignment( &_this->NumberTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->NumberTxt, EwLoadString( &_Const0020 ));
  ViewsText_OnSetColor( &_this->NumberTxt, ResBlueLight );
  CoreView_OnSetLayout((CoreView)&_this->MobileTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->MobileTxt, _Const0021 );
  ViewsText_OnSetAlignment( &_this->MobileTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MobileTxt, EwLoadString( &_Const0022 ));
  ViewsText_OnSetColor( &_this->MobileTxt, ResBlack );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const0023 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const0024 );
  ViewsLine_OnSetColor( &_this->Line1, _Const001A );
  CoreRectView__OnSetBounds( &_this->CallBtn, _Const0025 );
  ApplicationPushButtonMediumBlue_OnSetIcon( &_this->CallBtn, EwLoadString( &ResCallTxt ));
  ApplicationPushButtonMediumBlue_OnSetDescrip( &_this->CallBtn, EwLoadString( &_Const0026 ));
  CoreRectView__OnSetBounds( &_this->VideoCallBtn, _Const0027 );
  ApplicationPushButtonMediumBlue_OnSetIcon( &_this->VideoCallBtn, EwLoadString( 
  &ResVideoCallTxt ));
  ApplicationPushButtonMediumBlue_OnSetDescrip( &_this->VideoCallBtn, EwLoadString( 
  &_Const0028 ));
  CoreRectView__OnSetBounds( &_this->PushButtonMediumBlue2, _Const0029 );
  ApplicationPushButtonMediumBlue_OnSetIcon( &_this->PushButtonMediumBlue2, EwLoadString( 
  &ResMessageIconTxt ));
  ApplicationPushButtonMediumBlue_OnSetDescrip( &_this->PushButtonMediumBlue2, EwLoadString( 
  &_Const002A ));
  CoreView_OnSetLayout((CoreView)&_this->ContactName, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->ContactName, _Const002B );
  ViewsText_OnSetAlignment( &_this->ContactName, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ContactName, EwLoadString( &_Const002C ));
  ViewsText_OnSetColor( &_this->ContactName, ResBlack );
  CoreRectView__OnSetBounds( &_this->UserInitialsBtn, _Const002D );
  CoreRectView__OnSetBounds( &_this->EditBtn, _Const002E );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->EditBtn, EwLoadString( &ResEditIconTxt ));
  CoreRectView__OnSetBounds( &_this->BackBtn, _Const002F );
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
  _this->EditBtn.OnActivate = EwNewSlot( _this, ApplicationContactDetailsPage_onTapEdit );
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

  _this->call = EwNewObject( ApplicationCallPage, 0 );
  _this->call->OnEndCall = EwNewSlot( _this, ApplicationContactDetailsPage_onCallEnd );
  ApplicationCallPage_OnSetContact( _this->call, _this->Contact );
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->call ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::ContactDetailsPage.onCallEnd()' */
void ApplicationContactDetailsPage_onCallEnd( ApplicationContactDetailsPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->call ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
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
    _this->Contact->LastName, EwLoadString( &_Const0030 )), _this->Contact->FirstName ));
    ViewsText_OnSetString( &_this->NumberTxt, _this->Contact->PhoneNumber );
    ApplicationPushButtonBig_OnSetLabel( &_this->UserInitialsBtn, ApplicationContacts_GetInitials( 
    EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), _this->Contact->LastName, 
    _this->Contact->FirstName ));
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
  CoreRectView__OnSetBounds( _this, _Const0031 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0032 );
  ViewsImage_OnSetColor( &_this->Background, _Const0013 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0033 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0034 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0035 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0036 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->IconTxt, _Const0037 );
  ViewsText_OnSetString( &_this->IconTxt, 0 );
  ViewsText_OnSetColor( &_this->IconTxt, _Const0013 );
  CoreRectView__OnSetBounds( &_this->DescripTxt, _Const0038 );
  ViewsText_OnSetColor( &_this->DescripTxt, ResBlueLight );
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

  if ( !isEnabled )
    ViewsImage_OnSetColor( &_this->Background, ResBlue );
  else
    if ( isPressed )
      ViewsImage_OnSetColor( &_this->Background, ResBlue );
    else
      if ( isSelected )
        ViewsImage_OnSetColor( &_this->Background, ResBlueLight );
      else
        ViewsImage_OnSetColor( &_this->Background, _Const0039 );

  if ( &_this->IconTxt != 0 )
  {
    XColor clr = ResWhite;
    ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont20, ResourcesFont ));
    ViewsText_OnSetString( &_this->IconTxt, _this->Icon );
    ViewsText_OnSetColor( &_this->IconTxt, clr );
  }

  if ( &_this->DescripTxt != 0 )
  {
    XColor clr = ResBlueLight;
    ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, 
    ResourcesFont ));
    ViewsText_OnSetString( &_this->DescripTxt, _this->Descrip );
    ViewsText_OnSetColor( &_this->DescripTxt, clr );
  }

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

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationPushButtonBig );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const003A );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const003A );
  ViewsImage_OnSetColor( &_this->Background, _Const0013 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const003B );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const003C );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const003D );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0036 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Text, _Const003A );
  ViewsText_OnSetString( &_this->Text, 0 );
  ViewsText_OnSetColor( &_this->Text, _Const0013 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationPushButtonBig_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonBig_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundBig, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationPushButtonBig_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationPushButtonBig_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationPushButtonBig_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonBig_onPressTouch );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResIconsFont30, ResourcesFont ));
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
  ViewsImage_OnSetColor( &_this->Background, ResGery );

  if ( &_this->Text != 0 )
  {
    ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResTitileFont25, ResourcesFont ));
    ViewsText_OnSetString( &_this->Text, _this->Label );
    ViewsText_OnSetColor( &_this->Text, _Const0013 );
  }

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

/* 'C' function for method : 'Application::PushButtonBig.OnSetLabel()' */
void ApplicationPushButtonBig_OnSetLabel( ApplicationPushButtonBig _this, XString 
  value )
{
  if ( !EwCompString( _this->Label, value ))
    return;

  _this->Label = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::PushButtonBig' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPushButtonBig )
EW_END_OF_CLASS_VARIANTS( ApplicationPushButtonBig )

/* Virtual Method Table (VMT) for the class : 'Application::PushButtonBig' */
EW_DEFINE_CLASS( ApplicationPushButtonBig, TemplatesPushButton, FlashTimer, FlashTimer, 
                 FlashTimer, FlashTimer, Label, enabled, "Application::PushButtonBig" )
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
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationPushButtonSmall );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const003E );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const003E );
  ViewsImage_OnSetColor( &_this->Background, _Const0013 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const003F );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0040 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0041 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0036 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Text, _Const003E );
  ViewsText_OnSetString( &_this->Text, 0 );
  ViewsText_OnSetColor( &_this->Text, _Const0013 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationPushButtonSmall_onFlashTimer );
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonSmall_onPressKey );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &ResButtonRoundSmall, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationPushButtonSmall_onEnterLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationPushButtonSmall_onEnterLeaveTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationPushButtonSmall_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationPushButtonSmall_onPressTouch );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResIconsFont25, ResourcesFont ));
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
  ViewsText__ReInit( &_this->Text );
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

  if ( &_this->Text != 0 )
  {
    ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResContactFont12, ResourcesFont ));
    ViewsText_OnSetString( &_this->Text, _this->Label );
    ViewsText_OnSetColor( &_this->Text, _Const0013 );
  }

  ViewsImage_OnSetColor( &_this->Background, ResGery );
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
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

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

  if ( !( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin ))
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the button's area. */
void ApplicationPushButtonSmall_onPressTouch( ApplicationPushButtonSmall _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
}

/* 'C' function for method : 'Application::PushButtonSmall.OnSetLabel()' */
void ApplicationPushButtonSmall_OnSetLabel( ApplicationPushButtonSmall _this, XString 
  value )
{
  if ( !EwCompString( _this->Label, value ))
    return;

  _this->Label = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::PushButtonSmall' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPushButtonSmall )
EW_END_OF_CLASS_VARIANTS( ApplicationPushButtonSmall )

/* Virtual Method Table (VMT) for the class : 'Application::PushButtonSmall' */
EW_DEFINE_CLASS( ApplicationPushButtonSmall, TemplatesPushButton, FlashTimer, FlashTimer, 
                 FlashTimer, FlashTimer, Label, enabled, "Application::PushButtonSmall" )
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
  CoreRectView__OnSetBounds( _this, _Const003E );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const003E );
  ViewsImage_OnSetColor( &_this->Background, _Const0013 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const003F );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0040 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0041 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0036 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Text, _Const003E );
  ViewsText_OnSetString( &_this->Text, 0 );
  ViewsText_OnSetColor( &_this->Text, _Const0013 );
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
  ViewsImage_OnSetColor( &_this->Background, _Const001F );

  if ( &_this->Text != 0 )
  {
    ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResIconsFont25, ResourcesFont ));
    ViewsText_OnSetString( &_this->Text, _this->Label );
    ViewsText_OnSetColor( &_this->Text, _Const0039 );
  }

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
  CoreRectView__OnSetBounds( _this, _Const0042 );
  _this->blinkEffect.Value2 = 0;
  _this->blinkEffect.Value1 = 1;
  EffectsBoolEffect_OnSetCycleDuration( &_this->blinkEffect, 500 );
  EffectsBoolEffect_OnSetInterCycleDelay( &_this->blinkEffect, 500 );
  _this->Color = _Const0043;
  _this->CursorKeyHandler.Filter = CoreKeyCodeCursorKeys;
  _this->BackspaceKeyHandler.Filter = CoreKeyCodeBackspace;
  _this->DeleteKeyHandler.Filter = CoreKeyCodeDelete;
  _this->NewlineKeyHandler.Filter = CoreKeyCodeEnter;
  _this->CharacterKeyHandler.Filter = CoreKeyCodeCharacterKeys;
  CoreRectView__OnSetBounds( &_this->Frame, _Const0044 );
  ViewsFrame_OnSetColor( &_this->Frame, _Const0045 );
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0010 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.050000f );
  CoreView_OnSetLayout((CoreView)&_this->SimpleTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0019 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0046 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0047 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0036 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->SimpleTouchHandler, 3 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0048 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0049 ));
  ViewsText_OnSetColor( &_this->Text, _Const004A );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, _Const004B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, _Const0034 );
  ViewsLine_OnSetWidth2( &_this->Caret, 2 );
  ViewsLine_OnSetWidth1( &_this->Caret, 2 );
  ViewsLine_OnSetColor( &_this->Caret, _Const0043 );
  ViewsLine_OnSetVisible( &_this->Caret, 0 );
  CoreView_OnSetLayout((CoreView)&_this->Search, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Search, _Const004C );
  ViewsText_OnSetWrapText( &_this->Search, 1 );
  ViewsText_OnSetString( &_this->Search, EwLoadString( &ResSerachIconTxt ));
  ViewsText_OnSetColor( &_this->Search, _Const004A );
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
      _Const0036 );
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
    EwMovePointPos( EwNewPoint( width * 2, height * 2 ), _Const004D )));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectOrigin( _this->magnifyingBack->Super1.Bounds, 
    _Const004E ));
    ViewsRectangle_OnSetColor( _this->magnifyingBack, _Const004F );
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
  &_Const0050 ), _this->caretIndex ));
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
    str = EwConcatStringChar( EwLoadString( &_Const0051 ), ch );

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
  ViewsText__Init( &_this->AddPhotoTxt, &_this->_.XObject, 0 );
  ApplicationPushButtonBig__Init( &_this->UserInitials, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TitleTxt, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->PushButton, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->CloseButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactAddPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0052 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const0053 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const0054 );
  ViewsLine_OnSetColor( &_this->Line4, _Const001A );
  CoreView_OnSetLayout((CoreView)&_this->PhoneNumberTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->PhoneNumberTxt, _Const0055 );
  ApplicationInputEtxt_OnSetString( &_this->PhoneNumberTxt, 0 );
  ApplicationInputEtxt_OnSetColor( &_this->PhoneNumberTxt, ResGeryLight );
  ApplicationInputEtxt_OnSetPlaceholder( &_this->PhoneNumberTxt, EwLoadString( &_Const0056 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line3, _Const0057 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line3, _Const0058 );
  ViewsLine_OnSetColor( &_this->Line3, _Const001A );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const0059 );
  ApplicationInputEtxt_OnSetString( &_this->FirstNameTxt, 0 );
  ApplicationInputEtxt_OnSetColor( &_this->FirstNameTxt, ResGeryLight );
  ApplicationInputEtxt_OnSetPlaceholder( &_this->FirstNameTxt, EwLoadString( &_Const005A ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const005B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const005C );
  ViewsLine_OnSetColor( &_this->Line2, _Const001A );
  CoreView_OnSetLayout((CoreView)&_this->LastNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const005D );
  ApplicationInputEtxt_OnSetString( &_this->LastNameTxt, 0 );
  ApplicationInputEtxt_OnSetColor( &_this->LastNameTxt, ResGeryLight );
  ApplicationInputEtxt_OnSetPlaceholder( &_this->LastNameTxt, EwLoadString( &_Const005E ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const005F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const0060 );
  ViewsLine_OnSetColor( &_this->Line1, _Const001A );
  CoreView_OnSetLayout((CoreView)&_this->AddPhotoTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->AddPhotoTxt, _Const0061 );
  ViewsText_OnSetAlignment( &_this->AddPhotoTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->AddPhotoTxt, EwLoadString( &_Const0062 ));
  ViewsText_OnSetColor( &_this->AddPhotoTxt, ResBlueLight );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const0063 );
  CoreRectView__OnSetBounds( &_this->TitleTxt, _Const0064 );
  ViewsText_OnSetString( &_this->TitleTxt, EwLoadString( &_Const0065 ));
  ViewsText_OnSetColor( &_this->TitleTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->PushButton, _Const002E );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->PushButton, EwLoadString( 
  &ResCkeckIconTxt ));
  CoreRectView__OnSetBounds( &_this->CloseButton, _Const002F );
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
  CoreGroup__Add( _this, ((CoreView)&_this->AddPhotoTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UserInitials ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CloseButton ), 0 );
  _this->PhoneNumberTxt.OnChange = EwNewSlot( _this, ApplicationContactAddPage_onContactUpdated );
  _this->FirstNameTxt.OnChange = EwNewSlot( _this, ApplicationContactAddPage_onContactUpdated );
  _this->LastNameTxt.OnChange = EwNewSlot( _this, ApplicationContactAddPage_onContactUpdated );
  ViewsText_OnSetFont( &_this->AddPhotoTxt, EwLoadResource( &ResContactFont15, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TitleTxt, EwLoadResource( &ResContactFontBold15, 
  ResourcesFont ));
  _this->PushButton.OnActivate = EwNewSlot( _this, ApplicationContactAddPage_onSave );
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
  ViewsText__ReInit( &_this->AddPhotoTxt );
  ApplicationPushButtonBig__ReInit( &_this->UserInitials );
  ViewsText__ReInit( &_this->TitleTxt );
  ApplicationPushButtonNoBackground__ReInit( &_this->PushButton );
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
  ViewsText__Done( &_this->AddPhotoTxt );
  ApplicationPushButtonBig__Done( &_this->UserInitials );
  ViewsText__Done( &_this->TitleTxt );
  ApplicationPushButtonNoBackground__Done( &_this->PushButton );
  ApplicationPushButtonNoBackground__Done( &_this->CloseButton );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
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
  EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), ApplicationInputEtxt_OnGetString( 
  &_this->LastNameTxt ), ApplicationInputEtxt_OnGetString( &_this->FirstNameTxt )));
  ApplicationPushButtonBig_OnSetLabel( &_this->UserInitials, _this->Contact->NameInitials );
}

/* 'C' function for method : 'Application::ContactAddPage.onClose()' */
void ApplicationContactAddPage_onClose( ApplicationContactAddPage _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnClose, ((XObject)_this ));
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
  CoreGroup_UpdateViewState,
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
  ViewsText__Init( &_this->AddPhotoTxt, &_this->_.XObject, 0 );
  ApplicationPushButtonBig__Init( &_this->UserInitials, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->CloseBtn, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->SaveBtn, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactEditPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreRectView__OnSetBounds( &_this->DeleteBtn, _Const0066 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->DeleteBtn, 1 );
  ApplicationPushButtonDelete_OnSetLabel( &_this->DeleteBtn, EwLoadString( &_Const0067 ));
  CoreView_OnSetLayout((CoreView)&_this->NumberTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->NumberTxt, _Const0068 );
  ApplicationInputEtxt_OnSetAlignment( &_this->NumberTxt, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ApplicationInputEtxt_OnSetString( &_this->NumberTxt, EwLoadString( &_Const0069 ));
  ApplicationInputEtxt_OnSetColor( &_this->NumberTxt, ResBlueLight );
  ApplicationInputEtxt_OnSetPlaceholder( &_this->NumberTxt, EwLoadString( &_Const0069 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const006A );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const006B );
  ViewsLine_OnSetColor( &_this->Line4, _Const001A );
  CoreView_OnSetLayout((CoreView)&_this->MobileTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->MobileTxt, _Const006C );
  ViewsText_OnSetAlignment( &_this->MobileTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->MobileTxt, EwLoadString( &_Const0022 ));
  ViewsText_OnSetColor( &_this->MobileTxt, ResGery );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line3, _Const006D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line3, _Const006E );
  ViewsLine_OnSetColor( &_this->Line3, _Const001A );
  CoreView_OnSetLayout((CoreView)&_this->FirstNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->FirstNameTxt, _Const006F );
  ApplicationInputEtxt_OnSetString( &_this->FirstNameTxt, EwLoadString( &_Const0070 ));
  ApplicationInputEtxt_OnSetColor( &_this->FirstNameTxt, ResBlack );
  ApplicationInputEtxt_OnSetPlaceholder( &_this->FirstNameTxt, EwLoadString( &_Const0070 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const0071 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const0072 );
  ViewsLine_OnSetColor( &_this->Line2, _Const001A );
  CoreView_OnSetLayout((CoreView)&_this->LastNameTxt, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->LastNameTxt, _Const0073 );
  ApplicationInputEtxt_OnSetString( &_this->LastNameTxt, EwLoadString( &_Const0074 ));
  ApplicationInputEtxt_OnSetColor( &_this->LastNameTxt, ResBlack );
  ApplicationInputEtxt_OnSetPlaceholder( &_this->LastNameTxt, EwLoadString( &_Const0074 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const0075 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const0076 );
  ViewsLine_OnSetColor( &_this->Line1, _Const001A );
  CoreView_OnSetLayout((CoreView)&_this->AddPhotoTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->AddPhotoTxt, _Const0077 );
  ViewsText_OnSetAlignment( &_this->AddPhotoTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->AddPhotoTxt, EwLoadString( &_Const0062 ));
  ViewsText_OnSetColor( &_this->AddPhotoTxt, ResBlueLight );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const002D );
  CoreRectView__OnSetBounds( &_this->CloseBtn, _Const002F );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->CloseBtn, EwLoadString( 
  &ResCloseIconTxt ));
  CoreRectView__OnSetBounds( &_this->SaveBtn, _Const002E );
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
  CoreGroup__Add( _this, ((CoreView)&_this->AddPhotoTxt ), 0 );
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
  ViewsText_OnSetFont( &_this->AddPhotoTxt, EwLoadResource( &ResContactFont15, ResourcesFont ));
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
  ViewsText__ReInit( &_this->AddPhotoTxt );
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
  ViewsText__Done( &_this->AddPhotoTxt );
  ApplicationPushButtonBig__Done( &_this->UserInitials );
  ApplicationPushButtonNoBackground__Done( &_this->CloseBtn );
  ApplicationPushButtonNoBackground__Done( &_this->SaveBtn );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
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
  EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), _this->Contact->LastName, 
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

  ApplicationContacts_Remove( EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), 
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
    ApplicationPushButtonBig_OnSetLabel( &_this->UserInitials, _this->Contact->NameInitials );
  }
}

/* 'C' function for method : 'Application::ContactEditPage.onFieldModified()' */
void ApplicationContactEditPage_onFieldModified( ApplicationContactEditPage _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationPushButtonBig_OnSetLabel( &_this->UserInitials, ApplicationContacts_GetInitials( 
  EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), ApplicationInputEtxt_OnGetString( 
  &_this->LastNameTxt ), ApplicationInputEtxt_OnGetString( &_this->FirstNameTxt )));
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
  CoreGroup_UpdateViewState,
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

  /* Create and initialize the suitable class variant */
  EwAttachObjectVariant( &_this->_.XObject, aLink, aArg );
}

/* Re-Initializer for the class 'Application::Contacts' */
void ApplicationContacts__ReInit( ApplicationContacts _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );

  /* Reinitialize the variant */
  if ( _this->_vthis )
    _this->_vthis->_.VMT->_ReInit( &_this->_.XObject );
}

/* Finalizer method for the class 'Application::Contacts' */
void ApplicationContacts__Done( ApplicationContacts _this )
{
  /* Deinitialize the variant */
  EwDetachObjectVariant( &_this->_.XObject );

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
  EW_STATIC_CLASS_VARIANT( ApplicationVariantContacts ),
EW_END_OF_CLASS_VARIANTS( ApplicationContacts )

/* Virtual Method Table (VMT) for the class : 'Application::Contacts' */
EW_DEFINE_CLASS( ApplicationContacts, XObject, head, NoOfItems, NoOfItems, NoOfItems, 
                 NoOfItems, NoOfItems, "Application::Contacts" )
EW_END_OF_CLASS( ApplicationContacts )

/* User defined auto object: 'Application::MyContacts' */
EW_DEFINE_AUTOOBJECT( ApplicationMyContacts, ApplicationContacts )

/* Initializer for the auto object 'Application::MyContacts' */
void ApplicationMyContacts__Init( ApplicationContacts _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::MyContacts' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationMyContacts )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationMyContacts )

/* Initializer for the class variant 'Application::VariantContacts' */
void ApplicationVariantContacts__Init( ApplicationContacts _this, XObject aLink, XHandle aArg )
{
  ApplicationVariantContacts _vthis = (ApplicationVariantContacts)_this->_vthis;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aLink );

  /* Allow the Immediate Garbage Collection to evalute the members of this class variant. */
  _vthis->_.XObject._.GCT = EW_VCLASS_GCT( ApplicationVariantContacts );

  /* Setup the VMT pointer */
  _vthis->_.VMT = EW_VCLASS( ApplicationVariantContacts );

  /* Call the user defined constructor */
  ApplicationVariantContacts_Init( _this, aArg );
}

/* Re-Initializer for the class variant 'Application::VariantContacts' */
void ApplicationVariantContacts__ReInit( ApplicationContacts _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Finalizer method for the class variant 'Application::VariantContacts' */
void ApplicationVariantContacts__Done( ApplicationContacts _this )
{
  ApplicationVariantContacts _vthis = (ApplicationVariantContacts)_this->_vthis;

  /* Finalize this class */
  _vthis->_.VMT = 0;
}

/* 'C' function for method : 'Application::VariantContacts.Init()' */
void ApplicationVariantContacts_Init( ApplicationContacts _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ApplicationVariantContacts_CreateContactData( _this );
}

/* 'C' function for method : 'Application::VariantContacts.CreateContact()' */
void ApplicationVariantContacts_CreateContact( ApplicationContacts _this, XString 
  aLastName, XString aFirstName, XString aPhoneNumber )
{
  ApplicationContact MyContact = EwNewObject( ApplicationContact, 0 );

  ApplicationContact_OnSetFirstName( MyContact, aFirstName );
  ApplicationContact_OnSetLastName( MyContact, aLastName );
  ApplicationContact_OnSetPhoneNumber( MyContact, aPhoneNumber );
  ApplicationContacts_Add((ApplicationContacts)_this, MyContact );
}

/* 'C' function for method : 'Application::VariantContacts.CreateContactData()' */
void ApplicationVariantContacts_CreateContactData( ApplicationContacts _this )
{
  ApplicationVariantContacts_CreateContact( _this, EwLoadString( &_Const0078 ), 
  EwLoadString( &_Const0079 ), EwLoadString( &_Const007A ));
  ApplicationVariantContacts_CreateContact( _this, EwLoadString( &_Const007B ), 
  EwLoadString( &_Const007C ), EwLoadString( &_Const007D ));
  ApplicationVariantContacts_CreateContact( _this, EwLoadString( &_Const007E ), 
  EwLoadString( &_Const007F ), EwLoadString( &_Const0080 ));
  ApplicationVariantContacts_CreateContact( _this, EwLoadString( &_Const0081 ), 
  EwLoadString( &_Const0082 ), EwLoadString( &_Const0083 ));
  ApplicationContacts_insertionSort((ApplicationContacts)_this );
}

/* Variants derived from the class : 'Application::VariantContacts' */
EW_DEFINE_CLASS_VARIANTS( ApplicationVariantContacts )
EW_END_OF_CLASS_VARIANTS( ApplicationVariantContacts )

/* Virtual Method Table (VMT) for the class variant : 'Application::VariantContacts' */
EW_DEFINE_VCLASS( ApplicationVariantContacts, XObject, ApplicationContacts, _.VMT, 
                  _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, "Application::VariantContacts" )
EW_END_OF_VCLASS( ApplicationVariantContacts )

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
  CoreRectView__OnSetBounds( _this, _Const0042 );
  _this->blinkEffect.Value2 = 0;
  _this->blinkEffect.Value1 = 1;
  EffectsBoolEffect_OnSetCycleDuration( &_this->blinkEffect, 500 );
  EffectsBoolEffect_OnSetInterCycleDelay( &_this->blinkEffect, 500 );
  _this->Alignment = ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter;
  _this->String = EwShareString( EwLoadString( &_Const0084 ));
  _this->Color = _Const0043;
  _this->CursorKeyHandler.Filter = CoreKeyCodeCursorKeys;
  _this->BackspaceKeyHandler.Filter = CoreKeyCodeBackspace;
  _this->Placeholder = EwShareString( EwLoadString( &_Const0085 ));
  _this->DeleteKeyHandler.Filter = CoreKeyCodeDelete;
  _this->NewlineKeyHandler.Filter = CoreKeyCodeEnter;
  _this->CharacterKeyHandler.Filter = CoreKeyCodeCharacterKeys;
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0010 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.050000f );
  CoreView_OnSetLayout((CoreView)&_this->SimpleTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0019 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0046 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0047 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0036 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->SimpleTouchHandler, 3 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0086 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0087 ));
  ViewsText_OnSetColor( &_this->Text, _Const0088 );
  CoreView_OnSetLayout((CoreView)&_this->TextPlaceholder, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextPlaceholder, _Const0089 );
  ViewsText_OnSetAlignment( &_this->TextPlaceholder, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextPlaceholder, 0 );
  ViewsText_OnSetColor( &_this->TextPlaceholder, _Const004A );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, _Const008A );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, _Const008B );
  ViewsLine_OnSetWidth2( &_this->Caret, 2 );
  ViewsLine_OnSetWidth1( &_this->Caret, 2 );
  ViewsLine_OnSetColor( &_this->Caret, _Const0043 );
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
      _Const0036 );
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
    EwMovePointPos( EwNewPoint( width * 2, height * 2 ), _Const004D )));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectOrigin( _this->magnifyingBack->Super1.Bounds, 
    _Const004E ));
    ViewsRectangle_OnSetColor( _this->magnifyingBack, _Const004F );
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
  &_Const0050 ), _this->caretIndex ));
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
    str = EwConcatStringChar( EwLoadString( &_Const0051 ), ch );

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
  ViewsText_OnSetScrollOffset( &_this->Text, _Const0036 );
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
    str = EwStringInsert( str, EwLoadString( &_Const0051 ), inx );
    inx = EwStringFindChar( str, '%', inx + 2 );
  }

  inx = EwStringFindChar( str, '^', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const0051 ), inx );
    inx = EwStringFindChar( str, '^', inx + 2 );
  }

  inx = EwStringFindChar( str, '~', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const0051 ), inx );
    inx = EwStringFindChar( str, '~', inx + 2 );
  }

  inx = EwStringFindChar( str, 0x00AD, 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const0051 ), inx );
    inx = EwStringFindChar( str, 0x00AD, inx + 2 );
  }

  if ( _this->caretIndex > EwGetStringLength( str ))
    _this->caretIndex = EwGetStringLength( str );

  ViewsText_OnSetString( &_this->Text, EwConcatString( str, EwLoadString( &_Const008C )));
  _this->autoScroll = 1;
  ViewsText_OnSetScrollOffset( &_this->Text, _Const0036 );
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
  ViewsText_OnSetScrollOffset( &_this->Text, _Const0036 );
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

  if ( !EwCompString( ApplicationInputEtxt_OnGetString( _this ), EwLoadString( &_Const0087 )))
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
  CoreRectView__OnSetBounds( _this, _Const008D );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const008E );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0013 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const008F );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0090 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0091 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0036 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Text, _Const0092 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0067 ));
  ViewsText_OnSetColor( &_this->Text, _Const0093 );
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

  if ( !isEnabled )
    ViewsRectangle_OnSetColor( &_this->Background, ResWhiteTransparent );
  else
    if ( isPressed )
      ViewsRectangle_OnSetColor( &_this->Background, ResWhiteTransparent );
    else
      if ( isSelected )
        ViewsRectangle_OnSetColor( &_this->Background, ResWhiteTransparent );
      else
        ViewsRectangle_OnSetColor( &_this->Background, _Const001F );

  if ( &_this->Text != 0 )
  {
    XColor clr = ResRed;
    ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResContactFont15, ResourcesFont ));
    ViewsText_OnSetString( &_this->Text, _this->Label );
    ViewsText_OnSetColor( &_this->Text, clr );

    if ( !isEnabled )
    {
      XColor cl = ResGery;
      ViewsText_OnSetColor( &_this->Text, cl );
    }
  }

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

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationCallPage );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const0094 );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const0095 );
  ViewsRectangle_OnSetColorTR( &_this->Background, _Const0096 );
  ViewsRectangle_OnSetColorTL( &_this->Background, _Const0096 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0097 );
  CoreRectView__OnSetBounds( &_this->EndCallBtn, _Const0098 );
  ApplicationPushButtonMediumRed_OnSetLabel( &_this->EndCallBtn, EwLoadString( &ResEndCallTxt ));
  CoreRectView__OnSetBounds( &_this->ContactsBtn, _Const0099 );
  ApplicationPushButtonMediumTrans_OnSetIcon( &_this->ContactsBtn, EwLoadString( 
  &ResUserIconTxt ));
  ApplicationPushButtonMediumTrans_OnSetDescript( &_this->ContactsBtn, EwLoadString( 
  &_Const009A ));
  CoreRectView__OnSetBounds( &_this->VideoCallBtn, _Const009B );
  ApplicationPushButtonMediumTrans_OnSetIcon( &_this->VideoCallBtn, EwLoadString( 
  &ResVideoCallTxt ));
  ApplicationPushButtonMediumTrans_OnSetDescript( &_this->VideoCallBtn, EwLoadString( 
  &_Const009C ));
  CoreRectView__OnSetBounds( &_this->AddCallBtn, _Const009D );
  ApplicationPushButtonMediumTrans_OnSetIcon( &_this->AddCallBtn, EwLoadString( 
  &ResPlusIconTxt ));
  ApplicationPushButtonMediumTrans_OnSetDescript( &_this->AddCallBtn, EwLoadString( 
  &_Const009E ));
  CoreRectView__OnSetBounds( &_this->SpeakerBtn, _Const009F );
  ApplicationPushButtonMediumTrans_OnSetIcon( &_this->SpeakerBtn, EwLoadString( 
  &ResSpeakerTxt ));
  ApplicationPushButtonMediumTrans_OnSetDescript( &_this->SpeakerBtn, EwLoadString( 
  &_Const00A0 ));
  CoreRectView__OnSetBounds( &_this->KeyPadBtn, _Const00A1 );
  ApplicationPushButtonMediumTrans_OnSetIcon( &_this->KeyPadBtn, EwLoadString( &ResKeypadTxt ));
  ApplicationPushButtonMediumTrans_OnSetDescript( &_this->KeyPadBtn, EwLoadString( 
  &_Const00A2 ));
  CoreRectView__OnSetBounds( &_this->MuteBtn, _Const00A3 );
  ApplicationPushButtonMediumTrans_OnSetIcon( &_this->MuteBtn, EwLoadString( &ResMicTxt ));
  ApplicationPushButtonMediumTrans_OnSetDescript( &_this->MuteBtn, EwLoadString( 
  &_Const00A4 ));
  CoreView_OnSetLayout((CoreView)&_this->TimeTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->TimeTxt, _Const00A5 );
  ViewsText_OnSetAlignment( &_this->TimeTxt, ViewsTextAlignmentAlignHorzCenter | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TimeTxt, EwLoadString( &_Const00A6 ));
  ViewsText_OnSetColor( &_this->TimeTxt, _Const00A7 );
  CoreRectView__OnSetBounds( &_this->UserInitials, _Const00A8 );
  CoreView_OnSetLayout((CoreView)&_this->ContactNameTxt, CoreLayoutAlignToLeft | 
  CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->ContactNameTxt, _Const00A9 );
  ViewsText_OnSetAlignment( &_this->ContactNameTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ContactNameTxt, EwLoadString( &_Const002C ));
  ViewsText_OnSetColor( &_this->ContactNameTxt, _Const00A7 );
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

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
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
    _this->Contact->LastName, EwLoadString( &_Const0030 )), _this->Contact->FirstName ));
    ApplicationPushButtonBig_OnSetLabel( &_this->UserInitials, ApplicationContacts_GetInitials( 
    EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), _this->Contact->LastName, 
    _this->Contact->FirstName ));
  }
}

/* 'C' function for method : 'Application::CallPage.onEndCallPress()' */
void ApplicationCallPage_onEndCallPress( ApplicationCallPage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnEndCall, ((XObject)_this ));
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

  _this->keypadPage = EwNewObject( ApplicationKeypad, 0 );
  _this->keypadPage->OnHide = EwNewSlot( _this, ApplicationCallPage_onHide );
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->keypadPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
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

  _this->contactsPage = EwNewObject( ApplicationContactsCall, 0 );
  _this->contactsPage->OnCancel = EwNewSlot( _this, ApplicationCallPage_onCancel );
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->contactsPage ), 
  ((EffectsTransition)EwGetAutoObject( &ResSlideUpCentered, EffectsSlideTransition )), 
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

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->keypadPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResFadeInOutCentered, EffectsFadeInOutTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* Variants derived from the class : 'Application::CallPage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationCallPage )
EW_END_OF_CLASS_VARIANTS( ApplicationCallPage )

/* Virtual Method Table (VMT) for the class : 'Application::CallPage' */
EW_DEFINE_CLASS( ApplicationCallPage, CoreGroup, Contact, OnEndCall, Background, 
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
  CoreRectView__OnSetBounds( _this, _Const00AA );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const00AB );
  ViewsImage_OnSetColor( &_this->Background, _Const0013 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00AC );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00AD );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00AE );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0036 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->IconTxt, _Const00AB );
  ViewsText_OnSetString( &_this->IconTxt, 0 );
  ViewsText_OnSetColor( &_this->IconTxt, _Const0013 );
  CoreView_OnSetLayout((CoreView)&_this->DescripTxt, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->DescripTxt, _Const00AF );
  ViewsText_OnSetAlignment( &_this->DescripTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DescripTxt, 0 );
  _this->ButtonColor = ResWhiteTransparent;
  _this->IconColor = ResWhite;
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

  if ( !isEnabled )
    ViewsImage_OnSetColor( &_this->Background, _this->ButtonColor );
  else
    if ( isPressed )
      ViewsImage_OnSetColor( &_this->Background, ResWhiteSemiTransparent );
    else
      ViewsImage_OnSetColor( &_this->Background, _this->ButtonColor );

  if ( &_this->IconTxt != 0 )
  {
    XColor clr = _this->IconColor;
    ViewsText_OnSetFont( &_this->IconTxt, EwLoadResource( &ResIconsFont25, ResourcesFont ));
    ViewsText_OnSetString( &_this->IconTxt, _this->Icon );
    ViewsText_OnSetColor( &_this->IconTxt, clr );
  }

  if ( &_this->DescripTxt != 0 )
  {
    XColor clr = ResWhite;
    ViewsText_OnSetFont( &_this->DescripTxt, EwLoadResource( &ResContactFont12, 
    ResourcesFont ));
    ViewsText_OnSetString( &_this->DescripTxt, _this->Descript );
    ViewsText_OnSetColor( &_this->DescripTxt, clr );
  }

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
  CoreRectView__OnSetBounds( _this, _Const00AB );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const00AB );
  ViewsImage_OnSetColor( &_this->Background, _Const0013 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00AC );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00AD );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00AE );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0036 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Text, _Const00AB );
  ViewsText_OnSetString( &_this->Text, 0 );
  ViewsText_OnSetColor( &_this->Text, _Const0013 );
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
    ViewsText_OnSetColor( &_this->Text, _Const0013 );
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

/* Variants derived from the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( ApplicationDeviceClass )
EW_END_OF_CLASS_VARIANTS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS( ApplicationDeviceClass, TemplatesDeviceClass, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Application::DeviceClass" )
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

/* Initializer for the class 'Application::ContactsCall' */
void ApplicationContactsCall__Init( ApplicationContactsCall _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContactsCall );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->VerticalList, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->UpButton, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->DownButton, &_this->_.XObject, 0 );
  ApplicationSearchEtxt__Init( &_this->SearchExt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TitleTxt, &_this->_.XObject, 0 );
  ApplicationPushButtonNoBackground__Init( &_this->PlusButton, &_this->_.XObject, 0 );
  ApplicationTextButton__Init( &_this->CancelBtn, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContactsCall );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const00B0 );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const00B1 );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 35 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( ApplicationContactItem ));
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToLeft 
  | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const00B2 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const0003 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const00B3 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const00B4 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const00B5 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const00B6 );
  _this->SimpleTouchHandler.RetargetCondition = CoreRetargetReasonLongPress | CoreRetargetReasonWipeDown 
  | CoreRetargetReasonWipeLeft | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreRectView__OnSetBounds( &_this->UpButton, _Const00B7 );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->UpButton, EwLoadString( 
  &ResUptxt ));
  CoreRectView__OnSetBounds( &_this->DownButton, _Const00B8 );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->DownButton, EwLoadString( 
  &ResDownTxt ));
  CoreRectView__OnSetBounds( &_this->SearchExt, _Const00B9 );
  ApplicationSearchEtxt_OnSetColor( &_this->SearchExt, ResGery );
  CoreRectView__OnSetBounds( &_this->TitleTxt, _Const00BA );
  ViewsText_OnSetAlignment( &_this->TitleTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TitleTxt, EwLoadString( &_Const000C ));
  ViewsText_OnSetColor( &_this->TitleTxt, ResBlack );
  CoreRectView__OnSetBounds( &_this->PlusButton, _Const00BB );
  ApplicationPushButtonNoBackground_OnSetLabel( &_this->PlusButton, EwLoadString( 
  &ResPlusIconTxt ));
  CoreRectView__OnSetBounds( &_this->CancelBtn, _Const00BC );
  ApplicationTextButton_OnSetText( &_this->CancelBtn, EwLoadString( &_Const00BD ));
  ApplicationTextButton_OnSetTextColor( &_this->CancelBtn, ResBlueLight );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UpButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DownButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SearchExt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PlusButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CancelBtn ), 0 );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationContactsCall_OnLoadItem );
  CoreVerticalList_OnSetSlideHandler( &_this->VerticalList, &_this->SlideTouchHandler );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ApplicationContactsCall_onTapContact );
  _this->UpButton.OnActivate = EwNewSlot( _this, ApplicationContactsCall_onUpPress );
  _this->DownButton.OnActivate = EwNewSlot( _this, ApplicationContactsCall_onDownPress );
  _this->SearchExt.OnChange = EwNewSlot( _this, ApplicationContactsCall_onSearch );
  ViewsText_OnSetFont( &_this->TitleTxt, EwLoadResource( &ResContactFontBold15, 
  ResourcesFont ));
  _this->PlusButton.OnActivate = EwNewSlot( _this, ApplicationContactsCall_onAddPress );
  _this->CancelBtn.OnActivate = EwNewSlot( _this, ApplicationContactsCall_onCancel );

  /* Call the user defined constructor */
  ApplicationContactsCall_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::ContactsCall' */
void ApplicationContactsCall__ReInit( ApplicationContactsCall _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  CoreVerticalList__ReInit( &_this->VerticalList );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ApplicationPushButtonNoBackground__ReInit( &_this->UpButton );
  ApplicationPushButtonNoBackground__ReInit( &_this->DownButton );
  ApplicationSearchEtxt__ReInit( &_this->SearchExt );
  ViewsText__ReInit( &_this->TitleTxt );
  ApplicationPushButtonNoBackground__ReInit( &_this->PlusButton );
  ApplicationTextButton__ReInit( &_this->CancelBtn );
}

/* Finalizer method for the class 'Application::ContactsCall' */
void ApplicationContactsCall__Done( ApplicationContactsCall _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  CoreVerticalList__Done( &_this->VerticalList );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ApplicationPushButtonNoBackground__Done( &_this->UpButton );
  ApplicationPushButtonNoBackground__Done( &_this->DownButton );
  ApplicationSearchEtxt__Done( &_this->SearchExt );
  ViewsText__Done( &_this->TitleTxt );
  ApplicationPushButtonNoBackground__Done( &_this->PlusButton );
  ApplicationTextButton__Done( &_this->CancelBtn );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationContactsCall_Init( ApplicationContactsCall _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationContactsCall_onNoOfContactsChanged ), 
    EwNewRef( EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), ApplicationContacts_OnGetNoOfItems, 
    ApplicationContacts_OnSetNoOfItems ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationContactsCall_onNoOfContactsChanged ), 
    ((XObject)_this ));
}

/* 'C' function for method : 'Application::ContactsCall.onAddPress()' */
void ApplicationContactsCall_onAddPress( ApplicationContactsCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->addContact = EwNewObject( ApplicationContactAddPage, 0 );
  _this->addContact->OnSave = EwNewSlot( _this, ApplicationContactsCall_onSaveAdd );
  _this->addContact->OnClose = EwNewSlot( _this, ApplicationContactsCall_onCancelAdd );
  ApplicationContactAddPage_OnSetContact( _this->addContact, EwNewObject( ApplicationContact, 
  0 ));
  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->addContact ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideUpCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::ContactsCall.onSaveAdd()' */
void ApplicationContactsCall_onSaveAdd( ApplicationContactsCall _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationContacts_Add( EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), 
  _this->addContact->Contact );
  EwTrace( "%*", _this->addContact->Contact );
  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->addContact ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  _this->addContact = 0;
}

/* 'C' function for method : 'Application::ContactsCall.onCancelAdd()' */
void ApplicationContactsCall_onCancelAdd( ApplicationContactsCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->addContact ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideDownCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::ContactsCall.OnSetSelectedContact()' */
void ApplicationContactsCall_OnSetSelectedContact( ApplicationContactsCall _this, 
  XInt32 value )
{
  if ( _this->SelectedContact == value )
    return;

  _this->SelectedContact = value;
  EwNotifyRefObservers( EwNewRef( _this, ApplicationContactsCall_OnGetSelectedContact, 
    ApplicationContactsCall_OnSetSelectedContact ), 0 );
}

/* 'C' function for method : 'Application::ContactsCall.onDeleteContact()' */
void ApplicationContactsCall_onDeleteContact( ApplicationContactsCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_InvalidateItems( &_this->VerticalList, _this->SelectedContact, 
  _this->VerticalList.NoOfItems - 1 );
  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideRightCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::ContactsCall.onSearch()' */
void ApplicationContactsCall_onSearch( ApplicationContactsCall _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Application::ContactsCall.onTapContact()' */
void ApplicationContactsCall_onTapContact( ApplicationContactsCall _this, XObject 
  sender )
{
  XInt32 itemNo;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->detailsPage = EwNewObject( ApplicationContactDetailsPage, 0 );
  _this->detailsPage->OnBack = EwNewSlot( _this, ApplicationContactsCall_onCloseContact );
  _this->detailsPage->OnDelete = EwNewSlot( _this, ApplicationContactsCall_onDeleteContact );

  if ( _this->SimpleTouchHandler.AutoDeflected )
    return;

  itemNo = CoreVerticalList_GetItemAtPosition( &_this->VerticalList, _this->SimpleTouchHandler.CurrentPos );

  if ( itemNo >= 0 )
  {
    CoreVerticalList_OnSetSelectedItem( &_this->VerticalList, itemNo );
    ApplicationContactsCall_OnSetSelectedContact( _this, itemNo );
    ApplicationContactDetailsPage_OnSetContact( _this->detailsPage, ApplicationContacts_GetContact( 
    EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), itemNo ));
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)_this->detailsPage ), 
    ((EffectsTransition)EwGetAutoObject( &ResSlideLeftCentered, EffectsSlideTransition )), 
    0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  }
}

/* 'C' function for method : 'Application::ContactsCall.onCloseContact()' */
void ApplicationContactsCall_onCloseContact( ApplicationContactsCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_DismissDialog((CoreGroup)_this, ((CoreGroup)_this->detailsPage ), ((EffectsTransition)EwGetAutoObject( 
  &ResSlideRightCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
}

/* 'C' function for method : 'Application::ContactsCall.onUpPress()' */
void ApplicationContactsCall_onUpPress( ApplicationContactsCall _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationContactsCall_onSetAscending ), 
    EwNewRef( EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), ApplicationContacts_OnGetSorting, 
    ApplicationContacts_OnSetSorting ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationContactsCall_onSetAscending ), ((XObject)_this ));
  EwTrace( "%s", EwLoadString( &_Const000E ));
}

/* 'C' function for method : 'Application::ContactsCall.onDownPress()' */
void ApplicationContactsCall_onDownPress( ApplicationContactsCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationContactsCall_onSetDescending ), 
    EwNewRef( EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), ApplicationContacts_OnGetSorting, 
    ApplicationContacts_OnSetSorting ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationContactsCall_onSetDescending ), ((XObject)_this ));
  EwTrace( "%s", EwLoadString( &_Const000F ));
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationContactsCall_OnLoadItem( ApplicationContactsCall _this, XObject 
  sender )
{
  XInt32 itemNo;
  ApplicationContact contact;
  ApplicationContactItem itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  contact = ApplicationContacts_GetContact( EwGetAutoObject( &ApplicationMyContacts, 
  ApplicationContacts ), itemNo );
  itemView = EwCastObject( _this->VerticalList.View, ApplicationContactItem );

  if ( itemView == 0 )
    return;

  if ( contact != 0 )
    ApplicationContactItem_OnSetContact( itemView, contact );

  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->VerticalList.Super2.Bounds ), _this->VerticalList.ItemHeight )));
}

/* 'C' function for method : 'Application::ContactsCall.onSetAscending()' */
void ApplicationContactsCall_onSetAscending( ApplicationContactsCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationContacts_OnSetSorting( EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), 
  ApplicationSortingAscending );
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
}

/* 'C' function for method : 'Application::ContactsCall.onSetDescending()' */
void ApplicationContactsCall_onSetDescending( ApplicationContactsCall _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationContacts_OnSetSorting( EwGetAutoObject( &ApplicationMyContacts, ApplicationContacts ), 
  ApplicationSortingDescending );
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
}

/* 'C' function for method : 'Application::ContactsCall.onNoOfContactsChanged()' */
void ApplicationContactsCall_onNoOfContactsChanged( ApplicationContactsCall _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, EwGetAutoObject( &ApplicationMyContacts, 
  ApplicationContacts )->NoOfItems );
}

/* 'C' function for method : 'Application::ContactsCall.onCancel()' */
void ApplicationContactsCall_onCancel( ApplicationContactsCall _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnCancel, ((XObject)_this ));
}

/* Default onget method for the property 'SelectedContact' */
XInt32 ApplicationContactsCall_OnGetSelectedContact( ApplicationContactsCall _this )
{
  return _this->SelectedContact;
}

/* Variants derived from the class : 'Application::ContactsCall' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContactsCall )
EW_END_OF_CLASS_VARIANTS( ApplicationContactsCall )

/* Virtual Method Table (VMT) for the class : 'Application::ContactsCall' */
EW_DEFINE_CLASS( ApplicationContactsCall, CoreGroup, addContact, OnCancel, Background, 
                 Background, SelectedContact, SelectedContact, "Application::ContactsCall" )
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
EW_END_OF_CLASS( ApplicationContactsCall )

/* Initializer for the class 'Application::Keypad' */
void ApplicationKeypad__Init( ApplicationKeypad _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationKeypad );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->KeyPadButtons, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->KeyPadButtons1, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->KeyPadButtons2, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->KeyPadButtons3, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->KeyPadButtons4, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->KeyPadButtons5, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->KeyPadButtons6, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->KeyPadButtons7, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->KeyPadButtons8, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->KeyPadButtons9, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->KeyPadButtons10, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->KeyPadButtons11, &_this->_.XObject, 0 );
  ApplicationKeyPadButtons__Init( &_this->KeyPadButtons14, &_this->_.XObject, 0 );
  ApplicationInputEtxt__Init( &_this->InputEtxt, &_this->_.XObject, 0 );
  ApplicationTextButton__Init( &_this->HideBtn, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationKeypad );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  CoreRectView__OnSetBounds( &_this->KeyPadButtons, _Const00BE );
  ApplicationKeyPadButtons_OnSetText( &_this->KeyPadButtons, EwLoadString( &_Const00BF ));
  CoreRectView__OnSetBounds( &_this->KeyPadButtons1, _Const00C0 );
  ApplicationKeyPadButtons_OnSetText( &_this->KeyPadButtons1, EwLoadString( &_Const00C1 ));
  CoreRectView__OnSetBounds( &_this->KeyPadButtons2, _Const00C2 );
  ApplicationKeyPadButtons_OnSetText( &_this->KeyPadButtons2, EwLoadString( &_Const00C3 ));
  CoreRectView__OnSetBounds( &_this->KeyPadButtons3, _Const00C4 );
  ApplicationKeyPadButtons_OnSetText( &_this->KeyPadButtons3, EwLoadString( &_Const00C5 ));
  CoreRectView__OnSetBounds( &_this->KeyPadButtons4, _Const00C6 );
  ApplicationKeyPadButtons_OnSetText( &_this->KeyPadButtons4, EwLoadString( &_Const00C7 ));
  CoreRectView__OnSetBounds( &_this->KeyPadButtons5, _Const00C8 );
  ApplicationKeyPadButtons_OnSetText( &_this->KeyPadButtons5, EwLoadString( &_Const00C9 ));
  CoreRectView__OnSetBounds( &_this->KeyPadButtons6, _Const00CA );
  ApplicationKeyPadButtons_OnSetText( &_this->KeyPadButtons6, EwLoadString( &_Const00CB ));
  CoreRectView__OnSetBounds( &_this->KeyPadButtons7, _Const00CC );
  ApplicationKeyPadButtons_OnSetText( &_this->KeyPadButtons7, EwLoadString( &_Const00CD ));
  CoreRectView__OnSetBounds( &_this->KeyPadButtons8, _Const00CE );
  ApplicationKeyPadButtons_OnSetText( &_this->KeyPadButtons8, EwLoadString( &_Const00CF ));
  CoreRectView__OnSetBounds( &_this->KeyPadButtons9, _Const00D0 );
  ApplicationKeyPadButtons_OnSetText( &_this->KeyPadButtons9, EwLoadString( &_Const00D1 ));
  CoreRectView__OnSetBounds( &_this->KeyPadButtons10, _Const00D2 );
  ApplicationKeyPadButtons_OnSetText( &_this->KeyPadButtons10, EwLoadString( &_Const00D3 ));
  CoreRectView__OnSetBounds( &_this->KeyPadButtons11, _Const00D4 );
  ApplicationKeyPadButtons_OnSetText( &_this->KeyPadButtons11, EwLoadString( &_Const00D5 ));
  CoreRectView__OnSetBounds( &_this->KeyPadButtons14, _Const00D6 );
  ApplicationKeyPadButtons_OnSetIcon( &_this->KeyPadButtons14, EwLoadString( &ResCallTxt ));
  ApplicationKeyPadButtons_OnSetButtonColor( &_this->KeyPadButtons14, ResGreen );
  CoreRectView__OnSetBounds( &_this->InputEtxt, _Const00D7 );
  ApplicationInputEtxt_OnSetString( &_this->InputEtxt, 0 );
  CoreRectView__OnSetBounds( &_this->HideBtn, _Const00D8 );
  ApplicationTextButton_OnSetText( &_this->HideBtn, EwLoadString( &_Const00D9 ));
  ApplicationTextButton_OnSetTextColor( &_this->HideBtn, ResBlack );
  _this->BackgoundColor = ResWhiteSemiTransparent;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->KeyPadButtons ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->KeyPadButtons1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->KeyPadButtons2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->KeyPadButtons3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->KeyPadButtons4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->KeyPadButtons5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->KeyPadButtons6 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->KeyPadButtons7 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->KeyPadButtons8 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->KeyPadButtons9 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->KeyPadButtons10 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->KeyPadButtons11 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->KeyPadButtons14 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->InputEtxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HideBtn ), 0 );
  _this->HideBtn.OnActivate = EwNewSlot( _this, ApplicationKeypad_onHide );
}

/* Re-Initializer for the class 'Application::Keypad' */
void ApplicationKeypad__ReInit( ApplicationKeypad _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ApplicationKeyPadButtons__ReInit( &_this->KeyPadButtons );
  ApplicationKeyPadButtons__ReInit( &_this->KeyPadButtons1 );
  ApplicationKeyPadButtons__ReInit( &_this->KeyPadButtons2 );
  ApplicationKeyPadButtons__ReInit( &_this->KeyPadButtons3 );
  ApplicationKeyPadButtons__ReInit( &_this->KeyPadButtons4 );
  ApplicationKeyPadButtons__ReInit( &_this->KeyPadButtons5 );
  ApplicationKeyPadButtons__ReInit( &_this->KeyPadButtons6 );
  ApplicationKeyPadButtons__ReInit( &_this->KeyPadButtons7 );
  ApplicationKeyPadButtons__ReInit( &_this->KeyPadButtons8 );
  ApplicationKeyPadButtons__ReInit( &_this->KeyPadButtons9 );
  ApplicationKeyPadButtons__ReInit( &_this->KeyPadButtons10 );
  ApplicationKeyPadButtons__ReInit( &_this->KeyPadButtons11 );
  ApplicationKeyPadButtons__ReInit( &_this->KeyPadButtons14 );
  ApplicationInputEtxt__ReInit( &_this->InputEtxt );
  ApplicationTextButton__ReInit( &_this->HideBtn );
}

/* Finalizer method for the class 'Application::Keypad' */
void ApplicationKeypad__Done( ApplicationKeypad _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ApplicationKeyPadButtons__Done( &_this->KeyPadButtons );
  ApplicationKeyPadButtons__Done( &_this->KeyPadButtons1 );
  ApplicationKeyPadButtons__Done( &_this->KeyPadButtons2 );
  ApplicationKeyPadButtons__Done( &_this->KeyPadButtons3 );
  ApplicationKeyPadButtons__Done( &_this->KeyPadButtons4 );
  ApplicationKeyPadButtons__Done( &_this->KeyPadButtons5 );
  ApplicationKeyPadButtons__Done( &_this->KeyPadButtons6 );
  ApplicationKeyPadButtons__Done( &_this->KeyPadButtons7 );
  ApplicationKeyPadButtons__Done( &_this->KeyPadButtons8 );
  ApplicationKeyPadButtons__Done( &_this->KeyPadButtons9 );
  ApplicationKeyPadButtons__Done( &_this->KeyPadButtons10 );
  ApplicationKeyPadButtons__Done( &_this->KeyPadButtons11 );
  ApplicationKeyPadButtons__Done( &_this->KeyPadButtons14 );
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
void ApplicationKeypad_UpdateViewState( ApplicationKeypad _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  ViewsRectangle_OnSetColor( &_this->Background, _this->BackgoundColor );
}

/* 'C' function for method : 'Application::Keypad.onHide()' */
void ApplicationKeypad_onHide( ApplicationKeypad _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnHide, ((XObject)_this ));
}

/* Variants derived from the class : 'Application::Keypad' */
EW_DEFINE_CLASS_VARIANTS( ApplicationKeypad )
EW_END_OF_CLASS_VARIANTS( ApplicationKeypad )

/* Virtual Method Table (VMT) for the class : 'Application::Keypad' */
EW_DEFINE_CLASS( ApplicationKeypad, CoreGroup, OnHide, OnHide, Background, Background, 
                 BackgoundColor, BackgoundColor, "Application::Keypad" )
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
  ApplicationKeypad_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationKeypad )

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
  CoreRectView__OnSetBounds( _this, _Const00AB );
  _this->ButtonColor = ResGeryLight;
  _this->IconColor = ResWhite;
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const00AB );
  ViewsImage_OnSetColor( &_this->Background, _Const0013 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00AC );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00AD );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00AE );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0036 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->IconTxt, _Const00AB );
  ViewsText_OnSetString( &_this->IconTxt, 0 );
  ViewsText_OnSetColor( &_this->IconTxt, _Const0013 );
  CoreRectView__OnSetBounds( &_this->DescripTxt, _Const00AB );
  ViewsText_OnSetString( &_this->DescripTxt, 0 );
  ViewsText_OnSetColor( &_this->DescripTxt, _Const0013 );
  _this->TextColor = ResBlack;
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

  if ( !isEnabled )
    ViewsImage_OnSetColor( &_this->Background, _this->ButtonColor );
  else
    if ( isPressed )
      ViewsImage_OnSetColor( &_this->Background, ResGery );
    else
      ViewsImage_OnSetColor( &_this->Background, _this->ButtonColor );

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

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationKeyPadButtons_onFlashTimer( ApplicationKeyPadButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
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
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

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

  if ( !( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin ))
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the button's area. */
void ApplicationKeyPadButtons_onPressTouch( ApplicationKeyPadButtons _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FlashTimer.Enabled )
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
}

/* Variants derived from the class : 'Application::KeyPadButtons' */
EW_DEFINE_CLASS_VARIANTS( ApplicationKeyPadButtons )
EW_END_OF_CLASS_VARIANTS( ApplicationKeyPadButtons )

/* Virtual Method Table (VMT) for the class : 'Application::KeyPadButtons' */
EW_DEFINE_CLASS( ApplicationKeyPadButtons, TemplatesPushButton, FlashTimer, FlashTimer, 
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
  ViewsText__Init( &_this->TextTxt, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationTextButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00DA );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const003F );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00DB );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00DC );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0036 );
  _this->TouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeLeft 
  | CoreRetargetReasonWipeRight | CoreRetargetReasonWipeUp;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->TextTxt, _Const00DA );
  ViewsText_OnSetString( &_this->TextTxt, 0 );
  ViewsText_OnSetColor( &_this->TextTxt, _Const0013 );
  _this->TextColor = ResWhite;
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
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
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );

  if ( &_this->TextTxt != 0 )
  {
    XColor clr = _this->TextColor;
    ViewsText_OnSetFont( &_this->TextTxt, EwLoadResource( &ResContactFont15, ResourcesFont ));
    ViewsText_OnSetString( &_this->TextTxt, _this->Text );
    ViewsText_OnSetColor( &_this->TextTxt, clr );
  }
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

/* Embedded Wizard */
