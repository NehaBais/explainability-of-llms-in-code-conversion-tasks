fn bitwise(a: i16, b: i16) {
    println!("a:   {:016b}", a as u16);
    println!("b:   {:016b}", b as u16);

    // Bitwise logical operations
    println!("and: {:016b}", (a & b) as u16);
    println!("or:  {:016b}", (a | b) as u16);
    println!("xor: {:016b}", (a ^ b) as u16);
    println!("not: {:016b}", (!a as i16).wrapping_neg() as u16);

    let ua = a as u16;
    let ub = b.abs() as u32;

    // Logical shifts
    if b >= 0 {
        println!("shl: {:016b}", (ua << ub) as u16);
        println!("shr: {:016b}", (ua >> ub) as u16);
    } else {
        println!("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
    }

    // Arithmetic shifts
    println!("las: {:016b}", (a << ub) as i16 as u16);
    println!(
        "ras: {:016b}",
        ((a >> ub) | (a.wrapping_neg() & ((1u32 << ub) - 1) as i16).wrapping_neg()) as u16
    );

    // Rotations
    let rol = ((ua << ub) | (ua >> (16 - ub))) as i16;
    println!("rol: {:016b}", rol as u16);

    let ror = (((a >> ub) | (a.wrapping_neg() & ((1u32 << ub) - 1) as i16).wrapping_neg())
        << (16 - ub))
        | ((ua << (16 - ub)) | (ua >> ub));
    println!("ror: {:016b}", ror as u16);
}

fn main() {
    let a: i16 = -460;
    let b: i16 = 6;
    bitwise(a, b);
}
