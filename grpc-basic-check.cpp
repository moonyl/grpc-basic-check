// grpc-basic-check.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <grpc/grpc.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include "AuthenticationImpl.h"

static void runServer();
int main()
{
    std::cout << "Hello World!\n";

    runServer();
    std::cout << "maybe pending\n";
    return 0;
}

using namespace grpc;
void runServer()
{
    std::string serverAddress("0.0.0.0:50051");
    AuthenticationImpl service;

    ServerBuilder builder;
    builder.AddListeningPort(serverAddress, InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << serverAddress << std::endl;
    server->Wait();
    //server->Shutdown();
}