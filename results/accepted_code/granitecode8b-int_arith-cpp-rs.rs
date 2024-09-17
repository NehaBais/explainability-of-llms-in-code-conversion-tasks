use std::io;
fn main() {
    let mut a = String::new();
    let mut b = String::new();
    println!("Enter two integers:");
    io::stdin().read_line(&mut a).expect("Failed to read line");
    io::stdin().read_line(&mut b).expect("Failed to read line");
    let a: i32 = a.trim().parse().expect("Please enter a valid integer");
    let b: i32 = b.trim().parse().expect("Please enter a valid integer");
    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    let quotient = a / b;
    let remainder = a % b;
    println!("a/b = {}, remainder {}", quotient, remainder);
}
