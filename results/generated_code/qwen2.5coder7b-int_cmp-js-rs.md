Here's how you can convert your JavaScript code to Rust:

```rust
use std::io;

fn main() {
    let mut input = String::new();

    println!("Enter first integer:");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    
    let a: i32 = input.trim().parse().expect("Please type a number!");
    input.clear();

    println!("Enter second integer:");
    io::stdin().read_line(&mut input).expect("Failed to read line");

    let b: i32 = input.trim().parse().expect("Please type a number!");

    if a == b {
        println!("{} equals {}", a, b);
    } else if a < b {
        println!("{} is less than {}", a, b);
    } else {
        println!("{} is greater than {}", a, b);
    }
}
```

This program does the same as your JavaScript code. It prompts for two integers and compares them. If they're equal, it prints that a equals b. If not, it checks if a is less than or greater than b and prints accordingly.

Note: This version of the Rust code does not do any type checking to ensure that the user input can be converted to an integer. It assumes that the user will always enter valid integers. You may want to add error handling for production code to handle invalid inputs gracefully.
