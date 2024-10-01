use std::env;

fn main() {
    let args: Vec<String> = env::args().collect();

    if args.len() != 3 {
        println!("Please provide exactly two command line arguments.");
        return;
    }

    // Convert the first and second command-line argument to an integer
    let a = args[1].parse::<i32>().unwrap();
    let b = args[2].parse::<i32>().unwrap();

    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    // integer division in Rust rounds towards zero
    let quotient = a / b;
    let remainder = a % b; // This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator

    println!("a + b = {}", sum);
    println!("a - b = {}", difference);
    println!("a * b = {}", product);
    println!("a / b = {}", quotient);
    println!("a % b = {}", remainder);
}
