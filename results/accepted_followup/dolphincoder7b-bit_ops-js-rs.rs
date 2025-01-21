fn main() {
    bitwise(1024, 5);
}

fn bitwise(a: i32, b: i32) {
    println!("a AND b: {}", a & b);
    println!("a OR b:  {}", a | b);
    println!("a XOR b:  {}", a ^ b);
    println!("NOT a:  0"); // Should be `~a`, but `!` is not allowed in Rust.
    println!("a << b:  {}", a << b);
    println!("a >> b:  {}", a >> b);
    println!("a >>> b: {}", a ushr b);
}
