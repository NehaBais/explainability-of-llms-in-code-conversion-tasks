fn bitwise(a: i32, b: u32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);

    // Note: The Rust bitwise shift and rotate operators are the same as JavaScript's.
    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift
    println!("a >>> b: {}", a.wrapping_shr(b)); // logical right shift
    
    let mut result = a;
    for _ in 0..b {
        let last_bit = result & 1;
        result = (result >> 1) | (last_bit << 31); // left rotate
    }
    println!("a rotate_left b: {}", result);
    
    result = a;
    for _ in 0..b {
        let first_bit = (result >> 31) & 1;
        result = ((result & !1) | first_bit) << 1; // right rotate
    }
    println!("a rotate_right b: {}", result);
}