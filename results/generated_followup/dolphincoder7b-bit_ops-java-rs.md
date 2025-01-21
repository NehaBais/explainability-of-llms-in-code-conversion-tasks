The error occurred because Rust does not support bitwise operations directly on integers; it uses the `std::ops` module to define traits like `BitAnd`, `BitOr`, etc., which can be implemented for integers. 

To fix this issue, we need to use the appropriate integer trait implementations for the individual operations. For example, `&` is defined in `BitAnd`, so `x & y` will call `x.bitand(y)`. Similarly, `|` is defined in `BitOr`, so `x | y` will call `x.bitor(y)`, etc.

To fix the `E0308` error on line 20 and 28 by changing the type of `bits - n`, we need to use the `as` keyword to convert the result of subtraction from an integer to a different integer type. Here's the updated code:
```rust
use std::ops::{BitAnd, BitOr};

fn bitwise(a: i32, b: i32) {
    println!("{} AND {} is {}", a, b, (a & b));
    println!("{} OR {} is {}", a, b, (a | b));
    println!("NOT {} is {}", !a);
    println!("{} XOR {} is {}", a ^ b, (a ^ b).count_ones());

    let bits = std::mem::size_of::<i32>() * 8;
    println!(
        "{} L-R shift {} places is: {:#?}",
        a,
        b,
        (a << (b % bits)) | (a >> ((bits - b) % bits)),
    );
}
```
