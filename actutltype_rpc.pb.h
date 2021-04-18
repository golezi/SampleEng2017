// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: actutltype_rpc.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_actutltype_5frpc_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_actutltype_5frpc_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015008 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_actutltype_5frpc_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_actutltype_5frpc_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_actutltype_5frpc_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_actutltype_5frpc_2eproto_metadata_getter(int index);
class GetDeviceReply;
struct GetDeviceReplyDefaultTypeInternal;
extern GetDeviceReplyDefaultTypeInternal _GetDeviceReply_default_instance_;
class GetDeviceRequest;
struct GetDeviceRequestDefaultTypeInternal;
extern GetDeviceRequestDefaultTypeInternal _GetDeviceRequest_default_instance_;
class SetDeviceReply;
struct SetDeviceReplyDefaultTypeInternal;
extern SetDeviceReplyDefaultTypeInternal _SetDeviceReply_default_instance_;
class SetDeviceRequest;
struct SetDeviceRequestDefaultTypeInternal;
extern SetDeviceRequestDefaultTypeInternal _SetDeviceRequest_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::GetDeviceReply* Arena::CreateMaybeMessage<::GetDeviceReply>(Arena*);
template<> ::GetDeviceRequest* Arena::CreateMaybeMessage<::GetDeviceRequest>(Arena*);
template<> ::SetDeviceReply* Arena::CreateMaybeMessage<::SetDeviceReply>(Arena*);
template<> ::SetDeviceRequest* Arena::CreateMaybeMessage<::SetDeviceRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class GetDeviceRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:GetDeviceRequest) */ {
 public:
  inline GetDeviceRequest() : GetDeviceRequest(nullptr) {}
  virtual ~GetDeviceRequest();
  explicit constexpr GetDeviceRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GetDeviceRequest(const GetDeviceRequest& from);
  GetDeviceRequest(GetDeviceRequest&& from) noexcept
    : GetDeviceRequest() {
    *this = ::std::move(from);
  }

  inline GetDeviceRequest& operator=(const GetDeviceRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetDeviceRequest& operator=(GetDeviceRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GetDeviceRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const GetDeviceRequest* internal_default_instance() {
    return reinterpret_cast<const GetDeviceRequest*>(
               &_GetDeviceRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GetDeviceRequest& a, GetDeviceRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GetDeviceRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetDeviceRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GetDeviceRequest* New() const final {
    return CreateMaybeMessage<GetDeviceRequest>(nullptr);
  }

  GetDeviceRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GetDeviceRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GetDeviceRequest& from);
  void MergeFrom(const GetDeviceRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetDeviceRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "GetDeviceRequest";
  }
  protected:
  explicit GetDeviceRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_actutltype_5frpc_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDeviceFieldNumber = 1,
  };
  // string Device = 1;
  void clear_device();
  const std::string& device() const;
  void set_device(const std::string& value);
  void set_device(std::string&& value);
  void set_device(const char* value);
  void set_device(const char* value, size_t size);
  std::string* mutable_device();
  std::string* release_device();
  void set_allocated_device(std::string* device);
  private:
  const std::string& _internal_device() const;
  void _internal_set_device(const std::string& value);
  std::string* _internal_mutable_device();
  public:

  // @@protoc_insertion_point(class_scope:GetDeviceRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr device_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_actutltype_5frpc_2eproto;
};
// -------------------------------------------------------------------

class GetDeviceReply PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:GetDeviceReply) */ {
 public:
  inline GetDeviceReply() : GetDeviceReply(nullptr) {}
  virtual ~GetDeviceReply();
  explicit constexpr GetDeviceReply(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GetDeviceReply(const GetDeviceReply& from);
  GetDeviceReply(GetDeviceReply&& from) noexcept
    : GetDeviceReply() {
    *this = ::std::move(from);
  }

  inline GetDeviceReply& operator=(const GetDeviceReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetDeviceReply& operator=(GetDeviceReply&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GetDeviceReply& default_instance() {
    return *internal_default_instance();
  }
  static inline const GetDeviceReply* internal_default_instance() {
    return reinterpret_cast<const GetDeviceReply*>(
               &_GetDeviceReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GetDeviceReply& a, GetDeviceReply& b) {
    a.Swap(&b);
  }
  inline void Swap(GetDeviceReply* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetDeviceReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GetDeviceReply* New() const final {
    return CreateMaybeMessage<GetDeviceReply>(nullptr);
  }

  GetDeviceReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GetDeviceReply>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GetDeviceReply& from);
  void MergeFrom(const GetDeviceReply& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetDeviceReply* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "GetDeviceReply";
  }
  protected:
  explicit GetDeviceReply(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_actutltype_5frpc_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // int32 message = 1;
  void clear_message();
  ::PROTOBUF_NAMESPACE_ID::int32 message() const;
  void set_message(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_message() const;
  void _internal_set_message(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:GetDeviceReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 message_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_actutltype_5frpc_2eproto;
};
// -------------------------------------------------------------------

class SetDeviceRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SetDeviceRequest) */ {
 public:
  inline SetDeviceRequest() : SetDeviceRequest(nullptr) {}
  virtual ~SetDeviceRequest();
  explicit constexpr SetDeviceRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SetDeviceRequest(const SetDeviceRequest& from);
  SetDeviceRequest(SetDeviceRequest&& from) noexcept
    : SetDeviceRequest() {
    *this = ::std::move(from);
  }

  inline SetDeviceRequest& operator=(const SetDeviceRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SetDeviceRequest& operator=(SetDeviceRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SetDeviceRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SetDeviceRequest* internal_default_instance() {
    return reinterpret_cast<const SetDeviceRequest*>(
               &_SetDeviceRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(SetDeviceRequest& a, SetDeviceRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SetDeviceRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SetDeviceRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SetDeviceRequest* New() const final {
    return CreateMaybeMessage<SetDeviceRequest>(nullptr);
  }

  SetDeviceRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SetDeviceRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SetDeviceRequest& from);
  void MergeFrom(const SetDeviceRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SetDeviceRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SetDeviceRequest";
  }
  protected:
  explicit SetDeviceRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_actutltype_5frpc_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDeviceFieldNumber = 1,
    kDataFieldNumber = 2,
  };
  // string Device = 1;
  void clear_device();
  const std::string& device() const;
  void set_device(const std::string& value);
  void set_device(std::string&& value);
  void set_device(const char* value);
  void set_device(const char* value, size_t size);
  std::string* mutable_device();
  std::string* release_device();
  void set_allocated_device(std::string* device);
  private:
  const std::string& _internal_device() const;
  void _internal_set_device(const std::string& value);
  std::string* _internal_mutable_device();
  public:

  // int32 Data = 2;
  void clear_data();
  ::PROTOBUF_NAMESPACE_ID::int32 data() const;
  void set_data(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_data() const;
  void _internal_set_data(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:SetDeviceRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr device_;
  ::PROTOBUF_NAMESPACE_ID::int32 data_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_actutltype_5frpc_2eproto;
};
// -------------------------------------------------------------------

class SetDeviceReply PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SetDeviceReply) */ {
 public:
  inline SetDeviceReply() : SetDeviceReply(nullptr) {}
  virtual ~SetDeviceReply();
  explicit constexpr SetDeviceReply(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SetDeviceReply(const SetDeviceReply& from);
  SetDeviceReply(SetDeviceReply&& from) noexcept
    : SetDeviceReply() {
    *this = ::std::move(from);
  }

  inline SetDeviceReply& operator=(const SetDeviceReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline SetDeviceReply& operator=(SetDeviceReply&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SetDeviceReply& default_instance() {
    return *internal_default_instance();
  }
  static inline const SetDeviceReply* internal_default_instance() {
    return reinterpret_cast<const SetDeviceReply*>(
               &_SetDeviceReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(SetDeviceReply& a, SetDeviceReply& b) {
    a.Swap(&b);
  }
  inline void Swap(SetDeviceReply* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SetDeviceReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SetDeviceReply* New() const final {
    return CreateMaybeMessage<SetDeviceReply>(nullptr);
  }

  SetDeviceReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SetDeviceReply>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SetDeviceReply& from);
  void MergeFrom(const SetDeviceReply& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SetDeviceReply* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SetDeviceReply";
  }
  protected:
  explicit SetDeviceReply(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_actutltype_5frpc_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // int32 message = 1;
  void clear_message();
  ::PROTOBUF_NAMESPACE_ID::int32 message() const;
  void set_message(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_message() const;
  void _internal_set_message(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:SetDeviceReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 message_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_actutltype_5frpc_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GetDeviceRequest

// string Device = 1;
inline void GetDeviceRequest::clear_device() {
  device_.ClearToEmpty();
}
inline const std::string& GetDeviceRequest::device() const {
  // @@protoc_insertion_point(field_get:GetDeviceRequest.Device)
  return _internal_device();
}
inline void GetDeviceRequest::set_device(const std::string& value) {
  _internal_set_device(value);
  // @@protoc_insertion_point(field_set:GetDeviceRequest.Device)
}
inline std::string* GetDeviceRequest::mutable_device() {
  // @@protoc_insertion_point(field_mutable:GetDeviceRequest.Device)
  return _internal_mutable_device();
}
inline const std::string& GetDeviceRequest::_internal_device() const {
  return device_.Get();
}
inline void GetDeviceRequest::_internal_set_device(const std::string& value) {
  
  device_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void GetDeviceRequest::set_device(std::string&& value) {
  
  device_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:GetDeviceRequest.Device)
}
inline void GetDeviceRequest::set_device(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  device_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:GetDeviceRequest.Device)
}
inline void GetDeviceRequest::set_device(const char* value,
    size_t size) {
  
  device_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:GetDeviceRequest.Device)
}
inline std::string* GetDeviceRequest::_internal_mutable_device() {
  
  return device_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* GetDeviceRequest::release_device() {
  // @@protoc_insertion_point(field_release:GetDeviceRequest.Device)
  return device_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void GetDeviceRequest::set_allocated_device(std::string* device) {
  if (device != nullptr) {
    
  } else {
    
  }
  device_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), device,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:GetDeviceRequest.Device)
}

// -------------------------------------------------------------------

// GetDeviceReply

// int32 message = 1;
inline void GetDeviceReply::clear_message() {
  message_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 GetDeviceReply::_internal_message() const {
  return message_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 GetDeviceReply::message() const {
  // @@protoc_insertion_point(field_get:GetDeviceReply.message)
  return _internal_message();
}
inline void GetDeviceReply::_internal_set_message(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  message_ = value;
}
inline void GetDeviceReply::set_message(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:GetDeviceReply.message)
}

// -------------------------------------------------------------------

// SetDeviceRequest

// string Device = 1;
inline void SetDeviceRequest::clear_device() {
  device_.ClearToEmpty();
}
inline const std::string& SetDeviceRequest::device() const {
  // @@protoc_insertion_point(field_get:SetDeviceRequest.Device)
  return _internal_device();
}
inline void SetDeviceRequest::set_device(const std::string& value) {
  _internal_set_device(value);
  // @@protoc_insertion_point(field_set:SetDeviceRequest.Device)
}
inline std::string* SetDeviceRequest::mutable_device() {
  // @@protoc_insertion_point(field_mutable:SetDeviceRequest.Device)
  return _internal_mutable_device();
}
inline const std::string& SetDeviceRequest::_internal_device() const {
  return device_.Get();
}
inline void SetDeviceRequest::_internal_set_device(const std::string& value) {
  
  device_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void SetDeviceRequest::set_device(std::string&& value) {
  
  device_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:SetDeviceRequest.Device)
}
inline void SetDeviceRequest::set_device(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  device_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:SetDeviceRequest.Device)
}
inline void SetDeviceRequest::set_device(const char* value,
    size_t size) {
  
  device_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:SetDeviceRequest.Device)
}
inline std::string* SetDeviceRequest::_internal_mutable_device() {
  
  return device_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* SetDeviceRequest::release_device() {
  // @@protoc_insertion_point(field_release:SetDeviceRequest.Device)
  return device_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SetDeviceRequest::set_allocated_device(std::string* device) {
  if (device != nullptr) {
    
  } else {
    
  }
  device_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), device,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:SetDeviceRequest.Device)
}

// int32 Data = 2;
inline void SetDeviceRequest::clear_data() {
  data_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SetDeviceRequest::_internal_data() const {
  return data_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SetDeviceRequest::data() const {
  // @@protoc_insertion_point(field_get:SetDeviceRequest.Data)
  return _internal_data();
}
inline void SetDeviceRequest::_internal_set_data(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  data_ = value;
}
inline void SetDeviceRequest::set_data(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:SetDeviceRequest.Data)
}

// -------------------------------------------------------------------

// SetDeviceReply

// int32 message = 1;
inline void SetDeviceReply::clear_message() {
  message_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SetDeviceReply::_internal_message() const {
  return message_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SetDeviceReply::message() const {
  // @@protoc_insertion_point(field_get:SetDeviceReply.message)
  return _internal_message();
}
inline void SetDeviceReply::_internal_set_message(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  message_ = value;
}
inline void SetDeviceReply::set_message(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:SetDeviceReply.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_actutltype_5frpc_2eproto
