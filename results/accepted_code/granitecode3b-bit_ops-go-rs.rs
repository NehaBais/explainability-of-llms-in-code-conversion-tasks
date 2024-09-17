fn bitwise(a: i16, b: i16) {
    println!(
        "a:   {:b}
",
        a
    );
    println!(
        "b:   {:b}
",
        b
    );

    // Bitwise logical operations
    println!(
        "and: {:b}
",
        a & b
    );
    println!(
        "or:  {:b}
",
        a | b
    );
    println!(
        "xor: {:b}
",
        a ^ b
    );
    println!(
        "not: {:b}
",
        !a
    );

    if b < 0 {
        println!("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
        return;
    }
    let ua = a as u16;
    let ub = b as u32;

    // Logical shifts (unsigned left operand)
    println!(
        "shl: {:b}
",
        ua << ub
    );
    println!(
        "shr: {:b}
",
        ua >> ub
    );

    // Arithmetic shifts (signed left operand)
    println!(
        "las: {:b}
",
        a << ub
    );
    println!(
        "ras: {:b}
",
        a >> ub
    );

    // Rotations
    println!(
        "rol: {:b}
",
        (a as u32) << ub | (a as u32) >> (16 - ub)
    );
    println!(
        "ror: {:b}
",
        (a as u32) >> ub | (a as u32) << (16 - ub)
    );
}
fn main() {
    let a = -460;
    let b = 6;
    bitwise(a, b);
}
