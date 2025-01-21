 Sure! Below is the Rust equivalent of the provided Go code:

```rust
fn bitwise(a: i16, b: i16) {
    println!("a:   {:016b}", a);
    println!("b:   {:016b}", b);

    // Bitwise logical operations
    println!("and: {:016b}", a & b);
    println!("or:  {:016b}", a | b);
    println!("xor: {:016b}", a ^ b);
    println!("not: {:016b}", !a);

    if b < 0 {
        println!("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
        return;
    }

    let ua = a as u16;
    let ub: u32 = b.into();

    // Logical shifts (unsigned left operand)
    println!("shl: {:016b}", (ua << ub) as u16);
    println!("shr: {:016b}", (ua >> ub) as u16);

    // Arithmetic shifts (signed left operand)
    println!("las: {:016b}", (a << ub) as i16);
    println!("ras: {:016b}", (a >> ub) as i16);

    // Rotations
    let shift_left = ua << ub;
    let shift_right = uint16(ua >> ub) >> (16 - ub);
    println!("rol: {:016b}", shift_left | shift_right as u16);

    let shift_right = uint16(ua >> ub) << (16 - ub);
    let shift_left = a << ub;
    println!("ror: {:016b}", shift_left | shift_right as i16);
}

fn main() {
    let a: i16 = -460;
    let b: i16 = 6;
    bitwise(a, b);
}
```

Note that in Rust, the `!` operator is used for logical NOT, and there are no unsigned/signed specific shifts. The shifts and rotates are handled using bit manipulation as shown above.
