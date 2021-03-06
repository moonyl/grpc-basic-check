// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Auth.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Auth_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Auth_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Auth_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Auth_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Auth_2eproto;
namespace google {
namespace protobuf {
class Account;
class AccountDefaultTypeInternal;
extern AccountDefaultTypeInternal _Account_default_instance_;
class Success;
class SuccessDefaultTypeInternal;
extern SuccessDefaultTypeInternal _Success_default_instance_;
}  // namespace protobuf
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::protobuf::Account* Arena::CreateMaybeMessage<::google::protobuf::Account>(Arena*);
template<> ::google::protobuf::Success* Arena::CreateMaybeMessage<::google::protobuf::Success>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace protobuf {

// ===================================================================

class Account PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.protobuf.Account) */ {
 public:
  inline Account() : Account(nullptr) {};
  virtual ~Account();

  Account(const Account& from);
  Account(Account&& from) noexcept
    : Account() {
    *this = ::std::move(from);
  }

  inline Account& operator=(const Account& from) {
    CopyFrom(from);
    return *this;
  }
  inline Account& operator=(Account&& from) noexcept {
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
  static const Account& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Account* internal_default_instance() {
    return reinterpret_cast<const Account*>(
               &_Account_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Account& a, Account& b) {
    a.Swap(&b);
  }
  inline void Swap(Account* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Account* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Account* New() const final {
    return CreateMaybeMessage<Account>(nullptr);
  }

  Account* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Account>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Account& from);
  void MergeFrom(const Account& from);
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
  void InternalSwap(Account* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.protobuf.Account";
  }
  protected:
  explicit Account(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Auth_2eproto);
    return ::descriptor_table_Auth_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserFieldNumber = 1,
    kPasswordFieldNumber = 2,
  };
  // string user = 1;
  void clear_user();
  const std::string& user() const;
  void set_user(const std::string& value);
  void set_user(std::string&& value);
  void set_user(const char* value);
  void set_user(const char* value, size_t size);
  std::string* mutable_user();
  std::string* release_user();
  void set_allocated_user(std::string* user);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_user();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_user(
      std::string* user);
  private:
  const std::string& _internal_user() const;
  void _internal_set_user(const std::string& value);
  std::string* _internal_mutable_user();
  public:

  // string password = 2;
  void clear_password();
  const std::string& password() const;
  void set_password(const std::string& value);
  void set_password(std::string&& value);
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  std::string* mutable_password();
  std::string* release_password();
  void set_allocated_password(std::string* password);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_password();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_password(
      std::string* password);
  private:
  const std::string& _internal_password() const;
  void _internal_set_password(const std::string& value);
  std::string* _internal_mutable_password();
  public:

  // @@protoc_insertion_point(class_scope:google.protobuf.Account)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr user_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr password_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Auth_2eproto;
};
// -------------------------------------------------------------------

class Success PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.protobuf.Success) */ {
 public:
  inline Success() : Success(nullptr) {};
  virtual ~Success();

  Success(const Success& from);
  Success(Success&& from) noexcept
    : Success() {
    *this = ::std::move(from);
  }

  inline Success& operator=(const Success& from) {
    CopyFrom(from);
    return *this;
  }
  inline Success& operator=(Success&& from) noexcept {
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
  static const Success& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Success* internal_default_instance() {
    return reinterpret_cast<const Success*>(
               &_Success_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Success& a, Success& b) {
    a.Swap(&b);
  }
  inline void Swap(Success* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Success* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Success* New() const final {
    return CreateMaybeMessage<Success>(nullptr);
  }

  Success* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Success>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Success& from);
  void MergeFrom(const Success& from);
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
  void InternalSwap(Success* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.protobuf.Success";
  }
  protected:
  explicit Success(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Auth_2eproto);
    return ::descriptor_table_Auth_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOkFieldNumber = 1,
  };
  // bool ok = 1;
  void clear_ok();
  bool ok() const;
  void set_ok(bool value);
  private:
  bool _internal_ok() const;
  void _internal_set_ok(bool value);
  public:

  // @@protoc_insertion_point(class_scope:google.protobuf.Success)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool ok_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Auth_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Account

// string user = 1;
inline void Account::clear_user() {
  user_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Account::user() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Account.user)
  return _internal_user();
}
inline void Account::set_user(const std::string& value) {
  _internal_set_user(value);
  // @@protoc_insertion_point(field_set:google.protobuf.Account.user)
}
inline std::string* Account::mutable_user() {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Account.user)
  return _internal_mutable_user();
}
inline const std::string& Account::_internal_user() const {
  return user_.Get();
}
inline void Account::_internal_set_user(const std::string& value) {
  
  user_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Account::set_user(std::string&& value) {
  
  user_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.protobuf.Account.user)
}
inline void Account::set_user(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  user_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:google.protobuf.Account.user)
}
inline void Account::set_user(const char* value,
    size_t size) {
  
  user_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Account.user)
}
inline std::string* Account::_internal_mutable_user() {
  
  return user_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Account::release_user() {
  // @@protoc_insertion_point(field_release:google.protobuf.Account.user)
  return user_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Account::set_allocated_user(std::string* user) {
  if (user != nullptr) {
    
  } else {
    
  }
  user_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), user,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Account.user)
}
inline std::string* Account::unsafe_arena_release_user() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.protobuf.Account.user)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return user_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Account::unsafe_arena_set_allocated_user(
    std::string* user) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (user != nullptr) {
    
  } else {
    
  }
  user_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      user, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.protobuf.Account.user)
}

// string password = 2;
inline void Account::clear_password() {
  password_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Account::password() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Account.password)
  return _internal_password();
}
inline void Account::set_password(const std::string& value) {
  _internal_set_password(value);
  // @@protoc_insertion_point(field_set:google.protobuf.Account.password)
}
inline std::string* Account::mutable_password() {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Account.password)
  return _internal_mutable_password();
}
inline const std::string& Account::_internal_password() const {
  return password_.Get();
}
inline void Account::_internal_set_password(const std::string& value) {
  
  password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Account::set_password(std::string&& value) {
  
  password_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.protobuf.Account.password)
}
inline void Account::set_password(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:google.protobuf.Account.password)
}
inline void Account::set_password(const char* value,
    size_t size) {
  
  password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Account.password)
}
inline std::string* Account::_internal_mutable_password() {
  
  return password_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Account::release_password() {
  // @@protoc_insertion_point(field_release:google.protobuf.Account.password)
  return password_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Account::set_allocated_password(std::string* password) {
  if (password != nullptr) {
    
  } else {
    
  }
  password_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), password,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Account.password)
}
inline std::string* Account::unsafe_arena_release_password() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.protobuf.Account.password)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return password_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Account::unsafe_arena_set_allocated_password(
    std::string* password) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (password != nullptr) {
    
  } else {
    
  }
  password_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      password, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.protobuf.Account.password)
}

// -------------------------------------------------------------------

// Success

// bool ok = 1;
inline void Success::clear_ok() {
  ok_ = false;
}
inline bool Success::_internal_ok() const {
  return ok_;
}
inline bool Success::ok() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Success.ok)
  return _internal_ok();
}
inline void Success::_internal_set_ok(bool value) {
  
  ok_ = value;
}
inline void Success::set_ok(bool value) {
  _internal_set_ok(value);
  // @@protoc_insertion_point(field_set:google.protobuf.Success.ok)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Auth_2eproto
