fn bitwise(a: i32, b: u8) {
    println!("a AND b: {}", a & b as i32);
    println!("a OR b: {}", a | b as i32);
    println!("a XOR b: {}", a ^ b as i32);
    println!("NOT a: {}", !a);
    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift
    println!("a >>> b: {}", (a as u32) >> b as u32); // logical right shift, since Rust's >> operator is an arithmetic shift. Note that we first cast 'a' to 'u32' so that we can perform a 32-bit shift
}
