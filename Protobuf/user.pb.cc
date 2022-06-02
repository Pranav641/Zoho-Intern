// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user.proto

#include "user.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR User::User(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.email_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.password_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.location_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.age_)*/0
  , /*decltype(_impl_.userid_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct UserDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UserDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UserDefaultTypeInternal() {}
  union {
    User _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UserDefaultTypeInternal _User_default_instance_;
PROTOBUF_CONSTEXPR Users::Users(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.users_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct UsersDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UsersDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UsersDefaultTypeInternal() {}
  union {
    Users _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UsersDefaultTypeInternal _Users_default_instance_;
static ::_pb::Metadata file_level_metadata_user_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_user_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_user_2eproto = nullptr;

const uint32_t TableStruct_user_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::User, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::User, _impl_.email_),
  PROTOBUF_FIELD_OFFSET(::User, _impl_.password_),
  PROTOBUF_FIELD_OFFSET(::User, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::User, _impl_.age_),
  PROTOBUF_FIELD_OFFSET(::User, _impl_.userid_),
  PROTOBUF_FIELD_OFFSET(::User, _impl_.location_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Users, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Users, _impl_.users_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::User)},
  { 12, -1, -1, sizeof(::Users)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_User_default_instance_._instance,
  &::_Users_default_instance_._instance,
};

const char descriptor_table_protodef_user_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nuser.proto\"d\n\004User\022\r\n\005email\030\001 \001(\t\022\020\n\010p"
  "assword\030\002 \001(\t\022\014\n\004name\030\003 \001(\t\022\013\n\003age\030\004 \001(\005"
  "\022\016\n\006userID\030\005 \001(\005\022\020\n\010location\030\006 \001(\t\"\035\n\005Us"
  "ers\022\024\n\005users\030\001 \003(\0132\005.Userb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_user_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_user_2eproto = {
    false, false, 153, descriptor_table_protodef_user_2eproto,
    "user.proto",
    &descriptor_table_user_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_user_2eproto::offsets,
    file_level_metadata_user_2eproto, file_level_enum_descriptors_user_2eproto,
    file_level_service_descriptors_user_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_user_2eproto_getter() {
  return &descriptor_table_user_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_user_2eproto(&descriptor_table_user_2eproto);

// ===================================================================

class User::_Internal {
 public:
};

User::User(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:User)
}
User::User(const User& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  User* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.email_){}
    , decltype(_impl_.password_){}
    , decltype(_impl_.name_){}
    , decltype(_impl_.location_){}
    , decltype(_impl_.age_){}
    , decltype(_impl_.userid_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.email_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.email_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_email().empty()) {
    _this->_impl_.email_.Set(from._internal_email(), 
      _this->GetArenaForAllocation());
  }
  _impl_.password_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.password_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_password().empty()) {
    _this->_impl_.password_.Set(from._internal_password(), 
      _this->GetArenaForAllocation());
  }
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.location_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.location_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_location().empty()) {
    _this->_impl_.location_.Set(from._internal_location(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.age_, &from._impl_.age_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.userid_) -
    reinterpret_cast<char*>(&_impl_.age_)) + sizeof(_impl_.userid_));
  // @@protoc_insertion_point(copy_constructor:User)
}

inline void User::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.email_){}
    , decltype(_impl_.password_){}
    , decltype(_impl_.name_){}
    , decltype(_impl_.location_){}
    , decltype(_impl_.age_){0}
    , decltype(_impl_.userid_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.email_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.email_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.password_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.password_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.location_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.location_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

User::~User() {
  // @@protoc_insertion_point(destructor:User)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void User::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.email_.Destroy();
  _impl_.password_.Destroy();
  _impl_.name_.Destroy();
  _impl_.location_.Destroy();
}

void User::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void User::Clear() {
// @@protoc_insertion_point(message_clear_start:User)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.email_.ClearToEmpty();
  _impl_.password_.ClearToEmpty();
  _impl_.name_.ClearToEmpty();
  _impl_.location_.ClearToEmpty();
  ::memset(&_impl_.age_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.userid_) -
      reinterpret_cast<char*>(&_impl_.age_)) + sizeof(_impl_.userid_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* User::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string email = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_email();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "User.email"));
        } else
          goto handle_unusual;
        continue;
      // string password = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_password();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "User.password"));
        } else
          goto handle_unusual;
        continue;
      // string name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "User.name"));
        } else
          goto handle_unusual;
        continue;
      // int32 age = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.age_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 userID = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.userid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string location = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_location();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "User.location"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* User::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:User)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string email = 1;
  if (!this->_internal_email().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_email().data(), static_cast<int>(this->_internal_email().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "User.email");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_email(), target);
  }

  // string password = 2;
  if (!this->_internal_password().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_password().data(), static_cast<int>(this->_internal_password().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "User.password");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_password(), target);
  }

  // string name = 3;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "User.name");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_name(), target);
  }

  // int32 age = 4;
  if (this->_internal_age() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(4, this->_internal_age(), target);
  }

  // int32 userID = 5;
  if (this->_internal_userid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(5, this->_internal_userid(), target);
  }

  // string location = 6;
  if (!this->_internal_location().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_location().data(), static_cast<int>(this->_internal_location().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "User.location");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_location(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:User)
  return target;
}

size_t User::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:User)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string email = 1;
  if (!this->_internal_email().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_email());
  }

  // string password = 2;
  if (!this->_internal_password().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_password());
  }

  // string name = 3;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string location = 6;
  if (!this->_internal_location().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_location());
  }

  // int32 age = 4;
  if (this->_internal_age() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_age());
  }

  // int32 userID = 5;
  if (this->_internal_userid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_userid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData User::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    User::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*User::GetClassData() const { return &_class_data_; }


void User::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<User*>(&to_msg);
  auto& from = static_cast<const User&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:User)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_email().empty()) {
    _this->_internal_set_email(from._internal_email());
  }
  if (!from._internal_password().empty()) {
    _this->_internal_set_password(from._internal_password());
  }
  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (!from._internal_location().empty()) {
    _this->_internal_set_location(from._internal_location());
  }
  if (from._internal_age() != 0) {
    _this->_internal_set_age(from._internal_age());
  }
  if (from._internal_userid() != 0) {
    _this->_internal_set_userid(from._internal_userid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void User::CopyFrom(const User& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:User)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool User::IsInitialized() const {
  return true;
}

void User::InternalSwap(User* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.email_, lhs_arena,
      &other->_impl_.email_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.password_, lhs_arena,
      &other->_impl_.password_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.location_, lhs_arena,
      &other->_impl_.location_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(User, _impl_.userid_)
      + sizeof(User::_impl_.userid_)
      - PROTOBUF_FIELD_OFFSET(User, _impl_.age_)>(
          reinterpret_cast<char*>(&_impl_.age_),
          reinterpret_cast<char*>(&other->_impl_.age_));
}

::PROTOBUF_NAMESPACE_ID::Metadata User::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_user_2eproto_getter, &descriptor_table_user_2eproto_once,
      file_level_metadata_user_2eproto[0]);
}

// ===================================================================

class Users::_Internal {
 public:
};

Users::Users(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Users)
}
Users::Users(const Users& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Users* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.users_){from._impl_.users_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Users)
}

inline void Users::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.users_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Users::~Users() {
  // @@protoc_insertion_point(destructor:Users)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Users::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.users_.~RepeatedPtrField();
}

void Users::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Users::Clear() {
// @@protoc_insertion_point(message_clear_start:Users)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.users_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Users::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .User users = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_users(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Users::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Users)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .User users = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_users_size()); i < n; i++) {
    const auto& repfield = this->_internal_users(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Users)
  return target;
}

size_t Users::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Users)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .User users = 1;
  total_size += 1UL * this->_internal_users_size();
  for (const auto& msg : this->_impl_.users_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Users::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Users::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Users::GetClassData() const { return &_class_data_; }


void Users::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Users*>(&to_msg);
  auto& from = static_cast<const Users&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Users)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.users_.MergeFrom(from._impl_.users_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Users::CopyFrom(const Users& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Users)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Users::IsInitialized() const {
  return true;
}

void Users::InternalSwap(Users* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.users_.InternalSwap(&other->_impl_.users_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Users::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_user_2eproto_getter, &descriptor_table_user_2eproto_once,
      file_level_metadata_user_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::User*
Arena::CreateMaybeMessage< ::User >(Arena* arena) {
  return Arena::CreateMessageInternal< ::User >(arena);
}
template<> PROTOBUF_NOINLINE ::Users*
Arena::CreateMaybeMessage< ::Users >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Users >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
