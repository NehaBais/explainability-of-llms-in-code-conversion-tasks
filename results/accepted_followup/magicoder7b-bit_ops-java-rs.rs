fn bitwise(mut a: i32, b: u8) {
    println!("a AND b: {}", (a & b as i32));
    println!("a OR b: {}", (a | b as i32));
    println!("a XOR b: {}", (a ^ b as i32));
    println!("NOT a: {}", ~a);
    println!("a << b: {}", (a << b) as i32); // left shift
    println!("a >> b: {}", ((a & 0xffff_ffff) as u32).wrapping_shr(b)); // arithmetic right shift, Rust's `shr` doesn't support signed numbers
    println!("a >>> b: {}", (a.wrapping_shl(b) & 0xffff_ffff) as i32); // logical right shift with sign extension
}
