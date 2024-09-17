The following code is the equivalent of your Golang code written in Rust:

```rust
use std::fmt;
use std::fmt::Write;

fn bitwise(A: i16, b: i16) {
    println!("A:{:016b}", A as u16);
    println!("b:{:016b}", b as u16);

    // Bitwise logical operations
    println!("and: {:016b}", A & b);
    println!("or:  {:016b}", A | b);
    println!("xor: {:016b}", A ^ b);
    println!("not: {:016b}", !A);

    if b < 0 {
        println!("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
        return;
    }

    // Logical shifts (unsigned left operand)
    let shift_amount = b as u16;
    println!("shl: {:016b}", A << shift_amount);
    println!("shr: {:016b}", A >> shift_amount);

    // Arithmetic shifts (signed left operand)
    println!("las: {:016b}", A << (shift_amount as u32));
    println!("ras: {:016b}", A >> (shift_amount as u32));

    // Rotations
    let mut rotated = 0;
    rotated = ((A as u16) << shift_amount) | (((A as u16) >> (16 - shift_amount)) as u16);
    println!("rol: {:016b}", rotated);

    let mut rotated = 0;
    rotated = ((A as u16) >> shift_amount) | (((A as u16) << (16 - shift_amount)) as u16);
    println!("ror: {:016b}", rotated);
}

fn main() {
    let A: i16 = -460;
    let b: i16 = 6;
    bitwise(A, b);
}
```
