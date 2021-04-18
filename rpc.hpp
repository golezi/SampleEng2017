/*
 *
 * Copyright 2015 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#pragma once
#include "StdAfx.h"

#include <grpcpp/grpcpp.h>
#include "actutltype_rpc.grpc.pb.h"
#include <iostream>
#include <memory>
#include <string>





using grpc::ServerContext;
using grpc::ServerBuilder;
using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using grpc::Server;


class DeviceServiceImpl final : public Device::Service {
public:
    CActutltype* rpc_ActUtlType;
    DeviceServiceImpl(){
        rpc_ActUtlType = NULL;
        //OnOpenCominitDlg();
    }
    
    bool initDlg() {
        if (rpc_ActUtlType != NULL) {
            OutputDebugStringA("rpc_ActUtlType != NULL");
            return true;
        }
        extern CSampleEngDlg* g_dlg;
        if (g_dlg==NULL) {
            OutputDebugStringA("g_dlg==NULL");
            return false;
        }
        rpc_ActUtlType = &(g_dlg->m_ActUtlType);
        //rpc_ActUtlType->put_ActLogicalStationNumber(1);
        //rpc_ActUtlType->Open();
        OutputDebugStringA("init success");
        return true;
    }


    Status GetDevice(ServerContext* context, const GetDeviceRequest* request,
        GetDeviceReply* reply) override 
    {
        OutputDebugStringA("GetDevice");
        if (!initDlg()) {
            return Status::OK;
        }
        long lValue;
        long value = rpc_ActUtlType->GetDevice((LPCTSTR)request->device().c_str(), &lValue);
        reply->set_message(lValue);

        return Status::OK;
        
    }

    Status SetDevice(ServerContext* context, const SetDeviceRequest* request,
        SetDeviceReply* reply) override 
    {
        OutputDebugStringA("SetDevice");
        if (!initDlg()) {
            return Status::OK;
        }
        
        auto a = request->data();
        long b = a;
        rpc_ActUtlType->SetDevice((LPCTSTR)request->device().c_str(), b);

        return Status::OK;
    }
};


void RunServer() {
    
    OutputDebugStringA("RunServer");

    
    std::string server_address("0.0.0.0:50051");
    DeviceServiceImpl service;    
    grpc::EnableDefaultHealthCheckService(true);
    // grpc::reflection::InitProtoReflectionServerBuilderPlugin();
    ServerBuilder builder;
    // Listen on the given address without any authentication mechanism.
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    // Register "service" as the instance through which we'll communicate with
    // clients. In this case it corresponds to an *synchronous* service.
    builder.RegisterService(&service);
    // Finally assemble the server.
    std::unique_ptr<Server> server(builder.BuildAndStart());
    OutputDebugStringA("Server listening on 0.0.0.0:50051");// << "Server listening on " << server_address << std::endl;

    // Wait for the server to shutdown. Note that some other thread must be
    // responsible for shutting down the server for this call to ever return.
    server->Wait();
}
