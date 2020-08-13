#pragma once
#include "protos/Auth.grpc.pb.h"
//using namespace google::protobuf;

class AuthenticationImpl : public google::protobuf::Authentication::Service
{
    
public:
    ::grpc::Status Login(::grpc::ServerContext* context, const ::google::protobuf::Account* request,
        ::google::protobuf::Success* response) override;
};

