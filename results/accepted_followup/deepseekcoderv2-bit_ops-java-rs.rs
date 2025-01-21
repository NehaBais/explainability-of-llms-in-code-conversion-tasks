fn bitwise(a: i32, b: i32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);
    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a as u32 >> b as u32); // arithmetic right shift, corrected types
    println!("a rol b: {}", i32::rotate_left(a, b)); // rotate left
    println!("a ror b: {}", i32::rotate_right(a, b)); // rotate right
}
