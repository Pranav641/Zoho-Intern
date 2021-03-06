// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: version.proto

#include "version.pb.h"

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

PROTOBUF_CONSTEXPR Version::Version(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.project_name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.contents_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.operations_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.version_id_)*/0
  , /*decltype(_impl_.version_number_)*/0
  , /*decltype(_impl_.project_id_)*/0
  , /*decltype(_impl_.user_id_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct VersionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR VersionDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~VersionDefaultTypeInternal() {}
  union {
    Version _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 VersionDefaultTypeInternal _Version_default_instance_;
PROTOBUF_CONSTEXPR Versions::Versions(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.versions_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct VersionsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR VersionsDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~VersionsDefaultTypeInternal() {}
  union {
    Versions _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 VersionsDefaultTypeInternal _Versions_default_instance_;
static ::_pb::Metadata file_level_metadata_version_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_version_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_version_2eproto = nullptr;

const uint32_t TableStruct_version_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Version, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.version_id_),
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.version_number_),
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.project_id_),
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.project_name_),
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.user_id_),
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.contents_),
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.operations_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Versions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Versions, _impl_.versions_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Version)},
  { 13, -1, -1, sizeof(::Versions)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Version_default_instance_._instance,
  &::_Versions_default_instance_._instance,
};

const char descriptor_table_protodef_version_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rversion.proto\"\226\001\n\007Version\022\022\n\nversion_i"
  "d\030\001 \001(\005\022\026\n\016version_number\030\002 \001(\005\022\022\n\nproje"
  "ct_id\030\003 \001(\005\022\024\n\014project_name\030\004 \001(\t\022\017\n\007use"
  "r_id\030\005 \001(\005\022\020\n\010contents\030\006 \001(\t\022\022\n\noperatio"
  "ns\030\007 \001(\t\"&\n\010Versions\022\032\n\010versions\030\001 \003(\0132\010"
  ".Versionb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_version_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_version_2eproto = {
    false, false, 216, descriptor_table_protodef_version_2eproto,
    "version.proto",
    &descriptor_table_version_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_version_2eproto::offsets,
    file_level_metadata_version_2eproto, file_level_enum_descriptors_version_2eproto,
    file_level_service_descriptors_version_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_version_2eproto_getter() {
  return &descriptor_table_version_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_version_2eproto(&descriptor_table_version_2eproto);

// ===================================================================

class Version::_Internal {
 public:
};

Version::Version(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Version)
}
Version::Version(const Version& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Version* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.project_name_){}
    , decltype(_impl_.contents_){}
    , decltype(_impl_.operations_){}
    , decltype(_impl_.version_id_){}
    , decltype(_impl_.version_number_){}
    , decltype(_impl_.project_id_){}
    , decltype(_impl_.user_id_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.project_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.project_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_project_name().empty()) {
    _this->_impl_.project_name_.Set(from._internal_project_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.contents_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.contents_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_contents().empty()) {
    _this->_impl_.contents_.Set(from._internal_contents(), 
      _this->GetArenaForAllocation());
  }
  _impl_.operations_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.operations_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_operations().empty()) {
    _this->_impl_.operations_.Set(from._internal_operations(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.version_id_, &from._impl_.version_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.user_id_) -
    reinterpret_cast<char*>(&_impl_.version_id_)) + sizeof(_impl_.user_id_));
  // @@protoc_insertion_point(copy_constructor:Version)
}

inline void Version::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.project_name_){}
    , decltype(_impl_.contents_){}
    , decltype(_impl_.operations_){}
    , decltype(_impl_.version_id_){0}
    , decltype(_impl_.version_number_){0}
    , decltype(_impl_.project_id_){0}
    , decltype(_impl_.user_id_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.project_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.project_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.contents_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.contents_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.operations_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.operations_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Version::~Version() {
  // @@protoc_insertion_point(destructor:Version)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Version::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.project_name_.Destroy();
  _impl_.contents_.Destroy();
  _impl_.operations_.Destroy();
}

void Version::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Version::Clear() {
// @@protoc_insertion_point(message_clear_start:Version)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.project_name_.ClearToEmpty();
  _impl_.contents_.ClearToEmpty();
  _impl_.operations_.ClearToEmpty();
  ::memset(&_impl_.version_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.user_id_) -
      reinterpret_cast<char*>(&_impl_.version_id_)) + sizeof(_impl_.user_id_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Version::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 version_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.version_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 version_number = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.version_number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 project_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.project_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string project_name = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_project_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Version.project_name"));
        } else
          goto handle_unusual;
        continue;
      // int32 user_id = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.user_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string contents = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_contents();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Version.contents"));
        } else
          goto handle_unusual;
        continue;
      // string operations = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          auto str = _internal_mutable_operations();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Version.operations"));
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

uint8_t* Version::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Version)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 version_id = 1;
  if (this->_internal_version_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_version_id(), target);
  }

  // int32 version_number = 2;
  if (this->_internal_version_number() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_version_number(), target);
  }

  // int32 project_id = 3;
  if (this->_internal_project_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_project_id(), target);
  }

  // string project_name = 4;
  if (!this->_internal_project_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_project_name().data(), static_cast<int>(this->_internal_project_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Version.project_name");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_project_name(), target);
  }

  // int32 user_id = 5;
  if (this->_internal_user_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(5, this->_internal_user_id(), target);
  }

  // string contents = 6;
  if (!this->_internal_contents().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_contents().data(), static_cast<int>(this->_internal_contents().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Version.contents");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_contents(), target);
  }

  // string operations = 7;
  if (!this->_internal_operations().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_operations().data(), static_cast<int>(this->_internal_operations().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Version.operations");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_operations(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Version)
  return target;
}

size_t Version::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Version)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string project_name = 4;
  if (!this->_internal_project_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_project_name());
  }

  // string contents = 6;
  if (!this->_internal_contents().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_contents());
  }

  // string operations = 7;
  if (!this->_internal_operations().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_operations());
  }

  // int32 version_id = 1;
  if (this->_internal_version_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_version_id());
  }

  // int32 version_number = 2;
  if (this->_internal_version_number() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_version_number());
  }

  // int32 project_id = 3;
  if (this->_internal_project_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_project_id());
  }

  // int32 user_id = 5;
  if (this->_internal_user_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_user_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Version::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Version::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Version::GetClassData() const { return &_class_data_; }


void Version::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Version*>(&to_msg);
  auto& from = static_cast<const Version&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Version)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_project_name().empty()) {
    _this->_internal_set_project_name(from._internal_project_name());
  }
  if (!from._internal_contents().empty()) {
    _this->_internal_set_contents(from._internal_contents());
  }
  if (!from._internal_operations().empty()) {
    _this->_internal_set_operations(from._internal_operations());
  }
  if (from._internal_version_id() != 0) {
    _this->_internal_set_version_id(from._internal_version_id());
  }
  if (from._internal_version_number() != 0) {
    _this->_internal_set_version_number(from._internal_version_number());
  }
  if (from._internal_project_id() != 0) {
    _this->_internal_set_project_id(from._internal_project_id());
  }
  if (from._internal_user_id() != 0) {
    _this->_internal_set_user_id(from._internal_user_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Version::CopyFrom(const Version& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Version)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Version::IsInitialized() const {
  return true;
}

void Version::InternalSwap(Version* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.project_name_, lhs_arena,
      &other->_impl_.project_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.contents_, lhs_arena,
      &other->_impl_.contents_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.operations_, lhs_arena,
      &other->_impl_.operations_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Version, _impl_.user_id_)
      + sizeof(Version::_impl_.user_id_)
      - PROTOBUF_FIELD_OFFSET(Version, _impl_.version_id_)>(
          reinterpret_cast<char*>(&_impl_.version_id_),
          reinterpret_cast<char*>(&other->_impl_.version_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Version::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_version_2eproto_getter, &descriptor_table_version_2eproto_once,
      file_level_metadata_version_2eproto[0]);
}

// ===================================================================

class Versions::_Internal {
 public:
};

Versions::Versions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Versions)
}
Versions::Versions(const Versions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Versions* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.versions_){from._impl_.versions_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Versions)
}

inline void Versions::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.versions_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Versions::~Versions() {
  // @@protoc_insertion_point(destructor:Versions)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Versions::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.versions_.~RepeatedPtrField();
}

void Versions::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Versions::Clear() {
// @@protoc_insertion_point(message_clear_start:Versions)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.versions_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Versions::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .Version versions = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_versions(), ptr);
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

uint8_t* Versions::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Versions)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Version versions = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_versions_size()); i < n; i++) {
    const auto& repfield = this->_internal_versions(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Versions)
  return target;
}

size_t Versions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Versions)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Version versions = 1;
  total_size += 1UL * this->_internal_versions_size();
  for (const auto& msg : this->_impl_.versions_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Versions::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Versions::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Versions::GetClassData() const { return &_class_data_; }


void Versions::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Versions*>(&to_msg);
  auto& from = static_cast<const Versions&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Versions)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.versions_.MergeFrom(from._impl_.versions_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Versions::CopyFrom(const Versions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Versions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Versions::IsInitialized() const {
  return true;
}

void Versions::InternalSwap(Versions* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.versions_.InternalSwap(&other->_impl_.versions_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Versions::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_version_2eproto_getter, &descriptor_table_version_2eproto_once,
      file_level_metadata_version_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Version*
Arena::CreateMaybeMessage< ::Version >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Version >(arena);
}
template<> PROTOBUF_NOINLINE ::Versions*
Arena::CreateMaybeMessage< ::Versions >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Versions >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
