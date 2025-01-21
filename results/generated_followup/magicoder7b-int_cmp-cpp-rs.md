 The error occurred because `write_all` method is not included in stdio module of Rust. Instead, we can use `print` function or `write` function to print a string with the contents of a byte slice. 

Fix: 
```rs
use std::io;

fn main() {
    let mut input = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    let a: i32 = match input.trim().parse() {
        Err(_) => return,
        Ok(num) => num,
    };

    io::stdout()
        .write_all(b"Enter second number: ")
        .expect("Could not write to stdout");

    let mut input = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    let b: i32 = match input.trim().parse() {
        Err(_) => return,
        Ok(num) => num,
    };

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
``` 
This fixed version of the code does exactly the same as your C++ code: it gets two integers from the user and then prints out a message based on whether the first integer is less than, equal to or greater than the second integer.
