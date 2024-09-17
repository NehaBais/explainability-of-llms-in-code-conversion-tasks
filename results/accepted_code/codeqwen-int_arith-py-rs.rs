use std::io;

fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();

    println!("Enter first integer: ");
    io::stdin()
        .read_line(&mut input1)
        .expect("Failed to read line");
    let input1: i32 = match input1.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Invalid input"),
    };

    println!("Enter second integer: ");
    io::stdin()
        .read_line(&mut input2)
        .expect("Failed to read line");
    let input2: i32 = match input2.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Invalid input"),
    };

    println!("Sum:		{}", input1 + input2);
    println!("Difference:	{}", input1 - input2);
    println!("Product: 	{}", input1 * input2);
    println!("Integer quotient: {}", input1 / input2);

    let remainder = input1 % input2;
    if remainder.is_negative() {
        // The sign of the first operand or the second operand, whichever has a positive value
        println!("Actual Remainder: {}", -remainder);
    } else {
        println!("Actual Remainder: {}", remainder);
    }

    let mut uy = 0;
    if input1 > 0 && input2 < 0 || input1 < 0 && input2 > 0 {
        uy = -remainder;
    } else {
        uy = remainder;
    }

    println!("Whole Remainder: {}", uy);
    println!("Exponentiation:	{}", input1.pow(input2 as u32));
}
