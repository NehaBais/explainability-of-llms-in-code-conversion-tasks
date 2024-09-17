Here's the converted code from Java to Rust:
```rust
fn bitwise(a: i32, b: i32) {
 println!("a AND b: {}", a & b);
 println!("a OR b: {}", a | b);
 println!("a XOR b: {}", a ^ b);
 println!("NOT a: {}", !a);
 println!("a << b: {}", a << b); // left shift
 println!("a >> b: {}", a >> b); // arithmetic right shift
 println!("a >>> b: {}", a >> b); // logical right shift
 println!("a rol b: {}", a.rotate_left(b as u32)); // rotate left, Rust 1.5+
 println!("a ror b: {}", a.rotate_right(b as u32)); // rotate right, Rust 1.5+
}
```
In Rust, the bitwise operations are performed using the bitwise AND (`&`), OR (`|`), XOR (`^`), and NOT (`!`) operators. The left shift (`<<`), right shift (`>>`), and arithmetic right shift (`>>>`) operators are used to perform shifts on integers. The rotate left (`rol`) and rotate right (`ror`) operations are performed using the `rotate_left` and `rotate_right` methods of the `i32` type, respectively. Note that the shift amount is specified in bits, so no additional conversion is necessary.

