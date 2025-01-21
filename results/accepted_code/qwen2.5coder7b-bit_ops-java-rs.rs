pub fn bitwise(a: i32, b: i32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);
    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift
    println!("a >>> b: {}", a.rotate_right(b as u32)); // logical right shift
    println!("a rol b: {}", rotate_left(a, b));
    println!("a ror b: {}", rotate_right(a, b));
}

pub fn rotate_left(value: i32, places: i32) -> i32 {
    (value << places) | value >> (32 - places)
}

pub fn rotate_right(value: i32, places: i32) -> i32 {
    (value >> places) | value << (32 - places)
}