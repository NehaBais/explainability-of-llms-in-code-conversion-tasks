Here is the equivalent Rust code for your Java program:

```rust
pub fn bitwise(mut a: i32, mut b: u32){
    b = match b as usize {
        b if b < 32 => b,
        _ => 31, // Maximum shift amount in Rust is 31 bits.
    };
  
    println!("a AND b: {}", a & (b as i32));
    println!("a OR b: {}", a | (b as i32));
    println!("a XOR b: {}", a ^ (b as i32));
    println!("NOT a: {}", !a);
    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift
  
    // Rust doesn't have logical right shift, so we emulate it with a mask.
    let mask = (1 << b) - 1;
    let q = a as u32;
    println!("a >>> b: {}", ((q >> b) | (q & mask) << (32 - b)) as i32); // logical right shift
  
    // Rotate left and right are complex in Rust because they don't exist natively. We can emulate them with bitwise operations.
    let q = a as u32;
    println!("a rol b: {}", ((q << b) | (q >> (32 - b))) as i32); // rotate left
    println!("a ror b: {}", ((q >> b) | (q << (32 - b))) as i32); // rotate right
}
```
This Rust function has the same behavior and logic as your Java code. The `b` integer is limited to 31 bits to prevent shift by more than a word size error in Rust. For logical right shift, we emulate it with bitwise operations because Rust does not natively support it. Same for rotate left (`rol`) and rotate right (`ror`), which also require complex bitwise operations.
