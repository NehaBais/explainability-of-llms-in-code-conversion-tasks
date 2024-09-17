In Rust, the code would look like this:

```rust
fn bitwise(A: i32, B: i32) {
    println!("A AND B: {}", A & B);
    println!("A OR B: {}", A | B);
    println!("A XOR B: {}", A ^ B);
    println!("NOT A: {}", !(A as u32)); // Note that Rust doesn't support bitwise NOT for negative numbers. Cast to unsigned first.
    println!("A << B: {}", A << B); // left shift
    println!("A >> B: {}", A >> B); // arithmetic right shift
}
```

Also, Rust doesn't have a logical right shift operator (>>>). However, the behavior of arithmetic and logical right shift can be simulated using bitwise AND. The "right-most" bit is moved to the left side. Therefore, for a positive number `n`, its binary representation will remain same after arithmetic or logical right shift by `m` positions if `n < 2^(m+1)`.

If you want the behavior of a logical right shift, consider using `A >> B & ((1 << B) - 1)` where `(1 << B) - 1` is a bitmask for the most significant `B` bits of an integer.
