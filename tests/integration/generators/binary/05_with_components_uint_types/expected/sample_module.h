#ifndef ASN1_PARSER_SAMPLE_MODULE_H_INCLUDED
#define ASN1_PARSER_SAMPLE_MODULE_H_INCLUDED

/*
This file was autogenerated from ASN.1 model.
*/

#include <stdint.h>

// NOTE: Uint8-t is embedded directly where it is used. Rationale: Bitfields cannot be typedef'd.

// NOTE: Uint16-t is embedded directly where it is used. Rationale: Bitfields cannot be typedef'd.

// NOTE: Uint32-t is embedded directly where it is used. Rationale: Bitfields cannot be typedef'd.

// NOTE: Uint64-t is embedded directly where it is used. Rationale: Bitfields cannot be typedef'd.

typedef struct
{
  uint8_t with_component_packet_number_1;
  uint16_t with_component_packet_number_2;
  uint32_t with_component_packet_number_3;
  uint64_t with_component_packet_number_4;
} __attribute__((packed)) With_component_packet;

typedef struct
{
  With_component_packet sample_packet_with_component;
} __attribute__((packed)) Sample_packet;

#endif // ASN1_PARSER_SAMPLE_MODULE_H_INCLUDED
