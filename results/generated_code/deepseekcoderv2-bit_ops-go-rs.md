Answer:
```rust
fn bitwise(a: i32, b: u32) {
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

    // Logical shifts (unsigned left operand)
    let ua = a as u32;
    println!("shl: {:016b}", ua << b);
    println!("shr: {:016b}", ua >> b);

    // Arithmetic shifts (signed left operand)
    println!("las: {:016b}", a << b);
    println!("ras: {:016b}", a >> b);

    // Rotations
    println!(
        "rol: {:016b}",
        (ua << b) | (a as u32 >>(16 - b))
    );
    println!(
        "ror: {:016b}",
        ((a as u32 >> b) | a <<(16 - b))
    );
}

fn main() {
    bitwise(-460, 6);
}
```
