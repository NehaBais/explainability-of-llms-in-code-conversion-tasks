fn bitwise(a: i32, b: u8) {
    println!("a AND b: {}", (a & b as i32));
    println!("a OR b: {}", (a | b as i32));
    println!("a XOR b: {}", (a ^ b as i32));
    println!("NOT a: {}", ~a);
    println!("a << b: {}", (a << b) as i32); // left shift
    println!("a >> b: {}", ((a as u32).wrapping_shr(b)) as i32); // arithmetic right shift, Rust's `shr` doesn't support signed numbers
    println!("a >>> b: {}", (a.wrapping_shr(b) & 0xffff_ffff) as i32); // logical right shift with sign extension

    #[cfg(feature = "rotate")]
    // feature-gated for rotate operations, requires "num" dependency in Cargo.toml
    {
        println!("a rol b: {}", (a << b | a >> 32 - b) as i32); //rotate left
        println!("a ror b: {}", ((a << 32 - b) | a >> b) as i32); //rotate right with sign extension, requires "num" dependency in Cargo.toml
    }
}
