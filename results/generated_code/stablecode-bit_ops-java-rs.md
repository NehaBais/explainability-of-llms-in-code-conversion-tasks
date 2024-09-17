Here is the equivalent Rust code for performing bitwise operations on two integers. 

```rust
fn bitwise(a: i32, b: i32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);
    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift
    println!("a >>> b: {}", a as u32 >> b as u32)); // logical right shift
    println!("a rol b: {}", a.rotate_left(b))); // rotate left, Rust 1.26+
    println!("a ror b: {}", a.rotate_right(b))); // rotate right, Rust 1.26+
}
```
This code will perform bitwise operations like AND, OR, and XOR on two integers. It will also perform operations such as left shift, right shift (arithmetic), and logical right shift. Additionally, it performs rotation operations on the first integer using the rotate_left and rotate_right methods provided by Rust's Integer trait.
