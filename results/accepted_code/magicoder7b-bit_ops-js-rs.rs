fn bitwise(a: i32, b: u8) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a); // equivalent to ~ in JavaScript
    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift
    println!("a >>> b: {}", a >> b); // logical right shift, since Rust's >> operator is an arithmetic shift.
}
