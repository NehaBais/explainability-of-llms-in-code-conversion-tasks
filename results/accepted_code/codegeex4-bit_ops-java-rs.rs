pub fn bitwise(a: i32, b: u32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);
    println!("a << b: {}", (a as u32) << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift
    println!("a >>> b: {}", (a as u32) >> b); // logical right shift
    println!("a rol b: {}", a.rotate_left(b)); // rotate left
    println!("a ror b: {}", a.rotate_right(b)); // rotate right
}
