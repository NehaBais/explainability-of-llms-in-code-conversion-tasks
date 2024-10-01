use std::convert::TryInto;
 
fn bitwise(a: i32, b: usize) {
    let _a_and_b = a & (b as i32); println!("a and b: {}", _a_and_b);
    let _a_or_b = a | (b as i32);  println!("a or b: {}", _a_or_b);
    let _a_xor_b = a ^ (b as i32); println!("a xor b: {}", _a_xor_b);
    let _not_a = ~a;               println!("not a: {}", _not_a);
     
    // left shift
    let _a_left_shift = i32::wrapping_mul(a, 1 << b); println!("a << n: {}", _a_left_shift);
  
    // arithmetic right shift
    let _a_right_shift = a >> b;   println!("a >> n: {}", _a_right_shift); 
  
    // logical right shift
    let c = (a as u32) >> b;        println!("c >> b: {}", c as i32);

    /* In Rust there are no built-in rotation operators. Here's a manual implementation of left rotate */
    let _a_left_rotate = ((a << b) | (a >> (32 - b))) & !(1 << 32 - b);   println!("a left rotated: {}", _a_left_rotate);
     
    /* Here's a manual implementation of right rotate */
    let c = a as u32;
    let _c_right_rotate = ((c >> b) | (c << (32 - b))) & !(1 << 32 - b);  println!("a right rotated: {}", _c_right_rotate as i32);
}