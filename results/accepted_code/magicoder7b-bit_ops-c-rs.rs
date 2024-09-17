fn bitwise(a: i32, b: u32) {
    println!("a and b: {}", a & b);
    println!("a or b: {}", a | b);
    println!("a xor b: {}", a ^ b);
    println!("not a: {}", !a);
    // Since the C language allows variable shifts, Rust can't enforce constant shift amounts.
    // As such, we'll just multiply `b` by the size of an integer in bytes to convert it into bit shifts.
    let byte_shift = std::mem::size_of::<i32>() * 8;
    println!("a << n: {}", a << (b as i32 * byte_shift)); // left shift
    println!("a >> n: {}", a >> (b as i32 * byte_shift)); // right shift, no rotate equivalent in C
    let c = a as u32;
    println!("c >> b: {}", c >> b); // right rotate equivalent for unsigned integer
}
