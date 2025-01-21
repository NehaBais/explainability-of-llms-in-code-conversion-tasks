In Rust, the bitwise operations are implemented using `&`, `|` and `^` for AND, OR and XOR respectively. In Rust, the left shift (`<<`) operator is used for shifting bits to the left. The right shift (`>>`) operator for signed integers is also implemented, while the right logical shift (`>>>`) shifts bits to the right without filling in zeros for the vacant spaces.

Here's how you can implement this in Rust:

```rust
fn bitwise(a: i32, b: i32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a); // Note: The negation operator (!) is used for the bitwise NOT operation.
    println!("a << b: {}", a << b); // Left shift
    println!("a >> b: {}", a >> b); // Right shift
    println!("a >>> b: {}", a >> b); // Logical right shift
    println!("a rol b: {}", a.rotate_left(b)); // Rotate left, Java 1.5+
    println!("a ror b: {}", a.rotate_right(b)); // Rotate right, Java 1.5+
}

fn main() {
    bitwise(10, 2);
}
```

In the code above:
- `a & b` computes the AND of `a` and `b`.
- `a | b` computes the OR of `a` and `b`.
- `a ^ b` computes the XOR of `a` and `b`.
- `!a` computes the bitwise NOT of `a`.
- `a << b` shifts the bits of `a` to the left by `b` positions.
- `a >> b` shifts the bits of `a` to the right by `b` positions.
- `a >>> b` shifts the bits of `a` to the right by `b` positions, discarding the upper bits if they are sign extended.
- `a.rotate_left(b)` performs a left rotation of `a` by `b` positions.
- `a.rotate_right(b)` performs a right rotation of `a` by `b` positions.

This implementation assumes that you're working with integer types (`i32`). If you need to handle different types, you can adjust the type accordingly.
