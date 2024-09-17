use std::io::{self, Write}; // Import I/O functions.

fn main() {
    let mut a = String::new();
    let mut b = String::new();
    print!("Enter two numbers: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut a).expect("Failed to read line");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let a: i32 = a.trim().parse().expect("Not a number");
    let b: i32 = b.trim().parse().expect("Not a number");

    println!("a+b  = {}", a + b);
    println!("a-b  = {}", a - b);
    println!("a*b  = {}", a * b);
    println!("a/b  = {}, remainder {}", a / b, a % b);
}
