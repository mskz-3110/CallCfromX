#if ! DLL_INTERNAL
  #if ! UNITY_EDITOR && ( UNITY_IOS || UNITY_WEBGL )
    #define DLL_INTERNAL
  #endif
#endif

using System;
using System.Runtime.InteropServices;
using System.Diagnostics;

using int8 = System.SByte;
using uint8 = System.Byte;
using int16 = System.Int16;
using uint16 = System.UInt16;
using int32 = System.Int32;
using uint32 = System.UInt32;
using int64 = System.Int64;
using uint64 = System.UInt64;

class CheckBasics {
#if DLL_INTERNAL
  public const string DllName = "__Internal";
#else
  public const string DllName = "basics";
#endif
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern bool basics_init();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern void basics_exit();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern int8 basics_int8_add( int8 value1, int8 value2 );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern void basics_int8_print( int8 target_value, int8 correct_value );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern int8 basics_int8_min();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern int8 basics_int8_max();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern uint8 basics_uint8_add( uint8 value1, uint8 value2 );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern void basics_uint8_print( uint8 target_value, uint8 correct_value );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern uint8 basics_uint8_max();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern int16 basics_int16_add( int16 value1, int16 value2 );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern void basics_int16_print( int16 target_value, int16 correct_value );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern int16 basics_int16_min();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern int16 basics_int16_max();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern uint16 basics_uint16_add( uint16 value1, uint16 value2 );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern void basics_uint16_print( uint16 target_value, uint16 correct_value );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern uint16 basics_uint16_max();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern int32 basics_int32_add( int32 value1, int32 value2 );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern void basics_int32_print( int32 target_value, int32 correct_value );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern int32 basics_int32_min();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern int32 basics_int32_max();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern uint32 basics_uint32_add( uint32 value1, uint32 value2 );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern void basics_uint32_print( uint32 target_value, uint32 correct_value );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern uint32 basics_uint32_max();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern int64 basics_int64_add( int64 value1, int64 value2 );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern void basics_int64_print( int64 target_value, int64 correct_value );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern int64 basics_int64_min();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern int64 basics_int64_max();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern uint64 basics_uint64_add( uint64 value1, uint64 value2 );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern void basics_uint64_print( uint64 target_value, uint64 correct_value );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern uint64 basics_uint64_max();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern float basics_float_add( float value1, float value2 );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern void basics_float_print( float target_value, float correct_value );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern float basics_float_max();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern double basics_double_add( double value1, double value2 );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern void basics_double_print( double target_value, double correct_value );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern double basics_double_max();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern IntPtr basics_string_new();
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern void basics_string_delete( IntPtr _string );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern IntPtr basics_string_add( IntPtr _string, String value1, String value2 );
  
  [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
  static public extern void basics_string_print( string target_value, string correct_value );
  
  static void Main(){
    if ( ! basics_init() ) Environment.Exit( 1 );
    
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
    
    IntPtr basics_string = basics_string_new();
    if ( basics_string != IntPtr.Zero ){
      basics_string_print( Marshal.PtrToStringAnsi( basics_string_add( basics_string, "abcde", "あいうえお" ) ), "abcdeあいうえお" );
      basics_string_delete( basics_string );
    }
    
    basics_exit();
  }
}
