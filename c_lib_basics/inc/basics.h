#ifndef __BASICS_H__
#define __BASICS_H__

#ifndef null
  #define null NULL
#endif

#include <stdio.h>
#include <stdint.h>
#include <float.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int8_t             int8;
typedef uint8_t            uint8;
typedef int16_t            int16;
typedef uint16_t           uint16;
typedef int32_t            int32;
typedef uint32_t           uint32;
typedef long long          int64;
typedef unsigned long long uint64;
typedef const char*        string;

typedef struct {
  uint8* string;
  int32  allocated_size;
} String;

#ifdef __cplusplus
extern "C" {
#endif
  bool basics_init();
  void basics_exit();
  int8 basics_int8_add( int8 value1, int8 value2 );
  void basics_int8_print( int8 target_value, int8 correct_value );
  int8 basics_int8_min();
  int8 basics_int8_max();
  uint8 basics_uint8_add( uint8 value1, uint8 value2 );
  void basics_uint8_print( uint8 target_value, uint8 correct_value );
  uint8 basics_uint8_max();
  int16 basics_int16_add( int16 value1, int16 value2 );
  void basics_int16_print( int16 target_value, int16 correct_value );
  int16 basics_int16_min();
  int16 basics_int16_max();
  uint16 basics_uint16_add( uint16 value1, uint16 value2 );
  void basics_uint16_print( uint16 target_value, uint16 correct_value );
  uint16 basics_uint16_max();
  int32 basics_int32_add( int32 value1, int32 value2 );
  void basics_int32_print( int32 target_value, int32 correct_value );
  int32 basics_int32_min();
  int32 basics_int32_max();
  uint32 basics_uint32_add( uint32 value1, uint32 value2 );
  void basics_uint32_print( uint32 target_value, uint32 correct_value );
  uint32 basics_uint32_max();
  int64 basics_int64_add( int64 value1, int64 value2 );
  void basics_int64_print( int64 target_value, int64 correct_value );
  int64 basics_int64_min();
  int64 basics_int64_max();
  uint64 basics_uint64_add( uint64 value1, uint64 value2 );
  void basics_uint64_print( uint64 target_value, uint64 correct_value );
  uint64 basics_uint64_max();
  float basics_float_add( float value1, float value2 );
  void basics_float_print( float target_value, float correct_value );
  float basics_float_max();
  double basics_double_add( double value1, double value2 );
  void basics_double_print( double target_value, double correct_value );
  double basics_double_max();
  String* basics_string_new();
  void basics_string_delete( String* string );
  string basics_string_add( String* _string, string value1, string value2 );
  void basics_string_print( string target_value, string correct_value );
#ifdef __cplusplus
}
#endif

#endif
