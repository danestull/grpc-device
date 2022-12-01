<%
import common_helpers
import client_helpers
import service_helpers
from client_helpers import ParamMechanism

config = data['config']
functions = data['functions']
enums = data['enums']
functions = client_helpers.filter_functions_to_include_in_client(functions)

module_name = config["module_name"]
service_class_prefix = config["service_class_prefix"]
core_namespace = config["namespace_component"] + "_grpc"
namespace = f"{core_namespace}::experimental::client"

stub_ptr_alias = client_helpers.stub_ptr_alias()

%>\
<%namespace name="mako_helper" file="/client_helpers.mako"/>\

//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for ${config["driver_name"]}.
//---------------------------------------------------------------------
#include "${module_name}_client.h"

#include <grpcpp/grpcpp.h>

#include <${config["module_name"]}.grpc.pb.h>

#include <cstdint>
#include <memory>
#include <stdexcept>
#include <vector>

namespace ${namespace} {

% for function in common_helpers.filter_proto_rpc_functions(functions):
<%
  f = functions[function]
  stub_method_name = common_helpers.snake_to_pascal(function)
  client_method_name = common_helpers.pascal_to_snake(stub_method_name)
  request_type = service_helpers.get_request_type(stub_method_name)
  response_type = service_helpers.get_response_type(stub_method_name)
  stub_param = f"const {stub_ptr_alias}& stub"
  is_streaming = common_helpers.has_streaming_response(f)
  client_params = client_helpers.get_client_parameters(f, enums)
%>\
%   if is_streaming:
${client_helpers.streaming_response_type(response_type)}
${client_method_name}(${client_helpers.create_streaming_params(client_params, for_header = False)})
{
  auto request = ${request_type}{};
${mako_helper.build_request(client_params)}\

  return stub->${stub_method_name}(&context, request);
}
%   else:
${response_type}
${client_method_name}(${client_helpers.create_unary_params(client_params, for_header = False)})
{
  ::grpc::ClientContext context;

  auto request = ${request_type}{};
${mako_helper.build_request(client_params)}\

  auto response = ${response_type}{};

  raise_if_error(
      stub->${stub_method_name}(&context, request, &response),
      context);

  return response;
}
%   endif

% endfor

} // namespace ${namespace}
