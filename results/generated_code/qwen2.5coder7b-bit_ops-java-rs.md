Here is the equivalent Rust code for your Java function:

```rust
pub fn bitwise(a: i32, b: i32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);
    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift
    println!("a >>> b: {}", a.rotate_right(b as u32)); // logical right shift
    println!("a rol b: {}", rotate_left(a, b));
    println!("a ror b: {}", rotate_right(a, b));
}

pub fn rotate_left(value: i32, places: i32) -> i32 {
    (value << places) | value >> (32 - places)
}

pub fn rotate_right(value: i32, places: i32) -> i32 {
    (value >> places) | value << (32 - places)
}
```

This Rust version does the bitwise operations the same way as the Java version. The `rotate_left` and `rotate_right` functions are implemented because Rust's standard library doesn't have these functions. These functions rotate a given integer to the left or right, by shifting bits in a circular manner.

Please note that unlike Java, Rust uses 2s complement for negative integers, so bitwise operations can result in different outputs for negative inputs.
