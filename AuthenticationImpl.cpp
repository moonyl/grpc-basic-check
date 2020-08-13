#include "AuthenticationImpl.h"

using namespace google::protobuf;
using namespace grpc;
Status AuthenticationImpl::Login(ServerContext* context, const Account* request,
    Success* response)
{
    // Note:: login 처리를 한다.
    // 성공이면
    response->set_ok(true);
    // 실패면
    //response->set_ok(false);
    return Status::OK;
}
