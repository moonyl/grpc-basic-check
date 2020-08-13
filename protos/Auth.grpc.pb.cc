// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: Auth.proto

#include "Auth.pb.h"
#include "Auth.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace protobuf {

static const char* Authentication_method_names[] = {
  "/google.protobuf.Authentication/Login",
};

std::unique_ptr< Authentication::Stub> Authentication::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Authentication::Stub> stub(new Authentication::Stub(channel));
  return stub;
}

Authentication::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Login_(Authentication_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Authentication::Stub::Login(::grpc::ClientContext* context, const ::google::protobuf::Account& request, ::google::protobuf::Success* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Login_, context, request, response);
}

void Authentication::Stub::experimental_async::Login(::grpc::ClientContext* context, const ::google::protobuf::Account* request, ::google::protobuf::Success* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Login_, context, request, response, std::move(f));
}

void Authentication::Stub::experimental_async::Login(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::protobuf::Success* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Login_, context, request, response, std::move(f));
}

void Authentication::Stub::experimental_async::Login(::grpc::ClientContext* context, const ::google::protobuf::Account* request, ::google::protobuf::Success* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Login_, context, request, response, reactor);
}

void Authentication::Stub::experimental_async::Login(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::protobuf::Success* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Login_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Success>* Authentication::Stub::AsyncLoginRaw(::grpc::ClientContext* context, const ::google::protobuf::Account& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Success>::Create(channel_.get(), cq, rpcmethod_Login_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Success>* Authentication::Stub::PrepareAsyncLoginRaw(::grpc::ClientContext* context, const ::google::protobuf::Account& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Success>::Create(channel_.get(), cq, rpcmethod_Login_, context, request, false);
}

Authentication::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Authentication_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Authentication::Service, ::google::protobuf::Account, ::google::protobuf::Success>(
          std::mem_fn(&Authentication::Service::Login), this)));
}

Authentication::Service::~Service() {
}

::grpc::Status Authentication::Service::Login(::grpc::ServerContext* context, const ::google::protobuf::Account* request, ::google::protobuf::Success* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace protobuf
