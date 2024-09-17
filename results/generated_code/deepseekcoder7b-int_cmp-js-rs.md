In Rust, you can use `read_line` from stdin to get user input. You also have to convert these strings to integers with parse function.

Here is how it's done in Rust:

```rust
use std::io;

fn main() {
    let mut input = String::new();
    
    println!("Enter the first integer:");
    io::stdin().read_line(&mut input).expect("Read line failed!");
    let a: i32 = match input.trim().parse() {
        Err(_) => panic!("Invalid number entered!"),
        Ok(num) => num,
    };
    
    println!("Enter the second integer:");
    io::stdin().read_line(&mut input).expect("Read line failed!");
    let b: i32 = match input.trim().parse() {
        Err(_) => panic!("Invalid number entered!"),
        Ok(num) => num,
    };
    
    if a == b {
        println!("{} equals {}", a, b);
    } else if a < b {
        println!("{} is less than {}", a, b);
    } else if a > b {
        println!("{} is greater than {}", a, b);
    }
}
```
This Rust code does the same thing as your JavaScript code. It prompts the user for two integers and then checks which of these values are less than, equal to or greater than the other value respectively. If any parsing fails because of an invalid number entered by the user, it will panic with a message "Invalid number entered!".

