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

#ifndef _ApplicationContact_H
#define _ApplicationContact_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x000B0000
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x000B0000
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

/* Forward declaration of the class Application::Contact */
#ifndef _ApplicationContact_
  EW_DECLARE_CLASS( ApplicationContact )
#define _ApplicationContact_
#endif


/* Deklaration of class : 'Application::Contact' */
EW_DEFINE_FIELDS( ApplicationContact, XObject )
  EW_VARIABLE( next,            ApplicationContact )
  EW_PROPERTY( FirstName,       XString )
  EW_PROPERTY( LastName,        XString )
  EW_PROPERTY( PhoneNumber,     XString )
  EW_PROPERTY( NameInitials,    XString )
EW_END_OF_FIELDS( ApplicationContact )

/* Virtual Method Table (VMT) for the class : 'Application::Contact' */
EW_DEFINE_METHODS( ApplicationContact, XObject )
EW_END_OF_METHODS( ApplicationContact )

/* 'C' function for method : 'Application::Contact.OnSetFirstName()' */
void ApplicationContact_OnSetFirstName( ApplicationContact _this, XString value );

/* 'C' function for method : 'Application::Contact.OnSetLastName()' */
void ApplicationContact_OnSetLastName( ApplicationContact _this, XString value );

/* 'C' function for method : 'Application::Contact.OnSetPhoneNumber()' */
void ApplicationContact_OnSetPhoneNumber( ApplicationContact _this, XString value );

/* 'C' function for method : 'Application::Contact.OnSetNameInitials()' */
void ApplicationContact_OnSetNameInitials( ApplicationContact _this, XString value );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationContact_H */

/* Embedded Wizard */
