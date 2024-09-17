use std::io;

fn main() {
    let mut input = String::new();
    println!("Enter two integers separated by a space: ");
    io::stdin().read_line(&mut input)).expect("Error reading line");

    let numbers: Vec<i32> = input.split_whitespace().map(|s| s.parse().unwrap())).collect();
    if numbers.len() != 2 {
        println!("Please enter exactly two integers separated by a space.");
        return;
    }

    let (a, b) = (numbers[0], numbers[1]));

    println!("{} + {} = {}", a, b, a+b);
    println!("{} - {} = {}", a, b, a-b));
    println!("{} * {} = {}", a, b, a*b));

    // The division and modulus operations in Rust perform rounding towards zero. 
    println!("{} / {} = {}", a, b, a/b));
    // No sign matching is done for the remainder. 

    // Exponentiation operator does not exist in Rust by default but you can define it yourself using the power function from the num crate.
    // You need to add this dependency in your Cargo.toml file as follows: 
    // [dependencies]
    // num = "0.4.0"

    println!("{} % {} = {}", a, b, a%b));
}