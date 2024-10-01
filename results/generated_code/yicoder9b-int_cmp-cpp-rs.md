Here's how you can write the equivalent code in Rust.
It reads two integers from standard input and outputs a message based on whether one integer is less than, equal to or greater than the other.

```rust
use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    println!("Enter first number: ");
    match io::stdin().read_line(&mut a) {
        Ok(_n) => {},
        Err(_error) => {
            println!("Could not read the numbers");
            return;
        },
    };

    println!("Enter second number: ");
    match io::stdin().read_line(&mut b) {
        Ok(_n) => {},
        Err(_error) => {
            println!("Could not read the numbers");
            return;
        },
    };

    let a: i32 = match a.trim().parse() {
        Ok(num) => num,
        Err(_error) => {
            println!("First number is not valid");
            return;
        },
    };

    let b: i32 = match b.trim().parse() {
        Ok(num) => num,
        Err(_error) => {
            println!("Second number is not valid");
            return;
        },
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
