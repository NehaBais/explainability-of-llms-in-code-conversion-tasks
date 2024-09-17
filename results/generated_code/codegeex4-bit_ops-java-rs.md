In Rust, you can perform bitwise operations using the `&` (and), `|` (or), `^` (xor), and `!` (not) operators. The left shift operator is `<<`, right shift is `>>`, and for logical right shift you need to convert the number into a `u32` type before shifting, because Rust doesn't have an unsigned shift for signed integers.

To implement rotate operations in Rust, we can use the `rotate_left` and `rotate_right` functions from the standard library's primitive types.

Here is the equivalent code:

```rust
pub fn bitwise(a: i32, b: u32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);
    println!("a << b: {}", (a as u32) << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift
    println!("a >>> b: {}", (a as u32) >> b); // logical right shift
    println!("a rol b: {}", a.rotate_left(b)); // rotate left
    println!("a ror b: {}", a.rotate_right(b)); // rotate right
}
```

In this Rust version of the function:

- We use `println!` for printing as it is more idiomatic in Rust compared to `System.out.println`.
- The bitwise NOT operation, `~`, works as expected on integers.
- For left and logical right shifts, we must cast `a` to a `u32` because Rust's integer types do not have unsigned counterparts.
- We use the `.rotate_left()` and `.rotate_right()` methods for rotate operations.
