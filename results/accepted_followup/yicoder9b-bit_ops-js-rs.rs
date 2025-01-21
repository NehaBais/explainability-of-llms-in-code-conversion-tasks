fn main() {
    bitwise(10, 2); // replace these values with whatever you need
}

fn bitwise(a_i32: i32, b: u32) {
    let a = u32::from(a_i32);
   println!("a AND b: {:?}", a & b as i32);
   println!("a OR b: {:?}", a | b as i32);
   println!("a XOR b: {:?}", a ^ b as i32);
   let not_a = !a; // this works with u32, no need to convert to i32
   println!("NOT a: {:?}", not_a);
   let left_shift = a << b;  // left shift
   println!("a << b: {:?}", left_shift as i32); 
   let right_arithmetic_shift = a >> b; // arithmetic right shift
   println!("a >> b: {:?}", right_arithmetic_shift as i32);
  
    // logical right shift cannot be done with basic bitwise operators in Rust. We need to convert into unsigned type for this operation.
   let right_logical_shift = a >>> b; // logical right shift
   println!("a >>> b: {:?}", right_logical_shift as i32);
}