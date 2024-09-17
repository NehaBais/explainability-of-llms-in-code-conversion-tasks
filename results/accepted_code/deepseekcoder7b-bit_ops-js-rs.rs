fn bitwise(mut a: i32, b: u32) {
   println!("a AND b: {}", a &= b); 
   println!("a OR b: {}", a |= b);
   println!("a XOR b: {}", a ^= b);
    // Bitwise NOT on the first integer
   let not_result = ~a;
   println!("NOT a: {}", not_result); 
   a <<= b;  // left shift, reassigns to 'a' before printing result.
   println!("a LEFT SHIFT b: {}", a);
   
   if b < 32 { // Arithmetic right shift is only defined for 0 <= b <= 31
       let right_shift = a >> b;
       println!("a RIGHT ARITHMETIC SHIFT b: {}", right_shift);
   } else {
   	println!("b should be in the range of 0 to 31 for arithmetic right shift.");
   }

   if b < 32 && a.is_sign_positive() { // Logical right shift is only defined for 0 <= b <= 31 and a >= 0
       println!("a RIGHT LOGICAL SHIFT b: {}", a >>> b);
   } else if b < 32 {
   	println!("b should be in the range of 0 to 31 for logical right shift.");
   	println!("a should be non negative for logical right shift");
   }
}

fn left_rotate(x: u32, count: u32) -> u32 { 
    let l = x.leading_zeros();
    ((x << count) | (x >> (32 - count))) & !(!0 << l)
}
  
fn right_rotate(x: u32, count: u32) -> u32 { 
    let t = x.trailing_zeros();
    ((x >> count) | (x << (32 - count))) & !(!0 << t)
}

println!("a LEFT ROTATE b: {}", left_rotate(a,b)); 
println!("a RIGHT ROTATE b: {}", right_rotate(a,b));