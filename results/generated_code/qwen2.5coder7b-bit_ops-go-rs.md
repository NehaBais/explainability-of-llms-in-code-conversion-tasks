Here is the equivalent Rust code for your GoLang program:

```rust
fn bitwise(a: i32, b: u32) {
    println!("a:   {:016b}", a);
    println!("b:   {:016b}", b);

    // Bitwise logical operations
    println!("and: {:016b}", a & b as i32);
    println!("or:  {:016b}", a | b as i32);
    println!("xor: {:016b}", a ^ b as i32);
    println!("not: {:016b}", !a);

    // Logical shifts (unsigned left operand)
    println!("shl: {:016b}", a << b as u32);
    println!("shr: {:016b}", a >> b as u32);

    // Arithmetic shifts
    println!("las: {:016b}", (a as i32) << b as u32);
    println!("ras: {:016b}", a >> b as u32);

    // Rotations
    println!("rol: {:016b}", (a << b as u32) | (a >> (32 - b as u32)));
    println!("ror: {:016b}", (a >> b as u32) | (a << (32 - b as u32)));
}

fn main() {
    let a = -460;
    let b = 6;
    bitwise(a, b as u32);
}
```
This Rust code does exactly the same thing as your GoLang program: It takes two integers and performs various bitwise operations on them. The only difference is that in Rust you need to explicitly cast `b` from `u32` to `i32` for some of the bitwise operations, because Rust's type system enforces stricter rules around signed and unsigned types than GoLang does.

Please note: There could be an issue with Rust overflow or underflow if the shift/rotate amount is larger than 32. This can be avoided by using modulo operation on `b` to keep it within the range of 0-31 (for a 32-bit integer).
