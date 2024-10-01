The equivalent Rust code for the given C function is as follows -
```rust
fn bitwise(a: i32, b: u32) {
    let mut a = a; // to avoid mutable global variables

    println!("a and b: {:?}", (a & b) as u32);
    println!("a or b: {:?}", (a | b) as u32);
    println!("a xor b: {:?}", (a ^ b) as u32);
    println!("not a: {:?}", (~a) as i32); 
  
    let mut c = a; // to avoid mutable global variables
    c >>= b as usize; // logical right shift
    println!("c >> b: {:#?}", c);
}
```
Please note that this is the equivalent code but since Rust does not support array and string interpolation directly like C, we used {:?} for i32 and (a | b) as u32, and ~a as i32 to handle the bitwise operations. 
The same applies to `c >>= b as usize;` which is equivalent to a <<= b in C but since Rust does not support array or string interpolation directly like C, we used {:?}.
