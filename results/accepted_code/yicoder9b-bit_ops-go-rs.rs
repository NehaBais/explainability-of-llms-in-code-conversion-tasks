fn bitwise(mut a: i32, mut b: u32) {
    println!("{:032b}", a);
    println!("{:032b}", b as i32);

    // Bitwise logical operations
    let and_res = a & b as i32;
    let or_res = a | b as i32;
    let xor_res = a ^ b as i32;
    println!("{:032b}", and_res);
    println!("{:032b}", or_res);
    println!("{:032b}", xor_res);

    // Bitwise NOT operation
    let not_res = !a;
    println!("{:032b}", not_res);

    if b < 16 {
        // Left shift (logical)
        let shl_res = a << b as i32;
        println!("{:032b}", shl_res);

        // Right shift (logical)
        let shr_res = a >> b as i32;
        println!("{:032b}", shr_res);
    } else {
        println!("Right operand {} is greater than 15. All shifts require an unsigned right \
                operand (shift distance) that must be less than the bit width of the left operand (which is 16 for i32)", b);
    }

    // Left shift (arithmetic) - equivalent to logical because a is signed but has been cast to u32.
    let las_res = a << b as i32;
    println!("{:032b}", las_res);

    // Right shift (arithmetic) - equivalent to logical because a is signed but has been cast to u32.
    let ras_res = a >> b as i32;
    println!("{:032b}", ras_res);

    if b < 16 {
        // Rotate left
        a = (a << b) | ((a & 0xFFFF_FFFF) >> (16 - b));
        let rol_res = a;
        println!("{:032b}", rol_res);

        // Rotate right
        a = ((a & 0xFFFF_FFFF) >> b) | (a << (16 - b));
        let ror_res = a;
        println!("{:032b}", ror_res);
    } else {
        println!("Right operand {} is greater than 15. All rotations require an unsigned right \
                operand (rotation distance) that must be less than the bit width of the left operand (which is 16 for i32)", b);
    }
}

fn main() {
    let a: i32 = -460; //-0000_0000_0000_0000_1000_1110_0100_0000
    let b: u32 = 6; //0000_0000_0000_0000_0000_0000_0000_0110
    bitwise(a, b);
}
