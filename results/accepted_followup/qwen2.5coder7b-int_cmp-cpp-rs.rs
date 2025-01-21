use std::io;

fn main() {
    println!("Please enter two integers.");

    let mut input = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    let numbers: Vec<i32> = input
        .split_whitespace()
        .filter_map(|s| s.parse::<i32>().ok())
        .collect();

    if numbers.len() != 2 {
        eprintln!("Please enter exactly two integers.");
        return;
    }

    let (a, b) = (numbers[0], numbers[1]);

    // test for less-than
    if a < b {
        println!("{} is less than {}", a, b);
    }

    // test for equality
    if a == b {
        println!("{} is equal to {}", a, b);
    }

    // test for greater-than
    if a > b {
        println!("{} is greater than {}", a, b);
    }
}
