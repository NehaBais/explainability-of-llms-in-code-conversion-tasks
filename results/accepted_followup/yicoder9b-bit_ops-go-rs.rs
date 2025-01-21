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
    a = (a << b) | ((a & 0xFFFF_FFFFu32 as i32) >> (16 - b));
    println!("{:032b}", a);

    // Right shift (arithmetic) - equivalent to logical because a is signed but has been cast to u32.
    a = ((a & 0xFFFF_FFFFu32 as i32) >> b) | (a << (16 - b));
    println!("{:032b}", a);
}

fn main() {
    bitwise(-1i32, 4u32);
}