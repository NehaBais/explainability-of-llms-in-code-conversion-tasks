fn bitwise(a: i16, b: u16) {
    println!("a:   {:016b}", a as u16);
    println!("b:   {:016b}", b);

    // Bitwise logical operations
    let and = a & b;
    let or = a | b;
    let xor = a ^ b;
    let not = !a;
    println!("and: {:016b}", and as u16);
    println!("or:  {:016b}", or as u16);
    println!("xor: {:016b}", xor as u16);
    println!("not: {:016b}", not as u16);

    // Logical shifts (unsigned left operand)
    let shl = a << b;
    let shr = a >> b;
    println!("shl: {:016b}", shl as u16);
    println!("shr: {:016b}", shr as u16);

    // Arithmetic shifts (signed left operand)
    let las = a.wrapping_add(a << b);
    let ras = a.wrapping_sub(a >> b);
    println!("las: {:016b}", las as u16);
    println!("ras: {:016b}", ras as u16);

    // Rotations
    let rol = (a << b) | (a >> (16 - b));
    let ror = (a >> b) | (a << (16 - b));
    println!("rol: {:016b}", rol as u16);
    println!("ror: {:016b}", ror as u16);
}
fn main() {
    let a = -460;
    let b = 6;
    bitwise(a, b);
}
