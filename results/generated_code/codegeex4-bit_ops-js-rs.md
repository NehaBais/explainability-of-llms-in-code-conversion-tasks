In Rust, you can use the bitwise operators as well as methods for rotations and shifts. Here is a conversion of your JavaScript code to Rust:

```rust
fn bitwise(a: i32, b: i32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);

    let left_shift = (a << b as u32).try_into().unwrap_or(0); // Rust's shift operators only accept unsigned integers, hence the cast
    println!("a << b: {}", left_shift);

    let right_shift = (a >> b as u32).try_into().unwrap_or(0);
    println!("a >> b: {}", right_shift);

    let arith_right_shift = (a.wrapping_shr(b)).try_into().unwrap_or(0); // Rust's signed integer shifts are different than the JS version
    println!("a >> b: {}", arith_right_shift);

    let left_rotate = a.rotate_left((b & 31) as u32).try_into().unwrap_or(0); 
    println!("Left rotate: {}", left_rotate);

    let right_rotate = a.rotate_right((b & 31) as u32).try_into().unwrap_or(0);
    println!("Right rotate: {}", right_rotate);
}
```

Please note that because Rust doesn't have a built-in function for bitwise rotation, you need to use the `rotate_left` and `rotate_right` methods on integers. These methods work by cyclically shifting bits.

Also, note the `.try_into().unwrap_or(0)` part of the code which converts u32 results from shift operations back into i32 because Rust's shift operators only accept unsigned integers, unlike JavaScript's bitwise operators. The `unwrap_or(0)` is a safety measure to ensure that if conversion fails (which should never happen in this case), 0 is returned instead.

Lastly, note the `(b & 31)`, which is used for both left and right rotation because Rust only allows rotations by up to 31 bits due to how they're implemented under the hood.
