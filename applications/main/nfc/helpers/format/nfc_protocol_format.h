#pragma once

#include <nfc/nfc_device.h>

typedef enum {
    NfcProtocolFormatFeatureNone = 0,
    NfcProtocolFormatFeatureMoreData = 1UL << 0,
} NfcProtocolFormatFeature;

typedef enum {
    NfcProtocolFormatTypeShort,
    NfcProtocolFormatTypeFull,
} NfcProtocolFormatType;

NfcProtocolFormatFeature nfc_protocol_format_get_features(const NfcDevice* device);

void nfc_protocol_format_info(const NfcDevice* device, NfcProtocolFormatType type, FuriString* str);
