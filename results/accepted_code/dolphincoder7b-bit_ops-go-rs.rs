use std::fmt;

fn bitwise(a: i16, b: u8) {
    println!("a:    {:016b}", a);
    println!("b:    {:016b}", b);

    // Bitwise logical operations
    println!("and:  {:016b}", a & (i16::from(b)));
    println!("or:   {:016b}", a | (i16::from(b)));
    println!("xor:  {:016b}", a ^ (i16::from(b)));
    println!("not:  {:016b}", !a);

    if b < 0 {
        eprintln!("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
        return;
    }
    let ua = a as u32; // type casting to unsigned
    let ub = b as u32;

    // Logical shifts (unsigned left operand)
    println!("shl:  {:016b}", ua << ub);
    println!("shr:  {:016b}", ua >> ub);

    // Arithmetic shifts (signed left operand)
    println!("las:  {:016b}", a as i32 << ub);
    println!("ras:  {:016b}", a as i32 >> ub);

    // Rotations
    let a_as_u32 = a as u32; // converting signed to unsigned for rotating left
    println!(
        "rol:  {:016b}",
        (a_as_u32 << ub) | ((a_as_u32 & 0xffff0000) >> (32 - ub))
    );
    println!(
        "ror:  {:016b}",
        ((a as u32 >> ub) | (a_as_u32 & (1 << (ub - 1)) - 1)) as i16
    );
}

fn main() {
    let a = -460;
    let b: u8 = 6;

    bitwise(a, b);
}
