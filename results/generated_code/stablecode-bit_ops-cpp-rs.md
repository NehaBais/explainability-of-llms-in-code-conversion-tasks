Here is the equivalent Rust code for the given C++ routine:

```rust
fn bitwise(mut a: u32, mut b: i32) {
    println!("a and b: {}", a & (u32::from_ne_bytes([0x00FF, 0xFF00, 0x0000]) as u32)) // Assuming little-endian encoding for unsigned integers.

    println!("a or b:  {}", a | u32::from_ne_bytes([0x0000, 0x00FF, 0xFF00, 0xFFFF]) as u32)) // Assuming little-endian encoding for unsigned integers.

    println!("a xor b: {}", a ^ u32::from_ne_bytes([0x0000, 0x00FF, 0xFF00, 0xFFFF]) as u32)) // Assuming little-endian encoding for unsigned integers.
  
    // Print bitwise NOT of first integer (mut a)). We assume that the integer is represented in 32 bits and uses two's complement representation.
    println!("not a:   {}", !a));

    // Perform a left shift on the first integer (mut a)) by the amount specified by the second integer (mut b)).
    println!("a shl b: {}", a << b as u32));

    // Perform a right logical shift on the first integer (mut a)) by the amount specified by the second integer (mut b)).
    println!("a shr b:  {}", a >> b as u32));

    // Perform an arithmetic left rotate on the first integer (mut a)) by the amount specified by the second integer (mut b)).
    let rol_result = (a << b) | (a >> (u32::BITS - b))) ;
    println!("a rol b: {}", rol_result));

    // Perform an arithmetic right rotate on the first integer (mut a)) by the amount specified by the second integer (mut b)).
    let ror_result = (a >> b) | (a << (u32::BITS - b))) ;
    println!("a ror b: {}", ror_result));

    // Perform arithmetic right shift on the first integer (mut a)) by the amount specified by the second integer (mut b)). This operation works for all rotation amounts, but the integer being shifted must always be an unsigned integer.
    println!("a shr b:  {}", a >> b as u32));

    // It is important to note that in Rust, when shifting a value right or left by a negative number of bits, the behavior may not be what you expect.
    // In C/C++, the shift operators are not guaranteed to work if the shift count is negative or greater than or equal to the number of bits in the integer being shifted.

    // However, in Rust, these operations always work correctly regardless of whether the shift count is negative or positive.
}
```

This code performs bitwise operations (AND, OR, XOR) and right shifts on two unsigned integers `a` and `b`. The function takes ownership of its arguments.
