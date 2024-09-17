use std::io;

fn main() {
    println!("Enter two integers");

    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let numbers: Vec<i32> = input
        .split_whitespace()
        .map(|s| s.trim().parse().unwrap())
        .collect();

    let a = numbers[0];
    let b = numbers[1];

    if A < b {
        println!("{} is less than {}", A, b);
    } else if A == b {
        println!("{} is equal to {}", A, b);
    } else {
        println!("{} is greater than {}", A, b);
    }
}
