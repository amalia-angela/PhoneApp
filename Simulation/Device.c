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
#include "_CoreTime.h"
#include "_CoreTimeSpan.h"
#include "_DeviceContact.h"
#include "_DeviceContactList.h"
#include "_DeviceContactListElement.h"
#include "_DeviceDeviceClass.h"
#include "_DeviceDeviceSimulation.h"
#include "_DeviceHistoryContact.h"
#include "Device.h"
#include "Strings.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x0000012C, /* ratio 64.00 % */
  0xB8000F00, 0x80084452, 0x00DC003A, 0x21A00308, 0xB4458182, 0xE0039800, 0x0036000D,
  0x200434E8, 0x33452090, 0x3800C800, 0x440151B3, 0x02126583, 0xE5322948, 0x9D10929A,
  0x07200454, 0x34959880, 0x00346E33, 0x8DC8E3F1, 0x0106090F, 0x46A666D0, 0x163B0D86,
  0xE2F2DA19, 0xF51002C6, 0xF0E90000, 0x630042E4, 0x986CCE26, 0xA2D0E200, 0xB9A6310C,
  0xC7A790DA, 0x126121A9, 0xA29382A4, 0xED572346, 0xB1006C6C, 0x00298004, 0x994D6840,
  0x9142A2D5, 0xA8421B14, 0x0009A00B, 0xE2EC001D, 0xAC745BD5, 0x531A8442, 0x81200606,
  0x89C39230, 0x9C56630B, 0x999A0017, 0xDE4A6B08, 0x00203A48, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XStringRes _Const0000 = { _StringsDefault0, 0x0002 };
static const XStringRes _Const0001 = { _StringsDefault0, 0x0009 };
static const XStringRes _Const0002 = { _StringsDefault0, 0x0011 };
static const XStringRes _Const0003 = { _StringsDefault0, 0x0018 };
static const XStringRes _Const0004 = { _StringsDefault0, 0x0022 };
static const XStringRes _Const0005 = { _StringsDefault0, 0x002C };
static const XStringRes _Const0006 = { _StringsDefault0, 0x0032 };
static const XStringRes _Const0007 = { _StringsDefault0, 0x003A };
static const XStringRes _Const0008 = { _StringsDefault0, 0x0041 };
static const XStringRes _Const0009 = { _StringsDefault0, 0x0046 };
static const XStringRes _Const000A = { _StringsDefault0, 0x004E };
static const XStringRes _Const000B = { _StringsDefault0, 0x0057 };
static const XStringRes _Const000C = { _StringsDefault0, 0x005D };
static const XStringRes _Const000D = { _StringsDefault0, 0x0067 };
static const XStringRes _Const000E = { _StringsDefault0, 0x0074 };
static const XStringRes _Const000F = { _StringsDefault0, 0x0084 };

/* Initializer for the class 'Device::Contact' */
void DeviceContact__Init( DeviceContact _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( DeviceContact );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( DeviceContact );

  /* Call the user defined constructor */
  DeviceContact_Init( _this, aArg );
}

/* Re-Initializer for the class 'Device::Contact' */
void DeviceContact__ReInit( DeviceContact _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Device::Contact' */
void DeviceContact__Done( DeviceContact _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Device::Contact.Init()' */
void DeviceContact_Init( DeviceContact _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  _this->ID = DeviceDeviceClass_GetNewID( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ));
}

/* 'C' function for method : 'Device::Contact.OnSetFirstName()' */
void DeviceContact_OnSetFirstName( DeviceContact _this, XString value )
{
  if ( !EwCompString( _this->FirstName, value ))
    return;

  _this->FirstName = EwShareString( value );
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::Contact.OnSetLastName()' */
void DeviceContact_OnSetLastName( DeviceContact _this, XString value )
{
  if ( !EwCompString( _this->LastName, value ))
    return;

  _this->LastName = EwShareString( value );
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::Contact.OnSetPhoneNumber()' */
void DeviceContact_OnSetPhoneNumber( DeviceContact _this, XString value )
{
  if ( !EwCompString( _this->PhoneNumber, value ))
    return;

  _this->PhoneNumber = EwShareString( value );
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::Contact.OnSetNameInitials()' */
void DeviceContact_OnSetNameInitials( DeviceContact _this, XString value )
{
  if ( !EwCompString( _this->NameInitials, value ))
    return;

  _this->NameInitials = EwShareString( value );
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::Contact.CopyDataTo()' */
DeviceContact DeviceContact_CopyDataTo( DeviceContact _this, DeviceContact aContact )
{
  DeviceContact_OnSetLastName( aContact, _this->LastName );
  DeviceContact_OnSetFirstName( aContact, _this->FirstName );
  DeviceContact_OnSetPhoneNumber( aContact, _this->PhoneNumber );
  DeviceContact_OnSetNameInitials( aContact, _this->NameInitials );
  return aContact;
}

/* 'C' function for method : 'Device::Contact.OnSetFavorite()' */
void DeviceContact_OnSetFavorite( DeviceContact _this, XBool value )
{
  if ( _this->Favorite == value )
    return;

  _this->Favorite = value;
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Variants derived from the class : 'Device::Contact' */
EW_DEFINE_CLASS_VARIANTS( DeviceContact )
EW_END_OF_CLASS_VARIANTS( DeviceContact )

/* Virtual Method Table (VMT) for the class : 'Device::Contact' */
EW_DEFINE_CLASS( DeviceContact, XObject, FirstName, FirstName, FirstName, FirstName, 
                 FirstName, ID, "Device::Contact" )
EW_END_OF_CLASS( DeviceContact )

/* Initializer for the class 'Device::DeviceClass' */
void DeviceDeviceClass__Init( DeviceDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesDeviceClass__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( DeviceDeviceClass );

  /* ... then construct all embedded objects */
  DeviceContactList__Init( &_this->Contacts, &_this->_.XObject, 0 );
  DeviceContactList__Init( &_this->History, &_this->_.XObject, 0 );
  DeviceContactList__Init( &_this->Favorites, &_this->_.XObject, 0 );
  DeviceContactList__Init( &_this->Search, &_this->_.XObject, 0 );
  DeviceContactList__Init( &_this->Ongoing, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( DeviceDeviceClass );

  /* Call the user defined constructor */
  DeviceDeviceClass_Init( _this, aArg );

  /* Create and initialize the suitable class variant */
  EwAttachObjectVariant( &_this->_.XObject, aLink, aArg );
}

/* Re-Initializer for the class 'Device::DeviceClass' */
void DeviceDeviceClass__ReInit( DeviceDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  TemplatesDeviceClass__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  DeviceContactList__ReInit( &_this->Contacts );
  DeviceContactList__ReInit( &_this->History );
  DeviceContactList__ReInit( &_this->Favorites );
  DeviceContactList__ReInit( &_this->Search );
  DeviceContactList__ReInit( &_this->Ongoing );

  /* Reinitialize the variant */
  if ( _this->_vthis )
    _this->_vthis->_.VMT->_ReInit( &_this->_.XObject );
}

/* Finalizer method for the class 'Device::DeviceClass' */
void DeviceDeviceClass__Done( DeviceDeviceClass _this )
{
  /* Deinitialize the variant */
  EwDetachObjectVariant( &_this->_.XObject );

  /* Call the user defined destructor of the class */
  DeviceDeviceClass_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesDeviceClass );

  /* Finalize all embedded objects */
  DeviceContactList__Done( &_this->Contacts );
  DeviceContactList__Done( &_this->History );
  DeviceContactList__Done( &_this->Favorites );
  DeviceContactList__Done( &_this->Search );
  DeviceContactList__Done( &_this->Ongoing );

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_.Super );
}

/* 'C' function for method : 'Device::DeviceClass.Done()' */
void DeviceDeviceClass_Done( DeviceDeviceClass _this )
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
       Device::DeviceClass. If you have stored this object at the initialization
       time (in the 'Init' method) in some global C variable or registered it by the
       middleware, it is important to perform now the opposite operation. Set the
       global variable to NULL or de-register 'thisObject' object from the middleware.

    */
  }
}

/* 'C' function for method : 'Device::DeviceClass.Init()' */
void DeviceDeviceClass_Init( DeviceDeviceClass _this, XHandle aArg )
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
       Device::DeviceClass. You can store this variable e.g. in the middleware
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

/* 'C' function for method : 'Device::DeviceClass.OnGetMicrophone()' */
XBool DeviceDeviceClass_OnGetMicrophone( DeviceDeviceClass _this )
{
  return _this->Microphone;
}

/* 'C' function for method : 'Device::DeviceClass.OnSetMicrophone()' */
void DeviceDeviceClass_OnSetMicrophone( DeviceDeviceClass _this, XBool value )
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
  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetMicrophone, DeviceDeviceClass_OnSetMicrophone ), 
    0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void DeviceDeviceClass_UpdateMicrophone( DeviceDeviceClass _this, XBool aNewValue )
{
  if ( aNewValue != _this->Microphone )
  {
    _this->Microphone = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetMicrophone, DeviceDeviceClass_OnSetMicrophone ), 
      0 );
  }
}

/* Wrapper function for the non virtual method : 'Device::DeviceClass.UpdateMicrophone()' */
__declspec( naked ) void DeviceDeviceClass__UpdateMicrophone( void* _this, XBool 
  aNewValue )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aNewValue );

  __asm jmp DeviceDeviceClass_UpdateMicrophone
}

/* 'C' function for method : 'Device::DeviceClass.OnGetSpeaker()' */
XBool DeviceDeviceClass_OnGetSpeaker( DeviceDeviceClass _this )
{
  return _this->Speaker;
}

/* 'C' function for method : 'Device::DeviceClass.OnSetSpeaker()' */
void DeviceDeviceClass_OnSetSpeaker( DeviceDeviceClass _this, XBool value )
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
  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetSpeaker, DeviceDeviceClass_OnSetSpeaker ), 
    0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void DeviceDeviceClass_UpdateSpeaker( DeviceDeviceClass _this, XBool aNewValue )
{
  if ( aNewValue != _this->Speaker )
  {
    _this->Speaker = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetSpeaker, DeviceDeviceClass_OnSetSpeaker ), 
      0 );
  }
}

/* Wrapper function for the non virtual method : 'Device::DeviceClass.UpdateSpeaker()' */
__declspec( naked ) void DeviceDeviceClass__UpdateSpeaker( void* _this, XBool aNewValue )
{
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aNewValue );

  __asm jmp DeviceDeviceClass_UpdateSpeaker
}

/* 'C' function for method : 'Device::DeviceClass.OutgoingCallContact()' */
void DeviceDeviceClass_OutgoingCallContact( DeviceDeviceClass _this, DeviceContact 
  aContact )
{
  DeviceHistoryContact historyContact = EwNewObject( DeviceHistoryContact, 0 );

  DeviceContact_CopyDataTo( aContact, ((DeviceContact)historyContact ));
  DeviceHistoryContact_OnSetTimeOfCall( historyContact, CoreTime_OnGetCurrentTime( 
  EwNewObject( CoreTime, 0 )));
  DeviceHistoryContact_OnSetCallState( historyContact, DeviceCallStateDialing );
  DeviceHistoryContact_OnSetCallDirection( historyContact, DeviceCallDirectionOutgoing );
  DeviceContactList_Add( &_this->Ongoing, ((DeviceContact)historyContact ));
}

/* 'C' function for method : 'Device::DeviceClass.UpdateIncomingCall()' */
void DeviceDeviceClass_UpdateIncomingCall( DeviceDeviceClass _this, XString aPhoneNumber )
{
  DeviceContact contact = DeviceContactList_FindByPhoneNumber( &_this->Contacts, 
    aPhoneNumber );
  DeviceHistoryContact historyContact = EwNewObject( DeviceHistoryContact, 0 );

  if ( contact == 0 )
  {
    DeviceContact_OnSetLastName((DeviceContact)historyContact, aPhoneNumber );
    DeviceContact_OnSetPhoneNumber((DeviceContact)historyContact, aPhoneNumber );
  }
  else
    DeviceContact_CopyDataTo( contact, ((DeviceContact)historyContact ));

  DeviceHistoryContact_OnSetTimeOfCall( historyContact, CoreTime_OnGetCurrentTime( 
  EwNewObject( CoreTime, 0 )));
  DeviceHistoryContact_OnSetCallState( historyContact, DeviceCallStateDialing );
  DeviceHistoryContact_OnSetCallDirection( historyContact, DeviceCallDirectionIncoming );
  DeviceContactList_Add( &_this->Ongoing, ((DeviceContact)historyContact ));
}

/* 'C' function for method : 'Device::DeviceClass.OutgoingCallNumber()' */
void DeviceDeviceClass_OutgoingCallNumber( DeviceDeviceClass _this, XString aPhoneNumber )
{
  DeviceContact contact = DeviceContactList_FindByPhoneNumber( &_this->Contacts, 
    aPhoneNumber );
  DeviceHistoryContact historyContact = EwNewObject( DeviceHistoryContact, 0 );

  if ( contact == 0 )
  {
    DeviceContact_OnSetLastName((DeviceContact)historyContact, aPhoneNumber );
    DeviceContact_OnSetPhoneNumber((DeviceContact)historyContact, aPhoneNumber );
  }
  else
    DeviceContact_CopyDataTo( contact, ((DeviceContact)historyContact ));

  DeviceHistoryContact_OnSetTimeOfCall( historyContact, CoreTime_OnGetCurrentTime( 
  EwNewObject( CoreTime, 0 )));
  DeviceHistoryContact_OnSetCallState( historyContact, DeviceCallStateDialing );
  DeviceHistoryContact_OnSetCallDirection( historyContact, DeviceCallDirectionOutgoing );
  DeviceContactList_Add( &_this->Ongoing, ((DeviceContact)historyContact ));
}

/* 'C' function for method : 'Device::DeviceClass.GetNewID()' */
XInt32 DeviceDeviceClass_GetNewID( DeviceDeviceClass _this )
{
  _this->LastID += 1;
  return _this->LastID;
}

/* 'C' function for method : 'Device::DeviceClass.EndCall()' */
void DeviceDeviceClass_EndCall( DeviceDeviceClass _this, DeviceHistoryContact aContact )
{
  if ( aContact->CallDirection == DeviceCallDirectionIncoming )
  {
    if ( aContact->CallState == DeviceCallStateDialing )
      DeviceHistoryContact_OnSetCallState( aContact, DeviceCallStateRejected );
    else
      if ( aContact->CallState == DeviceCallStateSpeaking )
      {
        DeviceHistoryContact_OnSetCallState( aContact, DeviceCallStateEndCall );
        DeviceHistoryContact_OnSetEndTime( aContact, CoreTime_OnGetCurrentTime( 
        EwNewObject( CoreTime, 0 )));
      }
  }
  else
    if ( aContact->CallDirection == DeviceCallDirectionOutgoing )
    {
      if ( aContact->CallState == DeviceCallStateDialing )
        DeviceHistoryContact_OnSetCallState( aContact, DeviceCallStateCancelled );
      else
        if ( aContact->CallState == DeviceCallStateSpeaking )
        {
          DeviceHistoryContact_OnSetCallState( aContact, DeviceCallStateEndCall );
          DeviceHistoryContact_OnSetEndTime( aContact, CoreTime_OnGetCurrentTime( 
          EwNewObject( CoreTime, 0 )));
        }
    }

  DeviceContactList_Add( &_this->History, ((DeviceContact)aContact ));
  DeviceContactList_Remove( &_this->Ongoing, ((DeviceContact)aContact ));
}

/* 'C' function for method : 'Device::DeviceClass.AnswerCall()' */
void DeviceDeviceClass_AnswerCall( DeviceDeviceClass _this, DeviceHistoryContact 
  aContact )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  DeviceHistoryContact_OnSetCallState( aContact, DeviceCallStateSpeaking );
  DeviceHistoryContact_OnSetStartTime( aContact, CoreTime_OnGetCurrentTime( EwNewObject( 
  CoreTime, 0 )));
}

/* Variants derived from the class : 'Device::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( DeviceDeviceClass )
  EW_STATIC_CLASS_VARIANT( DeviceDeviceSimulation ),
EW_END_OF_CLASS_VARIANTS( DeviceDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Device::DeviceClass' */
EW_DEFINE_CLASS( DeviceDeviceClass, TemplatesDeviceClass, Contacts, Contacts, Contacts, 
                 Contacts, LastID, LastID, "Device::DeviceClass" )
EW_END_OF_CLASS( DeviceDeviceClass )

/* User defined auto object: 'Device::Device' */
EW_DEFINE_AUTOOBJECT( DeviceDevice, DeviceDeviceClass )

/* Initializer for the auto object 'Device::Device' */
void DeviceDevice__Init( DeviceDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Device::Device' */
EW_DEFINE_AUTOOBJECT_VARIANTS( DeviceDevice )
EW_END_OF_AUTOOBJECT_VARIANTS( DeviceDevice )

/* Initializer for the class variant 'Device::DeviceSimulation' */
void DeviceDeviceSimulation__Init( DeviceDeviceClass _this, XObject aLink, XHandle aArg )
{
  DeviceDeviceSimulation _vthis = (DeviceDeviceSimulation)_this->_vthis;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aLink );

  /* Allow the Immediate Garbage Collection to evalute the members of this class variant. */
  _vthis->_.XObject._.GCT = EW_VCLASS_GCT( DeviceDeviceSimulation );

  /* Setup the VMT pointer */
  _vthis->_.VMT = EW_VCLASS( DeviceDeviceSimulation );

  /* Call the user defined constructor */
  DeviceDeviceSimulation_Init( _this, aArg );
}

/* Re-Initializer for the class variant 'Device::DeviceSimulation' */
void DeviceDeviceSimulation__ReInit( DeviceDeviceClass _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Finalizer method for the class variant 'Device::DeviceSimulation' */
void DeviceDeviceSimulation__Done( DeviceDeviceClass _this )
{
  DeviceDeviceSimulation _vthis = (DeviceDeviceSimulation)_this->_vthis;

  /* Finalize this class */
  _vthis->_.VMT = 0;
}

/* 'C' function for method : 'Device::DeviceSimulation.Init()' */
void DeviceDeviceSimulation_Init( DeviceDeviceClass _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwPostSignal( EwNewSlot( _this, DeviceDeviceSimulation_CreateContactData ), ((XObject)_this ));
}

/* 'C' function for method : 'Device::DeviceSimulation.CreateContact()' */
void DeviceDeviceSimulation_CreateContact( DeviceDeviceClass _this, XString aLastName, 
  XString aFirstName, XString aPhoneNumber )
{
  DeviceContact MyContact = EwNewObject( DeviceContact, 0 );

  DeviceContact_OnSetFirstName( MyContact, aFirstName );
  DeviceContact_OnSetLastName( MyContact, aLastName );
  DeviceContact_OnSetPhoneNumber( MyContact, aPhoneNumber );
  DeviceContactList_Add( &_this->Contacts, MyContact );
}

/* 'C' function for method : 'Device::DeviceSimulation.CreateContact1()' */
void DeviceDeviceSimulation_CreateContact1( DeviceDeviceClass _this, XString aLastName, 
  XString aFirstName, XString aPhoneNumber )
{
  DeviceContact MyContact = EwNewObject( DeviceContact, 0 );

  DeviceContact_OnSetFirstName( MyContact, aFirstName );
  DeviceContact_OnSetLastName( MyContact, aLastName );
  DeviceContact_OnSetPhoneNumber( MyContact, aPhoneNumber );
  DeviceContactList_Add( &_this->Favorites, MyContact );
}

/* 'C' function for method : 'Device::DeviceSimulation.CreateContactData()' */
void DeviceDeviceSimulation_CreateContactData( DeviceDeviceClass _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceSimulation_CreateContact( _this, EwLoadString( &_Const0000 ), EwLoadString( 
  &_Const0001 ), EwLoadString( &_Const0002 ));
  DeviceDeviceSimulation_CreateContact( _this, EwLoadString( &_Const0003 ), EwLoadString( 
  &_Const0004 ), EwLoadString( &_Const0005 ));
  DeviceDeviceSimulation_CreateContact( _this, EwLoadString( &_Const0006 ), EwLoadString( 
  &_Const0007 ), EwLoadString( &_Const0008 ));
  DeviceDeviceSimulation_CreateContact( _this, EwLoadString( &_Const0009 ), EwLoadString( 
  &_Const000A ), EwLoadString( &_Const000B ));
  DeviceDeviceSimulation_CreateContact1( _this, EwLoadString( &_Const000C ), EwLoadString( 
  &_Const0007 ), EwLoadString( &_Const0008 ));
  DeviceContactList_insertionSort( &_this->Contacts );
}

/* Variants derived from the class : 'Device::DeviceSimulation' */
EW_DEFINE_CLASS_VARIANTS( DeviceDeviceSimulation )
EW_END_OF_CLASS_VARIANTS( DeviceDeviceSimulation )

/* Virtual Method Table (VMT) for the class variant : 'Device::DeviceSimulation' */
EW_DEFINE_VCLASS( DeviceDeviceSimulation, XObject, DeviceDeviceClass, _.VMT, _.VMT, 
                  _.VMT, _.VMT, _.VMT, _.VMT, "Device::DeviceSimulation" )
EW_END_OF_VCLASS( DeviceDeviceSimulation )

/* Initializer for the class 'Device::HistoryContact' */
void DeviceHistoryContact__Init( DeviceHistoryContact _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  DeviceContact__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( DeviceHistoryContact );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( DeviceHistoryContact );

  /* ... and initialize objects, variables, properties, etc. */
  _this->CallState = DeviceCallStateNone;
  _this->CallDirection = DeviceCallDirectionNone;
}

/* Re-Initializer for the class 'Device::HistoryContact' */
void DeviceHistoryContact__ReInit( DeviceHistoryContact _this )
{
  /* At first re-initialize the super class ... */
  DeviceContact__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Device::HistoryContact' */
void DeviceHistoryContact__Done( DeviceHistoryContact _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( DeviceContact );

  /* Don't forget to deinitialize the super class ... */
  DeviceContact__Done( &_this->_.Super );
}

/* 'C' function for method : 'Device::HistoryContact.OnSetCallState()' */
void DeviceHistoryContact_OnSetCallState( DeviceHistoryContact _this, XEnum value )
{
  if ( _this->CallState == value )
    return;

  _this->CallState = value;
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::HistoryContact.OnSetTimeOfCall()' */
void DeviceHistoryContact_OnSetTimeOfCall( DeviceHistoryContact _this, CoreTime 
  value )
{
  if ( _this->TimeOfCall == value )
    return;

  _this->TimeOfCall = value;
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::HistoryContact.OnSetStartTime()' */
void DeviceHistoryContact_OnSetStartTime( DeviceHistoryContact _this, CoreTime value )
{
  if ( _this->StartTime == value )
    return;

  _this->StartTime = value;
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::HistoryContact.OnSetCallDirection()' */
void DeviceHistoryContact_OnSetCallDirection( DeviceHistoryContact _this, XEnum 
  value )
{
  if ( _this->CallDirection == value )
    return;

  _this->CallDirection = value;
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::HistoryContact.OnSetEndTime()' */
void DeviceHistoryContact_OnSetEndTime( DeviceHistoryContact _this, CoreTime value )
{
  if ( _this->EndTime == value )
    return;

  _this->EndTime = value;
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::HistoryContact.GetDuration()' */
XString DeviceHistoryContact_GetDuration( DeviceHistoryContact _this )
{
  CoreTimeSpan time = EwNewObject( CoreTimeSpan, 0 );

  if ( _this->StartTime == 0 )
    return 0;
  else
    if ( _this->EndTime == 0 )
      time = CoreTime_Difference( CoreTime_OnGetCurrentTime( EwNewObject( CoreTime, 
      0 )), _this->StartTime );
    else
      time = CoreTime_Difference( _this->EndTime, _this->StartTime );

  if ( CoreTimeSpan_OnGetTotalMinutes( time ) < 1 )
    return CoreTimeSpan_Format( time, EwLoadString( &_Const000D ));

  if ( CoreTimeSpan_OnGetTotalMinutes( time ) < 60 )
    return CoreTimeSpan_Format( time, EwLoadString( &_Const000E ));
  else
    return CoreTimeSpan_Format( time, EwLoadString( &_Const000F ));
}

/* 'C' function for method : 'Device::HistoryContact.GetCallState()' */
XString DeviceHistoryContact_GetCallState( DeviceHistoryContact _this )
{
  switch ( _this->CallState )
  {
    case DeviceCallStateCancelled :
      return EwGetVariantOfString( &StringsCancelledTxt );

    case DeviceCallStateMissed :
      return EwGetVariantOfString( &StringsMissedTxt );

    case DeviceCallStateRejected :
      return EwGetVariantOfString( &StringsRejectedTxt );

    default : 
      return EwLoadString( &StringsErrorTxt );
  }
}

/* 'C' function for method : 'Device::HistoryContact.GetCallDirection()' */
XString DeviceHistoryContact_GetCallDirection( DeviceHistoryContact _this )
{
  switch ( _this->CallDirection )
  {
    case DeviceCallDirectionIncoming :
      return EwGetVariantOfString( &StringsIncomingTxt );

    case DeviceCallDirectionOutgoing :
      return EwGetVariantOfString( &StringsOutgoingTxt );

    default : 
      return EwLoadString( &StringsErrorTxt );
  }
}

/* Variants derived from the class : 'Device::HistoryContact' */
EW_DEFINE_CLASS_VARIANTS( DeviceHistoryContact )
EW_END_OF_CLASS_VARIANTS( DeviceHistoryContact )

/* Virtual Method Table (VMT) for the class : 'Device::HistoryContact' */
EW_DEFINE_CLASS( DeviceHistoryContact, DeviceContact, TimeOfCall, CallDirection, 
                 CallDirection, CallDirection, CallDirection, CallDirection, "Device::HistoryContact" )
EW_END_OF_CLASS( DeviceHistoryContact )

/* Initializer for the class 'Device::ContactListElement' */
void DeviceContactListElement__Init( DeviceContactListElement _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( DeviceContactListElement );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( DeviceContactListElement );
}

/* Re-Initializer for the class 'Device::ContactListElement' */
void DeviceContactListElement__ReInit( DeviceContactListElement _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Device::ContactListElement' */
void DeviceContactListElement__Done( DeviceContactListElement _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Device::ContactListElement' */
EW_DEFINE_CLASS_VARIANTS( DeviceContactListElement )
EW_END_OF_CLASS_VARIANTS( DeviceContactListElement )

/* Virtual Method Table (VMT) for the class : 'Device::ContactListElement' */
EW_DEFINE_CLASS( DeviceContactListElement, XObject, next, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Device::ContactListElement" )
EW_END_OF_CLASS( DeviceContactListElement )

/* Initializer for the class 'Device::ContactList' */
void DeviceContactList__Init( DeviceContactList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( DeviceContactList );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( DeviceContactList );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Sorting = DeviceSortingNone;
}

/* Re-Initializer for the class 'Device::ContactList' */
void DeviceContactList__ReInit( DeviceContactList _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Device::ContactList' */
void DeviceContactList__Done( DeviceContactList _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Device::ContactList.Add()' */
void DeviceContactList_Add( DeviceContactList _this, DeviceContact aContact )
{
  DeviceContactListElement elem = EwNewObject( DeviceContactListElement, 0 );

  elem->Data = aContact;

  if ( _this->head == 0 )
    _this->head = elem;
  else
  {
    DeviceContactListElement lastNode = _this->head;

    while ( lastNode->next != 0 )
      lastNode = lastNode->next;

    lastNode->next = elem;
  }

  DeviceContactList_OnSetNoOfItems( _this, _this->NoOfItems + 1 );
}

/* 'C' function for method : 'Device::ContactList.Remove()' */
void DeviceContactList_Remove( DeviceContactList _this, DeviceContact aContact )
{
  DeviceContactListElement elem = _this->head;
  DeviceContactListElement prev = 0;

  if (( elem != 0 ) && ( elem->Data == aContact ))
  {
    _this->head = elem->next;
    DeviceContactList_OnSetNoOfItems( _this, _this->NoOfItems - 1 );
  }
  else
  {
    while (( elem != 0 ) && ( elem->Data != aContact ))
    {
      prev = elem;
      elem = elem->next;
    }

    prev->next = elem->next;
    DeviceContactList_OnSetNoOfItems( _this, _this->NoOfItems - 1 );
  }
}

/* 'C' function for method : 'Device::ContactList.OnSetNoOfItems()' */
void DeviceContactList_OnSetNoOfItems( DeviceContactList _this, XInt32 value )
{
  if ( _this->NoOfItems == value )
    return;

  _this->NoOfItems = value;
  EwNotifyRefObservers( EwNewRef( _this, DeviceContactList_OnGetNoOfItems, DeviceContactList_OnSetNoOfItems ), 
    0 );
}

/* 'C' function for method : 'Device::ContactList.GetContact()' */
DeviceContact DeviceContactList_GetContact( DeviceContactList _this, XInt32 aIndex )
{
  DeviceContactListElement elem;
  XInt32 it;

  if (( _this->head == 0 ) || ( aIndex >= _this->NoOfItems ))
    return 0;

  elem = _this->head;
  it = 0;

  while (( it != aIndex ) && ( elem->Data != 0 ))
  {
    elem = elem->next;
    it += 1;
  }

  return elem->Data;
}

/* 'C' function for method : 'Device::ContactList.GetInitials()' */
XString DeviceContactList_GetInitials( DeviceContactList _this, XString aLastname, 
  XString aFirstname )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  return EwConcatStringChar( EwConcatCharString( EwGetStringChar( aLastname, 0 ), 
    0 ), EwGetStringChar( aFirstname, 0 ));
}

/* 'C' function for method : 'Device::ContactList.insertionSort()' */
void DeviceContactList_insertionSort( DeviceContactList _this )
{
  DeviceContactListElement current = _this->head;

  while ( current != 0 )
  {
    DeviceContactListElement next = current->next;
    DeviceContactList_sortedInsert( _this, current );
    current = next;
  }

  _this->head = _this->sorted;
  _this->sorted = 0;
}

/* 'C' function for method : 'Device::ContactList.sortedInsert()' */
void DeviceContactList_sortedInsert( DeviceContactList _this, DeviceContactListElement 
  aElement )
{
  if ((( _this->sorted == 0 ) || (( _this->Sorting == DeviceSortingAscending ) && 
      ( EwCompString( _this->sorted->Data->LastName, aElement->Data->LastName ) 
      >= 0 ))) || (( _this->Sorting == DeviceSortingDescending ) && ( EwCompString( 
      _this->sorted->Data->LastName, aElement->Data->LastName ) <= 0 )))
  {
    aElement->next = _this->sorted;
    _this->sorted = aElement;
  }
  else
  {
    DeviceContactListElement current = _this->sorted;

    while (( current->next != 0 ) && ((( _this->Sorting == DeviceSortingAscending ) 
           && ( EwCompString( current->next->Data->LastName, aElement->Data->LastName ) 
           < 0 )) || (( _this->Sorting == DeviceSortingDescending ) && ( EwCompString( 
           current->next->Data->LastName, aElement->Data->LastName ) > 0 ))))
      current = current->next;

    aElement->next = current->next;
    current->next = aElement;
  }
}

/* 'C' function for method : 'Device::ContactList.OnSetSorting()' */
void DeviceContactList_OnSetSorting( DeviceContactList _this, XEnum value )
{
  if ( _this->Sorting == value )
    return;

  _this->Sorting = value;
  DeviceContactList_insertionSort( _this );
  EwNotifyRefObservers( EwNewRef( _this, DeviceContactList_OnGetSorting, DeviceContactList_OnSetSorting ), 
    0 );
}

/* 'C' function for method : 'Device::ContactList.FindByPhoneNumber()' */
DeviceContact DeviceContactList_FindByPhoneNumber( DeviceContactList _this, XString 
  aNumber )
{
  DeviceContactListElement elem = _this->head;

  while ( elem != 0 )
  {
    if ( !EwCompString( elem->Data->PhoneNumber, aNumber ))
      return elem->Data;

    elem = elem->next;
  }

  return 0;
}

/* 'C' function for method : 'Device::ContactList.FindByID()' */
DeviceContact DeviceContactList_FindByID( DeviceContactList _this, DeviceContact 
  aContact )
{
  DeviceContactListElement elem = _this->head;

  while ( elem->next != 0 )
  {
    if ( elem->Data->ID == aContact->ID )
      return elem->Data;

    elem = elem->next;
  }

  return 0;
}

/* Default onget method for the property 'NoOfItems' */
XInt32 DeviceContactList_OnGetNoOfItems( DeviceContactList _this )
{
  return _this->NoOfItems;
}

/* Default onget method for the property 'Sorting' */
XEnum DeviceContactList_OnGetSorting( DeviceContactList _this )
{
  return _this->Sorting;
}

/* Variants derived from the class : 'Device::ContactList' */
EW_DEFINE_CLASS_VARIANTS( DeviceContactList )
EW_END_OF_CLASS_VARIANTS( DeviceContactList )

/* Virtual Method Table (VMT) for the class : 'Device::ContactList' */
EW_DEFINE_CLASS( DeviceContactList, XObject, head, NoOfItems, NoOfItems, NoOfItems, 
                 NoOfItems, NoOfItems, "Device::ContactList" )
EW_END_OF_CLASS( DeviceContactList )

/* Embedded Wizard */
