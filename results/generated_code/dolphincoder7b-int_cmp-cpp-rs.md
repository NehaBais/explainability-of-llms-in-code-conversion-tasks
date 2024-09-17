Sure, here's the equivalent Rust code:
```
use std::io;

fn main() {
    let mut line = String::new();
    io::stdin().read_line(&mut line).expect("Failed to read line");

    // parse integers from user input
    let mut numbers: Vec<i32> = line.split_whitespace()
        .map(|s| s.parse::<i32>().unwrap())
        .collect();

    if numbers.len() != 2 {
        eprintln!("Not enough numbers provided.");
        return;
    }

    // test for less-than
    if numbers[0] < numbers[1] {
        println!("{} is less than {}", numbers[0], numbers[1]);
    }

    // test for equality
    if numbers[0] == numbers[1] {
        println!("{} is equal to {}", numbers[0], numbers[1]);
    }

    // test for greater-than
    if numbers[0] > numbers[1] {
        println!("{} is greater than {}", numbers[0], numbers[1]);
    }
}
```
This Rust code reads integers from the user, stores them in a `Vec<i32>`, and then uses conditional statements to test for less-than, equality, and greater-than. The code also handles error cases (e.g., if not enough numbers are provided).
