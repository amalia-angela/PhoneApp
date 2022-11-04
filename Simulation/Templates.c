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
#include "_TemplatesDeviceClass.h"
#include "_TemplatesPushButton.h"
#include "_TemplatesTextEditor.h"
#include "Templates.h"

/* Initializer for the class 'Templates::PushButton' */
void TemplatesPushButton__Init( TemplatesPushButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( TemplatesPushButton );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( TemplatesPushButton );
}

/* Re-Initializer for the class 'Templates::PushButton' */
void TemplatesPushButton__ReInit( TemplatesPushButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Templates::PushButton' */
void TemplatesPushButton__Done( TemplatesPushButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Templates::PushButton' */
EW_DEFINE_CLASS_VARIANTS( TemplatesPushButton )
EW_END_OF_CLASS_VARIANTS( TemplatesPushButton )

/* Virtual Method Table (VMT) for the class : 'Templates::PushButton' */
EW_DEFINE_CLASS( TemplatesPushButton, CoreGroup, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Templates::PushButton" )
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
EW_END_OF_CLASS( TemplatesPushButton )

/* Initializer for the class 'Templates::TextEditor' */
void TemplatesTextEditor__Init( TemplatesTextEditor _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( TemplatesTextEditor );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( TemplatesTextEditor );
}

/* Re-Initializer for the class 'Templates::TextEditor' */
void TemplatesTextEditor__ReInit( TemplatesTextEditor _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Templates::TextEditor' */
void TemplatesTextEditor__Done( TemplatesTextEditor _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Templates::TextEditor' */
EW_DEFINE_CLASS_VARIANTS( TemplatesTextEditor )
EW_END_OF_CLASS_VARIANTS( TemplatesTextEditor )

/* Virtual Method Table (VMT) for the class : 'Templates::TextEditor' */
EW_DEFINE_CLASS( TemplatesTextEditor, CoreGroup, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Templates::TextEditor" )
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
EW_END_OF_CLASS( TemplatesTextEditor )

/* Initializer for the class 'Templates::DeviceClass' */
void TemplatesDeviceClass__Init( TemplatesDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( TemplatesDeviceClass );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( TemplatesDeviceClass );
}

/* Re-Initializer for the class 'Templates::DeviceClass' */
void TemplatesDeviceClass__ReInit( TemplatesDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Templates::DeviceClass' */
void TemplatesDeviceClass__Done( TemplatesDeviceClass _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Templates::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( TemplatesDeviceClass )
EW_END_OF_CLASS_VARIANTS( TemplatesDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Templates::DeviceClass' */
EW_DEFINE_CLASS( TemplatesDeviceClass, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Templates::DeviceClass" )
EW_END_OF_CLASS( TemplatesDeviceClass )

/* Embedded Wizard */
