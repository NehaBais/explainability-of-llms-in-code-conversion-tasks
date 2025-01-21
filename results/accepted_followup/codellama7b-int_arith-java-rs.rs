use std::io;

fn main() {
    let mut sc = io::stdin();
    let a = sc.next_int().unwrap();
    let b = sc.next_int().unwrap();

    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);
    println!("quotient of a / b = {}", a as f64 / b as f64); // truncates towards 0
    println!("remainder of a / b = {}", a % b); // same sign as first operand
}
