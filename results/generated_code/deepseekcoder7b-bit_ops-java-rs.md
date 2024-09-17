In Rust, bitwise operations are performed using the `^` , `|` , `&` symbols and not using the keywords like `and` or `or`. Also, for left rotation and right rotation, there is no built-in function in rust so we need to create those functions ourselves as follows:
```rust
fn bitwise(a: u32, b: u32) {
    println!("a AND b: {}", a & b);  // Bitwise AND operation
    println!("a OR b: {}", a | b);   // Bitwise OR operation
    println!("a XOR b: {}", a ^ b);  // Bitwise XOR operation
    println!("NOT a: {:b}", !a);     // Bitwise NOT operation (in Rust, the `!` operator is used to get the bitwise negation)
    println!("a << b: {}", a << b);  // Left shift
    println!("a >> b: {}", a >> b);  // Arithmetic right shift
}

fn rotate_left(val: u32, shift: u32) -> u32 {
    let rotated = (val << shift) | (val >> (32 - shift));
    return rotated;
}
  
fn rotate_right(val: u32, shift: u32) -> u32 {
    let rotated = (val >> shift) | (val << (32 - shift));
    return rotated;
}
```
However note that in the case of logical right shift `(a >>> b)` is not supported by Rust as it doesn't exist. We use arithmetic right shift `(a >> b)` instead. Also, bitwise NOT operation (Java equivalent to Rust's `!` operator) results a negative value because all bits of the number will be inverted except for sign bit, which is not what you usually want from this operation.

