#include <basics.h>
#include <limits.h>

void check_int8_value( int8 target_value, int8 correct_value ){
  if ( target_value == correct_value ){
    printf( "int8: %d\n", target_value );
  }else{
    printf( "int8: %d != %d\n", target_value, correct_value );
  }
}

void check_uint8_value( uint8 target_value, uint8 correct_value ){
  if ( target_value == correct_value ){
    printf( "uint8: %u\n", target_value );
  }else{
    printf( "uint8: %u != %u\n", target_value, correct_value );
  }
}

void check_int16_value( int16 target_value, int16 correct_value ){
  if ( target_value == correct_value ){
    printf( "int16: %d\n", target_value );
  }else{
    printf( "int16: %d != %d\n", target_value, correct_value );
  }
}

void check_uint16_value( uint16 target_value, uint16 correct_value ){
  if ( target_value == correct_value ){
    printf( "uint16: %u\n", target_value );
  }else{
    printf( "uint16: %u != %u\n", target_value, correct_value );
  }
}

void check_int32_value( int32 target_value, int32 correct_value ){
  if ( target_value == correct_value ){
    printf( "int32: %d\n", target_value );
  }else{
    printf( "int32: %d != %d\n", target_value, correct_value );
  }
}

void check_uint32_value( uint32 target_value, uint32 correct_value ){
  if ( target_value == correct_value ){
    printf( "uint32: %u\n", target_value );
  }else{
    printf( "uint32: %u != %u\n", target_value, correct_value );
  }
}

void check_int64_value( int64 target_value, int64 correct_value ){
  if ( target_value == correct_value ){
    printf( "int64: %lld\n", target_value );
  }else{
    printf( "int64: %lld != %lld\n", target_value, correct_value );
  }
}

void check_uint64_value( uint64 target_value, uint64 correct_value ){
  if ( target_value == correct_value ){
    printf( "uint64: %llu\n", target_value );
  }else{
    printf( "uint64: %llu != %llu\n", target_value, correct_value );
  }
}

void check_float_value( float target_value, float correct_value ){
  if ( target_value == correct_value ){
    printf( "float: %.3f\n", target_value );
  }else{
    printf( "float: %.3f != %.3f\n", target_value, correct_value );
  }
}

void check_double_value( double target_value, double correct_value ){
  if ( target_value == correct_value ){
    printf( "double: %.3lf\n", target_value );
  }else{
    printf( "double: %.3lf != %.3lf\n", target_value, correct_value );
  }
}

void check_string_value( string target_value, string correct_value ){
  if ( 0 == strcmp( target_value, correct_value ) ){
    printf( "string: %s\n", target_value );
  }else{
    printf( "string: %s != %s\n", target_value, correct_value );
  }
}

int main(){
  check_int8_value( basics_int8_add( CHAR_MIN, 0 ), CHAR_MIN );
  check_int8_value( basics_int8_add( CHAR_MAX, 0 ), CHAR_MAX );
  int8 int8_array[] = { CHAR_MIN, CHAR_MAX };
  check_int8_value( basics_int8_calc_array( int8_array, 2 ), CHAR_MIN + CHAR_MAX );
  
  check_uint8_value( basics_uint8_add( 0, 0 ), 0 );
  check_uint8_value( basics_uint8_add( 0, -1 ), UCHAR_MAX );
  uint8 uint8_array[] = { 0, UCHAR_MAX };
  check_uint8_value( basics_uint8_calc_array( uint8_array, 2 ), UCHAR_MAX );
  
  check_int16_value( basics_int16_add( SHRT_MIN, 0 ), SHRT_MIN );
  check_int16_value( basics_int16_add( SHRT_MAX, 0 ), SHRT_MAX );
  int16 int16_array[] = { SHRT_MIN, SHRT_MAX };
  check_int16_value( basics_int16_calc_array( int16_array, 2 ), SHRT_MIN + SHRT_MAX );
  
  check_uint16_value( basics_uint16_add( 0, 0 ), 0 );
  check_uint16_value( basics_uint16_add( 0, -1 ), USHRT_MAX );
  uint16 uint16_array[] = { 0, USHRT_MAX };
  check_uint16_value( basics_uint16_calc_array( uint16_array, 2 ), USHRT_MAX );
  
  check_int32_value( basics_int32_add( INT_MIN, 0 ), INT_MIN );
  check_int32_value( basics_int32_add( INT_MAX, 0 ), INT_MAX );
  int32 int32_array[] = { INT_MIN, INT_MAX };
  check_int32_value( basics_int32_calc_array( int32_array, 2 ), INT_MIN + INT_MAX );
  
  check_uint32_value( basics_uint32_add( 0, 0 ), 0 );
  check_uint32_value( basics_uint32_add( 0, -1 ), UINT_MAX );
  uint32 uint32_array[] = { 0, UINT_MAX };
  check_uint32_value( basics_uint32_calc_array( uint32_array, 2 ), UINT_MAX );
  
  check_int64_value( basics_int64_add( LLONG_MIN, 0 ), LLONG_MIN );
  check_int64_value( basics_int64_add( LLONG_MAX, 0 ), LLONG_MAX );
  int64 int64_array[] = { LLONG_MIN, LLONG_MAX };
  check_int64_value( basics_int64_calc_array( int64_array, 2 ), LLONG_MIN + LLONG_MAX );
  
  check_uint64_value( basics_uint64_add( 0, 0 ), 0 );
  check_uint64_value( basics_uint64_add( 0, -1 ), ULLONG_MAX );
  uint64 uint64_array[] = { 0, ULLONG_MAX };
  check_uint64_value( basics_uint64_calc_array( uint64_array, 2 ), ULLONG_MAX );
  
  check_float_value( basics_float_add( FLT_MIN, 0 ), FLT_MIN );
  check_float_value( basics_float_add( FLT_MAX, 0 ), FLT_MAX );
  float float_array[] = { FLT_MIN, FLT_MAX };
  check_float_value( basics_float_calc_array( float_array, 2 ), FLT_MIN + FLT_MAX );
  
  check_double_value( basics_double_add( DBL_MIN, 0 ), DBL_MIN );
  check_double_value( basics_double_add( DBL_MAX, 0 ), DBL_MAX );
  double double_array[] = { DBL_MIN, DBL_MAX };
  check_double_value( basics_double_calc_array( double_array, 2 ), DBL_MIN + DBL_MAX );
  
  String* string = basics_string_new();
  if ( string != null ){
    check_string_value( basics_string_add( string, "abcde", "あいうえお" ), "abcdeあいうえお" );
    basics_string_delete( string );
  }
  
  return 0;
}
