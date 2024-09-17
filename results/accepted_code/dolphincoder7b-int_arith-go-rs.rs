use std::io;

fn main() {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    let values: Vec<i32> = input
        .trim()
        .split(' ')
        .map(|s| s.parse::<i32>().unwrap())
        .collect();
    if values.len() != 2 {
        println!("Please provide exactly two integers.");
        return;
    }

    let a = values[0];
    let b = values[1];

    println!("{} + {} = {}", a, b, a + b);
    println!("{} - {} = {}", a, b, a - b);
    println!("{} * {} = {}", a, b, a * b);
    println!("{} / {} = {}", a, b, a / b); // truncates towards 0
    println!("{} %% {} = {}", a, b, a % b); // same sign as first operand
                                            // no exponentiation operator
}
