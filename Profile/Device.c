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
#include "_CoreTime.h"
#include "_CoreTimeSpan.h"
#include "_CoreTimer.h"
#include "_DeviceContact.h"
#include "_DeviceContactListElement.h"
#include "_DeviceContactsList.h"
#include "_DeviceDeviceClass.h"
#include "_DeviceDeviceSimulation.h"
#include "_DeviceHistoryContact.h"
#include "_DeviceHistoryMessagesList.h"
#include "_DeviceMessage.h"
#include "_DeviceMessagesList.h"
#include "_DevicePhoneServerClass.h"
#include "Device.h"
#include "Strings.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x00000410, /* ratio 53.85 % */
  0xB8001700, 0x8009A452, 0x0086003C, 0x0E400308, 0x74003200, 0xA0010000, 0x458185E2,
  0x03280088, 0x34800EC0, 0x046CC600, 0x94C002F0, 0x021E6E91, 0x0E71C830, 0xCF0C9700,
  0xB148948C, 0x358C0122, 0x78C02001, 0x0047CDB2, 0xA9A00074, 0x4600E008, 0x2CDE0027,
  0x28D44A14, 0x6E001841, 0x60019000, 0x049DD106, 0x90052495, 0x04D125B2, 0x60009F18,
  0x4723D3F3, 0x169D1587, 0x06952A81, 0x05441A80, 0x93F2BC12, 0x0C90592C, 0x08ACBA7D,
  0x00106096, 0x5DDE393E, 0x4601B15A, 0xE4016FB6, 0x2A238000, 0xAB531B00, 0x17CB7002,
  0x08A59523, 0x0B452AC9, 0x264600C0, 0x3E169523, 0x648638EC, 0xC2AD6EAA, 0x22B90B75,
  0x1A4222D6, 0xF5C3BD6E, 0x29A5D1EA, 0xFD1C2245, 0xC56AF1D4, 0xA698018C, 0x8032956A,
  0x7A9719BE, 0x35D5E904, 0x4779AD46, 0xB86005EE, 0x90B854B7, 0x0EDE36A5, 0x05456A1C,
  0x8442FF18, 0xD2A5D208, 0x1A31DF94, 0x28722904, 0x886B8E43, 0xD8EB5F56, 0x8DC5D42D,
  0x4C8642A5, 0x25C13D35, 0x11C6D528, 0xF515BB44, 0xF1236E1C, 0x8975DF46, 0x625D86FD,
  0x8257CDC6, 0x34BD1349, 0xA9E74892, 0x18041D34, 0x4490684D, 0x91449E13, 0x54A5204F,
  0x11D25007, 0x00874125, 0x00111120, 0x6218BE1E, 0x75294385, 0x01CD43A2, 0x13115720,
  0x4AE208BA, 0x07084E15, 0x48B00551, 0x4E3B455B, 0x3E8FD108, 0x542058FD, 0x54150D04,
  0x544A4350, 0x859A4952, 0x355914B4, 0x4954185A, 0x64350E43, 0x5198000B, 0x32608A57,
  0x6749E435, 0x43923475, 0x25A8E125, 0x45992047, 0x11375112, 0x185A5254, 0x5D90C489,
  0x50C4615F, 0xD6D12E4A, 0xC9046566, 0x2885C6A9, 0x470457FA, 0xE7E44129, 0xC4569458,
  0x8A089F40, 0x03A51824, 0x89104A06, 0xA9D4BA16, 0xBA8581A3, 0x551C4C94, 0x28945544,
  0x95E2F952, 0x29352A94, 0xF4B95B97, 0xE2610025, 0x6699000A, 0x57964482, 0x61498A69,
  0xA9C2769B, 0x96949FE5, 0x106D6A24, 0x461C79ED, 0x2C9ACD25, 0x0406D451, 0x00000000
};

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault1[] =
{
  0x00000136, /* ratio 61.94 % */
  0xB8001D00, 0x8005E452, 0x00C20031, 0x40107370, 0x206C0019, 0x0640043A, 0x00004180,
  0x982C0C16, 0x39802170, 0x944CEE00, 0x80231163, 0x00D11B1A, 0x0012B3A0, 0x4A3A001C,
  0xA6F88C1A, 0x2A88C2A1, 0x6964826B, 0x97CAA5F0, 0x0198002D, 0x43E24690, 0xFC013D90,
  0x24653004, 0x0D4E3B00, 0x120899B6, 0x1333C2A4, 0xC87C820D, 0x0045E2B0, 0xA54A360C,
  0xD623B1FA, 0x6C215F87, 0x4014A284, 0x9B0F864D, 0x7509243E, 0x20004C2E, 0xB8D86A4C,
  0xBCCB23D5, 0xBD968F53, 0xDE05D13A, 0xD70524C3, 0x6632C891, 0x36098C5E, 0x324C5DE6,
  0x619363A2, 0x6B2E0609, 0xBBD9C015, 0x0C624D8F, 0x00000008, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XStringRes _Const0000 = { _StringsDefault0, 0x0002 };
static const XStringRes _Const0001 = { _StringsDefault0, 0x000D };
static const XStringRes _Const0002 = { _StringsDefault0, 0x0024 };
static const XStringRes _Const0003 = { _StringsDefault0, 0x0028 };
static const XStringRes _Const0004 = { _StringsDefault0, 0x0030 };
static const XStringRes _Const0005 = { _StringsDefault0, 0x0037 };
static const XStringRes _Const0006 = { _StringsDefault0, 0x003E };
static const XStringRes _Const0007 = { _StringsDefault0, 0x0046 };
static const XStringRes _Const0008 = { _StringsDefault0, 0x004F };
static const XStringRes _Const0009 = { _StringsDefault0, 0x0056 };
static const XStringRes _Const000A = { _StringsDefault0, 0x0061 };
static const XStringRes _Const000B = { _StringsDefault0, 0x006A };
static const XStringRes _Const000C = { _StringsDefault0, 0x0077 };
static const XStringRes _Const000D = { _StringsDefault0, 0x0080 };
static const XStringRes _Const000E = { _StringsDefault0, 0x0086 };
static const XStringRes _Const000F = { _StringsDefault0, 0x0093 };
static const XStringRes _Const0010 = { _StringsDefault0, 0x009B };
static const XStringRes _Const0011 = { _StringsDefault0, 0x00A3 };
static const XStringRes _Const0012 = { _StringsDefault0, 0x00B0 };
static const XStringRes _Const0013 = { _StringsDefault0, 0x00B9 };
static const XStringRes _Const0014 = { _StringsDefault0, 0x00C1 };
static const XStringRes _Const0015 = { _StringsDefault0, 0x00CE };
static const XStringRes _Const0016 = { _StringsDefault0, 0x00D8 };
static const XStringRes _Const0017 = { _StringsDefault0, 0x00E2 };
static const XStringRes _Const0018 = { _StringsDefault0, 0x00EF };
static const XStringRes _Const0019 = { _StringsDefault0, 0x00F9 };
static const XStringRes _Const001A = { _StringsDefault0, 0x0100 };
static const XStringRes _Const001B = { _StringsDefault0, 0x010D };
static const XStringRes _Const001C = { _StringsDefault0, 0x011A };
static const XStringRes _Const001D = { _StringsDefault0, 0x012A };
static const XStringRes _Const001E = { _StringsDefault0, 0x013C };
static const XStringRes _Const001F = { _StringsDefault0, 0x0147 };
static const XStringRes _Const0020 = { _StringsDefault0, 0x014C };
static const XStringRes _Const0021 = { _StringsDefault0, 0x0157 };
static const XStringRes _Const0022 = { _StringsDefault0, 0x0187 };
static const XStringRes _Const0023 = { _StringsDefault0, 0x018B };
static const XStringRes _Const0024 = { _StringsDefault0, 0x0192 };
static const XStringRes _Const0025 = { _StringsDefault0, 0x019B };
static const XStringRes _Const0026 = { _StringsDefault0, 0x01A4 };
static const XStringRes _Const0027 = { _StringsDefault0, 0x01AE };
static const XStringRes _Const0028 = { _StringsDefault0, 0x01BA };
static const XStringRes _Const0029 = { _StringsDefault0, 0x01C3 };
static const XStringRes _Const002A = { _StringsDefault0, 0x01CD };
static const XStringRes _Const002B = { _StringsDefault0, 0x01FF };
static const XStringRes _Const002C = { _StringsDefault1, 0x0002 };
static const XStringRes _Const002D = { _StringsDefault1, 0x0010 };
static const XStringRes _Const002E = { _StringsDefault1, 0x001B };
static const XStringRes _Const002F = { _StringsDefault1, 0x0050 };
static const XStringRes _Const0030 = { _StringsDefault1, 0x005C };
static const XStringRes _Const0031 = { _StringsDefault1, 0x006C };
static const XStringRes _Const0032 = { _StringsDefault1, 0x0086 };
static const XStringRes _Const0033 = { _StringsDefault1, 0x008F };

/* Initializer for the class 'Device::Contact' */
void DeviceContact__Init( DeviceContact _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( DeviceContact );

  /* ... then construct all embedded objects */
  DeviceMessagesList__Init( &_this->MessagesList, &_this->_.XObject, 0 );

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

  /* ... then re-construct all embedded objects */
  DeviceMessagesList__ReInit( &_this->MessagesList );
}

/* Finalizer method for the class 'Device::Contact' */
void DeviceContact__Done( DeviceContact _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Finalize all embedded objects */
  DeviceMessagesList__Done( &_this->MessagesList );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Device::Contact.Init()' */
void DeviceContact_Init( DeviceContact _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  _this->ID = DeviceDeviceClass_GetNewID( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ));
  EwAttachRefObserver( EwNewSlot( _this, DeviceContact_notifyThis ), EwNewRef( &_this->MessagesList, 
    DeviceMessagesList_OnGetNoOfItems, DeviceMessagesList_OnSetNoOfItems ), 0 );
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

/* 'C' function for method : 'Device::Contact.OnSetID()' */
void DeviceContact_OnSetID( DeviceContact _this, XInt32 value )
{
  if ( _this->ID == value )
    return;

  _this->ID = value;
}

/* 'C' function for method : 'Device::Contact.CopyDataTo()' */
DeviceContact DeviceContact_CopyDataTo( DeviceContact _this, DeviceContact aContact )
{
  DeviceContact_OnSetID( aContact, _this->ID );
  DeviceContact_OnSetLastName( aContact, _this->LastName );
  DeviceContact_OnSetFirstName( aContact, _this->FirstName );
  DeviceContact_OnSetPhoneNumber( aContact, _this->PhoneNumber );
  DeviceContact_OnSetNameInitials( aContact, _this->NameInitials );
  return aContact;
}

/* 'C' function for method : 'Device::Contact.OnSetIsFavorite()' */
void DeviceContact_OnSetIsFavorite( DeviceContact _this, XBool value )
{
  if ( _this->IsFavorite == value )
    return;

  _this->IsFavorite = value;
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::Contact.OnSetUnreadMessagesNr()' */
void DeviceContact_OnSetUnreadMessagesNr( DeviceContact _this, XInt32 value )
{
  if ( _this->UnreadMessagesNr == value )
    return;

  _this->UnreadMessagesNr = value;
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::Contact.notifyThis()' */
void DeviceContact_notifyThis( DeviceContact _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Variants derived from the class : 'Device::Contact' */
EW_DEFINE_CLASS_VARIANTS( DeviceContact )
EW_END_OF_CLASS_VARIANTS( DeviceContact )

/* Virtual Method Table (VMT) for the class : 'Device::Contact' */
EW_DEFINE_CLASS( DeviceContact, XObject, MessagesList, FirstName, FirstName, FirstName, 
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
  DeviceContactsList__Init( &_this->Contacts, &_this->_.XObject, 0 );
  DeviceContactsList__Init( &_this->History, &_this->_.XObject, 0 );
  DeviceContactsList__Init( &_this->Favorites, &_this->_.XObject, 0 );
  DeviceContactsList__Init( &_this->OngoingCalls, &_this->_.XObject, 0 );
  DeviceHistoryMessagesList__Init( &_this->MessageHistory, &_this->_.XObject, 0 );
  DeviceContactsList__Init( &_this->FilteredContacts, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( DeviceDeviceClass );

  /* ... and initialize objects, variables, properties, etc. */
  _this->server = EwGetAutoObject( &DevicePhoneServer, DevicePhoneServerClass );

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
  DeviceContactsList__ReInit( &_this->Contacts );
  DeviceContactsList__ReInit( &_this->History );
  DeviceContactsList__ReInit( &_this->Favorites );
  DeviceContactsList__ReInit( &_this->OngoingCalls );
  DeviceHistoryMessagesList__ReInit( &_this->MessageHistory );
  DeviceContactsList__ReInit( &_this->FilteredContacts );

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
  DeviceContactsList__Done( &_this->Contacts );
  DeviceContactsList__Done( &_this->History );
  DeviceContactsList__Done( &_this->Favorites );
  DeviceContactsList__Done( &_this->OngoingCalls );
  DeviceHistoryMessagesList__Done( &_this->MessageHistory );
  DeviceContactsList__Done( &_this->FilteredContacts );

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
void DeviceDeviceClass__UpdateMicrophone( void* _this, XBool aNewValue )
{
  DeviceDeviceClass_UpdateMicrophone((DeviceDeviceClass)_this, aNewValue );
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
void DeviceDeviceClass__UpdateSpeaker( void* _this, XBool aNewValue )
{
  DeviceDeviceClass_UpdateSpeaker((DeviceDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Device::DeviceClass.SendCallFromContact()' */
void DeviceDeviceClass_SendCallFromContact( DeviceDeviceClass _this, DeviceContact 
  aContact )
{
  DeviceHistoryContact historyContact = EwNewObject( DeviceHistoryContact, 0 );

  DeviceContact_CopyDataTo( aContact, ((DeviceContact)historyContact ));
  DeviceHistoryContact_OnSetTimeOfCall( historyContact, CoreTime_OnGetCurrentTime( 
  EwNewObject( CoreTime, 0 )));
  DeviceHistoryContact_OnSetCallState( historyContact, DeviceCallStateDialing );
  DeviceHistoryContact_OnSetCallDirection( historyContact, DeviceCallDirectionOutgoing );
  DeviceContactsList_AddLast( &_this->OngoingCalls, ((DeviceContact)historyContact ));

  if ( !DevicePhoneServerClass_StartCall( EwGetAutoObject( &DevicePhoneServer, DevicePhoneServerClass ), 
      historyContact->Super1.PhoneNumber ))
  {
    DeviceHistoryContact_OnSetCallState( historyContact, DeviceCallStateMissed );
    DeviceContactsList_AddFirst( &_this->History, ((DeviceContact)historyContact ));
    DeviceContactsList_Remove( &_this->OngoingCalls, ((DeviceContact)historyContact ));
  }
}

/* 'C' function for method : 'Device::DeviceClass.ReceiveCall()' */
void DeviceDeviceClass_ReceiveCall( DeviceDeviceClass _this, XString aPhoneNumber )
{
  DeviceContact contact = DeviceContactsList_FindByPhoneNumber( &_this->Contacts, 
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
  DeviceContactsList_AddLast( &_this->OngoingCalls, ((DeviceContact)historyContact ));
}

/* 'C' function for method : 'Device::DeviceClass.SendCallFromNumber()' */
void DeviceDeviceClass_SendCallFromNumber( DeviceDeviceClass _this, XString aPhoneNumber )
{
  DeviceContact contact = DeviceContactsList_FindByPhoneNumber( &_this->Contacts, 
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
  DeviceContactsList_AddLast( &_this->OngoingCalls, ((DeviceContact)historyContact ));

  if ( !DevicePhoneServerClass_StartCall( EwGetAutoObject( &DevicePhoneServer, DevicePhoneServerClass ), 
      historyContact->Super1.PhoneNumber ))
  {
    DeviceHistoryContact_OnSetCallState( historyContact, DeviceCallStateMissed );
    DeviceContactsList_AddFirst( &_this->History, ((DeviceContact)historyContact ));
    DeviceContactsList_Remove( &_this->OngoingCalls, ((DeviceContact)historyContact ));
  }
}

/* 'C' function for method : 'Device::DeviceClass.GetNewID()' */
XInt32 DeviceDeviceClass_GetNewID( DeviceDeviceClass _this )
{
  _this->LastID += 1;
  return _this->LastID;
}

/* 'C' function for method : 'Device::DeviceClass.SendEndCall()' */
void DeviceDeviceClass_SendEndCall( DeviceDeviceClass _this, XString aPhoneNumber )
{
  DeviceHistoryContact historyContact;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aPhoneNumber );

  historyContact = EwCastObject( DeviceContactsList_GetContact( &EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass )->OngoingCalls, 0 ), DeviceHistoryContact );

  if ( historyContact->CallState == DeviceCallStateDialing )
  {
    DeviceHistoryContact_OnSetCallState( historyContact, DeviceCallStateCancelled );
    DevicePhoneServerClass_CancelledCall( EwGetAutoObject( &DevicePhoneServer, DevicePhoneServerClass ), 
    historyContact->Super1.PhoneNumber );
  }
  else
    if ( historyContact->CallState == DeviceCallStateSpeaking )
    {
      DeviceHistoryContact_OnSetCallState( historyContact, DeviceCallStateEndCall );
      DeviceHistoryContact_OnSetEndTime( historyContact, CoreTime_OnGetCurrentTime( 
      EwNewObject( CoreTime, 0 )));
      DevicePhoneServerClass_EndCall( EwGetAutoObject( &DevicePhoneServer, DevicePhoneServerClass ), 
      historyContact->Super1.PhoneNumber );
    }

  DeviceContactsList_AddFirst( &_this->History, ((DeviceContact)historyContact ));
  DeviceContactsList_Remove( &_this->OngoingCalls, ((DeviceContact)historyContact ));
}

/* 'C' function for method : 'Device::DeviceClass.SendCallAnswer()' */
void DeviceDeviceClass_SendCallAnswer( DeviceDeviceClass _this, DeviceHistoryContact 
  aContact )
{
  DeviceHistoryContact_OnSetCallState( aContact, DeviceCallStateSpeaking );
  DeviceHistoryContact_OnSetStartTime( aContact, CoreTime_OnGetCurrentTime( EwNewObject( 
  CoreTime, 0 )));

  if ( !DevicePhoneServerClass_AnswerCall( EwGetAutoObject( &DevicePhoneServer, 
      DevicePhoneServerClass ), aContact->Super1.PhoneNumber ))
  {
    DeviceHistoryContact_OnSetCallState( aContact, DeviceCallStateMissed );
    DeviceContactsList_AddFirst( &_this->History, ((DeviceContact)aContact ));
    DeviceContactsList_Remove( &_this->OngoingCalls, ((DeviceContact)aContact ));
  }
}

/* 'C' function for method : 'Device::DeviceClass.ReceiveCallAnswered()' */
void DeviceDeviceClass_ReceiveCallAnswered( DeviceDeviceClass _this, XString aPhoneNumber )
{
  DeviceHistoryContact historyContact;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aPhoneNumber );

  historyContact = EwCastObject( DeviceContactsList_GetContact( &EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass )->OngoingCalls, 0 ), DeviceHistoryContact );
  DeviceHistoryContact_OnSetCallState( historyContact, DeviceCallStateSpeaking );
  DeviceHistoryContact_OnSetStartTime( historyContact, CoreTime_OnGetCurrentTime( 
  EwNewObject( CoreTime, 0 )));
}

/* 'C' function for method : 'Device::DeviceClass.ReceiveCallRejected()' */
void DeviceDeviceClass_ReceiveCallRejected( DeviceDeviceClass _this, XString aPhoneNumber )
{
  DeviceHistoryContact historyContact;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aPhoneNumber );

  historyContact = EwCastObject( DeviceContactsList_GetContact( &EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass )->OngoingCalls, 0 ), DeviceHistoryContact );

  if ( historyContact->CallState == DeviceCallStateDialing )
    DeviceHistoryContact_OnSetCallState( historyContact, DeviceCallStateRejected );

  DeviceContactsList_AddFirst( &_this->History, ((DeviceContact)historyContact ));
  DeviceContactsList_Remove( &_this->OngoingCalls, ((DeviceContact)historyContact ));
}

/* 'C' function for method : 'Device::DeviceClass.ReceiveEndCall()' */
void DeviceDeviceClass_ReceiveEndCall( DeviceDeviceClass _this, XString aPhoneNumber )
{
  DeviceHistoryContact historyContact;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aPhoneNumber );

  historyContact = EwCastObject( DeviceContactsList_GetContact( &EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass )->OngoingCalls, 0 ), DeviceHistoryContact );

  if ( historyContact->CallState == DeviceCallStateDialing )
    DeviceHistoryContact_OnSetCallState( historyContact, DeviceCallStateCancelled );
  else
    if ( historyContact->CallState == DeviceCallStateSpeaking )
    {
      DeviceHistoryContact_OnSetCallState( historyContact, DeviceCallStateEndCall );
      DeviceHistoryContact_OnSetEndTime( historyContact, CoreTime_OnGetCurrentTime( 
      EwNewObject( CoreTime, 0 )));
    }

  DeviceContactsList_AddFirst( &_this->History, ((DeviceContact)historyContact ));
  DeviceContactsList_Remove( &_this->OngoingCalls, ((DeviceContact)historyContact ));
}

/* 'C' function for method : 'Device::DeviceClass.OnSetMyContact()' */
void DeviceDeviceClass_OnSetMyContact( DeviceDeviceClass _this, DeviceContact value )
{
  if ( _this->MyContact == value )
    return;

  _this->MyContact = value;

  if ( _this->MyContact != 0 )
    EwSignal( EwNewSlot( &EwGetAutoObject( &DevicePhoneServer, DevicePhoneServerClass )->PollServerData, 
      CoreTimer_StartTimer ), ((XObject)_this ));

  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetMyContact, DeviceDeviceClass_OnSetMyContact ), 
    0 );
  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwLoadString( &_Const0000 ), 
    _this->MyContact->FirstName ), _this->MyContact->LastName ), _this->MyContact->PhoneNumber ));
}

/* 'C' function for method : 'Device::DeviceClass.ReceiveMessage()' */
void DeviceDeviceClass_ReceiveMessage( DeviceDeviceClass _this, XString aSenderNumber, 
  XString aMessageContent )
{
  DeviceContact contactSender = DeviceContactsList_FindByPhoneNumber((DeviceContactsList)&_this->MessageHistory, 
    aSenderNumber );
  DeviceMessage message;

  if ( contactSender == 0 )
  {
    DeviceContact contact = DeviceContactsList_FindByPhoneNumber( &_this->Contacts, 
      aSenderNumber );

    if ( contact == 0 )
    {
      contact = EwNewObject( DeviceContact, 0 );
      DeviceContact_OnSetFirstName( contact, aSenderNumber );
      DeviceContact_OnSetPhoneNumber( contact, aSenderNumber );
      DeviceContact_OnSetNameInitials( contact, DeviceContactsList_GetInitials( 
      &_this->Contacts, aSenderNumber, 0 ));
    }

    contactSender = contact;
  }
  else
    DeviceContactsList_Remove((DeviceContactsList)&_this->MessageHistory, contactSender );

  message = EwNewObject( DeviceMessage, 0 );
  DeviceMessage_OnSetSender( message, contactSender );
  DeviceMessage_OnSetReceiver( message, _this->MyContact );
  DeviceMessage_OnSetTimeSent( message, CoreTime_OnGetCurrentTime( EwNewObject( 
  CoreTime, 0 )));
  DeviceMessage_OnSetMessageContent( message, aMessageContent );
  DeviceMessage_OnSetIsSeen( message, 0 );
  DeviceMessagesList_Add( &contactSender->MessagesList, message );
  DeviceContact_OnSetUnreadMessagesNr( contactSender, (XInt32)( contactSender->UnreadMessagesNr 
  + 1 ));
  DeviceContactsList_AddFirst((DeviceContactsList)&_this->MessageHistory, contactSender );
  DeviceHistoryMessagesList_FindUnreadMessagesNr( &_this->MessageHistory );
}

/* 'C' function for method : 'Device::DeviceClass.SendMessage()' */
void DeviceDeviceClass_SendMessage( DeviceDeviceClass _this, DeviceContact aContact, 
  XString aMessageContent )
{
  DeviceMessage message = EwNewObject( DeviceMessage, 0 );
  DeviceContact contact;

  DeviceMessage_OnSetSender( message, _this->MyContact );
  DeviceMessage_OnSetReceiver( message, aContact );
  DeviceMessage_OnSetTimeSent( message, CoreTime_OnGetCurrentTime( EwNewObject( 
  CoreTime, 0 )));
  DeviceMessage_OnSetMessageContent( message, aMessageContent );
  DeviceMessage_OnSetIsSeen( message, 1 );
  DeviceMessagesList_Add( &aContact->MessagesList, message );
  contact = DeviceContactsList_FindByID((DeviceContactsList)&_this->MessageHistory, 
  aContact );

  if ( contact != 0 )
    DeviceContactsList_Remove((DeviceContactsList)&_this->MessageHistory, aContact );

  DeviceContactsList_AddFirst((DeviceContactsList)&_this->MessageHistory, aContact );
  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwLoadString( &_Const0001 ), 
    aContact->PhoneNumber ), EwLoadString( &_Const0002 )), aMessageContent ));
  DevicePhoneServerClass_SendMessage( EwGetAutoObject( &DevicePhoneServer, DevicePhoneServerClass ), 
  aContact->PhoneNumber, aMessageContent );
}

/* 'C' function for method : 'Device::DeviceClass.ReceiveMissedCall()' */
void DeviceDeviceClass_ReceiveMissedCall( DeviceDeviceClass _this, XString aPhoneNumber )
{
  DeviceHistoryContact historyContact;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aPhoneNumber );

  historyContact = EwCastObject( DeviceContactsList_GetContact( &EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass )->OngoingCalls, 0 ), DeviceHistoryContact );

  if ( historyContact->CallState == DeviceCallStateDialing )
    DeviceHistoryContact_OnSetCallState( historyContact, DeviceCallStateMissed );

  DeviceContactsList_AddFirst( &_this->History, ((DeviceContact)historyContact ));
  DeviceContactsList_Remove( &_this->OngoingCalls, ((DeviceContact)historyContact ));
}

/* Default onget method for the property 'MyContact' */
DeviceContact DeviceDeviceClass_OnGetMyContact( DeviceDeviceClass _this )
{
  return _this->MyContact;
}

/* Variants derived from the class : 'Device::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( DeviceDeviceClass )
  EW_STATIC_CLASS_VARIANT( DeviceDeviceSimulation ),
EW_END_OF_CLASS_VARIANTS( DeviceDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Device::DeviceClass' */
EW_DEFINE_CLASS( DeviceDeviceClass, TemplatesDeviceClass, Contacts, server, LastID, 
                 LastID, LastID, LastID, "Device::DeviceClass" )
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
  DeviceContact_OnSetNameInitials( MyContact, DeviceContactsList_GetInitials( &_this->Contacts, 
  aLastName, aFirstName ));
  DeviceContactsList_AddLast( &_this->Contacts, MyContact );
}

/* 'C' function for method : 'Device::DeviceSimulation.CreateContactData()' */
void DeviceDeviceSimulation_CreateContactData( DeviceDeviceClass _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceSimulation_CreateContact( _this, EwLoadString( &_Const0003 ), EwLoadString( 
  &_Const0004 ), EwLoadString( &_Const0005 ));
  DeviceDeviceSimulation_CreateContact( _this, EwLoadString( &_Const0006 ), EwLoadString( 
  &_Const0007 ), EwLoadString( &_Const0008 ));
  DeviceDeviceSimulation_CreateContact( _this, EwLoadString( &_Const0009 ), EwLoadString( 
  &_Const000A ), EwLoadString( &_Const000B ));
  DeviceDeviceSimulation_CreateContact( _this, EwLoadString( &_Const000C ), EwLoadString( 
  &_Const000D ), EwLoadString( &_Const000E ));
  DeviceDeviceSimulation_CreateContact( _this, EwLoadString( &_Const000F ), EwLoadString( 
  &_Const0010 ), EwLoadString( &_Const0011 ));
  DeviceDeviceSimulation_CreateContact( _this, EwLoadString( &_Const0012 ), EwLoadString( 
  &_Const0013 ), EwLoadString( &_Const0014 ));
  DeviceDeviceSimulation_CreateContact( _this, EwLoadString( &_Const0015 ), EwLoadString( 
  &_Const0016 ), EwLoadString( &_Const0017 ));
  DeviceDeviceSimulation_CreateContact( _this, EwLoadString( &_Const0018 ), EwLoadString( 
  &_Const0019 ), EwLoadString( &_Const001A ));
  DeviceContactsList_insertionSort( &_this->Contacts );
  DeviceContactsList_CancelSearch( &_this->Contacts );
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
    return CoreTimeSpan_Format( time, EwLoadString( &_Const001B ));

  if ( CoreTimeSpan_OnGetTotalMinutes( time ) < 60 )
    return CoreTimeSpan_Format( time, EwLoadString( &_Const001C ));
  else
    return CoreTimeSpan_Format( time, EwLoadString( &_Const001D ));
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

/* 'C' function for method : 'Device::HistoryContact.GetTimeOfCall()' */
XString DeviceHistoryContact_GetTimeOfCall( DeviceHistoryContact _this )
{
  CoreTimeSpan time;

  if ( _this->TimeOfCall == 0 )
    return 0;

  time = CoreTime_Difference( CoreTime_OnGetCurrentTime( EwNewObject( CoreTime, 
  0 )), _this->TimeOfCall );

  if ( CoreTimeSpan_OnGetTotalHours( time ) < 24 )
    return CoreTime_Format( _this->TimeOfCall, EwLoadString( &_Const001E ));

  if ( _this->TimeOfCall->Day < CoreTime_OnGetCurrentTime( EwNewObject( CoreTime, 
      0 ))->Day )
    return CoreTime_Format( _this->TimeOfCall, EwLoadString( &_Const001F ));
  else
    return CoreTime_Format( _this->TimeOfCall, EwLoadString( &_Const0020 ));
}

/* Variants derived from the class : 'Device::HistoryContact' */
EW_DEFINE_CLASS_VARIANTS( DeviceHistoryContact )
EW_END_OF_CLASS_VARIANTS( DeviceHistoryContact )

/* Virtual Method Table (VMT) for the class : 'Device::HistoryContact' */
EW_DEFINE_CLASS( DeviceHistoryContact, DeviceContact, TimeOfCall, TimeOfCall, CallState, 
                 CallState, CallState, CallState, "Device::HistoryContact" )
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
EW_DEFINE_CLASS( DeviceContactListElement, XObject, next, next, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Device::ContactListElement" )
EW_END_OF_CLASS( DeviceContactListElement )

/* Initializer for the class 'Device::ContactsList' */
void DeviceContactsList__Init( DeviceContactsList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( DeviceContactsList );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( DeviceContactsList );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Sorting = DeviceSortingNone;
}

/* Re-Initializer for the class 'Device::ContactsList' */
void DeviceContactsList__ReInit( DeviceContactsList _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Device::ContactsList' */
void DeviceContactsList__Done( DeviceContactsList _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Device::ContactsList.AddLast()' */
void DeviceContactsList_AddLast( DeviceContactsList _this, DeviceContact aContact )
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

  DeviceContactsList_OnSetNoOfItems( _this, _this->NoOfItems + 1 );
}

/* 'C' function for method : 'Device::ContactsList.Remove()' */
void DeviceContactsList_Remove( DeviceContactsList _this, DeviceContact aContact )
{
  DeviceContactListElement elem = _this->head;
  DeviceContactListElement prev = 0;

  if (( elem != 0 ) && ( elem->Data == aContact ))
  {
    _this->head = elem->next;
    DeviceContactsList_OnSetNoOfItems( _this, _this->NoOfItems - 1 );
  }
  else
  {
    while (( elem != 0 ) && ( elem->Data != aContact ))
    {
      prev = elem;
      elem = elem->next;
    }

    prev->next = elem->next;
    DeviceContactsList_OnSetNoOfItems( _this, _this->NoOfItems - 1 );
  }
}

/* 'C' function for method : 'Device::ContactsList.OnSetNoOfItems()' */
void DeviceContactsList_OnSetNoOfItems( DeviceContactsList _this, XInt32 value )
{
  if ( _this->NoOfItems == value )
    return;

  _this->NoOfItems = value;
  EwNotifyRefObservers( EwNewRef( _this, DeviceContactsList_OnGetNoOfItems, DeviceContactsList_OnSetNoOfItems ), 
    0 );
}

/* 'C' function for method : 'Device::ContactsList.GetContact()' */
DeviceContact DeviceContactsList_GetContact( DeviceContactsList _this, XInt32 aIndex )
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

/* 'C' function for method : 'Device::ContactsList.GetInitials()' */
XString DeviceContactsList_GetInitials( DeviceContactsList _this, XString aLastname, 
  XString aFirstname )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  return EwConcatString((( EwCompString( aLastname, 0 ) != 0 )? EwNewStringChar( 
    EwGetStringChar( aLastname, 0 ), 1 ) : 0 ), (( EwCompString( aFirstname, 0 ) 
    != 0 )? EwNewStringChar( EwGetStringChar( aFirstname, 0 ), 1 ) : 0 ));
}

/* 'C' function for method : 'Device::ContactsList.insertionSort()' */
void DeviceContactsList_insertionSort( DeviceContactsList _this )
{
  DeviceContactListElement current = _this->head;

  while ( current != 0 )
  {
    DeviceContactListElement next = current->next;
    DeviceContactsList_sortedInsert( _this, current );
    current = next;
  }

  _this->head = _this->sorted;
  _this->sorted = 0;
}

/* 'C' function for method : 'Device::ContactsList.sortedInsert()' */
void DeviceContactsList_sortedInsert( DeviceContactsList _this, DeviceContactListElement 
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

/* 'C' function for method : 'Device::ContactsList.OnSetSorting()' */
void DeviceContactsList_OnSetSorting( DeviceContactsList _this, XEnum value )
{
  if ( _this->Sorting == value )
    return;

  _this->Sorting = value;
  DeviceContactsList_insertionSort( _this );
  EwNotifyRefObservers( EwNewRef( _this, DeviceContactsList_OnGetSorting, DeviceContactsList_OnSetSorting ), 
    0 );
}

/* 'C' function for method : 'Device::ContactsList.FindByPhoneNumber()' */
DeviceContact DeviceContactsList_FindByPhoneNumber( DeviceContactsList _this, XString 
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

/* 'C' function for method : 'Device::ContactsList.FindByID()' */
DeviceContact DeviceContactsList_FindByID( DeviceContactsList _this, DeviceContact 
  aContact )
{
  if ( _this->head != 0 )
  {
    DeviceContactListElement elem = _this->head;

    while ( elem != 0 )
    {
      if ( elem->Data->ID == aContact->ID )
        return elem->Data;

      elem = elem->next;
    }
  }

  return 0;
}

/* 'C' function for method : 'Device::ContactsList.AddFirst()' */
void DeviceContactsList_AddFirst( DeviceContactsList _this, DeviceContact aContact )
{
  DeviceContactListElement elem = EwNewObject( DeviceContactListElement, 0 );

  elem->Data = aContact;
  elem->Data = aContact;
  elem->next = _this->head;
  _this->head = elem;
  DeviceContactsList_OnSetNoOfItems( _this, _this->NoOfItems + 1 );
}

/* 'C' function for method : 'Device::ContactsList.RemoveAll()' */
void DeviceContactsList_RemoveAll( DeviceContactsList _this )
{
  _this->head = 0;
  DeviceContactsList_OnSetNoOfItems( _this, 0 );
}

/* 'C' function for method : 'Device::ContactsList.FindByID1()' */
DeviceContact DeviceContactsList_FindByID1( DeviceContactsList _this, XInt32 aID )
{
  if ( _this->head != 0 )
  {
    DeviceContactListElement elem = _this->head;

    while ( elem != 0 )
    {
      if ( elem->Data->ID == aID )
        return elem->Data;

      elem = elem->next;
    }
  }

  return 0;
}

/* 'C' function for method : 'Device::ContactsList.Search()' */
void DeviceContactsList_Search( DeviceContactsList _this, XString aText )
{
  if ( _this->head != 0 )
  {
    DeviceContactListElement elem = _this->head;
    aText = EwGetStringLower( aText );
    DeviceContactsList_RemoveAll( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->FilteredContacts );

    while ( elem != 0 )
    {
      if (( EwStringFind( EwGetStringLower( elem->Data->FirstName ), aText, 0 ) 
          >= 0 ) || ( EwStringFind( EwGetStringLower( elem->Data->LastName ), aText, 
          0 ) >= 0 ))
        DeviceContactsList_AddFirst( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->FilteredContacts, 
        elem->Data );

      elem = elem->next;
    }
  }
}

/* 'C' function for method : 'Device::ContactsList.CancelSearch()' */
void DeviceContactsList_CancelSearch( DeviceContactsList _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  DeviceContactsList_RemoveAll( &EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->FilteredContacts );
}

/* Default onget method for the property 'NoOfItems' */
XInt32 DeviceContactsList_OnGetNoOfItems( DeviceContactsList _this )
{
  return _this->NoOfItems;
}

/* Default onget method for the property 'Sorting' */
XEnum DeviceContactsList_OnGetSorting( DeviceContactsList _this )
{
  return _this->Sorting;
}

/* Variants derived from the class : 'Device::ContactsList' */
EW_DEFINE_CLASS_VARIANTS( DeviceContactsList )
EW_END_OF_CLASS_VARIANTS( DeviceContactsList )

/* Virtual Method Table (VMT) for the class : 'Device::ContactsList' */
EW_DEFINE_CLASS( DeviceContactsList, XObject, head, head, NoOfItems, NoOfItems, 
                 NoOfItems, NoOfItems, "Device::ContactsList" )
EW_END_OF_CLASS( DeviceContactsList )

/* Initializer for the class 'Device::PhoneServerClass' */
void DevicePhoneServerClass__Init( DevicePhoneServerClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesDeviceClass__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( DevicePhoneServerClass );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->PollServerData, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( DevicePhoneServerClass );

  /* ... and initialize objects, variables, properties, etc. */
  _this->PollServerData.OnTrigger = EwNewSlot( _this, DevicePhoneServerClass_askServerData );

  /* Call the user defined constructor */
  DevicePhoneServerClass_Init( _this, aArg );
}

/* Re-Initializer for the class 'Device::PhoneServerClass' */
void DevicePhoneServerClass__ReInit( DevicePhoneServerClass _this )
{
  /* At first re-initialize the super class ... */
  TemplatesDeviceClass__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->PollServerData );
}

/* Finalizer method for the class 'Device::PhoneServerClass' */
void DevicePhoneServerClass__Done( DevicePhoneServerClass _this )
{
  /* Call the user defined destructor of the class */
  DevicePhoneServerClass_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesDeviceClass );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->PollServerData );

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_.Super );
}

/* 'C' function for method : 'Device::PhoneServerClass.askServerData()' */
void DevicePhoneServerClass_askServerData( DevicePhoneServerClass _this, XObject 
  sender )
{
  XString url;
  XString myCarID;
  XString senderNumber;
  XString message;
  XString messageContent;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  myCarID = EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact->PhoneNumber;
  senderNumber = 0;
  message = 0;
  messageContent = 0;
  url = EwConcatString( EwConcatString( EwLoadString( &_Const0021 ), myCarID ), 
  EwLoadString( &_Const0022 ));
  {
    let req = new XMLHttpRequest();

    req.open( "GET", url, false );

    req.onload = function() {
      if ( req.status == 200 ) {

        let json       = JSON.parse( req.response );
        senderNumber   = json.sender;
        message        = json.message;
        messageContent = json.content;
      }};

    req.send();
  }

  if ( !EwCompString( message, EwLoadString( &_Const0023 )))
    DeviceDeviceClass_ReceiveCall( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
    senderNumber );
  else
    if ( !EwCompString( message, EwLoadString( &_Const0024 )))
      DeviceDeviceClass_ReceiveCallAnswered( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
      senderNumber );
    else
      if ( !EwCompString( message, EwLoadString( &_Const0025 )))
        DeviceDeviceClass_ReceiveCallRejected( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
        senderNumber );
      else
        if ( !EwCompString( message, EwLoadString( &_Const0026 )) || !EwCompString( 
            message, EwLoadString( &_Const0027 )))
          DeviceDeviceClass_ReceiveEndCall( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass ), 
          senderNumber );
        else
          if ( !EwCompString( message, EwLoadString( &_Const0028 )))
            DeviceDeviceClass_ReceiveMissedCall( EwGetAutoObject( &DeviceDevice, 
            DeviceDeviceClass ), senderNumber );
          else
            if ( !EwCompString( message, EwLoadString( &_Const0029 )))
              DeviceDeviceClass_ReceiveMessage( EwGetAutoObject( &DeviceDevice, 
              DeviceDeviceClass ), senderNumber, messageContent );
}

/* 'C' function for method : 'Device::PhoneServerClass.Done()' */
void DevicePhoneServerClass_Done( DevicePhoneServerClass _this )
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
       Device::DeviceClass1. If you have stored this object at the initialization
       time (in the 'Init' method) in some global C variable or registered it by the
       middleware, it is important to perform now the opposite operation. Set the
       global variable to NULL or de-register 'thisObject' object from the middleware.

    */
  }
}

/* 'C' function for method : 'Device::PhoneServerClass.Init()' */
void DevicePhoneServerClass_Init( DevicePhoneServerClass _this, XHandle aArg )
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
       Device::DeviceClass1. You can store this variable e.g. in the middleware
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

/* 'C' function for method : 'Device::PhoneServerClass.StartCall()' */
XBool DevicePhoneServerClass_StartCall( DevicePhoneServerClass _this, XString aReceiverNumber )
{
  XString url;
  XString result;
  XString senderID;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  result = 0;
  senderID = EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact->PhoneNumber;
  url = EwConcatString( EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
  &_Const002A ), senderID ), EwLoadString( &_Const0022 )), aReceiverNumber ), EwLoadString( 
  &_Const002B ));
  {
    var req = new XMLHttpRequest();

    req.open( "POST", url, false );

    req.onload = function() {
      if ( req.status == 200 ) {
          console.log( req.status );
          result = req.responseText;
      }};

    req.send();
  }
  EwTrace( "%s", result );

  if ( !EwCompString( result, 0 ))
    return 1;

  return 0;
}

/* 'C' function for method : 'Device::PhoneServerClass.EndCall()' */
XBool DevicePhoneServerClass_EndCall( DevicePhoneServerClass _this, XString aReceiverNumber )
{
  XString url;
  XString result;
  XString senderID;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  result = 0;
  senderID = EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact->PhoneNumber;
  url = EwConcatString( EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
  &_Const002A ), senderID ), EwLoadString( &_Const0022 )), aReceiverNumber ), EwLoadString( 
  &_Const002C ));
  {
    var xhr = new XMLHttpRequest();

    xhr.open( "POST", url, false ); 

    xhr.onload = function() {
      if ( req.status == 200 ) {
          console.log(req.status );
          result = req.responseText;
      }};

    xhr.send();
  }
  EwTrace( "%s", result );

  if ( !EwCompString( result, 0 ))
    return 1;

  return 0;
}

/* 'C' function for method : 'Device::PhoneServerClass.AnswerCall()' */
XBool DevicePhoneServerClass_AnswerCall( DevicePhoneServerClass _this, XString aReceiverNumber )
{
  XString url;
  XString result;
  XString senderID;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  result = 0;
  senderID = EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact->PhoneNumber;
  url = EwConcatString( EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
  &_Const002A ), senderID ), EwLoadString( &_Const0022 )), aReceiverNumber ), EwLoadString( 
  &_Const002D ));
  {
    var req = new XMLHttpRequest(); 

    req.open( "POST", url, false );

    req.onload = function() {
      if ( req.status == 200 ) {
          console.log( req.status );
          result = req.responseText;
      }};

    req.send();
  }
  EwTrace( "%s", result );

  if ( !EwCompString( result, 0 ))
    return 1;

  return 0;
}

/* 'C' function for method : 'Device::PhoneServerClass.CancelledCall()' */
XBool DevicePhoneServerClass_CancelledCall( DevicePhoneServerClass _this, XString 
  aReceiverNumber )
{
  XString url;
  XString result;
  XString senderID;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  result = 0;
  senderID = EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact->PhoneNumber;
  url = EwConcatString( EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
  &_Const002A ), senderID ), EwLoadString( &_Const0022 )), aReceiverNumber ), EwLoadString( 
  &_Const002C ));
  {
    var req = new XMLHttpRequest();

    req.open( "POST", url, false );

    req.onload = function() {
      if ( req.status == 200 ) {
          console.log( req.status );
          result = req.responseText;
      }};

    req.send();
  }
  EwTrace( "%s", result );

  if ( !EwCompString( result, 0 ))
    return 1;

  return 0;
}

/* 'C' function for method : 'Device::PhoneServerClass.SendMessage()' */
XBool DevicePhoneServerClass_SendMessage( DevicePhoneServerClass _this, XString 
  aReceiverNumber, XString aMessage )
{
  XString result;
  XString url;
  XString senderID;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  result = 0;
  senderID = EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->MyContact->PhoneNumber;
  url = EwConcatString( EwConcatString( EwConcatString( EwConcatString( EwLoadString( 
  &_Const002E ), senderID ), EwLoadString( &_Const0022 )), aReceiverNumber ), EwLoadString( 
  &_Const002F ));
  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwLoadString( &_Const0030 ), 
    aReceiverNumber ), EwLoadString( &_Const0002 )), aMessage ));
  {
    var req = new XMLHttpRequest();

    req.open("POST", url, false);

    req.onload = function() {
      if ( req.status == 200 ) {
          console.log( req.status );
          result = req.responseText;
      }};

      req.send(aMessage);
  }
  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwLoadString( &_Const0031 ), 
    result ), EwLoadString( &_Const0032 )), url ));

  if ( !EwCompString( result, 0 ))
    return 1;

  return 0;
}

/* Variants derived from the class : 'Device::PhoneServerClass' */
EW_DEFINE_CLASS_VARIANTS( DevicePhoneServerClass )
EW_END_OF_CLASS_VARIANTS( DevicePhoneServerClass )

/* Virtual Method Table (VMT) for the class : 'Device::PhoneServerClass' */
EW_DEFINE_CLASS( DevicePhoneServerClass, TemplatesDeviceClass, PollServerData, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, "Device::PhoneServerClass" )
EW_END_OF_CLASS( DevicePhoneServerClass )

/* User defined auto object: 'Device::PhoneServer' */
EW_DEFINE_AUTOOBJECT( DevicePhoneServer, DevicePhoneServerClass )

/* Initializer for the auto object 'Device::PhoneServer' */
void DevicePhoneServer__Init( DevicePhoneServerClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Device::PhoneServer' */
EW_DEFINE_AUTOOBJECT_VARIANTS( DevicePhoneServer )
EW_END_OF_AUTOOBJECT_VARIANTS( DevicePhoneServer )

/* Initializer for the class 'Device::Message' */
void DeviceMessage__Init( DeviceMessage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( DeviceMessage );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( DeviceMessage );
}

/* Re-Initializer for the class 'Device::Message' */
void DeviceMessage__ReInit( DeviceMessage _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Device::Message' */
void DeviceMessage__Done( DeviceMessage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Device::Message.OnSetMessageContent()' */
void DeviceMessage_OnSetMessageContent( DeviceMessage _this, XString value )
{
  if ( !EwCompString( _this->MessageContent, value ))
    return;

  _this->MessageContent = EwShareString( value );
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::Message.OnSetSender()' */
void DeviceMessage_OnSetSender( DeviceMessage _this, DeviceContact value )
{
  if ( _this->Sender == value )
    return;

  _this->Sender = value;
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::Message.OnSetReceiver()' */
void DeviceMessage_OnSetReceiver( DeviceMessage _this, DeviceContact value )
{
  if ( _this->Receiver == value )
    return;

  _this->Receiver = value;
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::Message.OnSetTimeSent()' */
void DeviceMessage_OnSetTimeSent( DeviceMessage _this, CoreTime value )
{
  if ( _this->TimeSent == value )
    return;

  _this->TimeSent = value;
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::Message.GetTimeOfCall()' */
XString DeviceMessage_GetTimeOfCall( DeviceMessage _this )
{
  CoreTimeSpan time;

  if ( _this->TimeSent == 0 )
    return 0;

  time = CoreTime_Difference( CoreTime_OnGetCurrentTime( EwNewObject( CoreTime, 
  0 )), _this->TimeSent );

  if ( CoreTimeSpan_OnGetTotalHours( time ) < 24 )
    return CoreTime_Format( _this->TimeSent, EwLoadString( &_Const001E ));

  if ( _this->TimeSent->Day < CoreTime_OnGetCurrentTime( EwNewObject( CoreTime, 
      0 ))->Day )
    return CoreTime_Format( _this->TimeSent, EwLoadString( &_Const001F ));
  else
    return CoreTime_Format( _this->TimeSent, EwLoadString( &_Const0020 ));
}

/* 'C' function for method : 'Device::Message.TraceMessage()' */
void DeviceMessage_TraceMessage( DeviceMessage _this )
{
  EwTrace( "%s", EwConcatString( EwLoadString( &_Const0033 ), _this->MessageContent ));
}

/* 'C' function for method : 'Device::Message.OnSetIsSeen()' */
void DeviceMessage_OnSetIsSeen( DeviceMessage _this, XBool value )
{
  if ( _this->IsSeen == value )
    return;

  _this->IsSeen = value;
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Variants derived from the class : 'Device::Message' */
EW_DEFINE_CLASS_VARIANTS( DeviceMessage )
EW_END_OF_CLASS_VARIANTS( DeviceMessage )

/* Virtual Method Table (VMT) for the class : 'Device::Message' */
EW_DEFINE_CLASS( DeviceMessage, XObject, next, next, MessageContent, MessageContent, 
                 MessageContent, IsSeen, "Device::Message" )
EW_END_OF_CLASS( DeviceMessage )

/* Initializer for the class 'Device::MessagesList' */
void DeviceMessagesList__Init( DeviceMessagesList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( DeviceMessagesList );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( DeviceMessagesList );
}

/* Re-Initializer for the class 'Device::MessagesList' */
void DeviceMessagesList__ReInit( DeviceMessagesList _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Device::MessagesList' */
void DeviceMessagesList__Done( DeviceMessagesList _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Device::MessagesList.Add()' */
void DeviceMessagesList_Add( DeviceMessagesList _this, DeviceMessage aMessage )
{
  if ( _this->head == 0 )
    _this->head = aMessage;
  else
  {
    DeviceMessage lastNode = _this->head;

    while ( lastNode->next != 0 )
      lastNode = lastNode->next;

    lastNode->next = aMessage;
  }

  DeviceMessagesList_OnSetNoOfItems( _this, _this->NoOfItems + 1 );
}

/* 'C' function for method : 'Device::MessagesList.Remove()' */
void DeviceMessagesList_Remove( DeviceMessagesList _this, DeviceMessage aMessage )
{
  DeviceMessage mes = _this->head;
  DeviceMessage prev = 0;

  if (( mes != 0 ) && ( mes == aMessage ))
  {
    _this->head = mes->next;
    DeviceMessagesList_OnSetNoOfItems( _this, _this->NoOfItems - 1 );
  }
  else
  {
    while (( mes != 0 ) && ( mes != aMessage ))
    {
      prev = mes;
      mes = mes->next;
    }

    prev->next = mes->next;
    DeviceMessagesList_OnSetNoOfItems( _this, _this->NoOfItems - 1 );
  }
}

/* 'C' function for method : 'Device::MessagesList.TraceMessages()' */
void DeviceMessagesList_TraceMessages( DeviceMessagesList _this )
{
  DeviceMessage elem = _this->head;

  while ( elem != 0 )
  {
    DeviceMessage_TraceMessage( elem );
    elem = elem->next;
  }
}

/* 'C' function for method : 'Device::MessagesList.OnSetNoOfItems()' */
void DeviceMessagesList_OnSetNoOfItems( DeviceMessagesList _this, XInt32 value )
{
  if ( _this->NoOfItems == value )
    return;

  _this->NoOfItems = value;
  EwNotifyRefObservers( EwNewRef( _this, DeviceMessagesList_OnGetNoOfItems, DeviceMessagesList_OnSetNoOfItems ), 
    0 );
}

/* 'C' function for method : 'Device::MessagesList.GetLastMessage()' */
DeviceMessage DeviceMessagesList_GetLastMessage( DeviceMessagesList _this )
{
  DeviceMessage msg = _this->head;

  if ( msg != 0 )
    while ( msg->next != 0 )
      msg = msg->next;

  return msg;
}

/* 'C' function for method : 'Device::MessagesList.RemoveAll()' */
void DeviceMessagesList_RemoveAll( DeviceMessagesList _this )
{
  _this->head = 0;
}

/* Default onget method for the property 'NoOfItems' */
XInt32 DeviceMessagesList_OnGetNoOfItems( DeviceMessagesList _this )
{
  return _this->NoOfItems;
}

/* Variants derived from the class : 'Device::MessagesList' */
EW_DEFINE_CLASS_VARIANTS( DeviceMessagesList )
EW_END_OF_CLASS_VARIANTS( DeviceMessagesList )

/* Virtual Method Table (VMT) for the class : 'Device::MessagesList' */
EW_DEFINE_CLASS( DeviceMessagesList, XObject, head, head, NoOfItems, NoOfItems, 
                 NoOfItems, NoOfItems, "Device::MessagesList" )
EW_END_OF_CLASS( DeviceMessagesList )

/* Initializer for the class 'Device::HistoryMessagesList' */
void DeviceHistoryMessagesList__Init( DeviceHistoryMessagesList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  DeviceContactsList__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( DeviceHistoryMessagesList );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( DeviceHistoryMessagesList );
}

/* Re-Initializer for the class 'Device::HistoryMessagesList' */
void DeviceHistoryMessagesList__ReInit( DeviceHistoryMessagesList _this )
{
  /* At first re-initialize the super class ... */
  DeviceContactsList__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Device::HistoryMessagesList' */
void DeviceHistoryMessagesList__Done( DeviceHistoryMessagesList _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( DeviceContactsList );

  /* Don't forget to deinitialize the super class ... */
  DeviceContactsList__Done( &_this->_.Super );
}

/* 'C' function for method : 'Device::HistoryMessagesList.OnSetUnreadMessagesNr()' */
void DeviceHistoryMessagesList_OnSetUnreadMessagesNr( DeviceHistoryMessagesList _this, 
  XInt32 value )
{
  if ( _this->UnreadMessagesNr == value )
    return;

  _this->UnreadMessagesNr = value;
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* 'C' function for method : 'Device::HistoryMessagesList.FindUnreadMessagesNr()' */
void DeviceHistoryMessagesList_FindUnreadMessagesNr( DeviceHistoryMessagesList _this )
{
  DeviceContactListElement elem = _this->Super1.head;
  XInt32 nr = 0;

  while ( elem != 0 )
  {
    nr += elem->Data->UnreadMessagesNr;
    elem = elem->next;
  }

  if ( _this->UnreadMessagesNr != nr )
    DeviceHistoryMessagesList_OnSetUnreadMessagesNr( _this, nr );
}

/* Default onget method for the property 'UnreadMessagesNr' */
XInt32 DeviceHistoryMessagesList_OnGetUnreadMessagesNr( DeviceHistoryMessagesList _this )
{
  return _this->UnreadMessagesNr;
}

/* Variants derived from the class : 'Device::HistoryMessagesList' */
EW_DEFINE_CLASS_VARIANTS( DeviceHistoryMessagesList )
EW_END_OF_CLASS_VARIANTS( DeviceHistoryMessagesList )

/* Virtual Method Table (VMT) for the class : 'Device::HistoryMessagesList' */
EW_DEFINE_CLASS( DeviceHistoryMessagesList, DeviceContactsList, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Device::HistoryMessagesList" )
EW_END_OF_CLASS( DeviceHistoryMessagesList )

/* Embedded Wizard */
