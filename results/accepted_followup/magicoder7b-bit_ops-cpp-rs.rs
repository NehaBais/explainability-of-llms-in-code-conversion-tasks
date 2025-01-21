fn bitwise(a: i32, b: u32) {
    print!("a and b: ");
    println!("{}", a as u32 & b);

    print!("a or b:  ");
    println!("{}", a as u32 | b);

    print!("a xor b: ");
    println!("{}", a as u32 ^ b);

    print!("not a:   ");
    println!("{}", !a);

    let shift_amount = b; // b is already unsigned, so no need for conversion here.

    print!("a shl b: ");
    println!("{}", (a as u32 << shift_amount) & 0xffffffff);

    print!("a shr b: ");
    println!("{}", a as u32 >> shift_amount); // right-shift (arithmetic)

    let mut ua = a as u32; // convert signed int to unsigned int

    print!("a lsr b: ");
    println!("{}", (ua >> shift_amount) & 0xffffffff); // logical right-shift and mask to 32 bits

    ua = a as u32; // reset to original value for right rotate

    print!("a ror b: ");
    println!("{}", ua.rotate_right(b)); // Rust's built-in rotate function
}
