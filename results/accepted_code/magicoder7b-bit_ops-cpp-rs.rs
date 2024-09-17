fn bitwise(a: i32, b: u32) {
    print!("a and b: ");
    println!("{}", a & b);

    print!("a or b:  ");
    println!("{}", a | b);

    print!("a xor b: ");
    println!("{}", a ^ b);

    print!("not a:   ");
    println!("{}", !a);

    let shift_amount = b as i32; // convert unsigned int to signed int

    print!("a shl b: ");
    println!("{}", (a << shift_amount) & 0xffffffff); // left-shift and mask to 32 bits

    print!("a shr b: ");
    println!("{}", a >> shift_amount); // right-shift (arithmetic)

    let mut ua = a as u32; // convert signed int to unsigned int

    print!("a lsr b: ");
    println!("{}", (ua >> shift_amount) & 0xffffffff); // logical right-shift and mask to 32 bits

    ua = a as u32; // reset to original value for right rotate

    print!("a ror b: ");
    println!("{}", ua.rotate_right(b)); // Rust's built-in rotate function
}
