The equivalent code in Rust would look like this:

```rust
fn bitwise(A: i32, b: u32) {
  println!("A AND b: {}", A & (b as i32));
  println!("A OR b: {}", A | (b as i32));
  println!("A XOR b: {}", A ^ (b as i32));
  println!("NOT a: {}", !(A != 0));
  println!("A << b: {}", A << b); // left shift
  println!("A >> b: {}", A >> b); // arithmetic right shift

  // Rust doesn't have logical right shift, but it can be achieved by converting to unsigned before shifting
  let unsigned_A = A as u32;
  println!("A >>> b (logical): {}", unsigned_A >> b); 

  // Bit rotate is not directly supported in Rust. You would need to implement it manually
  println!("A rol b: {:b}", bit_rotate_left(unsigned_A, b)); //rotate left
  println!("A ror b: {:b}", bit_rotate_right(unsigned_A, b)); //rotate right
}

// Rotate a 32-bit integer 'x' to the left by 'rot' bits.
fn bit_rotate_left(mut x: u32, rot: u32) -> u32 {
    let r = rot % 32;
    if r == 0 { return x }
    let lo = x << r;
    let hi = x >> (32 - r);
    lo | hi
}

// Rotate a 32-bit integer 'x' to the right by 'rot' bits.
fn bit_rotate_right(mut x: u32, rot: u32) -> u32 {
    let r = rot % 32;
    if r == 0 { return x }
    let hi = x >> r;
    let lo = x << (32 - r);
    hi | lo
}
```

Please note that the Rust equivalent of `Integer.rotateLeft(A, b)` and `Integer.rotateRight(A, b)` is not provided because those methods are only available in Java 1.5+. Also note that in Rust, bitwise NOT (`!`) returns a boolean value (false for non-zero and true for zero), so the original line checking if A was not equal to zero (i.e., `!(A != 0)`) is changed to just `!` since we know `A` will always be an integer.
