require "ffi"

module C
  extend FFI::Library
  ffi_lib "./lib/libbasics.so"
  
  attach_function :basics_init, [], :bool
  attach_function :basics_exit, [], :void
  attach_function :basics_int8_add, [ :int8, :int8 ], :int8
  attach_function :basics_int8_print, [ :int8, :int8 ], :void
  attach_function :basics_int8_min, [], :int8
  attach_function :basics_int8_max, [], :int8
  attach_function :basics_uint8_add, [ :uint8, :uint8 ], :uint8
  attach_function :basics_uint8_print, [ :uint8, :uint8 ], :void
  attach_function :basics_uint8_max, [], :uint8
  attach_function :basics_int16_add, [ :int16, :int16 ], :int16
  attach_function :basics_int16_print, [ :int16, :int16 ], :void
  attach_function :basics_int16_min, [], :int16
  attach_function :basics_int16_max, [], :int16
  attach_function :basics_uint16_add, [ :uint16, :uint16 ], :uint16
  attach_function :basics_uint16_print, [ :uint16, :uint16 ], :void
  attach_function :basics_uint16_max, [], :uint16
  attach_function :basics_int32_add, [ :int32, :int32 ], :int32
  attach_function :basics_int32_print, [ :int32, :int32 ], :void
  attach_function :basics_int32_min, [], :int32
  attach_function :basics_int32_max, [], :int32
  attach_function :basics_uint32_add, [ :uint32, :uint32 ], :uint32
  attach_function :basics_uint32_print, [ :uint32, :uint32 ], :void
  attach_function :basics_uint32_max, [], :uint32
  attach_function :basics_int64_add, [ :int64, :int64 ], :int64
  attach_function :basics_int64_print, [ :int64, :int64 ], :void
  attach_function :basics_int64_min, [], :int64
  attach_function :basics_int64_max, [], :int64
  attach_function :basics_uint64_add, [ :uint64, :uint64 ], :uint64
  attach_function :basics_uint64_print, [ :uint64, :uint64 ], :void
  attach_function :basics_uint64_max, [], :uint64
  attach_function :basics_float_add, [ :float, :float ], :float
  attach_function :basics_float_print, [ :float, :float ], :void
  attach_function :basics_float_max, [], :float
  attach_function :basics_double_add, [ :double, :double ], :double
  attach_function :basics_double_print, [ :double, :double ], :void
  attach_function :basics_double_max, [], :double
  attach_function :basics_string_new, [], :pointer
  attach_function :basics_string_delete, [ :pointer ], :void
  attach_function :basics_string_add, [ :pointer, :string, :string ], :string
  attach_function :basics_string_print, [ :string, :string ], :void
end

exit( 1 ) if ( ! C.basics_init() )

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

basics_string = C.basics_string_new()
if ( ! basics_string.nil? )
  C.basics_string_print( C.basics_string_add( basics_string, "abcde", "あいうえお" ), "abcdeあいうえお" )
  C.basics_string_delete( basics_string )
end

C.basics_exit()
