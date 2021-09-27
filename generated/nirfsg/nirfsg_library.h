//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-RFSG
//---------------------------------------------------------------------
#ifndef NIRFSG_GRPC_LIBRARY_H
#define NIRFSG_GRPC_LIBRARY_H

#include "nirfsg_library_interface.h"

#include <server/shared_library.h>

namespace nirfsg_grpc {

class NiRFSGLibrary : public nirfsg_grpc::NiRFSGLibraryInterface {
 public:
  NiRFSGLibrary();
  virtual ~NiRFSGLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus Abort(ViSession vi);
  ViStatus AllocateArbWaveform(ViSession vi, ViConstString waveformName, ViInt32 sizeInSamples);
  ViStatus CheckAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attribute, ViBoolean value);
  ViStatus CheckAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32 value);
  ViStatus CheckAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attribute, ViInt64 value);
  ViStatus CheckAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attribute, ViReal64 value);
  ViStatus CheckAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attribute, ViSession value);
  ViStatus CheckAttributeViString(ViSession vi, ViConstString channelName, ViAttr attribute, ViConstString value);
  ViStatus CheckGenerationStatus(ViSession vi, ViBoolean* isDone);
  ViStatus CheckIfConfigurationListExists(ViSession vi, ViConstString listName, ViBoolean* listExists);
  ViStatus CheckIfScriptExists(ViSession vi, ViConstString scriptName, ViBoolean* scriptExists);
  ViStatus CheckIfWaveformExists(ViSession vi, ViConstString waveformName, ViBoolean* waveformExists);
  ViStatus ClearAllArbWaveforms(ViSession vi);
  ViStatus ClearArbWaveform(ViSession vi, ViConstString name);
  ViStatus ClearError(ViSession vi);
  ViStatus ClearSelfCalibrateRange(ViSession vi);
  ViStatus Close(ViSession vi);
  ViStatus Commit(ViSession vi);
  ViStatus ConfigureDeembeddingTableInterpolationLinear(ViSession vi, ViConstString port, ViConstString tableName, ViInt32 format);
  ViStatus ConfigureDeembeddingTableInterpolationNearest(ViSession vi, ViConstString port, ViConstString tableName);
  ViStatus ConfigureDeembeddingTableInterpolationSpline(ViSession vi, ViConstString port, ViConstString tableName);
  ViStatus ConfigureDigitalEdgeConfigurationListStepTrigger(ViSession vi, ViConstString source, ViInt32 edge);
  ViStatus ConfigureDigitalEdgeScriptTrigger(ViSession vi, ViConstString triggerID, ViConstString source, ViInt32 edge);
  ViStatus ConfigureDigitalEdgeStartTrigger(ViSession vi, ViConstString source, ViInt32 edge);
  ViStatus ConfigureDigitalLevelScriptTrigger(ViSession vi, ViConstString triggerID, ViConstString source, ViInt32 level);
  ViStatus ConfigureDigitalModulationUserDefinedWaveform(ViSession vi, ViInt32 numberOfSamples, ViInt8 userDefinedWaveform[]);
  ViStatus ConfigureGenerationMode(ViSession vi, ViInt32 generationMode);
  ViStatus ConfigureOutputEnabled(ViSession vi, ViBoolean outputEnabled);
  ViStatus ConfigureP2PEndpointFullnessStartTrigger(ViSession vi, ViInt64 p2pEndpointFullnessLevel);
  ViStatus ConfigurePXIChassisClk10(ViSession vi, ViConstString pxiClk10Source);
  ViStatus ConfigurePowerLevelType(ViSession vi, ViInt32 powerLevelType);
  ViStatus ConfigureRF(ViSession vi, ViReal64 frequency, ViReal64 powerLevel);
  ViStatus ConfigureRefClock(ViSession vi, ViConstString refClockSource, ViReal64 refClockRate);
  ViStatus ConfigureSignalBandwidth(ViSession vi, ViReal64 signalBandwidth);
  ViStatus ConfigureSoftwareScriptTrigger(ViSession vi, ViConstString triggerID);
  ViStatus ConfigureSoftwareStartTrigger(ViSession vi);
  ViStatus ConfigureUpconverterPLLSettlingTime(ViSession vi, ViReal64 pllSettlingTime, ViBoolean ensurePLLLocked, ViInt32 reservedForFutureUse);
  ViStatus CreateConfigurationList(ViSession vi, ViConstString listName, ViInt32 numberOfAttributes, ViAttr configurationListAttributes[], ViBoolean setAsActiveList);
  ViStatus CreateConfigurationListStep(ViSession vi, ViBoolean setAsActiveStep);
  ViStatus CreateDeembeddingSparameterTableArray(ViSession vi, ViConstString port, ViConstString tableName, ViReal64 frequencies[], ViInt32 frequenciesSize, NIComplexNumber_struct sparameterTable[], ViInt32 sparameterTableSize, ViInt32 numberOfPorts, ViInt32 sparameterOrientation);
  ViStatus CreateDeembeddingSparameterTableS2PFile(ViSession vi, ViConstString port, ViConstString tableName, ViConstString s2pFilePath, ViInt32 sparameterOrientation);
  ViStatus DeleteAllDeembeddingTables(ViSession vi);
  ViStatus DeleteConfigurationList(ViSession vi, ViConstString listName);
  ViStatus DeleteDeembeddingTable(ViSession vi, ViConstString port, ViConstString tableName);
  ViStatus DeleteScript(ViSession vi, ViConstString scriptName);
  ViStatus Disable(ViSession vi);
  ViStatus DisableAllModulation(ViSession vi);
  ViStatus DisableConfigurationListStepTrigger(ViSession vi);
  ViStatus DisableScriptTrigger(ViSession vi, ViConstString triggerID);
  ViStatus DisableStartTrigger(ViSession vi);
  ViStatus ErrorMessage(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]);
  ViStatus ErrorQuery(ViSession vi, ViInt32* errorCode, ViChar errorMessage[256]);
  ViStatus ExportSignal(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal);
  ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attribute, ViBoolean* value);
  ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32* value);
  ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attribute, ViInt64* value);
  ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attribute, ViReal64* value);
  ViStatus GetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attribute, ViSession* value);
  ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32 bufSize, ViChar value[]);
  ViStatus GetChannelName(ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar name[]);
  ViStatus GetDeembeddingSparameters(ViSession vi, NIComplexNumber_struct sparameters[], ViInt32 sparametersArraySize, ViInt32* numberOfSparameters, ViInt32* numberOfPorts);
  ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 errorDescriptionBufferSize, ViChar errorDescription[]);
  ViStatus GetExternalCalibrationLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute, ViInt32* second);
  ViStatus GetSelfCalibrationDateAndTime(ViSession vi, ViInt32 module, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute, ViInt32* second);
  ViStatus GetSelfCalibrationTemperature(ViSession vi, ViInt32 module, ViReal64* temperature);
  ViStatus GetStreamEndpointHandle(ViSession vi, ViConstString streamEndpoint, ViUInt32* readerHandle);
  ViStatus GetTerminalName(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViInt32 bufferSize, ViChar terminalName[]);
  ViStatus GetUserData(ViSession vi, ViConstString identifier, ViInt32 bufferSize, ViInt8 data[], ViInt32* actualDataSize);
  ViStatus GetWaveformBurstStartLocations(ViSession vi, ViConstString channelName, ViInt32 numberOfLocations, ViReal64 locations[], ViInt32* requiredSize);
  ViStatus GetWaveformBurstStopLocations(ViSession vi, ViConstString channelName, ViInt32 numberOfLocations, ViReal64 locations[], ViInt32* requiredSize);
  ViStatus GetWaveformMarkerEventLocations(ViSession vi, ViConstString channelName, ViInt32 numberOfLocations, ViReal64 locations[], ViInt32* requiredSize);
  ViStatus Init(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* newVi);
  ViStatus InitWithOptions(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi);
  ViStatus Initiate(ViSession vi);
  ViStatus InvalidateAllAttributes(ViSession vi);
  ViStatus LoadConfigurationsFromFile(ViSession vi, ViConstString channelName, ViConstString filePath);
  ViStatus LockSession(ViSession vi, ViBoolean* callerHasLock);
  ViStatus PerformPowerSearch(ViSession vi);
  ViStatus PerformThermalCorrection(ViSession vi);
  ViStatus QueryArbWaveformCapabilities(ViSession vi, ViInt32* maxNumberWaveforms, ViInt32* waveformQuantum, ViInt32* minWaveformSize, ViInt32* maxWaveformSize);
  ViStatus ReadAndDownloadWaveformFromFileTDMS(ViSession vi, ViConstString waveformName, ViConstString filePath, ViUInt32 waveformIndex);
  ViStatus Reset(ViSession vi);
  ViStatus ResetAttribute(ViSession vi, ViConstString channelName, ViAttr attributeId);
  ViStatus ResetDevice(ViSession vi);
  ViStatus ResetWithDefaults(ViSession vi);
  ViStatus ResetWithOptions(ViSession vi, ViUInt64 stepsToOmit);
  ViStatus RevisionQuery(ViSession vi, ViChar instrumentDriverRevision[256], ViChar firmwareRevision[256]);
  ViStatus SaveConfigurationsToFile(ViSession vi, ViConstString channelName, ViConstString filePath);
  ViStatus SelectArbWaveform(ViSession vi, ViConstString name);
  ViStatus SelfCal(ViSession vi);
  ViStatus SelfCalibrateRange(ViSession vi, ViInt64 stepsToOmit, ViReal64 minFrequency, ViReal64 maxFrequency, ViReal64 minPowerLevel, ViReal64 maxPowerLevel);
  ViStatus SelfTest(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);
  ViStatus SendSoftwareEdgeTrigger(ViSession vi, ViInt32 trigger, ViConstString triggerIdentifier);
  ViStatus SetArbWaveformNextWritePosition(ViSession vi, ViConstString waveformName, ViInt32 relativeTo, ViInt32 offset);
  ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attribute, ViBoolean value);
  ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32 value);
  ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attribute, ViInt64 value);
  ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attribute, ViReal64 value);
  ViStatus SetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attribute, ViSession value);
  ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attribute, ViConstString value);
  ViStatus SetUserData(ViSession vi, ViConstString identifier, ViInt32 bufferSize, ViInt8 data[]);
  ViStatus SetWaveformBurstStartLocations(ViSession vi, ViConstString channelName, ViInt32 numberOfLocations, ViReal64 locations[]);
  ViStatus SetWaveformBurstStopLocations(ViSession vi, ViConstString channelName, ViInt32 numberOfLocations, ViReal64 locations[]);
  ViStatus SetWaveformMarkerEventLocations(ViSession vi, ViConstString channelName, ViInt32 numberOfLocations, ViReal64 locations[]);
  ViStatus UnlockSession(ViSession vi, ViBoolean* callerHasLock);
  ViStatus WaitUntilSettled(ViSession vi, ViInt32 maxTimeMilliseconds);
  ViStatus WriteArbWaveform(ViSession vi, ViConstString waveformName, ViInt32 numberOfSamples, ViReal64 iData[], ViReal64 qData[], ViBoolean moreDataPending);
  ViStatus WriteArbWaveformComplexF32(ViSession vi, ViConstString waveformName, ViInt32 numberOfSamples, NIComplexNumberF32_struct wfmData[], ViBoolean moreDataPending);
  ViStatus WriteArbWaveformComplexF64(ViSession vi, ViConstString waveformName, ViInt32 numberOfSamples, NIComplexNumber_struct wfmData[], ViBoolean moreDataPending);
  ViStatus WriteArbWaveformComplexI16(ViSession vi, ViConstString waveformName, ViInt32 numberOfSamples, NIComplexI16_struct wfmData[]);
  ViStatus WriteArbWaveformF32(ViSession vi, ViConstString waveformName, ViInt32 numberOfSamples, ViReal32 iData[], ViReal32 qData[], ViBoolean moreDataPending);
  ViStatus WriteP2PEndpointI16(ViSession vi, ViConstString streamEndpoint, ViInt32 numberOfSamples, ViInt16 endpointData[]);
  ViStatus WriteScript(ViSession vi, ViConstString script);

 private:
  using AbortPtr = decltype(&niRFSG_Abort);
  using AllocateArbWaveformPtr = decltype(&niRFSG_AllocateArbWaveform);
  using CheckAttributeViBooleanPtr = decltype(&niRFSG_CheckAttributeViBoolean);
  using CheckAttributeViInt32Ptr = decltype(&niRFSG_CheckAttributeViInt32);
  using CheckAttributeViInt64Ptr = decltype(&niRFSG_CheckAttributeViInt64);
  using CheckAttributeViReal64Ptr = decltype(&niRFSG_CheckAttributeViReal64);
  using CheckAttributeViSessionPtr = decltype(&niRFSG_CheckAttributeViSession);
  using CheckAttributeViStringPtr = decltype(&niRFSG_CheckAttributeViString);
  using CheckGenerationStatusPtr = decltype(&niRFSG_CheckGenerationStatus);
  using CheckIfConfigurationListExistsPtr = decltype(&niRFSG_CheckIfConfigurationListExists);
  using CheckIfScriptExistsPtr = decltype(&niRFSG_CheckIfScriptExists);
  using CheckIfWaveformExistsPtr = decltype(&niRFSG_CheckIfWaveformExists);
  using ClearAllArbWaveformsPtr = decltype(&niRFSG_ClearAllArbWaveforms);
  using ClearArbWaveformPtr = decltype(&niRFSG_ClearArbWaveform);
  using ClearErrorPtr = decltype(&niRFSG_ClearError);
  using ClearSelfCalibrateRangePtr = decltype(&niRFSG_ClearSelfCalibrateRange);
  using ClosePtr = decltype(&niRFSG_close);
  using CommitPtr = decltype(&niRFSG_Commit);
  using ConfigureDeembeddingTableInterpolationLinearPtr = decltype(&niRFSG_ConfigureDeembeddingTableInterpolationLinear);
  using ConfigureDeembeddingTableInterpolationNearestPtr = decltype(&niRFSG_ConfigureDeembeddingTableInterpolationNearest);
  using ConfigureDeembeddingTableInterpolationSplinePtr = decltype(&niRFSG_ConfigureDeembeddingTableInterpolationSpline);
  using ConfigureDigitalEdgeConfigurationListStepTriggerPtr = decltype(&niRFSG_ConfigureDigitalEdgeConfigurationListStepTrigger);
  using ConfigureDigitalEdgeScriptTriggerPtr = decltype(&niRFSG_ConfigureDigitalEdgeScriptTrigger);
  using ConfigureDigitalEdgeStartTriggerPtr = decltype(&niRFSG_ConfigureDigitalEdgeStartTrigger);
  using ConfigureDigitalLevelScriptTriggerPtr = decltype(&niRFSG_ConfigureDigitalLevelScriptTrigger);
  using ConfigureDigitalModulationUserDefinedWaveformPtr = decltype(&niRFSG_ConfigureDigitalModulationUserDefinedWaveform);
  using ConfigureGenerationModePtr = decltype(&niRFSG_ConfigureGenerationMode);
  using ConfigureOutputEnabledPtr = decltype(&niRFSG_ConfigureOutputEnabled);
  using ConfigureP2PEndpointFullnessStartTriggerPtr = decltype(&niRFSG_ConfigureP2PEndpointFullnessStartTrigger);
  using ConfigurePXIChassisClk10Ptr = decltype(&niRFSG_ConfigurePXIChassisClk10);
  using ConfigurePowerLevelTypePtr = decltype(&niRFSG_ConfigurePowerLevelType);
  using ConfigureRFPtr = decltype(&niRFSG_ConfigureRF);
  using ConfigureRefClockPtr = decltype(&niRFSG_ConfigureRefClock);
  using ConfigureSignalBandwidthPtr = decltype(&niRFSG_ConfigureSignalBandwidth);
  using ConfigureSoftwareScriptTriggerPtr = decltype(&niRFSG_ConfigureSoftwareScriptTrigger);
  using ConfigureSoftwareStartTriggerPtr = decltype(&niRFSG_ConfigureSoftwareStartTrigger);
  using ConfigureUpconverterPLLSettlingTimePtr = decltype(&niRFSG_ConfigureUpconverterPLLSettlingTime);
  using CreateConfigurationListPtr = decltype(&niRFSG_CreateConfigurationList);
  using CreateConfigurationListStepPtr = decltype(&niRFSG_CreateConfigurationListStep);
  using CreateDeembeddingSparameterTableArrayPtr = decltype(&niRFSG_CreateDeembeddingSparameterTableArray);
  using CreateDeembeddingSparameterTableS2PFilePtr = decltype(&niRFSG_CreateDeembeddingSparameterTableS2PFile);
  using DeleteAllDeembeddingTablesPtr = decltype(&niRFSG_DeleteAllDeembeddingTables);
  using DeleteConfigurationListPtr = decltype(&niRFSG_DeleteConfigurationList);
  using DeleteDeembeddingTablePtr = decltype(&niRFSG_DeleteDeembeddingTable);
  using DeleteScriptPtr = decltype(&niRFSG_DeleteScript);
  using DisablePtr = decltype(&niRFSG_Disable);
  using DisableAllModulationPtr = decltype(&niRFSG_DisableAllModulation);
  using DisableConfigurationListStepTriggerPtr = decltype(&niRFSG_DisableConfigurationListStepTrigger);
  using DisableScriptTriggerPtr = decltype(&niRFSG_DisableScriptTrigger);
  using DisableStartTriggerPtr = decltype(&niRFSG_DisableStartTrigger);
  using ErrorMessagePtr = decltype(&niRFSG_error_message);
  using ErrorQueryPtr = decltype(&niRFSG_error_query);
  using ExportSignalPtr = decltype(&niRFSG_ExportSignal);
  using GetAttributeViBooleanPtr = decltype(&niRFSG_GetAttributeViBoolean);
  using GetAttributeViInt32Ptr = decltype(&niRFSG_GetAttributeViInt32);
  using GetAttributeViInt64Ptr = decltype(&niRFSG_GetAttributeViInt64);
  using GetAttributeViReal64Ptr = decltype(&niRFSG_GetAttributeViReal64);
  using GetAttributeViSessionPtr = decltype(&niRFSG_GetAttributeViSession);
  using GetAttributeViStringPtr = decltype(&niRFSG_GetAttributeViString);
  using GetChannelNamePtr = decltype(&niRFSG_GetChannelName);
  using GetDeembeddingSparametersPtr = decltype(&niRFSG_GetDeembeddingSparameters);
  using GetErrorPtr = decltype(&niRFSG_GetError);
  using GetExternalCalibrationLastDateAndTimePtr = decltype(&niRFSG_GetExternalCalibrationLastDateAndTime);
  using GetSelfCalibrationDateAndTimePtr = decltype(&niRFSG_GetSelfCalibrationDateAndTime);
  using GetSelfCalibrationTemperaturePtr = decltype(&niRFSG_GetSelfCalibrationTemperature);
  using GetStreamEndpointHandlePtr = decltype(&niRFSG_GetStreamEndpointHandle);
  using GetTerminalNamePtr = decltype(&niRFSG_GetTerminalName);
  using GetUserDataPtr = decltype(&niRFSG_GetUserData);
  using GetWaveformBurstStartLocationsPtr = decltype(&niRFSG_GetWaveformBurstStartLocations);
  using GetWaveformBurstStopLocationsPtr = decltype(&niRFSG_GetWaveformBurstStopLocations);
  using GetWaveformMarkerEventLocationsPtr = decltype(&niRFSG_GetWaveformMarkerEventLocations);
  using InitPtr = decltype(&niRFSG_init);
  using InitWithOptionsPtr = decltype(&niRFSG_InitWithOptions);
  using InitiatePtr = decltype(&niRFSG_Initiate);
  using InvalidateAllAttributesPtr = decltype(&niRFSG_InvalidateAllAttributes);
  using LoadConfigurationsFromFilePtr = decltype(&niRFSG_LoadConfigurationsFromFile);
  using LockSessionPtr = decltype(&niRFSG_LockSession);
  using PerformPowerSearchPtr = decltype(&niRFSG_PerformPowerSearch);
  using PerformThermalCorrectionPtr = decltype(&niRFSG_PerformThermalCorrection);
  using QueryArbWaveformCapabilitiesPtr = decltype(&niRFSG_QueryArbWaveformCapabilities);
  using ReadAndDownloadWaveformFromFileTDMSPtr = decltype(&niRFSG_ReadAndDownloadWaveformFromFileTDMS);
  using ResetPtr = decltype(&niRFSG_reset);
  using ResetAttributePtr = decltype(&niRFSG_ResetAttribute);
  using ResetDevicePtr = decltype(&niRFSG_ResetDevice);
  using ResetWithDefaultsPtr = decltype(&niRFSG_ResetWithDefaults);
  using ResetWithOptionsPtr = decltype(&niRFSG_ResetWithOptions);
  using RevisionQueryPtr = decltype(&niRFSG_revision_query);
  using SaveConfigurationsToFilePtr = decltype(&niRFSG_SaveConfigurationsToFile);
  using SelectArbWaveformPtr = decltype(&niRFSG_SelectArbWaveform);
  using SelfCalPtr = decltype(&niRFSG_SelfCal);
  using SelfCalibrateRangePtr = decltype(&niRFSG_SelfCalibrateRange);
  using SelfTestPtr = decltype(&niRFSG_self_test);
  using SendSoftwareEdgeTriggerPtr = decltype(&niRFSG_SendSoftwareEdgeTrigger);
  using SetArbWaveformNextWritePositionPtr = decltype(&niRFSG_SetArbWaveformNextWritePosition);
  using SetAttributeViBooleanPtr = decltype(&niRFSG_SetAttributeViBoolean);
  using SetAttributeViInt32Ptr = decltype(&niRFSG_SetAttributeViInt32);
  using SetAttributeViInt64Ptr = decltype(&niRFSG_SetAttributeViInt64);
  using SetAttributeViReal64Ptr = decltype(&niRFSG_SetAttributeViReal64);
  using SetAttributeViSessionPtr = decltype(&niRFSG_SetAttributeViSession);
  using SetAttributeViStringPtr = decltype(&niRFSG_SetAttributeViString);
  using SetUserDataPtr = decltype(&niRFSG_SetUserData);
  using SetWaveformBurstStartLocationsPtr = decltype(&niRFSG_SetWaveformBurstStartLocations);
  using SetWaveformBurstStopLocationsPtr = decltype(&niRFSG_SetWaveformBurstStopLocations);
  using SetWaveformMarkerEventLocationsPtr = decltype(&niRFSG_SetWaveformMarkerEventLocations);
  using UnlockSessionPtr = decltype(&niRFSG_UnlockSession);
  using WaitUntilSettledPtr = decltype(&niRFSG_WaitUntilSettled);
  using WriteArbWaveformPtr = decltype(&niRFSG_WriteArbWaveform);
  using WriteArbWaveformComplexF32Ptr = decltype(&niRFSG_WriteArbWaveformComplexF32);
  using WriteArbWaveformComplexF64Ptr = decltype(&niRFSG_WriteArbWaveformComplexF64);
  using WriteArbWaveformComplexI16Ptr = decltype(&niRFSG_WriteArbWaveformComplexI16);
  using WriteArbWaveformF32Ptr = decltype(&niRFSG_WriteArbWaveformF32);
  using WriteP2PEndpointI16Ptr = decltype(&niRFSG_WriteP2PEndpointI16);
  using WriteScriptPtr = decltype(&niRFSG_WriteScript);

  typedef struct FunctionPointers {
    AbortPtr Abort;
    AllocateArbWaveformPtr AllocateArbWaveform;
    CheckAttributeViBooleanPtr CheckAttributeViBoolean;
    CheckAttributeViInt32Ptr CheckAttributeViInt32;
    CheckAttributeViInt64Ptr CheckAttributeViInt64;
    CheckAttributeViReal64Ptr CheckAttributeViReal64;
    CheckAttributeViSessionPtr CheckAttributeViSession;
    CheckAttributeViStringPtr CheckAttributeViString;
    CheckGenerationStatusPtr CheckGenerationStatus;
    CheckIfConfigurationListExistsPtr CheckIfConfigurationListExists;
    CheckIfScriptExistsPtr CheckIfScriptExists;
    CheckIfWaveformExistsPtr CheckIfWaveformExists;
    ClearAllArbWaveformsPtr ClearAllArbWaveforms;
    ClearArbWaveformPtr ClearArbWaveform;
    ClearErrorPtr ClearError;
    ClearSelfCalibrateRangePtr ClearSelfCalibrateRange;
    ClosePtr Close;
    CommitPtr Commit;
    ConfigureDeembeddingTableInterpolationLinearPtr ConfigureDeembeddingTableInterpolationLinear;
    ConfigureDeembeddingTableInterpolationNearestPtr ConfigureDeembeddingTableInterpolationNearest;
    ConfigureDeembeddingTableInterpolationSplinePtr ConfigureDeembeddingTableInterpolationSpline;
    ConfigureDigitalEdgeConfigurationListStepTriggerPtr ConfigureDigitalEdgeConfigurationListStepTrigger;
    ConfigureDigitalEdgeScriptTriggerPtr ConfigureDigitalEdgeScriptTrigger;
    ConfigureDigitalEdgeStartTriggerPtr ConfigureDigitalEdgeStartTrigger;
    ConfigureDigitalLevelScriptTriggerPtr ConfigureDigitalLevelScriptTrigger;
    ConfigureDigitalModulationUserDefinedWaveformPtr ConfigureDigitalModulationUserDefinedWaveform;
    ConfigureGenerationModePtr ConfigureGenerationMode;
    ConfigureOutputEnabledPtr ConfigureOutputEnabled;
    ConfigureP2PEndpointFullnessStartTriggerPtr ConfigureP2PEndpointFullnessStartTrigger;
    ConfigurePXIChassisClk10Ptr ConfigurePXIChassisClk10;
    ConfigurePowerLevelTypePtr ConfigurePowerLevelType;
    ConfigureRFPtr ConfigureRF;
    ConfigureRefClockPtr ConfigureRefClock;
    ConfigureSignalBandwidthPtr ConfigureSignalBandwidth;
    ConfigureSoftwareScriptTriggerPtr ConfigureSoftwareScriptTrigger;
    ConfigureSoftwareStartTriggerPtr ConfigureSoftwareStartTrigger;
    ConfigureUpconverterPLLSettlingTimePtr ConfigureUpconverterPLLSettlingTime;
    CreateConfigurationListPtr CreateConfigurationList;
    CreateConfigurationListStepPtr CreateConfigurationListStep;
    CreateDeembeddingSparameterTableArrayPtr CreateDeembeddingSparameterTableArray;
    CreateDeembeddingSparameterTableS2PFilePtr CreateDeembeddingSparameterTableS2PFile;
    DeleteAllDeembeddingTablesPtr DeleteAllDeembeddingTables;
    DeleteConfigurationListPtr DeleteConfigurationList;
    DeleteDeembeddingTablePtr DeleteDeembeddingTable;
    DeleteScriptPtr DeleteScript;
    DisablePtr Disable;
    DisableAllModulationPtr DisableAllModulation;
    DisableConfigurationListStepTriggerPtr DisableConfigurationListStepTrigger;
    DisableScriptTriggerPtr DisableScriptTrigger;
    DisableStartTriggerPtr DisableStartTrigger;
    ErrorMessagePtr ErrorMessage;
    ErrorQueryPtr ErrorQuery;
    ExportSignalPtr ExportSignal;
    GetAttributeViBooleanPtr GetAttributeViBoolean;
    GetAttributeViInt32Ptr GetAttributeViInt32;
    GetAttributeViInt64Ptr GetAttributeViInt64;
    GetAttributeViReal64Ptr GetAttributeViReal64;
    GetAttributeViSessionPtr GetAttributeViSession;
    GetAttributeViStringPtr GetAttributeViString;
    GetChannelNamePtr GetChannelName;
    GetDeembeddingSparametersPtr GetDeembeddingSparameters;
    GetErrorPtr GetError;
    GetExternalCalibrationLastDateAndTimePtr GetExternalCalibrationLastDateAndTime;
    GetSelfCalibrationDateAndTimePtr GetSelfCalibrationDateAndTime;
    GetSelfCalibrationTemperaturePtr GetSelfCalibrationTemperature;
    GetStreamEndpointHandlePtr GetStreamEndpointHandle;
    GetTerminalNamePtr GetTerminalName;
    GetUserDataPtr GetUserData;
    GetWaveformBurstStartLocationsPtr GetWaveformBurstStartLocations;
    GetWaveformBurstStopLocationsPtr GetWaveformBurstStopLocations;
    GetWaveformMarkerEventLocationsPtr GetWaveformMarkerEventLocations;
    InitPtr Init;
    InitWithOptionsPtr InitWithOptions;
    InitiatePtr Initiate;
    InvalidateAllAttributesPtr InvalidateAllAttributes;
    LoadConfigurationsFromFilePtr LoadConfigurationsFromFile;
    LockSessionPtr LockSession;
    PerformPowerSearchPtr PerformPowerSearch;
    PerformThermalCorrectionPtr PerformThermalCorrection;
    QueryArbWaveformCapabilitiesPtr QueryArbWaveformCapabilities;
    ReadAndDownloadWaveformFromFileTDMSPtr ReadAndDownloadWaveformFromFileTDMS;
    ResetPtr Reset;
    ResetAttributePtr ResetAttribute;
    ResetDevicePtr ResetDevice;
    ResetWithDefaultsPtr ResetWithDefaults;
    ResetWithOptionsPtr ResetWithOptions;
    RevisionQueryPtr RevisionQuery;
    SaveConfigurationsToFilePtr SaveConfigurationsToFile;
    SelectArbWaveformPtr SelectArbWaveform;
    SelfCalPtr SelfCal;
    SelfCalibrateRangePtr SelfCalibrateRange;
    SelfTestPtr SelfTest;
    SendSoftwareEdgeTriggerPtr SendSoftwareEdgeTrigger;
    SetArbWaveformNextWritePositionPtr SetArbWaveformNextWritePosition;
    SetAttributeViBooleanPtr SetAttributeViBoolean;
    SetAttributeViInt32Ptr SetAttributeViInt32;
    SetAttributeViInt64Ptr SetAttributeViInt64;
    SetAttributeViReal64Ptr SetAttributeViReal64;
    SetAttributeViSessionPtr SetAttributeViSession;
    SetAttributeViStringPtr SetAttributeViString;
    SetUserDataPtr SetUserData;
    SetWaveformBurstStartLocationsPtr SetWaveformBurstStartLocations;
    SetWaveformBurstStopLocationsPtr SetWaveformBurstStopLocations;
    SetWaveformMarkerEventLocationsPtr SetWaveformMarkerEventLocations;
    UnlockSessionPtr UnlockSession;
    WaitUntilSettledPtr WaitUntilSettled;
    WriteArbWaveformPtr WriteArbWaveform;
    WriteArbWaveformComplexF32Ptr WriteArbWaveformComplexF32;
    WriteArbWaveformComplexF64Ptr WriteArbWaveformComplexF64;
    WriteArbWaveformComplexI16Ptr WriteArbWaveformComplexI16;
    WriteArbWaveformF32Ptr WriteArbWaveformF32;
    WriteP2PEndpointI16Ptr WriteP2PEndpointI16;
    WriteScriptPtr WriteScript;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nirfsg_grpc

#endif  // NIRFSG_GRPC_LIBRARY_H