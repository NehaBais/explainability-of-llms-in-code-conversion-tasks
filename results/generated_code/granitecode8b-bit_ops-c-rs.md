Here's the equivalent code in Rust:
```
fn bitwise(a: i32, b: i32) {
 println!("a and b: {}", a & b);
 println!("a or b: {}", a | b);
 println!("a xor b: {}", a ^ b);
 println!("not a: {}", !a);
 println!("a << n: {}", a << b); // left shift
 println!("a >> n: {}", a >> b); // arithmetic right shift
 let c = a as u32; // convert signed integer to unsigned for logical shift
 println!("c >> b: {}", c >> b); // logical right shift
 // there are no rotation operators in Rust, so we use bitwise operations instead
 let rot_amount = if b < 0 { -b } else { b };
 let rotated = ((a << rot_amount) & 0x7FFFFFFF) | (a >> (32 - rot_amount));
 println!("rotated: {}", rotated);
}
```
Note that in Rust, bitwise operations on signed integers are treated as arithmetic operations. To perform a logical right shift with sign extension, you can use the `>>` operator instead of the `>>>` operator. Additionally, to rotate bits in Rust, you can use bitwise operations or the `rotl` and `rotr` functions from the `std::mem` module.

