use std::io;

fn main() {
    let mut input1: i32 = 0;
    println!("Enter first number:");
    io::stdin()
        .read_line(&mut String::from("Enter first number:\n"))
        .expect("Failed to read line");

    let mut input2: i32 = 0;
    println!("Enter second number:");
    io::stdin()
        .read_line(&mut String::from("Enter second number:\n"))
        .expect("Failed to read line");

    let sum: i32 = input1 + input2;
    println!("Sum:  {}", sum);

    let diff: i32 = input1 - input2;
    println!("Difference:  {}", diff);

    let prod: i32 = input1 * input2;
    println!("Product:  {}", prod);

    let quotient_int: i32 = input1 / input2;
    println!("Integer quotient:  {}", quotient_int);

    let quotient_float: f64 = (input1 as f64) / (input2 as f64);
    println!("Float quotient:  {}", quotient_float);

    let whole_remainder: i32 = input1 % input2;
    println!("Whole remainder:  {}", whole_remainder);

    if whole_remainder > 0 {
        if input1 < 0 && input2 >= 0 || input1 >= 0 && input2 < 0 {
            println!("Actual remainder:  {}", -whole_remainder);
        } else {
            println!("Actual remainder:  {}", whole_remainder);
        }
    } else if whole_remainder == 0 {
        println!("No remainder");
    }

    let exponentiation = input1.pow(input2 as u32);
    println!("Exponentiation:  {}", exponentiation);
}
