 Certainly! Below is the Rust code that performs the same task as your provided C code. The Rust code reads two integers from the user, compares them using if-else statements, and prints out the appropriate message based on their comparison.

```rust
use std::io;

fn main() {
    let mut input = String::new();
    
    println!("Enter two integers separated by a space:");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    
    let numbers: Vec<i32> = input.split_whitespace()
        .map(|s| s.parse().expect("Please enter valid integers"))
        .collect();
    
    let a = numbers[0];
    let b = numbers[1];
    
    if a < b {
        println!("{} is less than {}", a, b);
    } else if a == b {
        println!("{} is equal to {}", a, b);
    } else {
        println!("{} is greater than {}", a, b);
    }
}
```

This Rust code does the following:
1. Reads two integers from the user input.
2. Parses the input into a vector of integers.
3. Compares the two integers using if-else statements.
4. Prints out the appropriate message based on the comparison result.
