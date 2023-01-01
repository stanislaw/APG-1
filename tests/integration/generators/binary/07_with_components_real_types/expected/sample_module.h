#ifndef ASN1_PARSER_SAMPLE_MODULE_H_INCLUDED
#define ASN1_PARSER_SAMPLE_MODULE_H_INCLUDED

/*
This file was autogenerated from ASN.1 model.
*/


typedef struct
{
  float with_component_packet_number_1;
  double with_component_packet_number_2;
} __attribute__((packed)) With_component_packet;

typedef struct
{
  With_component_packet sample_packet_with_component;
} __attribute__((packed)) Sample_packet;

#endif // ASN1_PARSER_SAMPLE_MODULE_H_INCLUDED
