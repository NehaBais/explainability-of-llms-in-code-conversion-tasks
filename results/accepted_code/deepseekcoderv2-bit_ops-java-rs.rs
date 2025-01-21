fn bitwise(a: i32, b: i32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);
    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift
    println!("a >>> b: {}", (a as u32) >> b); // logical right shift, using unsigned conversion to avoid sign extension
    println!("a rol b: {}", i32::rotate_left(a, b)); // rotate left
    println!("a ror b: {}", i32::rotate_right(a, b)); // rotate right
}

fn main() {
    let a = 15; // Example values for a and b
    let b = 2;
    bitwise(a, b);
}