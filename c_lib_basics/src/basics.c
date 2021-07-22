#include <basics.h>

static string s_empty_string = "";

int8 basics_int8_add( int8 value1, int8 value2 ){
  return value1 + value2;
}

int8 basics_int8_calc_array( int8* array, int32 count ){
  int8 value = array[ 0 ];
  for ( int32 i = 1; i < count; ++i ){
    value += array[ i ];
  }
  return value;
}

uint8 basics_uint8_add( uint8 value1, uint8 value2 ){
  return value1 + value2;
}

uint8 basics_uint8_calc_array( uint8* array, int32 count ){
  uint8 value = array[ 0 ];
  for ( int32 i = 1; i < count; ++i ){
    value += array[ i ];
  }
  return value;
}

int16 basics_int16_add( int16 value1, int16 value2 ){
  return value1 + value2;
}

int16 basics_int16_calc_array( int16* array, int32 count ){
  int16 value = array[ 0 ];
  for ( int32 i = 1; i < count; ++i ){
    value += array[ i ];
  }
  return value;
}

uint16 basics_uint16_add( uint16 value1, uint16 value2 ){
  return value1 + value2;
}

uint16 basics_uint16_calc_array( uint16* array, int32 count ){
  uint16 value = array[ 0 ];
  for ( int32 i = 1; i < count; ++i ){
    value += array[ i ];
  }
  return value;
}

int32 basics_int32_add( int32 value1, int32 value2 ){
  return value1 + value2;
}

int32 basics_int32_calc_array( int32* array, int32 count ){
  int32 value = array[ 0 ];
  for ( int32 i = 1; i < count; ++i ){
    value += array[ i ];
  }
  return value;
}

uint32 basics_uint32_add( uint32 value1, uint32 value2 ){
  return value1 + value2;
}

uint32 basics_uint32_calc_array( uint32* array, int32 count ){
  uint32 value = array[ 0 ];
  for ( int32 i = 1; i < count; ++i ){
    value += array[ i ];
  }
  return value;
}

int64 basics_int64_add( int64 value1, int64 value2 ){
  return value1 + value2;
}

int64 basics_int64_calc_array( int64* array, int32 count ){
  int64 value = array[ 0 ];
  for ( int32 i = 1; i < count; ++i ){
    value += array[ i ];
  }
  return value;
}

uint64 basics_uint64_add( uint64 value1, uint64 value2 ){
  return value1 + value2;
}

uint64 basics_uint64_calc_array( uint64* array, int32 count ){
  uint64 value = array[ 0 ];
  for ( int32 i = 1; i < count; ++i ){
    value += array[ i ];
  }
  return value;
}

float basics_float_add( float value1, float value2 ){
  return value1 + value2;
}

float basics_float_calc_array( float* array, int32 count ){
  float value = array[ 0 ];
  for ( int32 i = 1; i < count; ++i ){
    value += array[ i ];
  }
  return value;
}

double basics_double_add( double value1, double value2 ){
  return value1 + value2;
}

double basics_double_calc_array( double* array, int32 count ){
  double value = array[ 0 ];
  for ( int32 i = 1; i < count; ++i ){
    value += array[ i ];
  }
  return value;
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
