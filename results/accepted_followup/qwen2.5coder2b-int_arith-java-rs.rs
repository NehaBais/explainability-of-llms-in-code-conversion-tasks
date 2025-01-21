use std::io;

fn main() {
    let mut input = io::stdin();
    let mut scanner = io::Scanner::from(input);

    println!("Enter two integers: ");
    let a: i32 = scanner.next().expect("Invalid input");
    let b: i32 = scanner.next().expect("Invalid input");

    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let division: i32 = a / b;
    let remainder = a % b;

    println!("a + b = {}", sum);
    println!("a - b = {}", difference);
    println!("a * b = {}", product);

    // Rust's division operator does not automatically round towards zero
    if division != 0 {
        println!("quotient of a / b = {}", division);
    } else {
        println!("division by zero, quotient undefined");
    }

    println!("remainder of a / b = {}", remainder); // same sign as first operand

    // Rust does not have an exponentiation operator built-in for integers
    // So we will use pow function for integer exponentiation
    let exp_result = i32::pow(a, b);
    println!("a^b = {}", exp_result);
}
