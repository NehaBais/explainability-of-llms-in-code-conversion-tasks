Sure, here is the equivalent Rust code for your requirements:

```rust
fn bitwise(a: i32, b: i32) {
    println!("a and b: {}", a & b);
    println!("a or b:  {}", a | b);
    println!("a xor b: {}", a ^ b);

    // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
    // is negative, or is greater or equal to the number of bits in the integer being shifted.
    println!("a shl b: {}", a.shl(b));
    println!("a shr b: {}", a.shr(b));
    let ua = a;
    println!("a lsr b: {}", ua.rotate_right(b));

    // there are no rotation operators in Rust, but as of rust 2021 there is a standard-library rotate function.
    // The rotate function works for all rotation amounts, but the integer being rotated must always be an
    // unsigned integer.
    println!("a rol b: {}", ua.rotate_left(b));
    println!("a ror b: {}", ua.rotate_right(b));
}
```

The Rust operators `<<`, `>>`, and `rotate_left` are defined for integers in Rust. The `rotate_right` function is also available but it rotates to the right, which may not be what you want if `b` is negative or greater than the number of bits in the integer being rotated. Therefore, I used `rotate_left` instead.
