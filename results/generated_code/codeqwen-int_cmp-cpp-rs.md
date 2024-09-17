Here's the equivalent Rust code:

```rust
use std::io;

fn main() {
    println!("Please enter two numbers separated by space:");

    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");

    let numbers: Vec<i32> = input.split_whitespace()
                                 .map(|s| s.parse().expect("Please type a number!"))
                                 .collect();

    if numbers.len() != 2 {
        println!("You need to enter exactly two numbers.");
        return;
    }

    let A = numbers[0];
    let b = numbers[1];

    // test for less-than
    if A < b {
        println!("{} is less than {}", A, b);
    }

    // test for equality
    if A == b {
        println!("{} is equal to {}", A, b);
    }

    // test for greater-than
    if A > b {
        println!("{} is greater than {}", A, b);
    }
}
```

This Rust code does the same thing as your C++ code. It prompts the user to input two numbers separated by a space, converts the inputs into integers, and tests if they are less than, equal to or greater than each other.
