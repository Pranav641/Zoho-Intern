// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: version.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_version_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_version_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_version_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_version_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_version_2eproto;
class Version;
struct VersionDefaultTypeInternal;
extern VersionDefaultTypeInternal _Version_default_instance_;
class Versions;
struct VersionsDefaultTypeInternal;
extern VersionsDefaultTypeInternal _Versions_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Version* Arena::CreateMaybeMessage<::Version>(Arena*);
template<> ::Versions* Arena::CreateMaybeMessage<::Versions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Version final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Version) */ {
 public:
  inline Version() : Version(nullptr) {}
  ~Version() override;
  explicit PROTOBUF_CONSTEXPR Version(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Version(const Version& from);
  Version(Version&& from) noexcept
    : Version() {
    *this = ::std::move(from);
  }

  inline Version& operator=(const Version& from) {
    CopyFrom(from);
    return *this;
  }
  inline Version& operator=(Version&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Version& default_instance() {
    return *internal_default_instance();
  }
  static inline const Version* internal_default_instance() {
    return reinterpret_cast<const Version*>(
               &_Version_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Version& a, Version& b) {
    a.Swap(&b);
  }
  inline void Swap(Version* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Version* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Version* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Version>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Version& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Version& from) {
    Version::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Version* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Version";
  }
  protected:
  explicit Version(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kProjectNameFieldNumber = 4,
    kContentsFieldNumber = 6,
    kOperationsFieldNumber = 7,
    kVersionIdFieldNumber = 1,
    kVersionNumberFieldNumber = 2,
    kProjectIdFieldNumber = 3,
    kUserIdFieldNumber = 5,
  };
  // string project_name = 4;
  void clear_project_name();
  const std::string& project_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_project_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_project_name();
  PROTOBUF_NODISCARD std::string* release_project_name();
  void set_allocated_project_name(std::string* project_name);
  private:
  const std::string& _internal_project_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_project_name(const std::string& value);
  std::string* _internal_mutable_project_name();
  public:

  // string contents = 6;
  void clear_contents();
  const std::string& contents() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_contents(ArgT0&& arg0, ArgT... args);
  std::string* mutable_contents();
  PROTOBUF_NODISCARD std::string* release_contents();
  void set_allocated_contents(std::string* contents);
  private:
  const std::string& _internal_contents() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_contents(const std::string& value);
  std::string* _internal_mutable_contents();
  public:

  // string operations = 7;
  void clear_operations();
  const std::string& operations() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_operations(ArgT0&& arg0, ArgT... args);
  std::string* mutable_operations();
  PROTOBUF_NODISCARD std::string* release_operations();
  void set_allocated_operations(std::string* operations);
  private:
  const std::string& _internal_operations() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_operations(const std::string& value);
  std::string* _internal_mutable_operations();
  public:

  // int32 version_id = 1;
  void clear_version_id();
  int32_t version_id() const;
  void set_version_id(int32_t value);
  private:
  int32_t _internal_version_id() const;
  void _internal_set_version_id(int32_t value);
  public:

  // int32 version_number = 2;
  void clear_version_number();
  int32_t version_number() const;
  void set_version_number(int32_t value);
  private:
  int32_t _internal_version_number() const;
  void _internal_set_version_number(int32_t value);
  public:

  // int32 project_id = 3;
  void clear_project_id();
  int32_t project_id() const;
  void set_project_id(int32_t value);
  private:
  int32_t _internal_project_id() const;
  void _internal_set_project_id(int32_t value);
  public:

  // int32 user_id = 5;
  void clear_user_id();
  int32_t user_id() const;
  void set_user_id(int32_t value);
  private:
  int32_t _internal_user_id() const;
  void _internal_set_user_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Version)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr project_name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr contents_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr operations_;
    int32_t version_id_;
    int32_t version_number_;
    int32_t project_id_;
    int32_t user_id_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_version_2eproto;
};
// -------------------------------------------------------------------

class Versions final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Versions) */ {
 public:
  inline Versions() : Versions(nullptr) {}
  ~Versions() override;
  explicit PROTOBUF_CONSTEXPR Versions(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Versions(const Versions& from);
  Versions(Versions&& from) noexcept
    : Versions() {
    *this = ::std::move(from);
  }

  inline Versions& operator=(const Versions& from) {
    CopyFrom(from);
    return *this;
  }
  inline Versions& operator=(Versions&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Versions& default_instance() {
    return *internal_default_instance();
  }
  static inline const Versions* internal_default_instance() {
    return reinterpret_cast<const Versions*>(
               &_Versions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Versions& a, Versions& b) {
    a.Swap(&b);
  }
  inline void Swap(Versions* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Versions* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Versions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Versions>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Versions& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Versions& from) {
    Versions::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Versions* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Versions";
  }
  protected:
  explicit Versions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVersionsFieldNumber = 1,
  };
  // repeated .Version versions = 1;
  int versions_size() const;
  private:
  int _internal_versions_size() const;
  public:
  void clear_versions();
  ::Version* mutable_versions(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Version >*
      mutable_versions();
  private:
  const ::Version& _internal_versions(int index) const;
  ::Version* _internal_add_versions();
  public:
  const ::Version& versions(int index) const;
  ::Version* add_versions();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Version >&
      versions() const;

  // @@protoc_insertion_point(class_scope:Versions)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Version > versions_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_version_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Version

// int32 version_id = 1;
inline void Version::clear_version_id() {
  _impl_.version_id_ = 0;
}
inline int32_t Version::_internal_version_id() const {
  return _impl_.version_id_;
}
inline int32_t Version::version_id() const {
  // @@protoc_insertion_point(field_get:Version.version_id)
  return _internal_version_id();
}
inline void Version::_internal_set_version_id(int32_t value) {
  
  _impl_.version_id_ = value;
}
inline void Version::set_version_id(int32_t value) {
  _internal_set_version_id(value);
  // @@protoc_insertion_point(field_set:Version.version_id)
}

// int32 version_number = 2;
inline void Version::clear_version_number() {
  _impl_.version_number_ = 0;
}
inline int32_t Version::_internal_version_number() const {
  return _impl_.version_number_;
}
inline int32_t Version::version_number() const {
  // @@protoc_insertion_point(field_get:Version.version_number)
  return _internal_version_number();
}
inline void Version::_internal_set_version_number(int32_t value) {
  
  _impl_.version_number_ = value;
}
inline void Version::set_version_number(int32_t value) {
  _internal_set_version_number(value);
  // @@protoc_insertion_point(field_set:Version.version_number)
}

// int32 project_id = 3;
inline void Version::clear_project_id() {
  _impl_.project_id_ = 0;
}
inline int32_t Version::_internal_project_id() const {
  return _impl_.project_id_;
}
inline int32_t Version::project_id() const {
  // @@protoc_insertion_point(field_get:Version.project_id)
  return _internal_project_id();
}
inline void Version::_internal_set_project_id(int32_t value) {
  
  _impl_.project_id_ = value;
}
inline void Version::set_project_id(int32_t value) {
  _internal_set_project_id(value);
  // @@protoc_insertion_point(field_set:Version.project_id)
}

// string project_name = 4;
inline void Version::clear_project_name() {
  _impl_.project_name_.ClearToEmpty();
}
inline const std::string& Version::project_name() const {
  // @@protoc_insertion_point(field_get:Version.project_name)
  return _internal_project_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Version::set_project_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.project_name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Version.project_name)
}
inline std::string* Version::mutable_project_name() {
  std::string* _s = _internal_mutable_project_name();
  // @@protoc_insertion_point(field_mutable:Version.project_name)
  return _s;
}
inline const std::string& Version::_internal_project_name() const {
  return _impl_.project_name_.Get();
}
inline void Version::_internal_set_project_name(const std::string& value) {
  
  _impl_.project_name_.Set(value, GetArenaForAllocation());
}
inline std::string* Version::_internal_mutable_project_name() {
  
  return _impl_.project_name_.Mutable(GetArenaForAllocation());
}
inline std::string* Version::release_project_name() {
  // @@protoc_insertion_point(field_release:Version.project_name)
  return _impl_.project_name_.Release();
}
inline void Version::set_allocated_project_name(std::string* project_name) {
  if (project_name != nullptr) {
    
  } else {
    
  }
  _impl_.project_name_.SetAllocated(project_name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.project_name_.IsDefault()) {
    _impl_.project_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Version.project_name)
}

// int32 user_id = 5;
inline void Version::clear_user_id() {
  _impl_.user_id_ = 0;
}
inline int32_t Version::_internal_user_id() const {
  return _impl_.user_id_;
}
inline int32_t Version::user_id() const {
  // @@protoc_insertion_point(field_get:Version.user_id)
  return _internal_user_id();
}
inline void Version::_internal_set_user_id(int32_t value) {
  
  _impl_.user_id_ = value;
}
inline void Version::set_user_id(int32_t value) {
  _internal_set_user_id(value);
  // @@protoc_insertion_point(field_set:Version.user_id)
}

// string contents = 6;
inline void Version::clear_contents() {
  _impl_.contents_.ClearToEmpty();
}
inline const std::string& Version::contents() const {
  // @@protoc_insertion_point(field_get:Version.contents)
  return _internal_contents();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Version::set_contents(ArgT0&& arg0, ArgT... args) {
 
 _impl_.contents_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Version.contents)
}
inline std::string* Version::mutable_contents() {
  std::string* _s = _internal_mutable_contents();
  // @@protoc_insertion_point(field_mutable:Version.contents)
  return _s;
}
inline const std::string& Version::_internal_contents() const {
  return _impl_.contents_.Get();
}
inline void Version::_internal_set_contents(const std::string& value) {
  
  _impl_.contents_.Set(value, GetArenaForAllocation());
}
inline std::string* Version::_internal_mutable_contents() {
  
  return _impl_.contents_.Mutable(GetArenaForAllocation());
}
inline std::string* Version::release_contents() {
  // @@protoc_insertion_point(field_release:Version.contents)
  return _impl_.contents_.Release();
}
inline void Version::set_allocated_contents(std::string* contents) {
  if (contents != nullptr) {
    
  } else {
    
  }
  _impl_.contents_.SetAllocated(contents, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.contents_.IsDefault()) {
    _impl_.contents_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Version.contents)
}

// string operations = 7;
inline void Version::clear_operations() {
  _impl_.operations_.ClearToEmpty();
}
inline const std::string& Version::operations() const {
  // @@protoc_insertion_point(field_get:Version.operations)
  return _internal_operations();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Version::set_operations(ArgT0&& arg0, ArgT... args) {
 
 _impl_.operations_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Version.operations)
}
inline std::string* Version::mutable_operations() {
  std::string* _s = _internal_mutable_operations();
  // @@protoc_insertion_point(field_mutable:Version.operations)
  return _s;
}
inline const std::string& Version::_internal_operations() const {
  return _impl_.operations_.Get();
}
inline void Version::_internal_set_operations(const std::string& value) {
  
  _impl_.operations_.Set(value, GetArenaForAllocation());
}
inline std::string* Version::_internal_mutable_operations() {
  
  return _impl_.operations_.Mutable(GetArenaForAllocation());
}
inline std::string* Version::release_operations() {
  // @@protoc_insertion_point(field_release:Version.operations)
  return _impl_.operations_.Release();
}
inline void Version::set_allocated_operations(std::string* operations) {
  if (operations != nullptr) {
    
  } else {
    
  }
  _impl_.operations_.SetAllocated(operations, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.operations_.IsDefault()) {
    _impl_.operations_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Version.operations)
}

// -------------------------------------------------------------------

// Versions

// repeated .Version versions = 1;
inline int Versions::_internal_versions_size() const {
  return _impl_.versions_.size();
}
inline int Versions::versions_size() const {
  return _internal_versions_size();
}
inline void Versions::clear_versions() {
  _impl_.versions_.Clear();
}
inline ::Version* Versions::mutable_versions(int index) {
  // @@protoc_insertion_point(field_mutable:Versions.versions)
  return _impl_.versions_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Version >*
Versions::mutable_versions() {
  // @@protoc_insertion_point(field_mutable_list:Versions.versions)
  return &_impl_.versions_;
}
inline const ::Version& Versions::_internal_versions(int index) const {
  return _impl_.versions_.Get(index);
}
inline const ::Version& Versions::versions(int index) const {
  // @@protoc_insertion_point(field_get:Versions.versions)
  return _internal_versions(index);
}
inline ::Version* Versions::_internal_add_versions() {
  return _impl_.versions_.Add();
}
inline ::Version* Versions::add_versions() {
  ::Version* _add = _internal_add_versions();
  // @@protoc_insertion_point(field_add:Versions.versions)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Version >&
Versions::versions() const {
  // @@protoc_insertion_point(field_list:Versions.versions)
  return _impl_.versions_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_version_2eproto