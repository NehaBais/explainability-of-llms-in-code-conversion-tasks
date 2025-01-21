use std::io;

fn main() {
    let mut input = String::new();
    println!("Enter the first integer:");
    io::stdin().read_line(&mut input).unwrap();
    let a: i32 = input.trim().parse().unwrap();

    input.clear();
    println!("Enter the second integer:");
    io::stdin().read_line(&mut input).unwrap();
    let b: i32 = input.trim().parse().unwrap();

    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let division = a / b;
    let remainder = a % b;

    println!("a + b = {}", sum);
    println!("a - b = {}", difference);
    println!("a * b = {}", product);
    println!("a / b = {}", division);
    println!("a % b = {}", remainder);
}