```rust
fn bitwise(a: i32, b: i32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);
    println!("a << b: {}", a.rotate_left(b)); // left shift
    println!("a >> b: {}", a.signed_shift_right(b)); // arithmetic right shift
    println!("a >>> b: {}", a.unsigned_shift_right(b)); // logical right shift
    println!("a rol b: {}", a.rotate_left(b) as u32); //rotate left, Rust 1.5+
    println!("a ror b: {}", a.rotate_right(b) as u32); //rotate right, Rust 1.5+
}
```
