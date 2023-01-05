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

#ifndef Core_H
#define Core_H

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

/* Global constant containing the preferred size of the screen in pixel. */
extern const XPoint EwScreenSize;

/* Global constant containing the main application class. */
extern const XClass EwApplicationClass;

/* Global constant containing the user defined application title. */
extern const char* EwApplicationTitle;

/* The definition Core::ViewState determines the set of possible states, a Core::View 
   can assume at its lifetime. These states are used internally by all GUI components. 
   They determine whether components are visible, able to react to user events, 
   etc. */
typedef XSet CoreViewState;

#define CoreViewStateVisible                                0x00000001
#define CoreViewStateAlphaBlended                           0x00000002
#define CoreViewStateFocusable                              0x00000004
#define CoreViewStateTouchable                              0x00000008
#define CoreViewStateEnabled                                0x00000010
#define CoreViewStateSelected                               0x00000020
#define CoreViewStateFocused                                0x00000040
#define CoreViewStateModal                                  0x00000080
#define CoreViewStateFastReshape                            0x00000100
#define CoreViewStateIsOutline                              0x00000200
#define CoreViewStateEmbedded                               0x00000400
#define CoreViewStateRequestLayout                          0x00000800
#define CoreViewStateUpdateLayout                           0x00001000
#define CoreViewStateUpdatingLayout                         0x00002000
#define CoreViewStatePendingLayout                          0x00004000
#define CoreViewStatePendingViewState                       0x00008000
#define CoreViewStateDialog                                 0x00010000
#define CoreViewStatePendingFader                           0x00020000
#define CoreViewStateRunningFader                           0x00040000

/* The definition Core::Layout determines the set of available arrangement constraints 
   to apply on views during the automatic GUI arrangement. Each view can determine 
   its own set of constraints how it want to behave when e.g. its owner changes 
   the size.
   The constraints @ResizeVert and @ResizeHorz e.g. determine the resize behavior 
   of the view in response to the size modification of its owner. Views with these 
   constraints disabled always will keep their size unchanged. In conflict cases 
   when the alignment and resize constraints do contradict, the view will maintain 
   its size and will be pulled into the middle area resulting by the alignment constraints.
   In case of views automatically arranged in rows or columns within a Core::Outline, 
   the alignment constraints determine the vertical or horizontal alignment of the 
   view within the corresponding row or column. The resize constraints in this case 
   enable the view to fill the entire height of a column or the entire width of 
   a row. */
typedef XSet CoreLayout;

#define CoreLayoutResizeHorz                                0x00000001
#define CoreLayoutResizeVert                                0x00000002
#define CoreLayoutAlignToLeft                               0x00000004
#define CoreLayoutAlignToRight                              0x00000008
#define CoreLayoutAlignToTop                                0x00000010
#define CoreLayoutAlignToBottom                             0x00000020

/* The definition Core::Formation determines the available arrangement modes to 
   apply on all views embedded within a Core::Outline view. Depending on the mode, 
   the embedded views can be arranged in rows or columns. If the mode == Core::Formation.None, 
   no automatic row/column arrangement is performed and the views are simply aligned 
   inside the outline boundary area. */
typedef XEnum CoreFormation;

#define CoreFormationNone                                   0
#define CoreFormationTopToBottom                            1
#define CoreFormationBottomToTop                            2
#define CoreFormationLeftToRight                            3
#define CoreFormationRightToLeft                            4
#define CoreFormationTopToBottom_LeftToRight                5
#define CoreFormationTopToBottom_RightToLeft                6
#define CoreFormationBottomToTop_LeftToRight                7
#define CoreFormationBottomToTop_RightToLeft                8
#define CoreFormationLeftToRight_TopToBottom                9
#define CoreFormationLeftToRight_BottomToTop                10
#define CoreFormationRightToLeft_TopToBottom                11
#define CoreFormationRightToLeft_BottomToTop                12

/* The definition Core::Direction determines available directions the user can navigate 
   in the GUI. */
typedef XEnum CoreDirection;

#define CoreDirectionNone                                   0
#define CoreDirectionTopLeft                                1
#define CoreDirectionLeft                                   2
#define CoreDirectionBottomLeft                             3
#define CoreDirectionTop                                    4
#define CoreDirectionBottom                                 5
#define CoreDirectionTopRight                               6
#define CoreDirectionRight                                  7
#define CoreDirectionBottomRight                            8

/* The enumeration Core::KeyCode provides a set of predefined keyboard codes very 
   common to mobile and remote control devices, e.g. Menu, Left, Up, Ok, Exit, Play, 
   Record, etc. The usage of these predefined key codes increases the platform independence 
   of your GUI application. For special key codes, which are not included in this 
   set, a range of UserXX key codes is provided.
   Beside the key codes the enumeration also provides some few key categories like 
   AlphaKeys, DigitKeys or CursorKeys. They stand for an entire range of key codes 
   and are used when key codes are evaluated or filtered by the Core::KeyPressHandler. */
typedef XEnum CoreKeyCode;

#define CoreKeyCodeNoKey                                    0
#define CoreKeyCodeOk                                       1
#define CoreKeyCodeExit                                     2
#define CoreKeyCodeMenu                                     3
#define CoreKeyCodeUp                                       4
#define CoreKeyCodeDown                                     5
#define CoreKeyCodeLeft                                     6
#define CoreKeyCodeRight                                    7
#define CoreKeyCodePageUp                                   8
#define CoreKeyCodePageDown                                 9
#define CoreKeyCodeKey0                                     10
#define CoreKeyCodeKey1                                     11
#define CoreKeyCodeKey2                                     12
#define CoreKeyCodeKey3                                     13
#define CoreKeyCodeKey4                                     14
#define CoreKeyCodeKey5                                     15
#define CoreKeyCodeKey6                                     16
#define CoreKeyCodeKey7                                     17
#define CoreKeyCodeKey8                                     18
#define CoreKeyCodeKey9                                     19
#define CoreKeyCodeRed                                      20
#define CoreKeyCodeGreen                                    21
#define CoreKeyCodeBlue                                     22
#define CoreKeyCodeYellow                                   23
#define CoreKeyCodeWhite                                    24
#define CoreKeyCodeMagenta                                  25
#define CoreKeyCodeF1                                       26
#define CoreKeyCodeF2                                       27
#define CoreKeyCodeF3                                       28
#define CoreKeyCodeF4                                       29
#define CoreKeyCodeF5                                       30
#define CoreKeyCodeF6                                       31
#define CoreKeyCodeF7                                       32
#define CoreKeyCodeF8                                       33
#define CoreKeyCodeF9                                       34
#define CoreKeyCodeF10                                      35
#define CoreKeyCodeChannelUp                                36
#define CoreKeyCodeChannelDown                              37
#define CoreKeyCodeDisplay                                  38
#define CoreKeyCodeSkipPrev                                 39
#define CoreKeyCodeSkipNext                                 40
#define CoreKeyCodeHome                                     41
#define CoreKeyCodeEnd                                      42
#define CoreKeyCodeInsert                                   43
#define CoreKeyCodeDelete                                   44
#define CoreKeyCodeClear                                    45
#define CoreKeyCodeVolumeUp                                 46
#define CoreKeyCodeVolumeDown                               47
#define CoreKeyCodeShow                                     48
#define CoreKeyCodeHide                                     49
#define CoreKeyCodePlay                                     50
#define CoreKeyCodePause                                    51
#define CoreKeyCodeRecord                                   52
#define CoreKeyCodeStop                                     53
#define CoreKeyCodeRev                                      54
#define CoreKeyCodeFwd                                      55
#define CoreKeyCodeSlowRev                                  56
#define CoreKeyCodeSlowFwd                                  57
#define CoreKeyCodeSkipBwd                                  58
#define CoreKeyCodeSkipFwd                                  59
#define CoreKeyCodeRepeat                                   60
#define CoreKeyCodeEject                                    61
#define CoreKeyCodeHelp                                     62
#define CoreKeyCodeTV                                       63
#define CoreKeyCodeDVD                                      64
#define CoreKeyCodeVCR                                      65
#define CoreKeyCodeEPG                                      66
#define CoreKeyCodeOSD                                      67
#define CoreKeyCodeText                                     68
#define CoreKeyCodePIP                                      69
#define CoreKeyCodeAudio                                    70
#define CoreKeyCodeClock                                    71
#define CoreKeyCodeTimer                                    72
#define CoreKeyCodeNavigation                               73
#define CoreKeyCodeKaraoke                                  74
#define CoreKeyCodeGame                                     75
#define CoreKeyCodeSubtitle                                 76
#define CoreKeyCodeZoom                                     77
#define CoreKeyCodeIndex                                    78
#define CoreKeyCodeInfo                                     79
#define CoreKeyCodePower                                    80
#define CoreKeyCodeSetup                                    81
#define CoreKeyCodeAngle                                    82
#define CoreKeyCodeMode                                     83
#define CoreKeyCodeMute                                     84
#define CoreKeyCodeUser0                                    85
#define CoreKeyCodeUser1                                    86
#define CoreKeyCodeUser2                                    87
#define CoreKeyCodeUser3                                    88
#define CoreKeyCodeUser4                                    89
#define CoreKeyCodeUser5                                    90
#define CoreKeyCodeUser6                                    91
#define CoreKeyCodeUser7                                    92
#define CoreKeyCodeUser8                                    93
#define CoreKeyCodeUser9                                    94
#define CoreKeyCodeUser10                                   95
#define CoreKeyCodeUser11                                   96
#define CoreKeyCodeUser12                                   97
#define CoreKeyCodeUser13                                   98
#define CoreKeyCodeUser14                                   99
#define CoreKeyCodeUser15                                   100
#define CoreKeyCodeUser16                                   101
#define CoreKeyCodeUser17                                   102
#define CoreKeyCodeUser18                                   103
#define CoreKeyCodeUser19                                   104
#define CoreKeyCodeKeyA                                     105
#define CoreKeyCodeKeyB                                     106
#define CoreKeyCodeKeyC                                     107
#define CoreKeyCodeKeyD                                     108
#define CoreKeyCodeKeyE                                     109
#define CoreKeyCodeKeyF                                     110
#define CoreKeyCodeKeyG                                     111
#define CoreKeyCodeKeyH                                     112
#define CoreKeyCodeKeyI                                     113
#define CoreKeyCodeKeyJ                                     114
#define CoreKeyCodeKeyK                                     115
#define CoreKeyCodeKeyL                                     116
#define CoreKeyCodeKeyM                                     117
#define CoreKeyCodeKeyN                                     118
#define CoreKeyCodeKeyO                                     119
#define CoreKeyCodeKeyP                                     120
#define CoreKeyCodeKeyQ                                     121
#define CoreKeyCodeKeyR                                     122
#define CoreKeyCodeKeyS                                     123
#define CoreKeyCodeKeyT                                     124
#define CoreKeyCodeKeyU                                     125
#define CoreKeyCodeKeyV                                     126
#define CoreKeyCodeKeyW                                     127
#define CoreKeyCodeKeyX                                     128
#define CoreKeyCodeKeyY                                     129
#define CoreKeyCodeKeyZ                                     130
#define CoreKeyCodeSpace                                    131
#define CoreKeyCodePlus                                     132
#define CoreKeyCodeMinus                                    133
#define CoreKeyCodeMultiply                                 134
#define CoreKeyCodeDivide                                   135
#define CoreKeyCodeEquals                                   136
#define CoreKeyCodePeriod                                   137
#define CoreKeyCodeComma                                    138
#define CoreKeyCodeColon                                    139
#define CoreKeyCodeSemicolon                                140
#define CoreKeyCodeAlphaKeys                                141
#define CoreKeyCodeAlphaOrDigitKeys                         142
#define CoreKeyCodeDigitKeys                                143
#define CoreKeyCodeHexDigitKeys                             144
#define CoreKeyCodeCharacterKeys                            145
#define CoreKeyCodeControlKeys                              146
#define CoreKeyCodeCursorKeys                               147
#define CoreKeyCodeAnyKey                                   148
#define CoreKeyCodeEnter                                    149
#define CoreKeyCodeEscape                                   150
#define CoreKeyCodeBackspace                                151
#define CoreKeyCodeTab                                      152
#define CoreKeyCodeCtrlKeyA                                 153
#define CoreKeyCodeCtrlKeyB                                 154
#define CoreKeyCodeCtrlKeyC                                 155
#define CoreKeyCodeCtrlKeyD                                 156
#define CoreKeyCodeCtrlKeyE                                 157
#define CoreKeyCodeCtrlKeyF                                 158
#define CoreKeyCodeCtrlKeyG                                 159
#define CoreKeyCodeCtrlKeyH                                 160
#define CoreKeyCodeCtrlKeyI                                 161
#define CoreKeyCodeCtrlKeyJ                                 162
#define CoreKeyCodeCtrlKeyK                                 163
#define CoreKeyCodeCtrlKeyL                                 164
#define CoreKeyCodeCtrlKeyM                                 165
#define CoreKeyCodeCtrlKeyN                                 166
#define CoreKeyCodeCtrlKeyO                                 167
#define CoreKeyCodeCtrlKeyP                                 168
#define CoreKeyCodeCtrlKeyQ                                 169
#define CoreKeyCodeCtrlKeyR                                 170
#define CoreKeyCodeCtrlKeyS                                 171
#define CoreKeyCodeCtrlKeyT                                 172
#define CoreKeyCodeCtrlKeyU                                 173
#define CoreKeyCodeCtrlKeyV                                 174
#define CoreKeyCodeCtrlKeyW                                 175
#define CoreKeyCodeCtrlKeyX                                 176
#define CoreKeyCodeCtrlKeyY                                 177
#define CoreKeyCodeCtrlKeyZ                                 178
#define CoreKeyCodeCtrlSpace                                179
#define CoreKeyCodeCtrlKey0                                 180
#define CoreKeyCodeCtrlKey1                                 181
#define CoreKeyCodeCtrlKey2                                 182
#define CoreKeyCodeCtrlKey3                                 183
#define CoreKeyCodeCtrlKey4                                 184
#define CoreKeyCodeCtrlKey5                                 185
#define CoreKeyCodeCtrlKey6                                 186
#define CoreKeyCodeCtrlKey7                                 187
#define CoreKeyCodeCtrlKey8                                 188
#define CoreKeyCodeCtrlKey9                                 189
#define CoreKeyCodeCtrlF1                                   190
#define CoreKeyCodeCtrlF2                                   191
#define CoreKeyCodeCtrlF3                                   192
#define CoreKeyCodeCtrlF4                                   193
#define CoreKeyCodeCtrlF5                                   194
#define CoreKeyCodeCtrlF6                                   195
#define CoreKeyCodeCtrlF7                                   196
#define CoreKeyCodeCtrlF8                                   197
#define CoreKeyCodeCtrlF9                                   198
#define CoreKeyCodeCtrlF10                                  199
#define CoreKeyCodeCtrlEnter                                200
#define CoreKeyCodeCtrlEscape                               201
#define CoreKeyCodeCtrlUp                                   202
#define CoreKeyCodeCtrlDown                                 203
#define CoreKeyCodeCtrlLeft                                 204
#define CoreKeyCodeCtrlRight                                205
#define CoreKeyCodeCtrlPageUp                               206
#define CoreKeyCodeCtrlPageDown                             207
#define CoreKeyCodeCtrlBackspace                            208
#define CoreKeyCodeCtrlInsert                               209
#define CoreKeyCodeCtrlDelete                               210
#define CoreKeyCodeCtrlHome                                 211
#define CoreKeyCodeCtrlEnd                                  212
#define CoreKeyCodeCtrlTab                                  213
#define CoreKeyCodeCtrlShiftKeyA                            214
#define CoreKeyCodeCtrlShiftKeyB                            215
#define CoreKeyCodeCtrlShiftKeyC                            216
#define CoreKeyCodeCtrlShiftKeyD                            217
#define CoreKeyCodeCtrlShiftKeyE                            218
#define CoreKeyCodeCtrlShiftKeyF                            219
#define CoreKeyCodeCtrlShiftKeyG                            220
#define CoreKeyCodeCtrlShiftKeyH                            221
#define CoreKeyCodeCtrlShiftKeyI                            222
#define CoreKeyCodeCtrlShiftKeyJ                            223
#define CoreKeyCodeCtrlShiftKeyK                            224
#define CoreKeyCodeCtrlShiftKeyL                            225
#define CoreKeyCodeCtrlShiftKeyM                            226
#define CoreKeyCodeCtrlShiftKeyN                            227
#define CoreKeyCodeCtrlShiftKeyO                            228
#define CoreKeyCodeCtrlShiftKeyP                            229
#define CoreKeyCodeCtrlShiftKeyQ                            230
#define CoreKeyCodeCtrlShiftKeyR                            231
#define CoreKeyCodeCtrlShiftKeyS                            232
#define CoreKeyCodeCtrlShiftKeyT                            233
#define CoreKeyCodeCtrlShiftKeyU                            234
#define CoreKeyCodeCtrlShiftKeyV                            235
#define CoreKeyCodeCtrlShiftKeyW                            236
#define CoreKeyCodeCtrlShiftKeyX                            237
#define CoreKeyCodeCtrlShiftKeyY                            238
#define CoreKeyCodeCtrlShiftKeyZ                            239
#define CoreKeyCodeCtrlShiftSpace                           240
#define CoreKeyCodeCtrlShiftKey0                            241
#define CoreKeyCodeCtrlShiftKey1                            242
#define CoreKeyCodeCtrlShiftKey2                            243
#define CoreKeyCodeCtrlShiftKey3                            244
#define CoreKeyCodeCtrlShiftKey4                            245
#define CoreKeyCodeCtrlShiftKey5                            246
#define CoreKeyCodeCtrlShiftKey6                            247
#define CoreKeyCodeCtrlShiftKey7                            248
#define CoreKeyCodeCtrlShiftKey8                            249
#define CoreKeyCodeCtrlShiftKey9                            250
#define CoreKeyCodeCtrlShiftF1                              251
#define CoreKeyCodeCtrlShiftF2                              252
#define CoreKeyCodeCtrlShiftF3                              253
#define CoreKeyCodeCtrlShiftF4                              254
#define CoreKeyCodeCtrlShiftF5                              255
#define CoreKeyCodeCtrlShiftF6                              256
#define CoreKeyCodeCtrlShiftF7                              257
#define CoreKeyCodeCtrlShiftF8                              258
#define CoreKeyCodeCtrlShiftF9                              259
#define CoreKeyCodeCtrlShiftF10                             260
#define CoreKeyCodeCtrlShiftEnter                           261
#define CoreKeyCodeCtrlShiftEscape                          262
#define CoreKeyCodeCtrlShiftUp                              263
#define CoreKeyCodeCtrlShiftDown                            264
#define CoreKeyCodeCtrlShiftLeft                            265
#define CoreKeyCodeCtrlShiftRight                           266
#define CoreKeyCodeCtrlShiftPageUp                          267
#define CoreKeyCodeCtrlShiftPageDown                        268
#define CoreKeyCodeCtrlShiftBackspace                       269
#define CoreKeyCodeCtrlShiftInsert                          270
#define CoreKeyCodeCtrlShiftDelete                          271
#define CoreKeyCodeCtrlShiftHome                            272
#define CoreKeyCodeCtrlShiftEnd                             273
#define CoreKeyCodeCtrlShiftTab                             274
#define CoreKeyCodeAltF1                                    275
#define CoreKeyCodeAltF2                                    276
#define CoreKeyCodeAltF3                                    277
#define CoreKeyCodeAltF4                                    278
#define CoreKeyCodeAltF5                                    279
#define CoreKeyCodeAltF6                                    280
#define CoreKeyCodeAltF7                                    281
#define CoreKeyCodeAltF8                                    282
#define CoreKeyCodeAltF9                                    283
#define CoreKeyCodeAltF10                                   284
#define CoreKeyCodeAltEnter                                 285
#define CoreKeyCodeAltEscape                                286
#define CoreKeyCodeAltUp                                    287
#define CoreKeyCodeAltDown                                  288
#define CoreKeyCodeAltLeft                                  289
#define CoreKeyCodeAltRight                                 290
#define CoreKeyCodeAltPageUp                                291
#define CoreKeyCodeAltPageDown                              292
#define CoreKeyCodeAltBackspace                             293
#define CoreKeyCodeAltInsert                                294
#define CoreKeyCodeAltDelete                                295
#define CoreKeyCodeAltHome                                  296
#define CoreKeyCodeAltEnd                                   297
#define CoreKeyCodeAltTab                                   298
#define CoreKeyCodeAltShiftF1                               299
#define CoreKeyCodeAltShiftF2                               300
#define CoreKeyCodeAltShiftF3                               301
#define CoreKeyCodeAltShiftF4                               302
#define CoreKeyCodeAltShiftF5                               303
#define CoreKeyCodeAltShiftF6                               304
#define CoreKeyCodeAltShiftF7                               305
#define CoreKeyCodeAltShiftF8                               306
#define CoreKeyCodeAltShiftF9                               307
#define CoreKeyCodeAltShiftF10                              308
#define CoreKeyCodeAltShiftEnter                            309
#define CoreKeyCodeAltShiftEscape                           310
#define CoreKeyCodeAltShiftUp                               311
#define CoreKeyCodeAltShiftDown                             312
#define CoreKeyCodeAltShiftLeft                             313
#define CoreKeyCodeAltShiftRight                            314
#define CoreKeyCodeAltShiftPageUp                           315
#define CoreKeyCodeAltShiftPageDown                         316
#define CoreKeyCodeAltShiftBackspace                        317
#define CoreKeyCodeAltShiftInsert                           318
#define CoreKeyCodeAltShiftDelete                           319
#define CoreKeyCodeAltShiftHome                             320
#define CoreKeyCodeAltShiftEnd                              321
#define CoreKeyCodeAltShiftTab                              322
#define CoreKeyCodeShiftF1                                  323
#define CoreKeyCodeShiftF2                                  324
#define CoreKeyCodeShiftF3                                  325
#define CoreKeyCodeShiftF4                                  326
#define CoreKeyCodeShiftF5                                  327
#define CoreKeyCodeShiftF6                                  328
#define CoreKeyCodeShiftF7                                  329
#define CoreKeyCodeShiftF8                                  330
#define CoreKeyCodeShiftF9                                  331
#define CoreKeyCodeShiftF10                                 332
#define CoreKeyCodeShiftEnter                               333
#define CoreKeyCodeShiftEscape                              334
#define CoreKeyCodeShiftUp                                  335
#define CoreKeyCodeShiftDown                                336
#define CoreKeyCodeShiftLeft                                337
#define CoreKeyCodeShiftRight                               338
#define CoreKeyCodeShiftPageUp                              339
#define CoreKeyCodeShiftPageDown                            340
#define CoreKeyCodeShiftBackspace                           341
#define CoreKeyCodeShiftInsert                              342
#define CoreKeyCodeShiftDelete                              343
#define CoreKeyCodeShiftHome                                344
#define CoreKeyCodeShiftEnd                                 345
#define CoreKeyCodeShiftTab                                 346

/* The definition Core::RetargetReason determines the set of possible reasons for 
   a touch handler to resign and pass over the current event processing to another 
   handler. */
typedef XSet CoreRetargetReason;

#define CoreRetargetReasonWipeUp                            0x00000001
#define CoreRetargetReasonWipeDown                          0x00000002
#define CoreRetargetReasonWipeLeft                          0x00000004
#define CoreRetargetReasonWipeRight                         0x00000008
#define CoreRetargetReasonLongPress                         0x00000010
#define CoreRetargetReasonForeignPress                      0x00000020

#ifdef __cplusplus
  }
#endif

#endif /* Core_H */

/* Embedded Wizard */
