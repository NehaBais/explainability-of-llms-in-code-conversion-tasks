fn main() {
    bitwise(10, 5);
}

fn bitwise(a: i32, b: i32) {
    println!("{}", a & b);
    println!("{}", a | b);
    println!("{}", a ^ b);
    println!("{}", a << b);
    println!("{}", a >> b);
    println!("{}", a.rotate_left(b) as u32); // rotate left, Rust 1.5+
    println!("{}", a.rotate_right(b) as u32); // rotate right, Rust 1.5+
}
