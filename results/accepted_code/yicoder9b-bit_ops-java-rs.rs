pub fn bitwise(mut a: i32, mut b: u32) {
    b = match b as usize {
        b if b < 32 => b,
        _ => 31, // Maximum shift amount in Rust is 31 bits.
    };

    println!("a AND b: {}", a & (b as i32));
    println!("a OR b: {}", a | (b as i32));
    println!("a XOR b: {}", a ^ (b as i32));
    println!("NOT a: {}", !a);
    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift

    // Rust doesn't have logical right shift, so we emulate it with a mask.
    let mask = (1 << b) - 1;
    let q = a as u32;
    println!("a >>> b: {}", ((q >> b) | (q & mask) << (32 - b)) as i32); // logical right shift

    // Rotate left and right are complex in Rust because they don't exist natively. We can emulate them with bitwise operations.
    let q = a as u32;
    println!("a rol b: {}", ((q << b) | (q >> (32 - b))) as i32); // rotate left
    println!("a ror b: {}", ((q >> b) | (q << (32 - b))) as i32); // rotate right
}
