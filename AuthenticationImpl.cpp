#include "AuthenticationImpl.h"

using namespace google::protobuf;
using namespace grpc;
Status AuthenticationImpl::Login(ServerContext* context, const Account* request,
    Success* response)
{
    // Note:: login ó���� �Ѵ�.
    // �����̸�
    response->set_ok(true);
    // ���и�
    //response->set_ok(false);
    return Status::OK;
}
