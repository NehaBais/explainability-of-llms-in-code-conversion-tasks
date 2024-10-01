use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    println!("Enter first number:");
    io::stdin().read_line(&mut a).expect("Failed to read line");

    println!("Enter second number:");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let a: i32 = a.trim().parse().unwrap();
    let b: i32 = b.trim().parse().unwrap();

    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    let q = a / b;
    let r = a % b;
    println!("a/b = {}, remainder = {}", q, r);
}
