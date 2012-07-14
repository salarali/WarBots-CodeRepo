// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "position.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* Vector3D_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Vector3D_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_position_2eproto() {
  protobuf_AddDesc_position_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "position.proto");
  GOOGLE_CHECK(file != NULL);
  Vector3D_descriptor_ = file->message_type(0);
  static const int Vector3D_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3D, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3D, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3D, z_),
  };
  Vector3D_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Vector3D_descriptor_,
      Vector3D::default_instance_,
      Vector3D_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3D, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3D, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Vector3D));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_position_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Vector3D_descriptor_, &Vector3D::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_position_2eproto() {
  delete Vector3D::default_instance_;
  delete Vector3D_reflection_;
}

void protobuf_AddDesc_position_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016position.proto\"+\n\010Vector3D\022\t\n\001x\030\001 \001(\001\022"
    "\t\n\001y\030\002 \001(\001\022\t\n\001z\030\003 \001(\001", 61);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "position.proto", &protobuf_RegisterTypes);
  Vector3D::default_instance_ = new Vector3D();
  Vector3D::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_position_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_position_2eproto {
  StaticDescriptorInitializer_position_2eproto() {
    protobuf_AddDesc_position_2eproto();
  }
} static_descriptor_initializer_position_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int Vector3D::kXFieldNumber;
const int Vector3D::kYFieldNumber;
const int Vector3D::kZFieldNumber;
#endif  // !_MSC_VER

Vector3D::Vector3D()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Vector3D::InitAsDefaultInstance() {
}

Vector3D::Vector3D(const Vector3D& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Vector3D::SharedCtor() {
  _cached_size_ = 0;
  x_ = 0;
  y_ = 0;
  z_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Vector3D::~Vector3D() {
  SharedDtor();
}

void Vector3D::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Vector3D::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Vector3D::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Vector3D_descriptor_;
}

const Vector3D& Vector3D::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_position_2eproto();  return *default_instance_;
}

Vector3D* Vector3D::default_instance_ = NULL;

Vector3D* Vector3D::New() const {
  return new Vector3D;
}

void Vector3D::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    x_ = 0;
    y_ = 0;
    z_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Vector3D::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double x = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));
          set_has_x();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(17)) goto parse_y;
        break;
      }
      
      // optional double y = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));
          set_has_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(25)) goto parse_z;
        break;
      }
      
      // optional double z = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_z:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &z_)));
          set_has_z();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Vector3D::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional double x = 1;
  if (has_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->x(), output);
  }
  
  // optional double y = 2;
  if (has_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->y(), output);
  }
  
  // optional double z = 3;
  if (has_z()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->z(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Vector3D::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional double x = 1;
  if (has_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
  }
  
  // optional double y = 2;
  if (has_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
  }
  
  // optional double z = 3;
  if (has_z()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->z(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Vector3D::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional double x = 1;
    if (has_x()) {
      total_size += 1 + 8;
    }
    
    // optional double y = 2;
    if (has_y()) {
      total_size += 1 + 8;
    }
    
    // optional double z = 3;
    if (has_z()) {
      total_size += 1 + 8;
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Vector3D::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Vector3D* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Vector3D*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Vector3D::MergeFrom(const Vector3D& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_x()) {
      set_x(from.x());
    }
    if (from.has_y()) {
      set_y(from.y());
    }
    if (from.has_z()) {
      set_z(from.z());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Vector3D::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vector3D::CopyFrom(const Vector3D& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vector3D::IsInitialized() const {
  
  return true;
}

void Vector3D::Swap(Vector3D* other) {
  if (other != this) {
    std::swap(x_, other->x_);
    std::swap(y_, other->y_);
    std::swap(z_, other->z_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Vector3D::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Vector3D_descriptor_;
  metadata.reflection = Vector3D_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)