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