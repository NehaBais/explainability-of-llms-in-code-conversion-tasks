In Rust, we don't have the `try` and exceptions so it will be simpler. Here you go:

Rust code:

```rust
use std::io;

fn main() {
    let mut input = String::new();

    println!("Enter first integer:");
    io::stdin().read_line(&mut input).expect("Read line failed!");
    let nbr1 = match input.trim().parse::<i32>() {
        Ok(num) => num,
        Err(_) => panic!("Invalid number"),
    };
    
    println!("Enter second integer:");
    io::stdin().read_line(&mut input).expect("Read line failed!");
    let nbr2 = match input.trim().parse::<i32>() {
        Ok(num) => num,<｜begin▁of▁sentence｜>
    }

    if nbr1 < nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    } else if nbr1 > nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    } else if nbr1 == nbr2 {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}
```
This code reads two integers from the user (stdin), checks and prints out which one is less than, greater than or equal to another. It also has error handling for invalid numbers input by the users. 

Rust uses pattern matching to handle potential errors while parsing a string into an integer. If `parse::<i32>()` fails (when the user enters something that can't be converted to i32), it will panic and print "Invalid number". To prevent this, we use the match statement instead of try/catch for error handling in Rust.

