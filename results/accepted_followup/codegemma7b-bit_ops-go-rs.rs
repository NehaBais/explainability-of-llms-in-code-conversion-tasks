fn bitwise(a: i16, b: i16) {
    let a_u = a as u16;
    let b_u = b as u16;

    println!("a:   {:016b}", a_u);
    println!("b:   {:016b}", b_u);

    // Bitwise logical operations
    println!("and: {:016b}", a_u & b_u);
    println!("or:  {:016b}", a_u | b_u);
    println!("xor: {:016b}", a_u ^ b_u);
    println!("not: {:016b}", !a_u);

    if b < 0 {
        println!("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
        return;
    }

    // Logical shifts (unsigned left operand)
    println!("shl: {:016b}", a_u << b_u);
    println!("shr: {:016b}", a_u >> b_u);

    // Arithmetic shifts (signed left operand)
    println!("las: {:016b}", a << b_u);
    println!("ras: {:016b}", a >> b_u);

    // Rotations
    println!("rol: {:016b}", (a_u << b_u) | (a_u >> (16 - b_u)));
    println!("ror: {:016b}", (a_u >> b_u) | (a_u << (16 - b_u)));
}

fn main() {
    let a: i16 = -460;
    let b: i16 = 6;
    bitwise(a, b);
}
