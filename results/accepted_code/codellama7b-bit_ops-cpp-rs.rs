fn main() {
    bitwise(5, 3);
}

fn bitwise(a: i32, b: i32) {
    // Bitwise AND
    let result_and = a & b;
    println!("a and b: {}", result_and);

    // Bitwise OR
    let result_or = a | b;
    println!("a or b:  {}", result_or);

    // Bitwise XOR
    let result_xor = a ^ b;
    println!("a xor b: {}", result_xor);

    // Bitwise NOT
    let result_not = !a;
    println!("not a:   {}", result_not);

    // Left shift
    let result_shl = a << b;
    println!("a shl b: {}", result_shl);

    // Right shift (arithmetic)
    let result_shr = a >> b;
    println!("a shr b: {}", result_shr);

    // Right shift (logical)
    let ua = a as u32;
    let result_lsr = ua >> b;
    println!("a lsr b: {}", result_lsr);

    // Rotate left
    let result_rol = std::rotl(ua, b);
    println!("a rol b: {}", result_rol);

    // Rotate right
    let result_ror = std::rotr(ua, b);
    println!("a ror b: {}", result_ror);
}
