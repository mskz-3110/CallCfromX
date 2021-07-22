#include <basics.h>

int main(){
  basics_int8_print( basics_int8_add( basics_int8_min(), 0 ), basics_int8_min() );
  basics_int8_print( basics_int8_add( basics_int8_max(), 0 ), basics_int8_max() );
  
  basics_uint8_print( basics_uint8_add( 0, 0 ), 0 );
  basics_uint8_print( basics_uint8_add( basics_uint8_max(), 0 ), basics_uint8_max() );
  
  basics_int16_print( basics_int16_add( basics_int16_min(), 0 ), basics_int16_min() );
  basics_int16_print( basics_int16_add( basics_int16_max(), 0 ), basics_int16_max() );
  
  basics_uint16_print( basics_uint16_add( 0, 0 ), 0 );
  basics_uint16_print( basics_uint16_add( basics_uint16_max(), 0 ), basics_uint16_max() );
  
  basics_int32_print( basics_int32_add( basics_int32_min(), 0 ), basics_int32_min() );
  basics_int32_print( basics_int32_add( basics_int32_max(), 0 ), basics_int32_max() );
  
  basics_uint32_print( basics_uint32_add( 0, 0 ), 0 );
  basics_uint32_print( basics_uint32_add( basics_uint32_max(), 0 ), basics_uint32_max() );
  
  basics_int64_print( basics_int64_add( basics_int64_min(), 0 ), basics_int64_min() );
  basics_int64_print( basics_int64_add( basics_int64_max(), 0 ), basics_int64_max() );
  
  basics_uint64_print( basics_uint64_add( 0, 0 ), 0 );
  basics_uint64_print( basics_uint64_add( basics_uint64_max(), 0 ), basics_uint64_max() );
  
  basics_float_print( basics_float_add( 0, 0 ), 0 );
  basics_float_print( basics_float_add( basics_float_max(), 0 ), basics_float_max() );
  
  basics_double_print( basics_double_add( 0, 0 ), 0 );
  basics_double_print( basics_double_add( basics_double_max(), 0 ), basics_double_max() );
  
  String* string = basics_string_new();
  if ( string != null ){
    basics_string_print( basics_string_add( string, "abcde", "あいうえお" ), "abcdeあいうえお" );
    basics_string_delete( string );
  }
  
  return 0;
}
