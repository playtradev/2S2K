﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Attribute[]
struct AttributeU5BU5D_t1575011174;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.List`1<System.ComponentModel.IComponent>
struct List_1_t3792292994;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4221220734;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1108123056;
// System.ComponentModel.IComponent
struct IComponent_t2320218252;
// System.ComponentModel.IExtenderProvider
struct IExtenderProvider_t3668760454;
// System.ComponentModel.ISite
struct ISite_t4006303512;
// System.ComponentModel.LicenseContext
struct LicenseContext_t2141136407;
// System.ComponentModel.ListEntry
struct ListEntry_t1182276877;
// System.ComponentModel.MaskedTextProvider
struct MaskedTextProvider_t3775648146;
// System.ComponentModel.MaskedTextProvider/EditPosition[]
struct EditPositionU5BU5D_t3789910327;
// System.ComponentModel.NestedContainer
struct NestedContainer_t119127665;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3244362832;
// System.ComponentModel.PropertyTabScope[]
struct PropertyTabScopeU5BU5D_t3490735091;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2249118273;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t2184948248;
// System.Delegate
struct Delegate_t1188392813;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef CONTAINER_T1808277744_H
#define CONTAINER_T1808277744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Container
struct  Container_t1808277744  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.ComponentModel.IComponent> System.ComponentModel.Container::c
	List_1_t3792292994 * ___c_0;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(Container_t1808277744, ___c_0)); }
	inline List_1_t3792292994 * get_c_0() const { return ___c_0; }
	inline List_1_t3792292994 ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(List_1_t3792292994 * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((&___c_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTAINER_T1808277744_H
#ifndef ENUMCOMPARER_T557155003_H
#define ENUMCOMPARER_T557155003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter/EnumComparer
struct  EnumComparer_t557155003  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCOMPARER_T557155003_H
#ifndef EVENTDESCRIPTORCOLLECTION_T2278158832_H
#define EVENTDESCRIPTORCOLLECTION_T2278158832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptorCollection
struct  EventDescriptorCollection_t2278158832  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.EventDescriptorCollection::eventList
	ArrayList_t2718874744 * ___eventList_0;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::isReadOnly
	bool ___isReadOnly_1;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832, ___eventList_0)); }
	inline ArrayList_t2718874744 * get_eventList_0() const { return ___eventList_0; }
	inline ArrayList_t2718874744 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(ArrayList_t2718874744 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_isReadOnly_1() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832, ___isReadOnly_1)); }
	inline bool get_isReadOnly_1() const { return ___isReadOnly_1; }
	inline bool* get_address_of_isReadOnly_1() { return &___isReadOnly_1; }
	inline void set_isReadOnly_1(bool value)
	{
		___isReadOnly_1 = value;
	}
};

struct EventDescriptorCollection_t2278158832_StaticFields
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.EventDescriptorCollection::Empty
	EventDescriptorCollection_t2278158832 * ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832_StaticFields, ___Empty_2)); }
	inline EventDescriptorCollection_t2278158832 * get_Empty_2() const { return ___Empty_2; }
	inline EventDescriptorCollection_t2278158832 ** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(EventDescriptorCollection_t2278158832 * value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTORCOLLECTION_T2278158832_H
#ifndef EVENTHANDLERLIST_T1108123056_H
#define EVENTHANDLERLIST_T1108123056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t1108123056  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t1182276877 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t1188392813 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t1108123056, ___entries_0)); }
	inline ListEntry_t1182276877 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t1182276877 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t1182276877 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t1108123056, ___null_entry_1)); }
	inline Delegate_t1188392813 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t1188392813 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t1188392813 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T1108123056_H
#ifndef INSTANCECREATIONEDITOR_T238900532_H
#define INSTANCECREATIONEDITOR_T238900532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InstanceCreationEditor
struct  InstanceCreationEditor_t238900532  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCECREATIONEDITOR_T238900532_H
#ifndef LICENSE_T2258946041_H
#define LICENSE_T2258946041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.License
struct  License_t2258946041  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSE_T2258946041_H
#ifndef LICENSECONTEXT_T2141136407_H
#define LICENSECONTEXT_T2141136407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseContext
struct  LicenseContext_t2141136407  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSECONTEXT_T2141136407_H
#ifndef LICENSEMANAGER_T19983147_H
#define LICENSEMANAGER_T19983147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseManager
struct  LicenseManager_t19983147  : public RuntimeObject
{
public:

public:
};

struct LicenseManager_t19983147_StaticFields
{
public:
	// System.ComponentModel.LicenseContext System.ComponentModel.LicenseManager::mycontext
	LicenseContext_t2141136407 * ___mycontext_0;
	// System.Object System.ComponentModel.LicenseManager::contextLockUser
	RuntimeObject * ___contextLockUser_1;
	// System.Object System.ComponentModel.LicenseManager::lockObject
	RuntimeObject * ___lockObject_2;

public:
	inline static int32_t get_offset_of_mycontext_0() { return static_cast<int32_t>(offsetof(LicenseManager_t19983147_StaticFields, ___mycontext_0)); }
	inline LicenseContext_t2141136407 * get_mycontext_0() const { return ___mycontext_0; }
	inline LicenseContext_t2141136407 ** get_address_of_mycontext_0() { return &___mycontext_0; }
	inline void set_mycontext_0(LicenseContext_t2141136407 * value)
	{
		___mycontext_0 = value;
		Il2CppCodeGenWriteBarrier((&___mycontext_0), value);
	}

	inline static int32_t get_offset_of_contextLockUser_1() { return static_cast<int32_t>(offsetof(LicenseManager_t19983147_StaticFields, ___contextLockUser_1)); }
	inline RuntimeObject * get_contextLockUser_1() const { return ___contextLockUser_1; }
	inline RuntimeObject ** get_address_of_contextLockUser_1() { return &___contextLockUser_1; }
	inline void set_contextLockUser_1(RuntimeObject * value)
	{
		___contextLockUser_1 = value;
		Il2CppCodeGenWriteBarrier((&___contextLockUser_1), value);
	}

	inline static int32_t get_offset_of_lockObject_2() { return static_cast<int32_t>(offsetof(LicenseManager_t19983147_StaticFields, ___lockObject_2)); }
	inline RuntimeObject * get_lockObject_2() const { return ___lockObject_2; }
	inline RuntimeObject ** get_address_of_lockObject_2() { return &___lockObject_2; }
	inline void set_lockObject_2(RuntimeObject * value)
	{
		___lockObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEMANAGER_T19983147_H
#ifndef LICENSEPROVIDER_T1830579869_H
#define LICENSEPROVIDER_T1830579869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseProvider
struct  LicenseProvider_t1830579869  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEPROVIDER_T1830579869_H
#ifndef LISTENTRY_T1182276877_H
#define LISTENTRY_T1182276877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t1182276877  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t1188392813 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t1182276877 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t1182276877, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t1182276877, ___value_1)); }
	inline Delegate_t1188392813 * get_value_1() const { return ___value_1; }
	inline Delegate_t1188392813 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t1188392813 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t1182276877, ___next_2)); }
	inline ListEntry_t1182276877 * get_next_2() const { return ___next_2; }
	inline ListEntry_t1182276877 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t1182276877 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T1182276877_H
#ifndef LISTSORTDESCRIPTIONCOLLECTION_T2955388176_H
#define LISTSORTDESCRIPTIONCOLLECTION_T2955388176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDescriptionCollection
struct  ListSortDescriptionCollection_t2955388176  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.ListSortDescriptionCollection::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ListSortDescriptionCollection_t2955388176, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDESCRIPTIONCOLLECTION_T2955388176_H
#ifndef MARSHALBYVALUECOMPONENT_T828052580_H
#define MARSHALBYVALUECOMPONENT_T828052580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t828052580  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t1108123056 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t828052580, ___eventList_0)); }
	inline EventHandlerList_t1108123056 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t1108123056 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t1108123056 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t828052580, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t828052580, ___disposedEvent_2)); }
	inline RuntimeObject * get_disposedEvent_2() const { return ___disposedEvent_2; }
	inline RuntimeObject ** get_address_of_disposedEvent_2() { return &___disposedEvent_2; }
	inline void set_disposedEvent_2(RuntimeObject * value)
	{
		___disposedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYVALUECOMPONENT_T828052580_H
#ifndef MASKEDTEXTPROVIDER_T3775648146_H
#define MASKEDTEXTPROVIDER_T3775648146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MaskedTextProvider
struct  MaskedTextProvider_t3775648146  : public RuntimeObject
{
public:
	// System.Boolean System.ComponentModel.MaskedTextProvider::allow_prompt_as_input
	bool ___allow_prompt_as_input_0;
	// System.Boolean System.ComponentModel.MaskedTextProvider::ascii_only
	bool ___ascii_only_1;
	// System.Globalization.CultureInfo System.ComponentModel.MaskedTextProvider::culture
	CultureInfo_t4157843068 * ___culture_2;
	// System.Boolean System.ComponentModel.MaskedTextProvider::include_literals
	bool ___include_literals_3;
	// System.Boolean System.ComponentModel.MaskedTextProvider::include_prompt
	bool ___include_prompt_4;
	// System.Boolean System.ComponentModel.MaskedTextProvider::is_password
	bool ___is_password_5;
	// System.String System.ComponentModel.MaskedTextProvider::mask
	String_t* ___mask_6;
	// System.Char System.ComponentModel.MaskedTextProvider::password_char
	Il2CppChar ___password_char_7;
	// System.Char System.ComponentModel.MaskedTextProvider::prompt_char
	Il2CppChar ___prompt_char_8;
	// System.Boolean System.ComponentModel.MaskedTextProvider::reset_on_prompt
	bool ___reset_on_prompt_9;
	// System.Boolean System.ComponentModel.MaskedTextProvider::reset_on_space
	bool ___reset_on_space_10;
	// System.Boolean System.ComponentModel.MaskedTextProvider::skip_literals
	bool ___skip_literals_11;
	// System.ComponentModel.MaskedTextProvider/EditPosition[] System.ComponentModel.MaskedTextProvider::edit_positions
	EditPositionU5BU5D_t3789910327* ___edit_positions_12;

public:
	inline static int32_t get_offset_of_allow_prompt_as_input_0() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___allow_prompt_as_input_0)); }
	inline bool get_allow_prompt_as_input_0() const { return ___allow_prompt_as_input_0; }
	inline bool* get_address_of_allow_prompt_as_input_0() { return &___allow_prompt_as_input_0; }
	inline void set_allow_prompt_as_input_0(bool value)
	{
		___allow_prompt_as_input_0 = value;
	}

	inline static int32_t get_offset_of_ascii_only_1() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___ascii_only_1)); }
	inline bool get_ascii_only_1() const { return ___ascii_only_1; }
	inline bool* get_address_of_ascii_only_1() { return &___ascii_only_1; }
	inline void set_ascii_only_1(bool value)
	{
		___ascii_only_1 = value;
	}

	inline static int32_t get_offset_of_culture_2() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___culture_2)); }
	inline CultureInfo_t4157843068 * get_culture_2() const { return ___culture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_culture_2() { return &___culture_2; }
	inline void set_culture_2(CultureInfo_t4157843068 * value)
	{
		___culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___culture_2), value);
	}

	inline static int32_t get_offset_of_include_literals_3() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___include_literals_3)); }
	inline bool get_include_literals_3() const { return ___include_literals_3; }
	inline bool* get_address_of_include_literals_3() { return &___include_literals_3; }
	inline void set_include_literals_3(bool value)
	{
		___include_literals_3 = value;
	}

	inline static int32_t get_offset_of_include_prompt_4() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___include_prompt_4)); }
	inline bool get_include_prompt_4() const { return ___include_prompt_4; }
	inline bool* get_address_of_include_prompt_4() { return &___include_prompt_4; }
	inline void set_include_prompt_4(bool value)
	{
		___include_prompt_4 = value;
	}

	inline static int32_t get_offset_of_is_password_5() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___is_password_5)); }
	inline bool get_is_password_5() const { return ___is_password_5; }
	inline bool* get_address_of_is_password_5() { return &___is_password_5; }
	inline void set_is_password_5(bool value)
	{
		___is_password_5 = value;
	}

	inline static int32_t get_offset_of_mask_6() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___mask_6)); }
	inline String_t* get_mask_6() const { return ___mask_6; }
	inline String_t** get_address_of_mask_6() { return &___mask_6; }
	inline void set_mask_6(String_t* value)
	{
		___mask_6 = value;
		Il2CppCodeGenWriteBarrier((&___mask_6), value);
	}

	inline static int32_t get_offset_of_password_char_7() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___password_char_7)); }
	inline Il2CppChar get_password_char_7() const { return ___password_char_7; }
	inline Il2CppChar* get_address_of_password_char_7() { return &___password_char_7; }
	inline void set_password_char_7(Il2CppChar value)
	{
		___password_char_7 = value;
	}

	inline static int32_t get_offset_of_prompt_char_8() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___prompt_char_8)); }
	inline Il2CppChar get_prompt_char_8() const { return ___prompt_char_8; }
	inline Il2CppChar* get_address_of_prompt_char_8() { return &___prompt_char_8; }
	inline void set_prompt_char_8(Il2CppChar value)
	{
		___prompt_char_8 = value;
	}

	inline static int32_t get_offset_of_reset_on_prompt_9() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___reset_on_prompt_9)); }
	inline bool get_reset_on_prompt_9() const { return ___reset_on_prompt_9; }
	inline bool* get_address_of_reset_on_prompt_9() { return &___reset_on_prompt_9; }
	inline void set_reset_on_prompt_9(bool value)
	{
		___reset_on_prompt_9 = value;
	}

	inline static int32_t get_offset_of_reset_on_space_10() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___reset_on_space_10)); }
	inline bool get_reset_on_space_10() const { return ___reset_on_space_10; }
	inline bool* get_address_of_reset_on_space_10() { return &___reset_on_space_10; }
	inline void set_reset_on_space_10(bool value)
	{
		___reset_on_space_10 = value;
	}

	inline static int32_t get_offset_of_skip_literals_11() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___skip_literals_11)); }
	inline bool get_skip_literals_11() const { return ___skip_literals_11; }
	inline bool* get_address_of_skip_literals_11() { return &___skip_literals_11; }
	inline void set_skip_literals_11(bool value)
	{
		___skip_literals_11 = value;
	}

	inline static int32_t get_offset_of_edit_positions_12() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___edit_positions_12)); }
	inline EditPositionU5BU5D_t3789910327* get_edit_positions_12() const { return ___edit_positions_12; }
	inline EditPositionU5BU5D_t3789910327** get_address_of_edit_positions_12() { return &___edit_positions_12; }
	inline void set_edit_positions_12(EditPositionU5BU5D_t3789910327* value)
	{
		___edit_positions_12 = value;
		Il2CppCodeGenWriteBarrier((&___edit_positions_12), value);
	}
};

struct MaskedTextProvider_t3775648146_StaticFields
{
public:
	// System.Char System.ComponentModel.MaskedTextProvider::default_prompt_char
	Il2CppChar ___default_prompt_char_13;
	// System.Char System.ComponentModel.MaskedTextProvider::default_password_char
	Il2CppChar ___default_password_char_14;

public:
	inline static int32_t get_offset_of_default_prompt_char_13() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146_StaticFields, ___default_prompt_char_13)); }
	inline Il2CppChar get_default_prompt_char_13() const { return ___default_prompt_char_13; }
	inline Il2CppChar* get_address_of_default_prompt_char_13() { return &___default_prompt_char_13; }
	inline void set_default_prompt_char_13(Il2CppChar value)
	{
		___default_prompt_char_13 = value;
	}

	inline static int32_t get_offset_of_default_password_char_14() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146_StaticFields, ___default_password_char_14)); }
	inline Il2CppChar get_default_password_char_14() const { return ___default_password_char_14; }
	inline Il2CppChar* get_address_of_default_password_char_14() { return &___default_password_char_14; }
	inline void set_default_password_char_14(Il2CppChar value)
	{
		___default_password_char_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKEDTEXTPROVIDER_T3775648146_H
#ifndef MEMBERDESCRIPTOR_T3815403747_H
#define MEMBERDESCRIPTOR_T3815403747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3815403747  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t1575011174* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t4221220734 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attrs_1)); }
	inline AttributeU5BU5D_t1575011174* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t1575011174** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t1575011174* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attrCollection_2)); }
	inline AttributeCollection_t4221220734 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t4221220734 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t4221220734 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t3815403747_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747_StaticFields, ___default_comparer_3)); }
	inline RuntimeObject* get_default_comparer_3() const { return ___default_comparer_3; }
	inline RuntimeObject** get_address_of_default_comparer_3() { return &___default_comparer_3; }
	inline void set_default_comparer_3(RuntimeObject* value)
	{
		___default_comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T3815403747_H
#ifndef MEMBERDESCRIPTORCOMPARER_T861557818_H
#define MEMBERDESCRIPTORCOMPARER_T861557818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t861557818  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T861557818_H
#ifndef SITE_T751657764_H
#define SITE_T751657764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NestedContainer/Site
struct  Site_t751657764  : public RuntimeObject
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.NestedContainer/Site::_component
	RuntimeObject* ____component_0;
	// System.ComponentModel.NestedContainer System.ComponentModel.NestedContainer/Site::_nestedContainer
	NestedContainer_t119127665 * ____nestedContainer_1;
	// System.String System.ComponentModel.NestedContainer/Site::_siteName
	String_t* ____siteName_2;

public:
	inline static int32_t get_offset_of__component_0() { return static_cast<int32_t>(offsetof(Site_t751657764, ____component_0)); }
	inline RuntimeObject* get__component_0() const { return ____component_0; }
	inline RuntimeObject** get_address_of__component_0() { return &____component_0; }
	inline void set__component_0(RuntimeObject* value)
	{
		____component_0 = value;
		Il2CppCodeGenWriteBarrier((&____component_0), value);
	}

	inline static int32_t get_offset_of__nestedContainer_1() { return static_cast<int32_t>(offsetof(Site_t751657764, ____nestedContainer_1)); }
	inline NestedContainer_t119127665 * get__nestedContainer_1() const { return ____nestedContainer_1; }
	inline NestedContainer_t119127665 ** get_address_of__nestedContainer_1() { return &____nestedContainer_1; }
	inline void set__nestedContainer_1(NestedContainer_t119127665 * value)
	{
		____nestedContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____nestedContainer_1), value);
	}

	inline static int32_t get_offset_of__siteName_2() { return static_cast<int32_t>(offsetof(Site_t751657764, ____siteName_2)); }
	inline String_t* get__siteName_2() const { return ____siteName_2; }
	inline String_t** get_address_of__siteName_2() { return &____siteName_2; }
	inline void set__siteName_2(String_t* value)
	{
		____siteName_2 = value;
		Il2CppCodeGenWriteBarrier((&____siteName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SITE_T751657764_H
#ifndef PROPERTYDESCRIPTORCOLLECTION_T4164928659_H
#define PROPERTYDESCRIPTORCOLLECTION_T4164928659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t4164928659  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.PropertyDescriptorCollection::properties
	ArrayList_t2718874744 * ___properties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659, ___properties_1)); }
	inline ArrayList_t2718874744 * get_properties_1() const { return ___properties_1; }
	inline ArrayList_t2718874744 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(ArrayList_t2718874744 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((&___properties_1), value);
	}

	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}
};

struct PropertyDescriptorCollection_t4164928659_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t4164928659 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t4164928659 * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t4164928659 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t4164928659 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORCOLLECTION_T4164928659_H
#ifndef TYPECONVERTER_T2249118273_H
#define TYPECONVERTER_T2249118273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2249118273  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2249118273_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef BASENUMBERCONVERTER_T312147029_H
#define BASENUMBERCONVERTER_T312147029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t312147029  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t312147029, ___InnerType_0)); }
	inline Type_t * get_InnerType_0() const { return ___InnerType_0; }
	inline Type_t ** get_address_of_InnerType_0() { return &___InnerType_0; }
	inline void set_InnerType_0(Type_t * value)
	{
		___InnerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___InnerType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T312147029_H
#ifndef CANCELEVENTARGS_T1846056344_H
#define CANCELEVENTARGS_T1846056344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CancelEventArgs
struct  CancelEventArgs_t1846056344  : public EventArgs_t3591816995
{
public:
	// System.Boolean System.ComponentModel.CancelEventArgs::cancel
	bool ___cancel_1;

public:
	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(CancelEventArgs_t1846056344, ___cancel_1)); }
	inline bool get_cancel_1() const { return ___cancel_1; }
	inline bool* get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(bool value)
	{
		___cancel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANCELEVENTARGS_T1846056344_H
#ifndef EDITORATTRIBUTE_T1332199665_H
#define EDITORATTRIBUTE_T1332199665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t1332199665  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t1332199665, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t1332199665, ___basename_1)); }
	inline String_t* get_basename_1() const { return ___basename_1; }
	inline String_t** get_address_of_basename_1() { return &___basename_1; }
	inline void set_basename_1(String_t* value)
	{
		___basename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORATTRIBUTE_T1332199665_H
#ifndef ENUMCONVERTER_T1688858217_H
#define ENUMCONVERTER_T1688858217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t1688858217  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::stdValues
	StandardValuesCollection_t2184948248 * ___stdValues_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t1688858217, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_stdValues_1() { return static_cast<int32_t>(offsetof(EnumConverter_t1688858217, ___stdValues_1)); }
	inline StandardValuesCollection_t2184948248 * get_stdValues_1() const { return ___stdValues_1; }
	inline StandardValuesCollection_t2184948248 ** get_address_of_stdValues_1() { return &___stdValues_1; }
	inline void set_stdValues_1(StandardValuesCollection_t2184948248 * value)
	{
		___stdValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___stdValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T1688858217_H
#ifndef EVENTDESCRIPTOR_T88602298_H
#define EVENTDESCRIPTOR_T88602298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptor
struct  EventDescriptor_t88602298  : public MemberDescriptor_t3815403747
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTOR_T88602298_H
#ifndef EXPANDABLEOBJECTCONVERTER_T420832579_H
#define EXPANDABLEOBJECTCONVERTER_T420832579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t420832579  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T420832579_H
#ifndef EXTENDERPROVIDEDPROPERTYATTRIBUTE_T3771163592_H
#define EXTENDERPROVIDEDPROPERTYATTRIBUTE_T3771163592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExtenderProvidedPropertyAttribute
struct  ExtenderProvidedPropertyAttribute_t3771163592  : public Attribute_t861562559
{
public:
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ExtenderProvidedPropertyAttribute::extender
	PropertyDescriptor_t3244362832 * ___extender_0;
	// System.ComponentModel.IExtenderProvider System.ComponentModel.ExtenderProvidedPropertyAttribute::extenderProvider
	RuntimeObject* ___extenderProvider_1;
	// System.Type System.ComponentModel.ExtenderProvidedPropertyAttribute::receiver
	Type_t * ___receiver_2;

public:
	inline static int32_t get_offset_of_extender_0() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t3771163592, ___extender_0)); }
	inline PropertyDescriptor_t3244362832 * get_extender_0() const { return ___extender_0; }
	inline PropertyDescriptor_t3244362832 ** get_address_of_extender_0() { return &___extender_0; }
	inline void set_extender_0(PropertyDescriptor_t3244362832 * value)
	{
		___extender_0 = value;
		Il2CppCodeGenWriteBarrier((&___extender_0), value);
	}

	inline static int32_t get_offset_of_extenderProvider_1() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t3771163592, ___extenderProvider_1)); }
	inline RuntimeObject* get_extenderProvider_1() const { return ___extenderProvider_1; }
	inline RuntimeObject** get_address_of_extenderProvider_1() { return &___extenderProvider_1; }
	inline void set_extenderProvider_1(RuntimeObject* value)
	{
		___extenderProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___extenderProvider_1), value);
	}

	inline static int32_t get_offset_of_receiver_2() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t3771163592, ___receiver_2)); }
	inline Type_t * get_receiver_2() const { return ___receiver_2; }
	inline Type_t ** get_address_of_receiver_2() { return &___receiver_2; }
	inline void set_receiver_2(Type_t * value)
	{
		___receiver_2 = value;
		Il2CppCodeGenWriteBarrier((&___receiver_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENDERPROVIDEDPROPERTYATTRIBUTE_T3771163592_H
#ifndef GUIDCONVERTER_T3396672461_H
#define GUIDCONVERTER_T3396672461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t3396672461  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T3396672461_H
#ifndef HANDLEDEVENTARGS_T3639267452_H
#define HANDLEDEVENTARGS_T3639267452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.HandledEventArgs
struct  HandledEventArgs_t3639267452  : public EventArgs_t3591816995
{
public:
	// System.Boolean System.ComponentModel.HandledEventArgs::handled
	bool ___handled_1;

public:
	inline static int32_t get_offset_of_handled_1() { return static_cast<int32_t>(offsetof(HandledEventArgs_t3639267452, ___handled_1)); }
	inline bool get_handled_1() const { return ___handled_1; }
	inline bool* get_address_of_handled_1() { return &___handled_1; }
	inline void set_handled_1(bool value)
	{
		___handled_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLEDEVENTARGS_T3639267452_H
#ifndef IMMUTABLEOBJECTATTRIBUTE_T2959712128_H
#define IMMUTABLEOBJECTATTRIBUTE_T2959712128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ImmutableObjectAttribute
struct  ImmutableObjectAttribute_t2959712128  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.ImmutableObjectAttribute::immutable
	bool ___immutable_0;

public:
	inline static int32_t get_offset_of_immutable_0() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t2959712128, ___immutable_0)); }
	inline bool get_immutable_0() const { return ___immutable_0; }
	inline bool* get_address_of_immutable_0() { return &___immutable_0; }
	inline void set_immutable_0(bool value)
	{
		___immutable_0 = value;
	}
};

struct ImmutableObjectAttribute_t2959712128_StaticFields
{
public:
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Default
	ImmutableObjectAttribute_t2959712128 * ___Default_1;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::No
	ImmutableObjectAttribute_t2959712128 * ___No_2;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Yes
	ImmutableObjectAttribute_t2959712128 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t2959712128_StaticFields, ___Default_1)); }
	inline ImmutableObjectAttribute_t2959712128 * get_Default_1() const { return ___Default_1; }
	inline ImmutableObjectAttribute_t2959712128 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(ImmutableObjectAttribute_t2959712128 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t2959712128_StaticFields, ___No_2)); }
	inline ImmutableObjectAttribute_t2959712128 * get_No_2() const { return ___No_2; }
	inline ImmutableObjectAttribute_t2959712128 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(ImmutableObjectAttribute_t2959712128 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t2959712128_StaticFields, ___Yes_3)); }
	inline ImmutableObjectAttribute_t2959712128 * get_Yes_3() const { return ___Yes_3; }
	inline ImmutableObjectAttribute_t2959712128 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(ImmutableObjectAttribute_t2959712128 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMMUTABLEOBJECTATTRIBUTE_T2959712128_H
#ifndef INITIALIZATIONEVENTATTRIBUTE_T1076550734_H
#define INITIALIZATIONEVENTATTRIBUTE_T1076550734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InitializationEventAttribute
struct  InitializationEventAttribute_t1076550734  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.InitializationEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(InitializationEventAttribute_t1076550734, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIALIZATIONEVENTATTRIBUTE_T1076550734_H
#ifndef INSTALLERTYPEATTRIBUTE_T3233088727_H
#define INSTALLERTYPEATTRIBUTE_T3233088727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InstallerTypeAttribute
struct  InstallerTypeAttribute_t3233088727  : public Attribute_t861562559
{
public:
	// System.Type System.ComponentModel.InstallerTypeAttribute::installer
	Type_t * ___installer_0;

public:
	inline static int32_t get_offset_of_installer_0() { return static_cast<int32_t>(offsetof(InstallerTypeAttribute_t3233088727, ___installer_0)); }
	inline Type_t * get_installer_0() const { return ___installer_0; }
	inline Type_t ** get_address_of_installer_0() { return &___installer_0; }
	inline void set_installer_0(Type_t * value)
	{
		___installer_0 = value;
		Il2CppCodeGenWriteBarrier((&___installer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTALLERTYPEATTRIBUTE_T3233088727_H
#ifndef LICFILELICENSE_T2059423786_H
#define LICFILELICENSE_T2059423786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicense
struct  LicFileLicense_t2059423786  : public License_t2258946041
{
public:
	// System.String System.ComponentModel.LicFileLicense::_key
	String_t* ____key_0;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(LicFileLicense_t2059423786, ____key_0)); }
	inline String_t* get__key_0() const { return ____key_0; }
	inline String_t** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(String_t* value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICFILELICENSE_T2059423786_H
#ifndef LICFILELICENSEPROVIDER_T3520472243_H
#define LICFILELICENSEPROVIDER_T3520472243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicenseProvider
struct  LicFileLicenseProvider_t3520472243  : public LicenseProvider_t1830579869
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICFILELICENSEPROVIDER_T3520472243_H
#ifndef LICENSEPROVIDERATTRIBUTE_T1257937162_H
#define LICENSEPROVIDERATTRIBUTE_T1257937162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseProviderAttribute
struct  LicenseProviderAttribute_t1257937162  : public Attribute_t861562559
{
public:
	// System.Type System.ComponentModel.LicenseProviderAttribute::Provider
	Type_t * ___Provider_0;

public:
	inline static int32_t get_offset_of_Provider_0() { return static_cast<int32_t>(offsetof(LicenseProviderAttribute_t1257937162, ___Provider_0)); }
	inline Type_t * get_Provider_0() const { return ___Provider_0; }
	inline Type_t ** get_address_of_Provider_0() { return &___Provider_0; }
	inline void set_Provider_0(Type_t * value)
	{
		___Provider_0 = value;
		Il2CppCodeGenWriteBarrier((&___Provider_0), value);
	}
};

struct LicenseProviderAttribute_t1257937162_StaticFields
{
public:
	// System.ComponentModel.LicenseProviderAttribute System.ComponentModel.LicenseProviderAttribute::Default
	LicenseProviderAttribute_t1257937162 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(LicenseProviderAttribute_t1257937162_StaticFields, ___Default_1)); }
	inline LicenseProviderAttribute_t1257937162 * get_Default_1() const { return ___Default_1; }
	inline LicenseProviderAttribute_t1257937162 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(LicenseProviderAttribute_t1257937162 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEPROVIDERATTRIBUTE_T1257937162_H
#ifndef LISTBINDABLEATTRIBUTE_T2461184386_H
#define LISTBINDABLEATTRIBUTE_T2461184386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListBindableAttribute
struct  ListBindableAttribute_t2461184386  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.ListBindableAttribute::bindable
	bool ___bindable_3;

public:
	inline static int32_t get_offset_of_bindable_3() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2461184386, ___bindable_3)); }
	inline bool get_bindable_3() const { return ___bindable_3; }
	inline bool* get_address_of_bindable_3() { return &___bindable_3; }
	inline void set_bindable_3(bool value)
	{
		___bindable_3 = value;
	}
};

struct ListBindableAttribute_t2461184386_StaticFields
{
public:
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Default
	ListBindableAttribute_t2461184386 * ___Default_0;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::No
	ListBindableAttribute_t2461184386 * ___No_1;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Yes
	ListBindableAttribute_t2461184386 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2461184386_StaticFields, ___Default_0)); }
	inline ListBindableAttribute_t2461184386 * get_Default_0() const { return ___Default_0; }
	inline ListBindableAttribute_t2461184386 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ListBindableAttribute_t2461184386 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2461184386_StaticFields, ___No_1)); }
	inline ListBindableAttribute_t2461184386 * get_No_1() const { return ___No_1; }
	inline ListBindableAttribute_t2461184386 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ListBindableAttribute_t2461184386 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2461184386_StaticFields, ___Yes_2)); }
	inline ListBindableAttribute_t2461184386 * get_Yes_2() const { return ___Yes_2; }
	inline ListBindableAttribute_t2461184386 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ListBindableAttribute_t2461184386 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTBINDABLEATTRIBUTE_T2461184386_H
#ifndef LOCALIZABLEATTRIBUTE_T3478561129_H
#define LOCALIZABLEATTRIBUTE_T3478561129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LocalizableAttribute
struct  LocalizableAttribute_t3478561129  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.LocalizableAttribute::localizable
	bool ___localizable_0;

public:
	inline static int32_t get_offset_of_localizable_0() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t3478561129, ___localizable_0)); }
	inline bool get_localizable_0() const { return ___localizable_0; }
	inline bool* get_address_of_localizable_0() { return &___localizable_0; }
	inline void set_localizable_0(bool value)
	{
		___localizable_0 = value;
	}
};

struct LocalizableAttribute_t3478561129_StaticFields
{
public:
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::Default
	LocalizableAttribute_t3478561129 * ___Default_1;
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::No
	LocalizableAttribute_t3478561129 * ___No_2;
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::Yes
	LocalizableAttribute_t3478561129 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t3478561129_StaticFields, ___Default_1)); }
	inline LocalizableAttribute_t3478561129 * get_Default_1() const { return ___Default_1; }
	inline LocalizableAttribute_t3478561129 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(LocalizableAttribute_t3478561129 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t3478561129_StaticFields, ___No_2)); }
	inline LocalizableAttribute_t3478561129 * get_No_2() const { return ___No_2; }
	inline LocalizableAttribute_t3478561129 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(LocalizableAttribute_t3478561129 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t3478561129_StaticFields, ___Yes_3)); }
	inline LocalizableAttribute_t3478561129 * get_Yes_3() const { return ___Yes_3; }
	inline LocalizableAttribute_t3478561129 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(LocalizableAttribute_t3478561129 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALIZABLEATTRIBUTE_T3478561129_H
#ifndef LOOKUPBINDINGPROPERTIESATTRIBUTE_T2365213483_H
#define LOOKUPBINDINGPROPERTIESATTRIBUTE_T2365213483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LookupBindingPropertiesAttribute
struct  LookupBindingPropertiesAttribute_t2365213483  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.LookupBindingPropertiesAttribute::data_source
	String_t* ___data_source_0;
	// System.String System.ComponentModel.LookupBindingPropertiesAttribute::display_member
	String_t* ___display_member_1;
	// System.String System.ComponentModel.LookupBindingPropertiesAttribute::value_member
	String_t* ___value_member_2;
	// System.String System.ComponentModel.LookupBindingPropertiesAttribute::lookup_member
	String_t* ___lookup_member_3;

public:
	inline static int32_t get_offset_of_data_source_0() { return static_cast<int32_t>(offsetof(LookupBindingPropertiesAttribute_t2365213483, ___data_source_0)); }
	inline String_t* get_data_source_0() const { return ___data_source_0; }
	inline String_t** get_address_of_data_source_0() { return &___data_source_0; }
	inline void set_data_source_0(String_t* value)
	{
		___data_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_source_0), value);
	}

	inline static int32_t get_offset_of_display_member_1() { return static_cast<int32_t>(offsetof(LookupBindingPropertiesAttribute_t2365213483, ___display_member_1)); }
	inline String_t* get_display_member_1() const { return ___display_member_1; }
	inline String_t** get_address_of_display_member_1() { return &___display_member_1; }
	inline void set_display_member_1(String_t* value)
	{
		___display_member_1 = value;
		Il2CppCodeGenWriteBarrier((&___display_member_1), value);
	}

	inline static int32_t get_offset_of_value_member_2() { return static_cast<int32_t>(offsetof(LookupBindingPropertiesAttribute_t2365213483, ___value_member_2)); }
	inline String_t* get_value_member_2() const { return ___value_member_2; }
	inline String_t** get_address_of_value_member_2() { return &___value_member_2; }
	inline void set_value_member_2(String_t* value)
	{
		___value_member_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_member_2), value);
	}

	inline static int32_t get_offset_of_lookup_member_3() { return static_cast<int32_t>(offsetof(LookupBindingPropertiesAttribute_t2365213483, ___lookup_member_3)); }
	inline String_t* get_lookup_member_3() const { return ___lookup_member_3; }
	inline String_t** get_address_of_lookup_member_3() { return &___lookup_member_3; }
	inline void set_lookup_member_3(String_t* value)
	{
		___lookup_member_3 = value;
		Il2CppCodeGenWriteBarrier((&___lookup_member_3), value);
	}
};

struct LookupBindingPropertiesAttribute_t2365213483_StaticFields
{
public:
	// System.ComponentModel.LookupBindingPropertiesAttribute System.ComponentModel.LookupBindingPropertiesAttribute::Default
	LookupBindingPropertiesAttribute_t2365213483 * ___Default_4;

public:
	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(LookupBindingPropertiesAttribute_t2365213483_StaticFields, ___Default_4)); }
	inline LookupBindingPropertiesAttribute_t2365213483 * get_Default_4() const { return ___Default_4; }
	inline LookupBindingPropertiesAttribute_t2365213483 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(LookupBindingPropertiesAttribute_t2365213483 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOKUPBINDINGPROPERTIESATTRIBUTE_T2365213483_H
#ifndef MERGABLEPROPERTYATTRIBUTE_T476798118_H
#define MERGABLEPROPERTYATTRIBUTE_T476798118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MergablePropertyAttribute
struct  MergablePropertyAttribute_t476798118  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.MergablePropertyAttribute::mergable
	bool ___mergable_0;

public:
	inline static int32_t get_offset_of_mergable_0() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t476798118, ___mergable_0)); }
	inline bool get_mergable_0() const { return ___mergable_0; }
	inline bool* get_address_of_mergable_0() { return &___mergable_0; }
	inline void set_mergable_0(bool value)
	{
		___mergable_0 = value;
	}
};

struct MergablePropertyAttribute_t476798118_StaticFields
{
public:
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Default
	MergablePropertyAttribute_t476798118 * ___Default_1;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::No
	MergablePropertyAttribute_t476798118 * ___No_2;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Yes
	MergablePropertyAttribute_t476798118 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t476798118_StaticFields, ___Default_1)); }
	inline MergablePropertyAttribute_t476798118 * get_Default_1() const { return ___Default_1; }
	inline MergablePropertyAttribute_t476798118 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(MergablePropertyAttribute_t476798118 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t476798118_StaticFields, ___No_2)); }
	inline MergablePropertyAttribute_t476798118 * get_No_2() const { return ___No_2; }
	inline MergablePropertyAttribute_t476798118 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(MergablePropertyAttribute_t476798118 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t476798118_StaticFields, ___Yes_3)); }
	inline MergablePropertyAttribute_t476798118 * get_Yes_3() const { return ___Yes_3; }
	inline MergablePropertyAttribute_t476798118 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(MergablePropertyAttribute_t476798118 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGABLEPROPERTYATTRIBUTE_T476798118_H
#ifndef MULTILINESTRINGCONVERTER_T1596147706_H
#define MULTILINESTRINGCONVERTER_T1596147706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MultilineStringConverter
struct  MultilineStringConverter_t1596147706  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTILINESTRINGCONVERTER_T1596147706_H
#ifndef NESTEDCONTAINER_T119127665_H
#define NESTEDCONTAINER_T119127665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NestedContainer
struct  NestedContainer_t119127665  : public Container_t1808277744
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.NestedContainer::_owner
	RuntimeObject* ____owner_1;

public:
	inline static int32_t get_offset_of__owner_1() { return static_cast<int32_t>(offsetof(NestedContainer_t119127665, ____owner_1)); }
	inline RuntimeObject* get__owner_1() const { return ____owner_1; }
	inline RuntimeObject** get_address_of__owner_1() { return &____owner_1; }
	inline void set__owner_1(RuntimeObject* value)
	{
		____owner_1 = value;
		Il2CppCodeGenWriteBarrier((&____owner_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NESTEDCONTAINER_T119127665_H
#ifndef NOTIFYPARENTPROPERTYATTRIBUTE_T1405421815_H
#define NOTIFYPARENTPROPERTYATTRIBUTE_T1405421815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NotifyParentPropertyAttribute
struct  NotifyParentPropertyAttribute_t1405421815  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.NotifyParentPropertyAttribute::notifyParent
	bool ___notifyParent_0;

public:
	inline static int32_t get_offset_of_notifyParent_0() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t1405421815, ___notifyParent_0)); }
	inline bool get_notifyParent_0() const { return ___notifyParent_0; }
	inline bool* get_address_of_notifyParent_0() { return &___notifyParent_0; }
	inline void set_notifyParent_0(bool value)
	{
		___notifyParent_0 = value;
	}
};

struct NotifyParentPropertyAttribute_t1405421815_StaticFields
{
public:
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::Default
	NotifyParentPropertyAttribute_t1405421815 * ___Default_1;
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::No
	NotifyParentPropertyAttribute_t1405421815 * ___No_2;
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::Yes
	NotifyParentPropertyAttribute_t1405421815 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t1405421815_StaticFields, ___Default_1)); }
	inline NotifyParentPropertyAttribute_t1405421815 * get_Default_1() const { return ___Default_1; }
	inline NotifyParentPropertyAttribute_t1405421815 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(NotifyParentPropertyAttribute_t1405421815 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t1405421815_StaticFields, ___No_2)); }
	inline NotifyParentPropertyAttribute_t1405421815 * get_No_2() const { return ___No_2; }
	inline NotifyParentPropertyAttribute_t1405421815 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(NotifyParentPropertyAttribute_t1405421815 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t1405421815_StaticFields, ___Yes_3)); }
	inline NotifyParentPropertyAttribute_t1405421815 * get_Yes_3() const { return ___Yes_3; }
	inline NotifyParentPropertyAttribute_t1405421815 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(NotifyParentPropertyAttribute_t1405421815 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYPARENTPROPERTYATTRIBUTE_T1405421815_H
#ifndef NULLABLECONVERTER_T1985728604_H
#define NULLABLECONVERTER_T1985728604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t1985728604  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t2249118273 * ___underlyingTypeConverter_2;

public:
	inline static int32_t get_offset_of_nullableType_0() { return static_cast<int32_t>(offsetof(NullableConverter_t1985728604, ___nullableType_0)); }
	inline Type_t * get_nullableType_0() const { return ___nullableType_0; }
	inline Type_t ** get_address_of_nullableType_0() { return &___nullableType_0; }
	inline void set_nullableType_0(Type_t * value)
	{
		___nullableType_0 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_0), value);
	}

	inline static int32_t get_offset_of_underlyingType_1() { return static_cast<int32_t>(offsetof(NullableConverter_t1985728604, ___underlyingType_1)); }
	inline Type_t * get_underlyingType_1() const { return ___underlyingType_1; }
	inline Type_t ** get_address_of_underlyingType_1() { return &___underlyingType_1; }
	inline void set_underlyingType_1(Type_t * value)
	{
		___underlyingType_1 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingType_1), value);
	}

	inline static int32_t get_offset_of_underlyingTypeConverter_2() { return static_cast<int32_t>(offsetof(NullableConverter_t1985728604, ___underlyingTypeConverter_2)); }
	inline TypeConverter_t2249118273 * get_underlyingTypeConverter_2() const { return ___underlyingTypeConverter_2; }
	inline TypeConverter_t2249118273 ** get_address_of_underlyingTypeConverter_2() { return &___underlyingTypeConverter_2; }
	inline void set_underlyingTypeConverter_2(TypeConverter_t2249118273 * value)
	{
		___underlyingTypeConverter_2 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingTypeConverter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T1985728604_H
#ifndef PARENTHESIZEPROPERTYNAMEATTRIBUTE_T878408981_H
#define PARENTHESIZEPROPERTYNAMEATTRIBUTE_T878408981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ParenthesizePropertyNameAttribute
struct  ParenthesizePropertyNameAttribute_t878408981  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.ParenthesizePropertyNameAttribute::parenthesis
	bool ___parenthesis_0;

public:
	inline static int32_t get_offset_of_parenthesis_0() { return static_cast<int32_t>(offsetof(ParenthesizePropertyNameAttribute_t878408981, ___parenthesis_0)); }
	inline bool get_parenthesis_0() const { return ___parenthesis_0; }
	inline bool* get_address_of_parenthesis_0() { return &___parenthesis_0; }
	inline void set_parenthesis_0(bool value)
	{
		___parenthesis_0 = value;
	}
};

struct ParenthesizePropertyNameAttribute_t878408981_StaticFields
{
public:
	// System.ComponentModel.ParenthesizePropertyNameAttribute System.ComponentModel.ParenthesizePropertyNameAttribute::Default
	ParenthesizePropertyNameAttribute_t878408981 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(ParenthesizePropertyNameAttribute_t878408981_StaticFields, ___Default_1)); }
	inline ParenthesizePropertyNameAttribute_t878408981 * get_Default_1() const { return ___Default_1; }
	inline ParenthesizePropertyNameAttribute_t878408981 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(ParenthesizePropertyNameAttribute_t878408981 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARENTHESIZEPROPERTYNAMEATTRIBUTE_T878408981_H
#ifndef PASSWORDPROPERTYTEXTATTRIBUTE_T4966400_H
#define PASSWORDPROPERTYTEXTATTRIBUTE_T4966400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PasswordPropertyTextAttribute
struct  PasswordPropertyTextAttribute_t4966400  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.PasswordPropertyTextAttribute::_password
	bool ____password_3;

public:
	inline static int32_t get_offset_of__password_3() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t4966400, ____password_3)); }
	inline bool get__password_3() const { return ____password_3; }
	inline bool* get_address_of__password_3() { return &____password_3; }
	inline void set__password_3(bool value)
	{
		____password_3 = value;
	}
};

struct PasswordPropertyTextAttribute_t4966400_StaticFields
{
public:
	// System.ComponentModel.PasswordPropertyTextAttribute System.ComponentModel.PasswordPropertyTextAttribute::Default
	PasswordPropertyTextAttribute_t4966400 * ___Default_0;
	// System.ComponentModel.PasswordPropertyTextAttribute System.ComponentModel.PasswordPropertyTextAttribute::No
	PasswordPropertyTextAttribute_t4966400 * ___No_1;
	// System.ComponentModel.PasswordPropertyTextAttribute System.ComponentModel.PasswordPropertyTextAttribute::Yes
	PasswordPropertyTextAttribute_t4966400 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t4966400_StaticFields, ___Default_0)); }
	inline PasswordPropertyTextAttribute_t4966400 * get_Default_0() const { return ___Default_0; }
	inline PasswordPropertyTextAttribute_t4966400 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(PasswordPropertyTextAttribute_t4966400 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t4966400_StaticFields, ___No_1)); }
	inline PasswordPropertyTextAttribute_t4966400 * get_No_1() const { return ___No_1; }
	inline PasswordPropertyTextAttribute_t4966400 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(PasswordPropertyTextAttribute_t4966400 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t4966400_StaticFields, ___Yes_2)); }
	inline PasswordPropertyTextAttribute_t4966400 * get_Yes_2() const { return ___Yes_2; }
	inline PasswordPropertyTextAttribute_t4966400 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(PasswordPropertyTextAttribute_t4966400 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASSWORDPROPERTYTEXTATTRIBUTE_T4966400_H
#ifndef PROPERTYCHANGEDEVENTARGS_T3313059048_H
#define PROPERTYCHANGEDEVENTARGS_T3313059048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t3313059048  : public EventArgs_t3591816995
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t3313059048, ___propertyName_1)); }
	inline String_t* get_propertyName_1() const { return ___propertyName_1; }
	inline String_t** get_address_of_propertyName_1() { return &___propertyName_1; }
	inline void set_propertyName_1(String_t* value)
	{
		___propertyName_1 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTARGS_T3313059048_H
#ifndef PROPERTYCHANGINGEVENTARGS_T2067745136_H
#define PROPERTYCHANGINGEVENTARGS_T2067745136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangingEventArgs
struct  PropertyChangingEventArgs_t2067745136  : public EventArgs_t3591816995
{
public:
	// System.String System.ComponentModel.PropertyChangingEventArgs::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(PropertyChangingEventArgs_t2067745136, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGINGEVENTARGS_T2067745136_H
#ifndef PROPERTYDESCRIPTOR_T3244362832_H
#define PROPERTYDESCRIPTOR_T3244362832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t3244362832  : public MemberDescriptor_t3815403747
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t2249118273 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t1853889766 * ___notifiers_5;

public:
	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___converter_4)); }
	inline TypeConverter_t2249118273 * get_converter_4() const { return ___converter_4; }
	inline TypeConverter_t2249118273 ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(TypeConverter_t2249118273 * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}

	inline static int32_t get_offset_of_notifiers_5() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___notifiers_5)); }
	inline Hashtable_t1853889766 * get_notifiers_5() const { return ___notifiers_5; }
	inline Hashtable_t1853889766 ** get_address_of_notifiers_5() { return &___notifiers_5; }
	inline void set_notifiers_5(Hashtable_t1853889766 * value)
	{
		___notifiers_5 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T3244362832_H
#ifndef PROPERTYTABATTRIBUTE_T2227247962_H
#define PROPERTYTABATTRIBUTE_T2227247962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyTabAttribute
struct  PropertyTabAttribute_t2227247962  : public Attribute_t861562559
{
public:
	// System.Type[] System.ComponentModel.PropertyTabAttribute::tabs
	TypeU5BU5D_t3940880105* ___tabs_0;
	// System.ComponentModel.PropertyTabScope[] System.ComponentModel.PropertyTabAttribute::scopes
	PropertyTabScopeU5BU5D_t3490735091* ___scopes_1;

public:
	inline static int32_t get_offset_of_tabs_0() { return static_cast<int32_t>(offsetof(PropertyTabAttribute_t2227247962, ___tabs_0)); }
	inline TypeU5BU5D_t3940880105* get_tabs_0() const { return ___tabs_0; }
	inline TypeU5BU5D_t3940880105** get_address_of_tabs_0() { return &___tabs_0; }
	inline void set_tabs_0(TypeU5BU5D_t3940880105* value)
	{
		___tabs_0 = value;
		Il2CppCodeGenWriteBarrier((&___tabs_0), value);
	}

	inline static int32_t get_offset_of_scopes_1() { return static_cast<int32_t>(offsetof(PropertyTabAttribute_t2227247962, ___scopes_1)); }
	inline PropertyTabScopeU5BU5D_t3490735091* get_scopes_1() const { return ___scopes_1; }
	inline PropertyTabScopeU5BU5D_t3490735091** get_address_of_scopes_1() { return &___scopes_1; }
	inline void set_scopes_1(PropertyTabScopeU5BU5D_t3490735091* value)
	{
		___scopes_1 = value;
		Il2CppCodeGenWriteBarrier((&___scopes_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYTABATTRIBUTE_T2227247962_H
#ifndef PROVIDEPROPERTYATTRIBUTE_T26263718_H
#define PROVIDEPROPERTYATTRIBUTE_T26263718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ProvidePropertyAttribute
struct  ProvidePropertyAttribute_t26263718  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.ProvidePropertyAttribute::Property
	String_t* ___Property_0;
	// System.String System.ComponentModel.ProvidePropertyAttribute::Receiver
	String_t* ___Receiver_1;

public:
	inline static int32_t get_offset_of_Property_0() { return static_cast<int32_t>(offsetof(ProvidePropertyAttribute_t26263718, ___Property_0)); }
	inline String_t* get_Property_0() const { return ___Property_0; }
	inline String_t** get_address_of_Property_0() { return &___Property_0; }
	inline void set_Property_0(String_t* value)
	{
		___Property_0 = value;
		Il2CppCodeGenWriteBarrier((&___Property_0), value);
	}

	inline static int32_t get_offset_of_Receiver_1() { return static_cast<int32_t>(offsetof(ProvidePropertyAttribute_t26263718, ___Receiver_1)); }
	inline String_t* get_Receiver_1() const { return ___Receiver_1; }
	inline String_t** get_address_of_Receiver_1() { return &___Receiver_1; }
	inline void set_Receiver_1(String_t* value)
	{
		___Receiver_1 = value;
		Il2CppCodeGenWriteBarrier((&___Receiver_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROVIDEPROPERTYATTRIBUTE_T26263718_H
#ifndef READONLYATTRIBUTE_T1907441566_H
#define READONLYATTRIBUTE_T1907441566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReadOnlyAttribute
struct  ReadOnlyAttribute_t1907441566  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.ReadOnlyAttribute::read_only
	bool ___read_only_0;

public:
	inline static int32_t get_offset_of_read_only_0() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566, ___read_only_0)); }
	inline bool get_read_only_0() const { return ___read_only_0; }
	inline bool* get_address_of_read_only_0() { return &___read_only_0; }
	inline void set_read_only_0(bool value)
	{
		___read_only_0 = value;
	}
};

struct ReadOnlyAttribute_t1907441566_StaticFields
{
public:
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::No
	ReadOnlyAttribute_t1907441566 * ___No_1;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Yes
	ReadOnlyAttribute_t1907441566 * ___Yes_2;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Default
	ReadOnlyAttribute_t1907441566 * ___Default_3;

public:
	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566_StaticFields, ___No_1)); }
	inline ReadOnlyAttribute_t1907441566 * get_No_1() const { return ___No_1; }
	inline ReadOnlyAttribute_t1907441566 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ReadOnlyAttribute_t1907441566 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566_StaticFields, ___Yes_2)); }
	inline ReadOnlyAttribute_t1907441566 * get_Yes_2() const { return ___Yes_2; }
	inline ReadOnlyAttribute_t1907441566 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ReadOnlyAttribute_t1907441566 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566_StaticFields, ___Default_3)); }
	inline ReadOnlyAttribute_t1907441566 * get_Default_3() const { return ___Default_3; }
	inline ReadOnlyAttribute_t1907441566 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(ReadOnlyAttribute_t1907441566 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T1907441566_H
#ifndef RECOMMENDEDASCONFIGURABLEATTRIBUTE_T279829077_H
#define RECOMMENDEDASCONFIGURABLEATTRIBUTE_T279829077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RecommendedAsConfigurableAttribute
struct  RecommendedAsConfigurableAttribute_t279829077  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.RecommendedAsConfigurableAttribute::recommendedAsConfigurable
	bool ___recommendedAsConfigurable_0;

public:
	inline static int32_t get_offset_of_recommendedAsConfigurable_0() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077, ___recommendedAsConfigurable_0)); }
	inline bool get_recommendedAsConfigurable_0() const { return ___recommendedAsConfigurable_0; }
	inline bool* get_address_of_recommendedAsConfigurable_0() { return &___recommendedAsConfigurable_0; }
	inline void set_recommendedAsConfigurable_0(bool value)
	{
		___recommendedAsConfigurable_0 = value;
	}
};

struct RecommendedAsConfigurableAttribute_t279829077_StaticFields
{
public:
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Default
	RecommendedAsConfigurableAttribute_t279829077 * ___Default_1;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::No
	RecommendedAsConfigurableAttribute_t279829077 * ___No_2;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Yes
	RecommendedAsConfigurableAttribute_t279829077 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077_StaticFields, ___Default_1)); }
	inline RecommendedAsConfigurableAttribute_t279829077 * get_Default_1() const { return ___Default_1; }
	inline RecommendedAsConfigurableAttribute_t279829077 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(RecommendedAsConfigurableAttribute_t279829077 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077_StaticFields, ___No_2)); }
	inline RecommendedAsConfigurableAttribute_t279829077 * get_No_2() const { return ___No_2; }
	inline RecommendedAsConfigurableAttribute_t279829077 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(RecommendedAsConfigurableAttribute_t279829077 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077_StaticFields, ___Yes_3)); }
	inline RecommendedAsConfigurableAttribute_t279829077 * get_Yes_3() const { return ___Yes_3; }
	inline RecommendedAsConfigurableAttribute_t279829077 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(RecommendedAsConfigurableAttribute_t279829077 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOMMENDEDASCONFIGURABLEATTRIBUTE_T279829077_H
#ifndef REFERENCECONVERTER_T1811933861_H
#define REFERENCECONVERTER_T1811933861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t1811933861  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t1811933861, ___reference_type_0)); }
	inline Type_t * get_reference_type_0() const { return ___reference_type_0; }
	inline Type_t ** get_address_of_reference_type_0() { return &___reference_type_0; }
	inline void set_reference_type_0(Type_t * value)
	{
		___reference_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___reference_type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T1811933861_H
#ifndef REFRESHEVENTARGS_T9288056_H
#define REFRESHEVENTARGS_T9288056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshEventArgs
struct  RefreshEventArgs_t9288056  : public EventArgs_t3591816995
{
public:
	// System.Object System.ComponentModel.RefreshEventArgs::component
	RuntimeObject * ___component_1;
	// System.Type System.ComponentModel.RefreshEventArgs::type
	Type_t * ___type_2;

public:
	inline static int32_t get_offset_of_component_1() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t9288056, ___component_1)); }
	inline RuntimeObject * get_component_1() const { return ___component_1; }
	inline RuntimeObject ** get_address_of_component_1() { return &___component_1; }
	inline void set_component_1(RuntimeObject * value)
	{
		___component_1 = value;
		Il2CppCodeGenWriteBarrier((&___component_1), value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t9288056, ___type_2)); }
	inline Type_t * get_type_2() const { return ___type_2; }
	inline Type_t ** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(Type_t * value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier((&___type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHEVENTARGS_T9288056_H
#ifndef RUNINSTALLERATTRIBUTE_T4293401849_H
#define RUNINSTALLERATTRIBUTE_T4293401849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RunInstallerAttribute
struct  RunInstallerAttribute_t4293401849  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.RunInstallerAttribute::runInstaller
	bool ___runInstaller_3;

public:
	inline static int32_t get_offset_of_runInstaller_3() { return static_cast<int32_t>(offsetof(RunInstallerAttribute_t4293401849, ___runInstaller_3)); }
	inline bool get_runInstaller_3() const { return ___runInstaller_3; }
	inline bool* get_address_of_runInstaller_3() { return &___runInstaller_3; }
	inline void set_runInstaller_3(bool value)
	{
		___runInstaller_3 = value;
	}
};

struct RunInstallerAttribute_t4293401849_StaticFields
{
public:
	// System.ComponentModel.RunInstallerAttribute System.ComponentModel.RunInstallerAttribute::Yes
	RunInstallerAttribute_t4293401849 * ___Yes_0;
	// System.ComponentModel.RunInstallerAttribute System.ComponentModel.RunInstallerAttribute::No
	RunInstallerAttribute_t4293401849 * ___No_1;
	// System.ComponentModel.RunInstallerAttribute System.ComponentModel.RunInstallerAttribute::Default
	RunInstallerAttribute_t4293401849 * ___Default_2;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(RunInstallerAttribute_t4293401849_StaticFields, ___Yes_0)); }
	inline RunInstallerAttribute_t4293401849 * get_Yes_0() const { return ___Yes_0; }
	inline RunInstallerAttribute_t4293401849 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(RunInstallerAttribute_t4293401849 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(RunInstallerAttribute_t4293401849_StaticFields, ___No_1)); }
	inline RunInstallerAttribute_t4293401849 * get_No_1() const { return ___No_1; }
	inline RunInstallerAttribute_t4293401849 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(RunInstallerAttribute_t4293401849 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(RunInstallerAttribute_t4293401849_StaticFields, ___Default_2)); }
	inline RunInstallerAttribute_t4293401849 * get_Default_2() const { return ___Default_2; }
	inline RunInstallerAttribute_t4293401849 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(RunInstallerAttribute_t4293401849 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNINSTALLERATTRIBUTE_T4293401849_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DOWORKEVENTARGS_T1025725751_H
#define DOWORKEVENTARGS_T1025725751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoWorkEventArgs
struct  DoWorkEventArgs_t1025725751  : public CancelEventArgs_t1846056344
{
public:
	// System.Object System.ComponentModel.DoWorkEventArgs::arg
	RuntimeObject * ___arg_2;
	// System.Object System.ComponentModel.DoWorkEventArgs::result
	RuntimeObject * ___result_3;

public:
	inline static int32_t get_offset_of_arg_2() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t1025725751, ___arg_2)); }
	inline RuntimeObject * get_arg_2() const { return ___arg_2; }
	inline RuntimeObject ** get_address_of_arg_2() { return &___arg_2; }
	inline void set_arg_2(RuntimeObject * value)
	{
		___arg_2 = value;
		Il2CppCodeGenWriteBarrier((&___arg_2), value);
	}

	inline static int32_t get_offset_of_result_3() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t1025725751, ___result_3)); }
	inline RuntimeObject * get_result_3() const { return ___result_3; }
	inline RuntimeObject ** get_address_of_result_3() { return &___result_3; }
	inline void set_result_3(RuntimeObject * value)
	{
		___result_3 = value;
		Il2CppCodeGenWriteBarrier((&___result_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOWORKEVENTARGS_T1025725751_H
#ifndef DOUBLECONVERTER_T805142290_H
#define DOUBLECONVERTER_T805142290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t805142290  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T805142290_H
#ifndef EDITORBROWSABLESTATE_T2839071299_H
#define EDITORBROWSABLESTATE_T2839071299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t2839071299 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t2839071299, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLESTATE_T2839071299_H
#ifndef INHERITANCELEVEL_T3095109434_H
#define INHERITANCELEVEL_T3095109434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InheritanceLevel
struct  InheritanceLevel_t3095109434 
{
public:
	// System.Int32 System.ComponentModel.InheritanceLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InheritanceLevel_t3095109434, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INHERITANCELEVEL_T3095109434_H
#ifndef INT16CONVERTER_T1119562914_H
#define INT16CONVERTER_T1119562914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t1119562914  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T1119562914_H
#ifndef INT32CONVERTER_T677227065_H
#define INT32CONVERTER_T677227065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t677227065  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T677227065_H
#ifndef INT64CONVERTER_T1092099567_H
#define INT64CONVERTER_T1092099567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t1092099567  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T1092099567_H
#ifndef LICENSEEXCEPTION_T2803495799_H
#define LICENSEEXCEPTION_T2803495799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseException
struct  LicenseException_t2803495799  : public SystemException_t176217640
{
public:
	// System.Type System.ComponentModel.LicenseException::type
	Type_t * ___type_11;

public:
	inline static int32_t get_offset_of_type_11() { return static_cast<int32_t>(offsetof(LicenseException_t2803495799, ___type_11)); }
	inline Type_t * get_type_11() const { return ___type_11; }
	inline Type_t ** get_address_of_type_11() { return &___type_11; }
	inline void set_type_11(Type_t * value)
	{
		___type_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEEXCEPTION_T2803495799_H
#ifndef LICENSEUSAGEMODE_T830309198_H
#define LICENSEUSAGEMODE_T830309198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseUsageMode
struct  LicenseUsageMode_t830309198 
{
public:
	// System.Int32 System.ComponentModel.LicenseUsageMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LicenseUsageMode_t830309198, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEUSAGEMODE_T830309198_H
#ifndef LISTCHANGEDTYPE_T2971046703_H
#define LISTCHANGEDTYPE_T2971046703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedType
struct  ListChangedType_t2971046703 
{
public:
	// System.Int32 System.ComponentModel.ListChangedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListChangedType_t2971046703, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDTYPE_T2971046703_H
#ifndef LISTSORTDIRECTION_T852779204_H
#define LISTSORTDIRECTION_T852779204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDirection
struct  ListSortDirection_t852779204 
{
public:
	// System.Int32 System.ComponentModel.ListSortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListSortDirection_t852779204, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDIRECTION_T852779204_H
#ifndef EDITSTATE_T2237466956_H
#define EDITSTATE_T2237466956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MaskedTextProvider/EditState
struct  EditState_t2237466956 
{
public:
	// System.Int32 System.ComponentModel.MaskedTextProvider/EditState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditState_t2237466956, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITSTATE_T2237466956_H
#ifndef EDITTYPE_T2219777374_H
#define EDITTYPE_T2219777374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MaskedTextProvider/EditType
struct  EditType_t2219777374 
{
public:
	// System.Int32 System.ComponentModel.MaskedTextProvider/EditType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditType_t2219777374, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITTYPE_T2219777374_H
#ifndef MASKEDTEXTRESULTHINT_T3918028412_H
#define MASKEDTEXTRESULTHINT_T3918028412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MaskedTextResultHint
struct  MaskedTextResultHint_t3918028412 
{
public:
	// System.Int32 System.ComponentModel.MaskedTextResultHint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MaskedTextResultHint_t3918028412, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKEDTEXTRESULTHINT_T3918028412_H
#ifndef PROPERTYTABSCOPE_T3421563254_H
#define PROPERTYTABSCOPE_T3421563254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyTabScope
struct  PropertyTabScope_t3421563254 
{
public:
	// System.Int32 System.ComponentModel.PropertyTabScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyTabScope_t3421563254, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYTABSCOPE_T3421563254_H
#ifndef REFLECTIONEVENTDESCRIPTOR_T659576852_H
#define REFLECTIONEVENTDESCRIPTOR_T659576852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionEventDescriptor
struct  ReflectionEventDescriptor_t659576852  : public EventDescriptor_t88602298
{
public:
	// System.Type System.ComponentModel.ReflectionEventDescriptor::_eventType
	Type_t * ____eventType_4;
	// System.Type System.ComponentModel.ReflectionEventDescriptor::_componentType
	Type_t * ____componentType_5;
	// System.Reflection.EventInfo System.ComponentModel.ReflectionEventDescriptor::_eventInfo
	EventInfo_t * ____eventInfo_6;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectionEventDescriptor::add_method
	MethodInfo_t * ___add_method_7;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectionEventDescriptor::remove_method
	MethodInfo_t * ___remove_method_8;

public:
	inline static int32_t get_offset_of__eventType_4() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t659576852, ____eventType_4)); }
	inline Type_t * get__eventType_4() const { return ____eventType_4; }
	inline Type_t ** get_address_of__eventType_4() { return &____eventType_4; }
	inline void set__eventType_4(Type_t * value)
	{
		____eventType_4 = value;
		Il2CppCodeGenWriteBarrier((&____eventType_4), value);
	}

	inline static int32_t get_offset_of__componentType_5() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t659576852, ____componentType_5)); }
	inline Type_t * get__componentType_5() const { return ____componentType_5; }
	inline Type_t ** get_address_of__componentType_5() { return &____componentType_5; }
	inline void set__componentType_5(Type_t * value)
	{
		____componentType_5 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_5), value);
	}

	inline static int32_t get_offset_of__eventInfo_6() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t659576852, ____eventInfo_6)); }
	inline EventInfo_t * get__eventInfo_6() const { return ____eventInfo_6; }
	inline EventInfo_t ** get_address_of__eventInfo_6() { return &____eventInfo_6; }
	inline void set__eventInfo_6(EventInfo_t * value)
	{
		____eventInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____eventInfo_6), value);
	}

	inline static int32_t get_offset_of_add_method_7() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t659576852, ___add_method_7)); }
	inline MethodInfo_t * get_add_method_7() const { return ___add_method_7; }
	inline MethodInfo_t ** get_address_of_add_method_7() { return &___add_method_7; }
	inline void set_add_method_7(MethodInfo_t * value)
	{
		___add_method_7 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_7), value);
	}

	inline static int32_t get_offset_of_remove_method_8() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t659576852, ___remove_method_8)); }
	inline MethodInfo_t * get_remove_method_8() const { return ___remove_method_8; }
	inline MethodInfo_t ** get_address_of_remove_method_8() { return &___remove_method_8; }
	inline void set_remove_method_8(MethodInfo_t * value)
	{
		___remove_method_8 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONEVENTDESCRIPTOR_T659576852_H
#ifndef REFLECTIONPROPERTYDESCRIPTOR_T3529497203_H
#define REFLECTIONPROPERTYDESCRIPTOR_T3529497203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionPropertyDescriptor
struct  ReflectionPropertyDescriptor_t3529497203  : public PropertyDescriptor_t3244362832
{
public:
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::_member
	PropertyInfo_t * ____member_6;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_componentType
	Type_t * ____componentType_7;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_propertyType
	Type_t * ____propertyType_8;
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::getter
	PropertyInfo_t * ___getter_9;
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::setter
	PropertyInfo_t * ___setter_10;
	// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::accessors_inited
	bool ___accessors_inited_11;

public:
	inline static int32_t get_offset_of__member_6() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t3529497203, ____member_6)); }
	inline PropertyInfo_t * get__member_6() const { return ____member_6; }
	inline PropertyInfo_t ** get_address_of__member_6() { return &____member_6; }
	inline void set__member_6(PropertyInfo_t * value)
	{
		____member_6 = value;
		Il2CppCodeGenWriteBarrier((&____member_6), value);
	}

	inline static int32_t get_offset_of__componentType_7() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t3529497203, ____componentType_7)); }
	inline Type_t * get__componentType_7() const { return ____componentType_7; }
	inline Type_t ** get_address_of__componentType_7() { return &____componentType_7; }
	inline void set__componentType_7(Type_t * value)
	{
		____componentType_7 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_7), value);
	}

	inline static int32_t get_offset_of__propertyType_8() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t3529497203, ____propertyType_8)); }
	inline Type_t * get__propertyType_8() const { return ____propertyType_8; }
	inline Type_t ** get_address_of__propertyType_8() { return &____propertyType_8; }
	inline void set__propertyType_8(Type_t * value)
	{
		____propertyType_8 = value;
		Il2CppCodeGenWriteBarrier((&____propertyType_8), value);
	}

	inline static int32_t get_offset_of_getter_9() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t3529497203, ___getter_9)); }
	inline PropertyInfo_t * get_getter_9() const { return ___getter_9; }
	inline PropertyInfo_t ** get_address_of_getter_9() { return &___getter_9; }
	inline void set_getter_9(PropertyInfo_t * value)
	{
		___getter_9 = value;
		Il2CppCodeGenWriteBarrier((&___getter_9), value);
	}

	inline static int32_t get_offset_of_setter_10() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t3529497203, ___setter_10)); }
	inline PropertyInfo_t * get_setter_10() const { return ___setter_10; }
	inline PropertyInfo_t ** get_address_of_setter_10() { return &___setter_10; }
	inline void set_setter_10(PropertyInfo_t * value)
	{
		___setter_10 = value;
		Il2CppCodeGenWriteBarrier((&___setter_10), value);
	}

	inline static int32_t get_offset_of_accessors_inited_11() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t3529497203, ___accessors_inited_11)); }
	inline bool get_accessors_inited_11() const { return ___accessors_inited_11; }
	inline bool* get_address_of_accessors_inited_11() { return &___accessors_inited_11; }
	inline void set_accessors_inited_11(bool value)
	{
		___accessors_inited_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPROPERTYDESCRIPTOR_T3529497203_H
#ifndef REFRESHPROPERTIES_T2310254728_H
#define REFRESHPROPERTIES_T2310254728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshProperties
struct  RefreshProperties_t2310254728 
{
public:
	// System.Int32 System.ComponentModel.RefreshProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RefreshProperties_t2310254728, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHPROPERTIES_T2310254728_H
#ifndef EDITORBROWSABLEATTRIBUTE_T1475454531_H
#define EDITORBROWSABLEATTRIBUTE_T1475454531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t1475454531  : public Attribute_t861562559
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t1475454531, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T1475454531_H
#ifndef INHERITANCEATTRIBUTE_T3667880172_H
#define INHERITANCEATTRIBUTE_T3667880172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InheritanceAttribute
struct  InheritanceAttribute_t3667880172  : public Attribute_t861562559
{
public:
	// System.ComponentModel.InheritanceLevel System.ComponentModel.InheritanceAttribute::level
	int32_t ___level_0;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(InheritanceAttribute_t3667880172, ___level_0)); }
	inline int32_t get_level_0() const { return ___level_0; }
	inline int32_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(int32_t value)
	{
		___level_0 = value;
	}
};

struct InheritanceAttribute_t3667880172_StaticFields
{
public:
	// System.ComponentModel.InheritanceAttribute System.ComponentModel.InheritanceAttribute::Default
	InheritanceAttribute_t3667880172 * ___Default_1;
	// System.ComponentModel.InheritanceAttribute System.ComponentModel.InheritanceAttribute::Inherited
	InheritanceAttribute_t3667880172 * ___Inherited_2;
	// System.ComponentModel.InheritanceAttribute System.ComponentModel.InheritanceAttribute::InheritedReadOnly
	InheritanceAttribute_t3667880172 * ___InheritedReadOnly_3;
	// System.ComponentModel.InheritanceAttribute System.ComponentModel.InheritanceAttribute::NotInherited
	InheritanceAttribute_t3667880172 * ___NotInherited_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(InheritanceAttribute_t3667880172_StaticFields, ___Default_1)); }
	inline InheritanceAttribute_t3667880172 * get_Default_1() const { return ___Default_1; }
	inline InheritanceAttribute_t3667880172 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(InheritanceAttribute_t3667880172 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Inherited_2() { return static_cast<int32_t>(offsetof(InheritanceAttribute_t3667880172_StaticFields, ___Inherited_2)); }
	inline InheritanceAttribute_t3667880172 * get_Inherited_2() const { return ___Inherited_2; }
	inline InheritanceAttribute_t3667880172 ** get_address_of_Inherited_2() { return &___Inherited_2; }
	inline void set_Inherited_2(InheritanceAttribute_t3667880172 * value)
	{
		___Inherited_2 = value;
		Il2CppCodeGenWriteBarrier((&___Inherited_2), value);
	}

	inline static int32_t get_offset_of_InheritedReadOnly_3() { return static_cast<int32_t>(offsetof(InheritanceAttribute_t3667880172_StaticFields, ___InheritedReadOnly_3)); }
	inline InheritanceAttribute_t3667880172 * get_InheritedReadOnly_3() const { return ___InheritedReadOnly_3; }
	inline InheritanceAttribute_t3667880172 ** get_address_of_InheritedReadOnly_3() { return &___InheritedReadOnly_3; }
	inline void set_InheritedReadOnly_3(InheritanceAttribute_t3667880172 * value)
	{
		___InheritedReadOnly_3 = value;
		Il2CppCodeGenWriteBarrier((&___InheritedReadOnly_3), value);
	}

	inline static int32_t get_offset_of_NotInherited_4() { return static_cast<int32_t>(offsetof(InheritanceAttribute_t3667880172_StaticFields, ___NotInherited_4)); }
	inline InheritanceAttribute_t3667880172 * get_NotInherited_4() const { return ___NotInherited_4; }
	inline InheritanceAttribute_t3667880172 ** get_address_of_NotInherited_4() { return &___NotInherited_4; }
	inline void set_NotInherited_4(InheritanceAttribute_t3667880172 * value)
	{
		___NotInherited_4 = value;
		Il2CppCodeGenWriteBarrier((&___NotInherited_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INHERITANCEATTRIBUTE_T3667880172_H
#ifndef INVALIDASYNCHRONOUSSTATEEXCEPTION_T1889442469_H
#define INVALIDASYNCHRONOUSSTATEEXCEPTION_T1889442469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidAsynchronousStateException
struct  InvalidAsynchronousStateException_t1889442469  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDASYNCHRONOUSSTATEEXCEPTION_T1889442469_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T2634129013_H
#define INVALIDENUMARGUMENTEXCEPTION_T2634129013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t2634129013  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T2634129013_H
#ifndef LISTCHANGEDEVENTARGS_T1328006001_H
#define LISTCHANGEDEVENTARGS_T1328006001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedEventArgs
struct  ListChangedEventArgs_t1328006001  : public EventArgs_t3591816995
{
public:
	// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::changedType
	int32_t ___changedType_1;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::oldIndex
	int32_t ___oldIndex_2;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::newIndex
	int32_t ___newIndex_3;
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListChangedEventArgs::propDesc
	PropertyDescriptor_t3244362832 * ___propDesc_4;

public:
	inline static int32_t get_offset_of_changedType_1() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1328006001, ___changedType_1)); }
	inline int32_t get_changedType_1() const { return ___changedType_1; }
	inline int32_t* get_address_of_changedType_1() { return &___changedType_1; }
	inline void set_changedType_1(int32_t value)
	{
		___changedType_1 = value;
	}

	inline static int32_t get_offset_of_oldIndex_2() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1328006001, ___oldIndex_2)); }
	inline int32_t get_oldIndex_2() const { return ___oldIndex_2; }
	inline int32_t* get_address_of_oldIndex_2() { return &___oldIndex_2; }
	inline void set_oldIndex_2(int32_t value)
	{
		___oldIndex_2 = value;
	}

	inline static int32_t get_offset_of_newIndex_3() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1328006001, ___newIndex_3)); }
	inline int32_t get_newIndex_3() const { return ___newIndex_3; }
	inline int32_t* get_address_of_newIndex_3() { return &___newIndex_3; }
	inline void set_newIndex_3(int32_t value)
	{
		___newIndex_3 = value;
	}

	inline static int32_t get_offset_of_propDesc_4() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1328006001, ___propDesc_4)); }
	inline PropertyDescriptor_t3244362832 * get_propDesc_4() const { return ___propDesc_4; }
	inline PropertyDescriptor_t3244362832 ** get_address_of_propDesc_4() { return &___propDesc_4; }
	inline void set_propDesc_4(PropertyDescriptor_t3244362832 * value)
	{
		___propDesc_4 = value;
		Il2CppCodeGenWriteBarrier((&___propDesc_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDEVENTARGS_T1328006001_H
#ifndef LISTSORTDESCRIPTION_T2013348659_H
#define LISTSORTDESCRIPTION_T2013348659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDescription
struct  ListSortDescription_t2013348659  : public RuntimeObject
{
public:
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListSortDescription::propertyDescriptor
	PropertyDescriptor_t3244362832 * ___propertyDescriptor_0;
	// System.ComponentModel.ListSortDirection System.ComponentModel.ListSortDescription::sortDirection
	int32_t ___sortDirection_1;

public:
	inline static int32_t get_offset_of_propertyDescriptor_0() { return static_cast<int32_t>(offsetof(ListSortDescription_t2013348659, ___propertyDescriptor_0)); }
	inline PropertyDescriptor_t3244362832 * get_propertyDescriptor_0() const { return ___propertyDescriptor_0; }
	inline PropertyDescriptor_t3244362832 ** get_address_of_propertyDescriptor_0() { return &___propertyDescriptor_0; }
	inline void set_propertyDescriptor_0(PropertyDescriptor_t3244362832 * value)
	{
		___propertyDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((&___propertyDescriptor_0), value);
	}

	inline static int32_t get_offset_of_sortDirection_1() { return static_cast<int32_t>(offsetof(ListSortDescription_t2013348659, ___sortDirection_1)); }
	inline int32_t get_sortDirection_1() const { return ___sortDirection_1; }
	inline int32_t* get_address_of_sortDirection_1() { return &___sortDirection_1; }
	inline void set_sortDirection_1(int32_t value)
	{
		___sortDirection_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDESCRIPTION_T2013348659_H
#ifndef EDITPOSITION_T19241602_H
#define EDITPOSITION_T19241602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MaskedTextProvider/EditPosition
struct  EditPosition_t19241602  : public RuntimeObject
{
public:
	// System.ComponentModel.MaskedTextProvider System.ComponentModel.MaskedTextProvider/EditPosition::Parent
	MaskedTextProvider_t3775648146 * ___Parent_0;
	// System.ComponentModel.MaskedTextProvider/EditType System.ComponentModel.MaskedTextProvider/EditPosition::Type
	int32_t ___Type_1;
	// System.ComponentModel.MaskedTextProvider/EditState System.ComponentModel.MaskedTextProvider/EditPosition::State
	int32_t ___State_2;
	// System.Char System.ComponentModel.MaskedTextProvider/EditPosition::MaskCharacter
	Il2CppChar ___MaskCharacter_3;
	// System.Char System.ComponentModel.MaskedTextProvider/EditPosition::input
	Il2CppChar ___input_4;

public:
	inline static int32_t get_offset_of_Parent_0() { return static_cast<int32_t>(offsetof(EditPosition_t19241602, ___Parent_0)); }
	inline MaskedTextProvider_t3775648146 * get_Parent_0() const { return ___Parent_0; }
	inline MaskedTextProvider_t3775648146 ** get_address_of_Parent_0() { return &___Parent_0; }
	inline void set_Parent_0(MaskedTextProvider_t3775648146 * value)
	{
		___Parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___Parent_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(EditPosition_t19241602, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(EditPosition_t19241602, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_MaskCharacter_3() { return static_cast<int32_t>(offsetof(EditPosition_t19241602, ___MaskCharacter_3)); }
	inline Il2CppChar get_MaskCharacter_3() const { return ___MaskCharacter_3; }
	inline Il2CppChar* get_address_of_MaskCharacter_3() { return &___MaskCharacter_3; }
	inline void set_MaskCharacter_3(Il2CppChar value)
	{
		___MaskCharacter_3 = value;
	}

	inline static int32_t get_offset_of_input_4() { return static_cast<int32_t>(offsetof(EditPosition_t19241602, ___input_4)); }
	inline Il2CppChar get_input_4() const { return ___input_4; }
	inline Il2CppChar* get_address_of_input_4() { return &___input_4; }
	inline void set_input_4(Il2CppChar value)
	{
		___input_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITPOSITION_T19241602_H
#ifndef REFRESHPROPERTIESATTRIBUTE_T2078493172_H
#define REFRESHPROPERTIESATTRIBUTE_T2078493172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshPropertiesAttribute
struct  RefreshPropertiesAttribute_t2078493172  : public Attribute_t861562559
{
public:
	// System.ComponentModel.RefreshProperties System.ComponentModel.RefreshPropertiesAttribute::refresh
	int32_t ___refresh_0;

public:
	inline static int32_t get_offset_of_refresh_0() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2078493172, ___refresh_0)); }
	inline int32_t get_refresh_0() const { return ___refresh_0; }
	inline int32_t* get_address_of_refresh_0() { return &___refresh_0; }
	inline void set_refresh_0(int32_t value)
	{
		___refresh_0 = value;
	}
};

struct RefreshPropertiesAttribute_t2078493172_StaticFields
{
public:
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::All
	RefreshPropertiesAttribute_t2078493172 * ___All_1;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Default
	RefreshPropertiesAttribute_t2078493172 * ___Default_2;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Repaint
	RefreshPropertiesAttribute_t2078493172 * ___Repaint_3;

public:
	inline static int32_t get_offset_of_All_1() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2078493172_StaticFields, ___All_1)); }
	inline RefreshPropertiesAttribute_t2078493172 * get_All_1() const { return ___All_1; }
	inline RefreshPropertiesAttribute_t2078493172 ** get_address_of_All_1() { return &___All_1; }
	inline void set_All_1(RefreshPropertiesAttribute_t2078493172 * value)
	{
		___All_1 = value;
		Il2CppCodeGenWriteBarrier((&___All_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2078493172_StaticFields, ___Default_2)); }
	inline RefreshPropertiesAttribute_t2078493172 * get_Default_2() const { return ___Default_2; }
	inline RefreshPropertiesAttribute_t2078493172 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(RefreshPropertiesAttribute_t2078493172 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}

	inline static int32_t get_offset_of_Repaint_3() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2078493172_StaticFields, ___Repaint_3)); }
	inline RefreshPropertiesAttribute_t2078493172 * get_Repaint_3() const { return ___Repaint_3; }
	inline RefreshPropertiesAttribute_t2078493172 ** get_address_of_Repaint_3() { return &___Repaint_3; }
	inline void set_Repaint_3(RefreshPropertiesAttribute_t2078493172 * value)
	{
		___Repaint_3 = value;
		Il2CppCodeGenWriteBarrier((&___Repaint_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHPROPERTIESATTRIBUTE_T2078493172_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1600 = { sizeof (DoubleConverter_t805142290), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1601 = { sizeof (DoWorkEventArgs_t1025725751), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1601[2] = 
{
	DoWorkEventArgs_t1025725751::get_offset_of_arg_2(),
	DoWorkEventArgs_t1025725751::get_offset_of_result_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1602 = { sizeof (EditorAttribute_t1332199665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1602[2] = 
{
	EditorAttribute_t1332199665::get_offset_of_name_0(),
	EditorAttribute_t1332199665::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1603 = { sizeof (EditorBrowsableAttribute_t1475454531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1603[1] = 
{
	EditorBrowsableAttribute_t1475454531::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1604 = { sizeof (EditorBrowsableState_t2839071299)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1604[4] = 
{
	EditorBrowsableState_t2839071299::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1605 = { sizeof (EnumConverter_t1688858217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1605[2] = 
{
	EnumConverter_t1688858217::get_offset_of_type_0(),
	EnumConverter_t1688858217::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1606 = { sizeof (EnumComparer_t557155003), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1607 = { sizeof (EventDescriptorCollection_t2278158832), -1, sizeof(EventDescriptorCollection_t2278158832_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1607[3] = 
{
	EventDescriptorCollection_t2278158832::get_offset_of_eventList_0(),
	EventDescriptorCollection_t2278158832::get_offset_of_isReadOnly_1(),
	EventDescriptorCollection_t2278158832_StaticFields::get_offset_of_Empty_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1608 = { sizeof (EventDescriptor_t88602298), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1609 = { sizeof (ListEntry_t1182276877), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1609[3] = 
{
	ListEntry_t1182276877::get_offset_of_key_0(),
	ListEntry_t1182276877::get_offset_of_value_1(),
	ListEntry_t1182276877::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1610 = { sizeof (EventHandlerList_t1108123056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1610[2] = 
{
	EventHandlerList_t1108123056::get_offset_of_entries_0(),
	EventHandlerList_t1108123056::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1611 = { sizeof (ExpandableObjectConverter_t420832579), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1612 = { sizeof (ExtenderProvidedPropertyAttribute_t3771163592), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1612[3] = 
{
	ExtenderProvidedPropertyAttribute_t3771163592::get_offset_of_extender_0(),
	ExtenderProvidedPropertyAttribute_t3771163592::get_offset_of_extenderProvider_1(),
	ExtenderProvidedPropertyAttribute_t3771163592::get_offset_of_receiver_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1613 = { sizeof (GuidConverter_t3396672461), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1614 = { sizeof (HandledEventArgs_t3639267452), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1614[1] = 
{
	HandledEventArgs_t3639267452::get_offset_of_handled_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1615 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1616 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1617 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1618 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1619 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1620 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1621 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1622 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1623 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1624 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1625 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1626 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1627 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1628 = { sizeof (ImmutableObjectAttribute_t2959712128), -1, sizeof(ImmutableObjectAttribute_t2959712128_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1628[4] = 
{
	ImmutableObjectAttribute_t2959712128::get_offset_of_immutable_0(),
	ImmutableObjectAttribute_t2959712128_StaticFields::get_offset_of_Default_1(),
	ImmutableObjectAttribute_t2959712128_StaticFields::get_offset_of_No_2(),
	ImmutableObjectAttribute_t2959712128_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1629 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1630 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1631 = { sizeof (InheritanceAttribute_t3667880172), -1, sizeof(InheritanceAttribute_t3667880172_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1631[5] = 
{
	InheritanceAttribute_t3667880172::get_offset_of_level_0(),
	InheritanceAttribute_t3667880172_StaticFields::get_offset_of_Default_1(),
	InheritanceAttribute_t3667880172_StaticFields::get_offset_of_Inherited_2(),
	InheritanceAttribute_t3667880172_StaticFields::get_offset_of_InheritedReadOnly_3(),
	InheritanceAttribute_t3667880172_StaticFields::get_offset_of_NotInherited_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1632 = { sizeof (InheritanceLevel_t3095109434)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1632[4] = 
{
	InheritanceLevel_t3095109434::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1633 = { sizeof (InitializationEventAttribute_t1076550734), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1633[1] = 
{
	InitializationEventAttribute_t1076550734::get_offset_of_eventName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1634 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1635 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1636 = { sizeof (InstallerTypeAttribute_t3233088727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1636[1] = 
{
	InstallerTypeAttribute_t3233088727::get_offset_of_installer_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1637 = { sizeof (InstanceCreationEditor_t238900532), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1638 = { sizeof (InvalidAsynchronousStateException_t1889442469), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1639 = { sizeof (Int16Converter_t1119562914), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1640 = { sizeof (Int32Converter_t677227065), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1641 = { sizeof (Int64Converter_t1092099567), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1642 = { sizeof (InvalidEnumArgumentException_t2634129013), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1643 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1644 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1645 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1646 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1647 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1648 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1649 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1650 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1651 = { sizeof (LicenseContext_t2141136407), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1652 = { sizeof (License_t2258946041), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1653 = { sizeof (LicenseException_t2803495799), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1653[1] = 
{
	LicenseException_t2803495799::get_offset_of_type_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1654 = { sizeof (LicenseManager_t19983147), -1, sizeof(LicenseManager_t19983147_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1654[3] = 
{
	LicenseManager_t19983147_StaticFields::get_offset_of_mycontext_0(),
	LicenseManager_t19983147_StaticFields::get_offset_of_contextLockUser_1(),
	LicenseManager_t19983147_StaticFields::get_offset_of_lockObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1655 = { sizeof (LicenseProviderAttribute_t1257937162), -1, sizeof(LicenseProviderAttribute_t1257937162_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1655[2] = 
{
	LicenseProviderAttribute_t1257937162::get_offset_of_Provider_0(),
	LicenseProviderAttribute_t1257937162_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1656 = { sizeof (LicenseProvider_t1830579869), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1657 = { sizeof (LicenseUsageMode_t830309198)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1657[3] = 
{
	LicenseUsageMode_t830309198::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1658 = { sizeof (LicFileLicenseProvider_t3520472243), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1659 = { sizeof (LicFileLicense_t2059423786), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1659[1] = 
{
	LicFileLicense_t2059423786::get_offset_of__key_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1660 = { sizeof (ListBindableAttribute_t2461184386), -1, sizeof(ListBindableAttribute_t2461184386_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1660[4] = 
{
	ListBindableAttribute_t2461184386_StaticFields::get_offset_of_Default_0(),
	ListBindableAttribute_t2461184386_StaticFields::get_offset_of_No_1(),
	ListBindableAttribute_t2461184386_StaticFields::get_offset_of_Yes_2(),
	ListBindableAttribute_t2461184386::get_offset_of_bindable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1661 = { sizeof (ListChangedEventArgs_t1328006001), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1661[4] = 
{
	ListChangedEventArgs_t1328006001::get_offset_of_changedType_1(),
	ListChangedEventArgs_t1328006001::get_offset_of_oldIndex_2(),
	ListChangedEventArgs_t1328006001::get_offset_of_newIndex_3(),
	ListChangedEventArgs_t1328006001::get_offset_of_propDesc_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1662 = { sizeof (ListChangedType_t2971046703)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1662[9] = 
{
	ListChangedType_t2971046703::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1663 = { sizeof (ListSortDescriptionCollection_t2955388176), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1663[1] = 
{
	ListSortDescriptionCollection_t2955388176::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1664 = { sizeof (ListSortDescription_t2013348659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1664[2] = 
{
	ListSortDescription_t2013348659::get_offset_of_propertyDescriptor_0(),
	ListSortDescription_t2013348659::get_offset_of_sortDirection_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1665 = { sizeof (ListSortDirection_t852779204)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1665[3] = 
{
	ListSortDirection_t852779204::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1666 = { sizeof (LocalizableAttribute_t3478561129), -1, sizeof(LocalizableAttribute_t3478561129_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1666[4] = 
{
	LocalizableAttribute_t3478561129::get_offset_of_localizable_0(),
	LocalizableAttribute_t3478561129_StaticFields::get_offset_of_Default_1(),
	LocalizableAttribute_t3478561129_StaticFields::get_offset_of_No_2(),
	LocalizableAttribute_t3478561129_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1667 = { sizeof (LookupBindingPropertiesAttribute_t2365213483), -1, sizeof(LookupBindingPropertiesAttribute_t2365213483_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1667[5] = 
{
	LookupBindingPropertiesAttribute_t2365213483::get_offset_of_data_source_0(),
	LookupBindingPropertiesAttribute_t2365213483::get_offset_of_display_member_1(),
	LookupBindingPropertiesAttribute_t2365213483::get_offset_of_value_member_2(),
	LookupBindingPropertiesAttribute_t2365213483::get_offset_of_lookup_member_3(),
	LookupBindingPropertiesAttribute_t2365213483_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1668 = { sizeof (MarshalByValueComponent_t828052580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1668[3] = 
{
	MarshalByValueComponent_t828052580::get_offset_of_eventList_0(),
	MarshalByValueComponent_t828052580::get_offset_of_mySite_1(),
	MarshalByValueComponent_t828052580::get_offset_of_disposedEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1669 = { sizeof (MaskedTextProvider_t3775648146), -1, sizeof(MaskedTextProvider_t3775648146_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1669[15] = 
{
	MaskedTextProvider_t3775648146::get_offset_of_allow_prompt_as_input_0(),
	MaskedTextProvider_t3775648146::get_offset_of_ascii_only_1(),
	MaskedTextProvider_t3775648146::get_offset_of_culture_2(),
	MaskedTextProvider_t3775648146::get_offset_of_include_literals_3(),
	MaskedTextProvider_t3775648146::get_offset_of_include_prompt_4(),
	MaskedTextProvider_t3775648146::get_offset_of_is_password_5(),
	MaskedTextProvider_t3775648146::get_offset_of_mask_6(),
	MaskedTextProvider_t3775648146::get_offset_of_password_char_7(),
	MaskedTextProvider_t3775648146::get_offset_of_prompt_char_8(),
	MaskedTextProvider_t3775648146::get_offset_of_reset_on_prompt_9(),
	MaskedTextProvider_t3775648146::get_offset_of_reset_on_space_10(),
	MaskedTextProvider_t3775648146::get_offset_of_skip_literals_11(),
	MaskedTextProvider_t3775648146::get_offset_of_edit_positions_12(),
	MaskedTextProvider_t3775648146_StaticFields::get_offset_of_default_prompt_char_13(),
	MaskedTextProvider_t3775648146_StaticFields::get_offset_of_default_password_char_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1670 = { sizeof (EditState_t2237466956)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1670[4] = 
{
	EditState_t2237466956::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1671 = { sizeof (EditType_t2219777374)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1671[16] = 
{
	EditType_t2219777374::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1672 = { sizeof (EditPosition_t19241602), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1672[5] = 
{
	EditPosition_t19241602::get_offset_of_Parent_0(),
	EditPosition_t19241602::get_offset_of_Type_1(),
	EditPosition_t19241602::get_offset_of_State_2(),
	EditPosition_t19241602::get_offset_of_MaskCharacter_3(),
	EditPosition_t19241602::get_offset_of_input_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1673 = { sizeof (MaskedTextResultHint_t3918028412)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1673[16] = 
{
	MaskedTextResultHint_t3918028412::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1674 = { sizeof (MemberDescriptor_t3815403747), -1, sizeof(MemberDescriptor_t3815403747_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1674[4] = 
{
	MemberDescriptor_t3815403747::get_offset_of_name_0(),
	MemberDescriptor_t3815403747::get_offset_of_attrs_1(),
	MemberDescriptor_t3815403747::get_offset_of_attrCollection_2(),
	MemberDescriptor_t3815403747_StaticFields::get_offset_of_default_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1675 = { sizeof (MemberDescriptorComparer_t861557818), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1676 = { sizeof (MergablePropertyAttribute_t476798118), -1, sizeof(MergablePropertyAttribute_t476798118_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1676[4] = 
{
	MergablePropertyAttribute_t476798118::get_offset_of_mergable_0(),
	MergablePropertyAttribute_t476798118_StaticFields::get_offset_of_Default_1(),
	MergablePropertyAttribute_t476798118_StaticFields::get_offset_of_No_2(),
	MergablePropertyAttribute_t476798118_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1677 = { sizeof (MultilineStringConverter_t1596147706), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1678 = { sizeof (NestedContainer_t119127665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1678[1] = 
{
	NestedContainer_t119127665::get_offset_of__owner_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1679 = { sizeof (Site_t751657764), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1679[3] = 
{
	Site_t751657764::get_offset_of__component_0(),
	Site_t751657764::get_offset_of__nestedContainer_1(),
	Site_t751657764::get_offset_of__siteName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1680 = { sizeof (NotifyParentPropertyAttribute_t1405421815), -1, sizeof(NotifyParentPropertyAttribute_t1405421815_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1680[4] = 
{
	NotifyParentPropertyAttribute_t1405421815::get_offset_of_notifyParent_0(),
	NotifyParentPropertyAttribute_t1405421815_StaticFields::get_offset_of_Default_1(),
	NotifyParentPropertyAttribute_t1405421815_StaticFields::get_offset_of_No_2(),
	NotifyParentPropertyAttribute_t1405421815_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1681 = { sizeof (NullableConverter_t1985728604), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1681[3] = 
{
	NullableConverter_t1985728604::get_offset_of_nullableType_0(),
	NullableConverter_t1985728604::get_offset_of_underlyingType_1(),
	NullableConverter_t1985728604::get_offset_of_underlyingTypeConverter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1682 = { sizeof (ParenthesizePropertyNameAttribute_t878408981), -1, sizeof(ParenthesizePropertyNameAttribute_t878408981_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1682[2] = 
{
	ParenthesizePropertyNameAttribute_t878408981::get_offset_of_parenthesis_0(),
	ParenthesizePropertyNameAttribute_t878408981_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1683 = { sizeof (PasswordPropertyTextAttribute_t4966400), -1, sizeof(PasswordPropertyTextAttribute_t4966400_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1683[4] = 
{
	PasswordPropertyTextAttribute_t4966400_StaticFields::get_offset_of_Default_0(),
	PasswordPropertyTextAttribute_t4966400_StaticFields::get_offset_of_No_1(),
	PasswordPropertyTextAttribute_t4966400_StaticFields::get_offset_of_Yes_2(),
	PasswordPropertyTextAttribute_t4966400::get_offset_of__password_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1684 = { sizeof (PropertyChangedEventArgs_t3313059048), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1684[1] = 
{
	PropertyChangedEventArgs_t3313059048::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1685 = { sizeof (PropertyChangingEventArgs_t2067745136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1685[1] = 
{
	PropertyChangingEventArgs_t2067745136::get_offset_of_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1686 = { sizeof (PropertyDescriptorCollection_t4164928659), -1, sizeof(PropertyDescriptorCollection_t4164928659_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1686[3] = 
{
	PropertyDescriptorCollection_t4164928659_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_properties_1(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_readOnly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1687 = { sizeof (PropertyDescriptor_t3244362832), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1687[2] = 
{
	PropertyDescriptor_t3244362832::get_offset_of_converter_4(),
	PropertyDescriptor_t3244362832::get_offset_of_notifiers_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1688 = { sizeof (PropertyTabAttribute_t2227247962), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1688[2] = 
{
	PropertyTabAttribute_t2227247962::get_offset_of_tabs_0(),
	PropertyTabAttribute_t2227247962::get_offset_of_scopes_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1689 = { sizeof (PropertyTabScope_t3421563254)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1689[5] = 
{
	PropertyTabScope_t3421563254::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1690 = { sizeof (ProvidePropertyAttribute_t26263718), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1690[2] = 
{
	ProvidePropertyAttribute_t26263718::get_offset_of_Property_0(),
	ProvidePropertyAttribute_t26263718::get_offset_of_Receiver_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1691 = { sizeof (ReadOnlyAttribute_t1907441566), -1, sizeof(ReadOnlyAttribute_t1907441566_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1691[4] = 
{
	ReadOnlyAttribute_t1907441566::get_offset_of_read_only_0(),
	ReadOnlyAttribute_t1907441566_StaticFields::get_offset_of_No_1(),
	ReadOnlyAttribute_t1907441566_StaticFields::get_offset_of_Yes_2(),
	ReadOnlyAttribute_t1907441566_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1692 = { sizeof (RecommendedAsConfigurableAttribute_t279829077), -1, sizeof(RecommendedAsConfigurableAttribute_t279829077_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1692[4] = 
{
	RecommendedAsConfigurableAttribute_t279829077::get_offset_of_recommendedAsConfigurable_0(),
	RecommendedAsConfigurableAttribute_t279829077_StaticFields::get_offset_of_Default_1(),
	RecommendedAsConfigurableAttribute_t279829077_StaticFields::get_offset_of_No_2(),
	RecommendedAsConfigurableAttribute_t279829077_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1693 = { sizeof (ReferenceConverter_t1811933861), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1693[1] = 
{
	ReferenceConverter_t1811933861::get_offset_of_reference_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1694 = { sizeof (ReflectionEventDescriptor_t659576852), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1694[5] = 
{
	ReflectionEventDescriptor_t659576852::get_offset_of__eventType_4(),
	ReflectionEventDescriptor_t659576852::get_offset_of__componentType_5(),
	ReflectionEventDescriptor_t659576852::get_offset_of__eventInfo_6(),
	ReflectionEventDescriptor_t659576852::get_offset_of_add_method_7(),
	ReflectionEventDescriptor_t659576852::get_offset_of_remove_method_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1695 = { sizeof (ReflectionPropertyDescriptor_t3529497203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1695[6] = 
{
	ReflectionPropertyDescriptor_t3529497203::get_offset_of__member_6(),
	ReflectionPropertyDescriptor_t3529497203::get_offset_of__componentType_7(),
	ReflectionPropertyDescriptor_t3529497203::get_offset_of__propertyType_8(),
	ReflectionPropertyDescriptor_t3529497203::get_offset_of_getter_9(),
	ReflectionPropertyDescriptor_t3529497203::get_offset_of_setter_10(),
	ReflectionPropertyDescriptor_t3529497203::get_offset_of_accessors_inited_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1696 = { sizeof (RefreshEventArgs_t9288056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1696[2] = 
{
	RefreshEventArgs_t9288056::get_offset_of_component_1(),
	RefreshEventArgs_t9288056::get_offset_of_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1697 = { sizeof (RefreshPropertiesAttribute_t2078493172), -1, sizeof(RefreshPropertiesAttribute_t2078493172_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1697[4] = 
{
	RefreshPropertiesAttribute_t2078493172::get_offset_of_refresh_0(),
	RefreshPropertiesAttribute_t2078493172_StaticFields::get_offset_of_All_1(),
	RefreshPropertiesAttribute_t2078493172_StaticFields::get_offset_of_Default_2(),
	RefreshPropertiesAttribute_t2078493172_StaticFields::get_offset_of_Repaint_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1698 = { sizeof (RefreshProperties_t2310254728)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1698[4] = 
{
	RefreshProperties_t2310254728::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1699 = { sizeof (RunInstallerAttribute_t4293401849), -1, sizeof(RunInstallerAttribute_t4293401849_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1699[4] = 
{
	RunInstallerAttribute_t4293401849_StaticFields::get_offset_of_Yes_0(),
	RunInstallerAttribute_t4293401849_StaticFields::get_offset_of_No_1(),
	RunInstallerAttribute_t4293401849_StaticFields::get_offset_of_Default_2(),
	RunInstallerAttribute_t4293401849::get_offset_of_runInstaller_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
