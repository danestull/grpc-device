
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-MXLCTERMINALADAPTOR-RESTRICTED.
//---------------------------------------------------------------------
#ifndef NIMXLCTERMINALADAPTOR_RESTRICTED_GRPC_CLIENT_H
#define NIMXLCTERMINALADAPTOR_RESTRICTED_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <nimxlcterminaladaptor_restricted.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace nimxlcterminaladaptor_restricted_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<NimxlcTerminalAdaptorRestricted::Stub>;
using namespace nidevice_grpc::experimental::client;


CreateSessionResponse create_session(const StubPtr& stub, const pb::string& hostname, const nidevice_grpc::SessionInitializationBehavior& initialization_behavior = nidevice_grpc::SESSION_INITIALIZATION_BEHAVIOR_UNSPECIFIED);
DestroySessionResponse destroy_session(const StubPtr& stub, const nidevice_grpc::Session& session);
RefreshTerminalCacheResponse refresh_terminal_cache(const StubPtr& stub, const nidevice_grpc::Session& session);
HasTerminalInformationChangedResponse has_terminal_information_changed(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::uint32& system_change_number);
GetSystemChangeNumberResponse get_system_change_number(const StubPtr& stub, const nidevice_grpc::Session& session);
GetDeviceContainerResponse get_device_container(const StubPtr& stub, const nidevice_grpc::Session& session);

} // namespace nimxlcterminaladaptor_restricted_grpc::experimental::client

#endif /* NIMXLCTERMINALADAPTOR_RESTRICTED_GRPC_CLIENT_H */
