use std::io;

fn main() {
    let mut a = String::new();
    println!("Enter first integer:");
    io::stdin().read_line(&mut a)).expect("Failed to read line");

    let mut b = String::new();
    println!("Enter second integer:");
    io::stdin().read_line(&mut b)).expect("Failed to read line");

    let a: i32 = match a.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Invalid input"),
    };

    let b: i32 = match b.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Invalid input"),
    };

    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    println!("a/b = {:.2}, remainder = {}", a as f32 / b as f32, (a % b).abs());
}