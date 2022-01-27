//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with NI-RFMXBT
//---------------------------------------------------------------------
#ifndef NIRFMXBT_GRPC_LIBRARY_WRAPPER_H
#define NIRFMXBT_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <niRFmxBT.h>

namespace nirfmxbt_grpc {

class NiRFmxBTLibraryInterface {
 public:
  virtual ~NiRFmxBTLibraryInterface() {}

  virtual int32 ACPCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount) = 0;
  virtual int32 ACPCfgBurstSynchronizationType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 burstSynchronizationType) = 0;
  virtual int32 ACPCfgNumberOfOffsets(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 numberOfOffsets) = 0;
  virtual int32 ACPCfgOffsetChannelMode(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 offsetChannelMode) = 0;
  virtual int32 ACPFetchAbsolutePowerTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 absolutePower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ACPFetchMaskTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 limitWithExceptionMask[], float32 limitWithoutExceptionMask[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ACPFetchMeasurementStatus(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32* measurementStatus) = 0;
  virtual int32 ACPFetchOffsetMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* lowerAbsolutePower, float64* upperAbsolutePower, float64* lowerRelativePower, float64* upperRelativePower, float64* lowerMargin, float64* upperMargin) = 0;
  virtual int32 ACPFetchOffsetMeasurementArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 lowerAbsolutePower[], float64 upperAbsolutePower[], float64 lowerRelativePower[], float64 upperRelativePower[], float64 lowerMargin[], float64 upperMargin[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ACPFetchReferenceChannelPower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* referenceChannelPower) = 0;
  virtual int32 ACPFetchSpectrum(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectrum[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 AbortMeasurements(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 AnalyzeIQ1Waveform(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[], float64 x0, float64 dx, NIComplexSingle iq[], int32 arraySize, int32 reset, int64 reserved) = 0;
  virtual int32 AutoDetectSignal(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout) = 0;
  virtual int32 AutoLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 measurementInterval, float64* referenceLevel) = 0;
  virtual int32 BuildOffsetString(char selectorString[], int32 offsetNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildSignalString(char signalName[], char resultName[], int32 selectorStringLength, char selectorString[]) = 0;
  virtual int32 CfgChannelNumber(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 channelNumber) = 0;
  virtual int32 CfgDataRate(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 dataRate) = 0;
  virtual int32 CfgDigitalEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], char digitalEdgeSource[], int32 digitalEdge, float64 triggerDelay, int32 enableTrigger) = 0;
  virtual int32 CfgExternalAttenuation(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 externalAttenuation) = 0;
  virtual int32 CfgFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency) = 0;
  virtual int32 CfgFrequencyChannelNumber(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 standard, int32 channelNumber) = 0;
  virtual int32 CfgFrequencyReference(niRFmxInstrHandle instrumentHandle, char channelName[], char frequencyReferenceSource[], float64 frequencyReferenceFrequency) = 0;
  virtual int32 CfgIQPowerEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], char iqPowerEdgeSource[], int32 iqPowerEdgeSlope, float64 iqPowerEdgeLevel, float64 triggerDelay, int32 triggerMinQuietTimeMode, float64 triggerMinQuietTimeDuration, int32 iqPowerEdgeLevelType, int32 enableTrigger) = 0;
  virtual int32 CfgLEDirectionFinding(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 directionFindingMode, float64 cteLength, float64 cteSlotDuration) = 0;
  virtual int32 CfgMechanicalAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 mechanicalAttenuationAuto, float64 mechanicalAttenuationValue) = 0;
  virtual int32 CfgPacketType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 packetType) = 0;
  virtual int32 CfgPayloadBitPattern(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 payloadBitPattern) = 0;
  virtual int32 CfgPayloadLength(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 payloadLengthMode, int32 payloadLength) = 0;
  virtual int32 CfgRF(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency, float64 referenceLevel, float64 externalAttenuation) = 0;
  virtual int32 CfgRFAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 rfAttenuationAuto, float64 rfAttenuationValue) = 0;
  virtual int32 CfgReferenceLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 referenceLevel) = 0;
  virtual int32 CfgSoftwareEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 triggerDelay, int32 enableTrigger) = 0;
  virtual int32 CheckMeasurementStatus(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* isDone) = 0;
  virtual int32 ClearAllNamedResults(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 ClearNamedResult(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 CloneSignalConfiguration(niRFmxInstrHandle instrumentHandle, char oldSignalName[], char newSignalName[]) = 0;
  virtual int32 Close(niRFmxInstrHandle instrumentHandle, int32 forceDestroy) = 0;
  virtual int32 Commit(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 CreateSignalConfiguration(niRFmxInstrHandle instrumentHandle, char signalName[]) = 0;
  virtual int32 DeleteSignalConfiguration(niRFmxInstrHandle instrumentHandle, char signalName[]) = 0;
  virtual int32 DisableTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 FrequencyRangeCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount) = 0;
  virtual int32 FrequencyRangeCfgSpan(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 span) = 0;
  virtual int32 FrequencyRangeFetchMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* highFrequency, float64* lowFrequency) = 0;
  virtual int32 FrequencyRangeFetchSpectrum(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectrum[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAllNamedResultNames(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultNames[], int32 resultNamesBufferSize, int32* actualResultNamesSize, int32* defaultResultExists) = 0;
  virtual int32 GetAttributeF32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32* attrVal) = 0;
  virtual int32 GetAttributeF32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeF64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64* attrVal) = 0;
  virtual int32 GetAttributeF64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeI16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16* attrVal) = 0;
  virtual int32 GetAttributeI32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32* attrVal) = 0;
  virtual int32 GetAttributeI32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeI64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64* attrVal) = 0;
  virtual int32 GetAttributeI64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeI8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8* attrVal) = 0;
  virtual int32 GetAttributeI8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeNIComplexDoubleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeNIComplexSingleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeString(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 arraySize, char attrVal[]) = 0;
  virtual int32 GetAttributeU16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16* attrVal) = 0;
  virtual int32 GetAttributeU32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32* attrVal) = 0;
  virtual int32 GetAttributeU32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeU64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeU8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8* attrVal) = 0;
  virtual int32 GetAttributeU8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetError(niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[]) = 0;
  virtual int32 GetErrorString(niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[]) = 0;
  virtual int32 Initialize(char resourceName[], char optionString[], niRFmxInstrHandle* handleOut, int32* isNewSession) = 0;
  virtual int32 InitializeFromNIRFSASession(uInt32 nirfsaSession, niRFmxInstrHandle* handleOut) = 0;
  virtual int32 Initiate(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[]) = 0;
  virtual int32 ModAccCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount) = 0;
  virtual int32 ModAccCfgBurstSynchronizationType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 burstSynchronizationType) = 0;
  virtual int32 ModAccFetchConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle constellation[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchDEVM(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* peakRMSDEVMMaximum, float64* peakDEVMMaximum, float64* ninetyninePercentDEVM) = 0;
  virtual int32 ModAccFetchDEVMMagnitudeError(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* averageRMSMagnitudeErrorMean, float64* peakRMSMagnitudeErrorMaximum) = 0;
  virtual int32 ModAccFetchDEVMPerSymbolTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 devmPerSymbol[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchDEVMPhaseError(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* averageRMSPhaseErrorMean, float64* peakRMSPhaseErrorMaximum) = 0;
  virtual int32 ModAccFetchDemodulatedBitTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int8 demodulatedBits[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchDf1(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* df1avgMaximum, float64* df1avgMinimum) = 0;
  virtual int32 ModAccFetchDf1maxTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 time[], float32 df1max[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchDf2(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* df2avgMinimum, float64* percentageOfSymbolsAboveDf2maxThreshold) = 0;
  virtual int32 ModAccFetchDf2maxTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 time[], float32 df2max[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchFrequencyErrorBR(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* initialFrequencyErrorMaximum, float64* peakFrequencyDriftMaximum, float64* peakFrequencyDriftRateMaximum) = 0;
  virtual int32 ModAccFetchFrequencyErrorEDR(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* headerFrequencyErrorWiMaximum, float64* peakFrequencyErrorWiPlusW0Maximum, float64* peakFrequencyErrorW0Maximum) = 0;
  virtual int32 ModAccFetchFrequencyErrorLE(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* peakFrequencyErrorMaximum, float64* initialFrequencyDriftMaximum, float64* peakFrequencyDriftMaximum, float64* peakFrequencyDriftRateMaximum) = 0;
  virtual int32 ModAccFetchFrequencyErrorTraceBR(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 time[], float32 frequencyError[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchFrequencyErrorTraceLE(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 time[], float32 frequencyError[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchFrequencyErrorWiPlusW0TraceEDR(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 time[], float32 frequencyErrorWiPlusW0[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchFrequencyTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 frequency[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchRMSDEVMTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 rmsdevm[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ResetAttribute(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID) = 0;
  virtual int32 ResetToDefault(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 SelectMeasurements(niRFmxInstrHandle instrumentHandle, char selectorString[], uInt32 measurements, int32 enableAllTraces) = 0;
  virtual int32 SendSoftwareEdgeTrigger(niRFmxInstrHandle instrumentHandle) = 0;
  virtual int32 SetAttributeF32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal) = 0;
  virtual int32 SetAttributeF32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeF64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal) = 0;
  virtual int32 SetAttributeF64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeI16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16 attrVal) = 0;
  virtual int32 SetAttributeI32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal) = 0;
  virtual int32 SetAttributeI32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeI64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal) = 0;
  virtual int32 SetAttributeI64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeI8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal) = 0;
  virtual int32 SetAttributeI8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeNIComplexDoubleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeNIComplexSingleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeString(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, char attrVal[]) = 0;
  virtual int32 SetAttributeU16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16 attrVal) = 0;
  virtual int32 SetAttributeU32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal) = 0;
  virtual int32 SetAttributeU32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeU64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeU8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal) = 0;
  virtual int32 SetAttributeU8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize) = 0;
  virtual int32 TXPCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount) = 0;
  virtual int32 TXPCfgBurstSynchronizationType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 burstSynchronizationType) = 0;
  virtual int32 TXPFetchEDRPowers(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* edrgfskAveragePowerMean, float64* edrdpskAveragePowerMean, float64* edr_DPSK_GFSKAveragePowerRatioMean) = 0;
  virtual int32 TXPFetchLECTEReferencePeriodPowers(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* referencePeriodAveragePowerMean, float64* referencePeriodPeakAbsolutePowerDeviationMaximum) = 0;
  virtual int32 TXPFetchLECTETransmitSlotPowers(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* transmitSlotAveragePowerMean, float64* transmitSlotPeakAbsolutePowerDeviationMaximum) = 0;
  virtual int32 TXPFetchLECTETransmitSlotPowersArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 transmitSlotAveragePowerMean[], float64 transmitSlotPeakAbsolutePowerDeviationMaximum[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 TXPFetchPowerTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 power[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 TXPFetchPowers(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* averagePowerMean, float64* averagePowerMaximum, float64* averagePowerMinimum, float64* peakToAveragePowerRatioMaximum) = 0;
  virtual int32 WaitForAcquisitionComplete(niRFmxInstrHandle instrumentHandle, float64 timeout) = 0;
  virtual int32 WaitForMeasurementComplete(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout) = 0;
};

}  // namespace nirfmxbt_grpc
#endif  // NIRFMXBT_GRPC_LIBRARY_WRAPPER_H
