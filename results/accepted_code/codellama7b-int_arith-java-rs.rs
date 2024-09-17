use std::io;

fn main() {
    // Get the 2 numbers from command line arguments
    let mut sc = io::scan();
    let a = sc.next_int();
    let b = sc.next_int();

    // Perform calculations and print results
    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);
    println!("quotient of a / b = {}", a as f64 / b as f64); // truncates towards 0
    println!("remainder of a / b = {}", a % b); // same sign as first operand
}
