use std::io;

fn main() {
    let mut input = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let a: i32 = input.trim().parse().expect("Please type a number!");

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let b: i32 = input.trim().parse().expect("Please type a number!");

    let sum = a + b; // The result of adding 'a' and 'b'
    let difference = a - b; // The result of subtracting 'b' from 'a'
    let product = a * b; // The result of multiplying 'a' and 'b'
    let division = a / b; // The result of dividing 'a' by 'b'
    let remainder = a % b; // The remainder of dividing 'a' by 'b'

    println!("a + b = {}", sum);
    println!("a - b = {}", difference);
    println!("a * b = {}", product);
    println!("quotient of a / b = {}", division); // truncates towards 0
    println!("remainder of a / b = {}", remainder); // same sign as first operand
}
