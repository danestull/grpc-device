
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-SYNC.
//---------------------------------------------------------------------
#ifndef NISYNC_GRPC_CLIENT_H
#define NISYNC_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <nisync.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace nisync_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<NiSync::Stub>;
using namespace nidevice_grpc::experimental::client;


InitResponse init(const StubPtr& stub, const pb::string& resource_name, const bool& id_query, const bool& reset_device, const nidevice_grpc::SessionInitializationBehavior& initialization_behavior = nidevice_grpc::SESSION_INITIALIZATION_BEHAVIOR_UNSPECIFIED);
CloseResponse close(const StubPtr& stub, const nidevice_grpc::Session& vi);
ErrorMessageResponse error_message(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& error_code);
ResetResponse reset(const StubPtr& stub, const nidevice_grpc::Session& vi);
PersistConfigResponse persist_config(const StubPtr& stub, const nidevice_grpc::Session& vi);
SelfTestResponse self_test(const StubPtr& stub, const nidevice_grpc::Session& vi);
RevisionQueryResponse revision_query(const StubPtr& stub, const nidevice_grpc::Session& vi);
ConnectTrigTerminalsResponse connect_trig_terminals(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const pb::string& dest_terminal, const pb::string& sync_clock, const pb::int32& invert, const pb::int32& update_edge);
DisconnectTrigTerminalsResponse disconnect_trig_terminals(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const pb::string& dest_terminal);
ConnectSWTrigToTerminalResponse connect_sw_trig_to_terminal(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const pb::string& dest_terminal, const pb::string& sync_clock, const pb::int32& invert, const pb::int32& update_edge, const double& delay);
DisconnectSWTrigFromTerminalResponse disconnect_sw_trig_from_terminal(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const pb::string& dest_terminal);
SendSoftwareTriggerResponse send_software_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal);
ConnectClkTerminalsResponse connect_clk_terminals(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const pb::string& dest_terminal);
DisconnectClkTerminalsResponse disconnect_clk_terminals(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const pb::string& dest_terminal);
MeasureFrequencyResponse measure_frequency(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const double& duration);
MeasureFrequencyExResponse measure_frequency_ex(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const double& duration, const pb::uint32& decimation_count);
Start1588Response start1588(const StubPtr& stub, const nidevice_grpc::Session& vi);
Stop1588Response stop1588(const StubPtr& stub, const nidevice_grpc::Session& vi);
Start8021ASResponse start8021_as(const StubPtr& stub, const nidevice_grpc::Session& vi);
Stop8021ASResponse stop8021_as(const StubPtr& stub, const nidevice_grpc::Session& vi);
SetTimeResponse set_time(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& time_source, const pb::uint32& time_seconds, const pb::uint32& time_nanoseconds, const pb::uint32& time_fractional_nanoseconds);
GetTimeResponse get_time(const StubPtr& stub, const nidevice_grpc::Session& vi);
ResetFrequencyResponse reset_frequency(const StubPtr& stub, const nidevice_grpc::Session& vi);
CreateFutureTimeEventResponse create_future_time_event(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal, const pb::int32& output_level, const pb::uint32& time_seconds, const pb::uint32& time_nanoseconds, const pb::uint32& time_fractional_nanoseconds);
ClearFutureTimeEventsResponse clear_future_time_events(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal);
EnableTimeStampTriggerResponse enable_time_stamp_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal, const pb::int32& active_edge);
EnableTimeStampTriggerWithDecimationResponse enable_time_stamp_trigger_with_decimation(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal, const pb::int32& active_edge, const pb::uint32& decimation_count);
ReadTriggerTimeStampResponse read_trigger_time_stamp(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal, const double& timeout);
ReadMultipleTriggerTimeStampResponse read_multiple_trigger_time_stamp(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal, const pb::uint32& timestamps_to_read, const double& timeout);
DisableTimeStampTriggerResponse disable_time_stamp_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal);
CreateClockResponse create_clock(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal, const pb::uint32& high_ticks, const pb::uint32& low_ticks, const pb::uint32& start_time_seconds, const pb::uint32& start_time_nanoseconds, const pb::uint32& start_time_fractional_nanoseconds, const pb::uint32& stop_time_seconds, const pb::uint32& stop_time_nanoseconds, const pb::uint32& stop_time_fractional_nanoseconds);
ClearClockResponse clear_clock(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal);
SetTimeReferenceFreeRunningResponse set_time_reference_free_running(const StubPtr& stub, const nidevice_grpc::Session& vi);
SetTimeReferenceGPSResponse set_time_reference_gps(const StubPtr& stub, const nidevice_grpc::Session& vi);
SetTimeReferenceIRIGResponse set_time_reference_irig(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& irig_type, const pb::string& terminal_name);
SetTimeReferencePPSResponse set_time_reference_pps(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal_name, const bool& use_manual_time, const pb::uint32& initial_time_seconds, const pb::uint32& initial_time_nanoseconds, const pb::uint32& initial_time_fractional_nanoseconds);
SetTimeReference1588OrdinaryClockResponse set_time_reference1588_ordinary_clock(const StubPtr& stub, const nidevice_grpc::Session& vi);
SetTimeReference8021ASResponse set_time_reference8021_as(const StubPtr& stub, const nidevice_grpc::Session& vi);
EnableGPSTimestampingResponse enable_gps_timestamping(const StubPtr& stub, const nidevice_grpc::Session& vi);
EnableIRIGTimestampingResponse enable_irig_timestamping(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& irig_type, const pb::string& terminal_name);
ReadLastGPSTimestampResponse read_last_gps_timestamp(const StubPtr& stub, const nidevice_grpc::Session& vi);
ReadLastIRIGTimestampResponse read_last_irig_timestamp(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal);
DisableGPSTimestampingResponse disable_gps_timestamping(const StubPtr& stub, const nidevice_grpc::Session& vi);
DisableIRIGTimestampingResponse disable_irig_timestamping(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal_name);
GetVelocityResponse get_velocity(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetLocationResponse get_location(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetTimeReferenceNamesResponse get_time_reference_names(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetAttributeViInt32Response get_attribute_vi_int32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttribute& attribute);
GetAttributeViReal64Response get_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttribute& attribute);
GetAttributeViBooleanResponse get_attribute_vi_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttribute& attribute);
GetAttributeViStringResponse get_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttribute& attribute);
SetAttributeViInt32Response set_attribute_vi_int32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttribute& attribute, const pb::int32& value);
SetAttributeViReal64Response set_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttribute& attribute, const double& value);
SetAttributeViBooleanResponse set_attribute_vi_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttribute& attribute, const bool& value);
SetAttributeViStringResponse set_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttribute& attribute, const pb::string& value);
GetExtCalLastDateAndTimeResponse get_ext_cal_last_date_and_time(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetExtCalLastTempResponse get_ext_cal_last_temp(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetExtCalRecommendedIntervalResponse get_ext_cal_recommended_interval(const StubPtr& stub, const nidevice_grpc::Session& vi);
ChangeExtCalPasswordResponse change_ext_cal_password(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& old_password, const pb::string& new_password);
ReadCurrentTemperatureResponse read_current_temperature(const StubPtr& stub, const nidevice_grpc::Session& vi);
CalGetOscillatorVoltageResponse cal_get_oscillator_voltage(const StubPtr& stub, const nidevice_grpc::Session& vi);
CalGetClk10PhaseVoltageResponse cal_get_clk10_phase_voltage(const StubPtr& stub, const nidevice_grpc::Session& vi);
CalGetDDSStartPulsePhaseVoltageResponse cal_get_dds_start_pulse_phase_voltage(const StubPtr& stub, const nidevice_grpc::Session& vi);
CalGetDDSInitialPhaseResponse cal_get_dds_initial_phase(const StubPtr& stub, const nidevice_grpc::Session& vi);
InitExtCalResponse init_ext_cal(const StubPtr& stub, const pb::string& resource_name, const pb::string& password, const nidevice_grpc::SessionInitializationBehavior& initialization_behavior = nidevice_grpc::SESSION_INITIALIZATION_BEHAVIOR_UNSPECIFIED);
CloseExtCalResponse close_ext_cal(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& action);
CalAdjustOscillatorVoltageResponse cal_adjust_oscillator_voltage(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& measured_voltage);
CalAdjustClk10PhaseVoltageResponse cal_adjust_clk10_phase_voltage(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& measured_voltage);
CalAdjustDDSStartPulsePhaseVoltageResponse cal_adjust_dds_start_pulse_phase_voltage(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& measured_voltage);
CalAdjustDDSInitialPhaseResponse cal_adjust_dds_initial_phase(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& measured_phase);

} // namespace nisync_grpc::experimental::client

#endif /* NISYNC_GRPC_CLIENT_H */
