 Here's the equivalent Rust code for the provided Python script:

```rust
use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    println!("Enter value of a:");
    io::stdin().read_line(&mut a).expect("Failed to read line");

    println!("Enter value of b:");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let a: i32 = match a.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please enter a valid integer for 'a'.");
            return;
        }
    };

    let b: i32 = match b.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please enter a valid integer for 'b'.");
            return;
        }
    };

    if a < b {
        println!("a is less than b");
    } else if a > b {
        println!("a is greater than b");
    } else if a == b {
        println!("a is equal to b");
    }
}
```

This Rust code does the following:
1. Reads two integers from the user.
2. Compares them using `if`, `else if`, and `else` statements, checking for less than, greater than, and equal conditions.
3. Displays a message based on the comparison result.
