#include <basics.h>
#include <limits.h>

static string s_empty_string = "";

bool basics_init(){
  return true;
}

void basics_exit(){
  fflush( stdout );
}

int8 basics_int8_add( int8 value1, int8 value2 ){
  return value1 + value2;
}

void basics_int8_print( int8 target_value, int8 correct_value ){
  if ( target_value == correct_value ){
    printf( "int8: %d\n", target_value );
  }else{
    printf( "int8: %d != %d\n", target_value, correct_value );
  }
}

int8 basics_int8_min(){
  return CHAR_MIN;
}

int8 basics_int8_max(){
  return CHAR_MAX;
}

uint8 basics_uint8_add( uint8 value1, uint8 value2 ){
  return value1 + value2;
}

void basics_uint8_print( uint8 target_value, uint8 correct_value ){
  if ( target_value == correct_value ){
    printf( "uint8: %u\n", target_value );
  }else{
    printf( "uint8: %u != %u\n", target_value, correct_value );
  }
}

uint8 basics_uint8_max(){
  return UCHAR_MAX;
}

int16 basics_int16_add( int16 value1, int16 value2 ){
  return value1 + value2;
}

void basics_int16_print( int16 target_value, int16 correct_value ){
  if ( target_value == correct_value ){
    printf( "int16: %d\n", target_value );
  }else{
    printf( "int16: %d != %d\n", target_value, correct_value );
  }
}

int16 basics_int16_min(){
  return SHRT_MIN;
}

int16 basics_int16_max(){
  return SHRT_MAX;
}

uint16 basics_uint16_add( uint16 value1, uint16 value2 ){
  return value1 + value2;
}

void basics_uint16_print( uint16 target_value, uint16 correct_value ){
  if ( target_value == correct_value ){
    printf( "uint16: %u\n", target_value );
  }else{
    printf( "uint16: %u != %u\n", target_value, correct_value );
  }
}

uint16 basics_uint16_max(){
  return USHRT_MAX;
}

int32 basics_int32_add( int32 value1, int32 value2 ){
  return value1 + value2;
}

void basics_int32_print( int32 target_value, int32 correct_value ){
  if ( target_value == correct_value ){
    printf( "int32: %d\n", target_value );
  }else{
    printf( "int32: %d != %d\n", target_value, correct_value );
  }
}

int32 basics_int32_min(){
  return INT_MIN;
}

int32 basics_int32_max(){
  return INT_MAX;
}

uint32 basics_uint32_add( uint32 value1, uint32 value2 ){
  return value1 + value2;
}

void basics_uint32_print( uint32 target_value, uint32 correct_value ){
  if ( target_value == correct_value ){
    printf( "uint32: %u\n", target_value );
  }else{
    printf( "uint32: %u != %u\n", target_value, correct_value );
  }
}

uint32 basics_uint32_max(){
  return UINT_MAX;
}

int64 basics_int64_add( int64 value1, int64 value2 ){
  return value1 + value2;
}

void basics_int64_print( int64 target_value, int64 correct_value ){
  if ( target_value == correct_value ){
    printf( "int64: %lld\n", target_value );
  }else{
    printf( "int64: %lld != %lld\n", target_value, correct_value );
  }
}

int64 basics_int64_min(){
  return LLONG_MIN;
}

int64 basics_int64_max(){
  return LLONG_MAX;
}

uint64 basics_uint64_add( uint64 value1, uint64 value2 ){
  return value1 + value2;
}

void basics_uint64_print( uint64 target_value, uint64 correct_value ){
  if ( target_value == correct_value ){
    printf( "uint64: %llu\n", target_value );
  }else{
    printf( "uint64: %llu != %llu\n", target_value, correct_value );
  }
}

uint64 basics_uint64_max(){
  return ULLONG_MAX;
}

float basics_float_add( float value1, float value2 ){
  return value1 + value2;
}

void basics_float_print( float target_value, float correct_value ){
  if ( target_value == correct_value ){
    printf( "float: %.3f\n", target_value );
  }else{
    printf( "float: %.3f != %.3f\n", target_value, correct_value );
  }
}

float basics_float_max(){
  return FLT_MAX;
}

double basics_double_add( double value1, double value2 ){
  return value1 + value2;
}

void basics_double_print( double target_value, double correct_value ){
  if ( target_value == correct_value ){
    printf( "double: %.3lf\n", target_value );
  }else{
    printf( "double: %.3lf != %.3lf\n", target_value, correct_value );
  }
}

double basics_double_max(){
  return DBL_MAX;
}

String* basics_string_new(){
  String* string = (String*)malloc( sizeof( String ) );
  do{
    if ( string == null ) break;
    
    string->string = null;
    string->allocated_size = 0;
    
    return string;
  }while ( 0 );
  basics_string_delete( string );
  return null;
}

void basics_string_delete( String* string ){
  if ( string != null ){
    if ( string->string != null ) free( string->string );
    free( string );
  }
}

string basics_string_add( String* _string, string value1, string value2 ){
  int32 value1_length = strlen( value1 );
  int32 value2_length = strlen( value2 );
  int32 need_size = value1_length + value2_length + 1;
  if ( _string->allocated_size < need_size ){
    uint8* allocated_string = (uint8*)realloc( _string->string, need_size );
    if ( allocated_string == null ) return s_empty_string;
    
    _string->string = allocated_string;
    _string->allocated_size = need_size;
  }
  
  memcpy( _string->string, value1, value1_length );
  memcpy( &(_string->string[ value1_length ]), value2, value2_length );
  _string->string[ need_size - 1 ] = '\0';
  
  return (string)_string->string;
}

void basics_string_print( string target_value, string correct_value ){
  if ( 0 == strcmp( target_value, correct_value ) ){
    printf( "string: %s\n", target_value );
  }else{
    printf( "string: %s != %s\n", target_value, correct_value );
  }
}
