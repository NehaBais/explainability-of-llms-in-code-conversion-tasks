use std::io;

fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();

    println!("Enter the first integer:");
    io::stdin().read_line(&mut input1).expect("Failed to read line");
    let input1: i32 = input1.trim().parse().expect("Please enter a valid integer");

    println!("Enter the second integer:");
    io::stdin().read_line(&mut input2).expect("Failed to read line");
    let input2: i32 = input2.trim().parse().expect("Please enter a valid integer");

    let sum = input1 + input2;
    println!("Sum: {}", sum);

    let difference = input1 - input2;
    println!("Difference: {}", difference);

    let product = input1 * input2;
    println!("Product: {}", product);

    let integer_quotient = input1 / input2;
    let float_quotient = input1 as f64 / input2 as f64;
    println!("Integer quotient: {}", integer_quotient);
    println!("Float quotient: {:.2}", float_quotient);

    let whole_remainder = (input1 % input2) * 10;
    println!("Whole Remainder: {}", whole_remainder);
    println!("Actual Remainder: {}", input1 % input2);

    let exponentiation = i32::pow(input1, input2 as u32);
    println!("Exponentiation: {}", exponentiation);
}