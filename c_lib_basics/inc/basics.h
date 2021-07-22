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
  int8 basics_int8_add( int8 value1, int8 value2 );
  int8 basics_int8_calc_array( int8* array, int32 count );
  uint8 basics_uint8_add( uint8 value1, uint8 value2 );
  uint8 basics_uint8_calc_array( uint8* array, int32 count );
  int16 basics_int16_add( int16 value1, int16 value2 );
  int16 basics_int16_calc_array( int16* array, int32 count );
  uint16 basics_uint16_add( uint16 value1, uint16 value2 );
  uint16 basics_uint16_calc_array( uint16* array, int32 count );
  int32 basics_int32_add( int32 value1, int32 value2 );
  int32 basics_int32_calc_array( int32* array, int32 count );
  uint32 basics_uint32_add( uint32 value1, uint32 value2 );
  uint32 basics_uint32_calc_array( uint32* array, int32 count );
  int64 basics_int64_add( int64 value1, int64 value2 );
  int64 basics_int64_calc_array( int64* array, int32 count );
  uint64 basics_uint64_add( uint64 value1, uint64 value2 );
  uint64 basics_uint64_calc_array( uint64* array, int32 count );
  float basics_float_add( float value1, float value2 );
  float basics_float_calc_array( float* array, int32 count );
  double basics_double_add( double value1, double value2 );
  double basics_double_calc_array( double* array, int32 count );
  String* basics_string_new();
  void basics_string_delete( String* string );
  string basics_string_add( String* _string, string value1, string value2 );
#ifdef __cplusplus
}
#endif

#endif
