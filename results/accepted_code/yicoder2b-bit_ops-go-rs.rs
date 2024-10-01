fn main() {
    let a = -460; // in decimal 1708 in binary is 100111100 in hex
    let b = 6; // in decimal 6 in binary is 00000110 in hex
    bitwise(a as i16, b);
}

fn bitwise(mut a: i16, mut b: u8) {
    println!("a: {:b}", a as usize); // print the binary representation of a
    println!("b: {:b}", b); // print the binary representation of b

    // Bitwise logical operations
    let a_and_b = a & b; 
    let a_or_b = a | b; 
    let a_xor_b = a ^ b;
    let not_a = ~a;
    println!("and: {:b}", a_and_b as usize); // print the binary representation of a AND b
    println!("or: {:b}", a_or_b as usize); // print the binary representation of a OR b
    println!("xor: {:b}", a_xor_b as usize); // print the binary representation of a XOR b
    println!("not: {:b}", not_a as usize); // print the binary representation of NOT a

    if b < 0 {
        println!("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
        return;
    }
    let mut ua = a as u16; // convert a to unsigned int
    let mut ub = b as u32; // convert b to unsigned int

    // Logical shifts (unsigned left operand)
    println!("shl: {:b}", ua << ub); 
    // print the binary representation of shifted left operation
    println!("shr: {:b}", ua >> ub); // print the binary representation of shifted right operation

    // Arithmetic shifts (signed left operand)
    let mut lua = a as i16; // convert a to signed int
    let mut lub = b as u32; // convert b to unsigned int 
    println!("las: {:b}", lua << lub); // print the binary representation of Left Arithmetic shift operation
    println!("ras: {:b}", lua >> lub); // print the binary representation of Right Arithmetic shift operation

    // Rotations
    let rot_a = (lua<<ub|i16::from_bits(ua>>ub)) as u16; 
    let rot_b = (i16::from_bits(ua>>ub)|lua<<(16-ub)) as u16; 
    println!("rol: {:b}", rot_a); // print the binary representation of Left Rotate operation
    println!("ror: {:b}", rot_b); // print the binary representation of Right Rotate operation
}