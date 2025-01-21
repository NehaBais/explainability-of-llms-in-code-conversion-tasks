use std::io;

fn main() {
    let mut input = String::new();
    
    println!("Enter first number: ");
    io::stdin().read_line(&mut input).unwrap();
    let a: i32 = input.trim().parse().expect("Please type a number!");

    input.clear(); // Clear the string buffer

    println!("Enter second number: ");
    io::stdin().read_line(&mut input).unwrap();
    let b: i32 = input.trim().parse().expect("Please type a number!");

    if a < b {
        println!("{} is less than {}", a, b);
    }
    
    if a == b {
        println!("{} is equal to {}", a, b);
    }

    if a > b {
        println!("{} is greater than {}", a, b);
    }
}