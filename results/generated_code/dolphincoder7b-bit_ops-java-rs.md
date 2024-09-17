The Rust version of the code is as follows:
```rust
use std::ops::{BitAnd, BitOr, BitXor, Not, Shl, Shr, ShrAssign};
use std::convert::TryInto;
pub fn bitwise(a: i32, b: i32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);
    println!("a << b: {}", a << b);  // left shift
    println!("a >> b: {}", a >> b);  // arithmetic right shift
    println!("a >>> b: {}", a.try_into().unwrap() >> b);  // logical right shift
    println!("a rol b: {}", rotate_left(a, b));  // rotate left
    println!("a ror b: {}", rotate_right(a, b));  // rotate right
}
fn rotate_left(mut x: i32, mut n: i32) -> i32 {
    let bits = x.count_ones();
    if n < 0 {
        return rotate_right(x, -n);
    }
    n %= bits;
    (x << n) | (x >> (bits - n))
}
fn rotate_right(mut x: i32, mut n: i32) -> i32 {
    let bits = x.count_ones();
    if n < 0 {
        return rotate_left(x, -n);
    }
    n %= bits;
    (x >> n) | (x << (bits - n))
}
```
