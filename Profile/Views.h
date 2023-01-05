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

#ifndef Views_H
#define Views_H

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

#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_ViewsWarpGroup.h"
#include "_ViewsWarpView.h"

/* The definition Views::TextAlignment determines the set of constraints to apply 
   on text rows and blocks if their size differ from the size of the view where 
   the text is shown. Depending on the active constraints the text rows can be aligned 
   horizontally and text blocks vertically. */
typedef XSet ViewsTextAlignment;

#define ViewsTextAlignmentAlignHorzLeft                     0x00000001
#define ViewsTextAlignmentAlignHorzCenter                   0x00000002
#define ViewsTextAlignmentAlignHorzRight                    0x00000004
#define ViewsTextAlignmentAlignVertTop                      0x00000008
#define ViewsTextAlignmentAlignVertCenter                   0x00000010
#define ViewsTextAlignmentAlignVertBottom                   0x00000020
#define ViewsTextAlignmentAlignHorzJustified                0x00000040
#define ViewsTextAlignmentAlignHorzAuto                     0x00000080
#define ViewsTextAlignmentAlignVertCenterBaseline           0x00000100

/* The definition Views::Orientation determines the possible options to control 
   the orientation of the content displayed in the Views::Image, Views::Group and 
   Views::Text views. Depending on the selected option the view displays the content 
   rotated. */
typedef XEnum ViewsOrientation;

#define ViewsOrientationNormal                              0
#define ViewsOrientationRotated_90                          1
#define ViewsOrientationRotated_180                         2
#define ViewsOrientationRotated_270                         3

#ifdef __cplusplus
  }
#endif

#endif /* Views_H */

/* Embedded Wizard */
