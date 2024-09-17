fn main() {
    let mut input1 = 0;
    let mut input2 = 0;
    println!("Enter first number: ");
    input1 = std::io::stdin()
        .read_line()
        .unwrap()
        .trim()
        .parse::<i32>()
        .unwrap();
    println!("Enter second number: ");
    input2 = std::io::stdin()
        .read_line()
        .unwrap()
        .trim()
        .parse::<i32>()
        .unwrap();

    let sum = input1 + input2;
    let difference = input1 - input2;
    let product = input1 * input2;
    let quotient = input1 / input2;
    let remainder = input1 % input2;
    let exponentiation = input1.pow(input2);

    println!("Sum: {}", sum);
    println!("Difference: {}", difference);
    println!("Product: {}", product);
    println!("Integer quotient: {}", int(quotient));
    println!("Float quotient: {:.3}", float(quotient));
    let whole_remainder = (int(input1.pow(0.5)) - float(input1.pow(0.5))) * input2;
    println!("Whole Remainder: {}", whole_remainder);
    let actual_remainder = remainder % input2;
    println!("Actual Remainder: {}", actual_remainder);
    println!("Exponentiation: {}", exponentiation);
}
