fn bitwise(a: u32, b: u32) {
    println!("a AND b: {}", a & b); // Bitwise AND operation
    println!("a OR b: {}", a | b); // Bitwise OR operation
    println!("a XOR b: {}", a ^ b); // Bitwise XOR operation
    println!("NOT a: {:b}", !a); // Bitwise NOT operation (in Rust, the `!` operator is used to get the bitwise negation)
    println!("a << b: {}", a << b); // Left shift
    println!("a >> b: {}", a >> b); // Arithmetic right shift
}

fn rotate_left(val: u32, shift: u32) -> u32 {
    let rotated = (val << shift) | (val >> (32 - shift));
    return rotated;
}

fn rotate_right(val: u32, shift: u32) -> u32 {
    let rotated = (val >> shift) | (val << (32 - shift));
    return rotated;
}
