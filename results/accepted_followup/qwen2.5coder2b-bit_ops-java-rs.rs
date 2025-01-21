fn bitwise(a: i32, b: i32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a); // Note: The negation operator (!) is used for the bitwise NOT operation.
    println!("a << b: {}", a << b); // Left shift
    println!("a >> b: {}", a >> b); // Right shift
    println!("a >>> b: {}", a >> b); // Logical right shift
    println!("a rol b: {}", a.rotate_left(b)); // Rotate left, Java 1.5+
    println!("a ror b: {}", a.rotate_right(b)); // Rotate right, Java 1.5+
}

fn main() {
    bitwise(10, 2);
}
