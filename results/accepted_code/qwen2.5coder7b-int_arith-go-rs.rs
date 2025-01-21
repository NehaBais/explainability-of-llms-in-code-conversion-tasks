use std::io;

fn main() {
    println!("Enter two integers: ");

    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let numbers: Vec<i32> = input.trim()
                              .split_whitespace()
                              .map(|s| s.parse::<i32>().unwrap())
                              .collect();

    let a = numbers[0];
    let b = numbers[1];

    println!("{} + {} = {}", a, b, a+b);
    println!("{} - {} = {}", a, b, a-b);
    println!("{} * {} = {}", a, b, a*b);
    println!("{} / {} = {}", a, b, a/b);  // truncates towards 0
    println!("{} % {} = {}", a, b, a%b) // same sign as first operand
}