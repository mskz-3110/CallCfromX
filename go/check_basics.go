package main

/*
#cgo CFLAGS: -I../c_lib_basics/inc
#cgo LDFLAGS: ./lib/libbasics.a
#include <basics.h>
*/
import "C"
import "os"

func main(){
  if ( ! C.basics_init() ){ os.Exit( 1 ) }
  
  C.basics_int8_print( C.basics_int8_add( C.basics_int8_min(), 0 ), C.basics_int8_min() )
  C.basics_int8_print( C.basics_int8_add( C.basics_int8_max(), 0 ), C.basics_int8_max() )
  
  C.basics_uint8_print( C.basics_uint8_add( 0, 0 ), 0 )
  C.basics_uint8_print( C.basics_uint8_add( C.basics_uint8_max(), 0 ), C.basics_uint8_max() )
  
  C.basics_int16_print( C.basics_int16_add( C.basics_int16_min(), 0 ), C.basics_int16_min() )
  C.basics_int16_print( C.basics_int16_add( C.basics_int16_max(), 0 ), C.basics_int16_max() )
  
  C.basics_uint16_print( C.basics_uint16_add( 0, 0 ), 0 )
  C.basics_uint16_print( C.basics_uint16_add( C.basics_uint16_max(), 0 ), C.basics_uint16_max() )
  
  C.basics_int32_print( C.basics_int32_add( C.basics_int32_min(), 0 ), C.basics_int32_min() )
  C.basics_int32_print( C.basics_int32_add( C.basics_int32_max(), 0 ), C.basics_int32_max() )
  
  C.basics_uint32_print( C.basics_uint32_add( 0, 0 ), 0 )
  C.basics_uint32_print( C.basics_uint32_add( C.basics_uint32_max(), 0 ), C.basics_uint32_max() )
  
  C.basics_int64_print( C.basics_int64_add( C.basics_int64_min(), 0 ), C.basics_int64_min() )
  C.basics_int64_print( C.basics_int64_add( C.basics_int64_max(), 0 ), C.basics_int64_max() )
  
  C.basics_uint64_print( C.basics_uint64_add( 0, 0 ), 0 )
  C.basics_uint64_print( C.basics_uint64_add( C.basics_uint64_max(), 0 ), C.basics_uint64_max() )
  
  C.basics_float_print( C.basics_float_add( 0, 0 ), 0 )
  C.basics_float_print( C.basics_float_add( C.basics_float_max(), 0 ), C.basics_float_max() )
  
  C.basics_double_print( C.basics_double_add( 0, 0 ), 0 )
  C.basics_double_print( C.basics_double_add( C.basics_double_max(), 0 ), C.basics_double_max() )
  
  var string = C.basics_string_new()
  if ( string != nil ){
    C.basics_string_print( C.basics_string_add( string, C.CString("abcde"), C.CString("あいうえお") ), C.CString("abcdeあいうえお") )
    C.basics_string_delete( string )
  }
  
  C.basics_exit()
}
