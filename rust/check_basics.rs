#[link(name="basics", kind="static")]

extern{
  fn basics_init() -> bool;
  fn basics_exit();
  fn basics_int8_add( value1: i8, value2: i8 ) -> i8;
  fn basics_int8_print( target_value: i8, correct_value: i8 );
  fn basics_int8_min() -> i8;
  fn basics_int8_max() -> i8;
  fn basics_uint8_add( value1: u8, value2: u8 ) -> u8;
  fn basics_uint8_print( target_value: u8, correct_value: u8 );
  fn basics_uint8_max() -> u8;
  fn basics_int16_add( value1: i16, value2: i16 ) -> i16;
  fn basics_int16_print( target_value: i16, correct_value: i16 );
  fn basics_int16_min() -> i16;
  fn basics_int16_max() -> i16;
  fn basics_uint16_add( value1: u16, value2: u16 ) -> u16;
  fn basics_uint16_print( target_value: u16, correct_value: u16 );
  fn basics_uint16_max() -> u16;
  fn basics_int32_add( value1: i32, value2: i32 ) -> i32;
  fn basics_int32_print( target_value: i32, correct_value: i32 );
  fn basics_int32_min() -> i32;
  fn basics_int32_max() -> i32;
  fn basics_uint32_add( value1: u32, value2: u32 ) -> u32;
  fn basics_uint32_print( target_value: u32, correct_value: u32 );
  fn basics_uint32_max() -> u32;
  fn basics_int64_add( value1: i64, value2: i64 ) -> i64;
  fn basics_int64_print( target_value: i64, correct_value: i64 );
  fn basics_int64_min() -> i64;
  fn basics_int64_max() -> i64;
  fn basics_uint64_add( value1: u64, value2: u64 ) -> u64;
  fn basics_uint64_print( target_value: u64, correct_value: u64 );
  fn basics_uint64_max() -> u64;
  fn basics_float_add( value1: f32, value2: f32 ) -> f32;
  fn basics_float_print( target_value: f32, correct_value: f32 );
  fn basics_float_max() -> f32;
  fn basics_double_add( value1: f64, value2: f64 ) -> f64;
  fn basics_double_print( target_value: f64, correct_value: f64 );
  fn basics_double_max() -> f64;
  fn basics_string_new() -> *const i32;
  fn basics_string_delete( string: *const i32 );
  fn basics_string_add( string: *const i32, value1: *const i8, value2: *const i8 ) -> *const i8;
  fn basics_string_print( target_value: *const i8, correct_value: *const i8 );
}

fn main(){
  unsafe{
    if ! basics_init() { std::process::exit( 1 ); }
    
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
    
    basics_float_print( basics_float_add( 0.0, 0.0 ), 0.0 );
    basics_float_print( basics_float_add( basics_float_max(), 0.0 ), basics_float_max() );
    
    basics_double_print( basics_double_add( 0.0, 0.0 ), 0.0 );
    basics_double_print( basics_double_add( basics_double_max(), 0.0 ), basics_double_max() );
    
    let basics_string = basics_string_new();
    if ! basics_string.is_null() {
      let strings: [std::ffi::CString; 3] = [
        std::ffi::CString::new("abcde").unwrap(),
        std::ffi::CString::new("あいうえお").unwrap(),
        std::ffi::CString::new("abcdeあいうえお").unwrap()
      ];
      basics_string_print( basics_string_add( basics_string, strings[0].as_ptr(), strings[1].as_ptr() ), strings[2].as_ptr() );
      basics_string_delete( basics_string );
    }
    
    basics_exit();
  }
}
