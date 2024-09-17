use std::io;

fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();

    println!("Enter first integer:");
    io::stdin()
        .read_line(&mut input1)
        .expect("Failed to read line");
    let input1: i32 = match input1.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please enter a valid integer.");
            return;
        }
    };

    println!("Enter second integer:");
    io::stdin()
        .read_line(&mut input2)
        .expect("Failed to read line");
    let input2: i32 = match input2.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please enter a valid integer.");
            return;
        }
    };

    let sum = input1 + input2;
    let difference = input1 - input2;
    let product = input1 * input2;
    let quotient = input1 as f64 / input2 as f64;
    let whole_quotient = quotient.floor() as i32;
    let remainder = (input1 % input2).abs();
    let exponentiation = input1.pow(input2);

    println!("Sum: {}", sum);
    println!("Difference: {}", difference);
    println!("Product: {}", product);
    println!("Integer quotient: {}", whole_quotient);
    println!("Float quotient: {}", quotient);
    println!("Whole Remainder: {}", remainder);
    println!("Actual Remainder: {}", input1 % input2);
    println!("Exponentiation: {}", exponentiation);
}
