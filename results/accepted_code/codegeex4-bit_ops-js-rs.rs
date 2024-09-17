fn bitwise(a: i32, b: i32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);

    let left_shift = (a << b as u32).try_into().unwrap_or(0); // Rust's shift operators only accept unsigned integers, hence the cast
    println!("a << b: {}", left_shift);

    let right_shift = (a >> b as u32).try_into().unwrap_or(0);
    println!("a >> b: {}", right_shift);

    let arith_right_shift = (a.wrapping_shr(b)).try_into().unwrap_or(0); // Rust's signed integer shifts are different than the JS version
    println!("a >> b: {}", arith_right_shift);

    let left_rotate = a.rotate_left((b & 31) as u32).try_into().unwrap_or(0);
    println!("Left rotate: {}", left_rotate);

    let right_rotate = a.rotate_right((b & 31) as u32).try_into().unwrap_or(0);
    println!("Right rotate: {}", right_rotate);
}
