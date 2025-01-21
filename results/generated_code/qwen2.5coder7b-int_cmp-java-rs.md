Here's how you can convert the given Java code into Rust. Note that Rust does not have a built-in console input method like Java. You'll need to use the `std::io` library to handle user input.

```rust
use std::io;

fn main() {
    let mut input = String::new();

    println!("Enter first number:");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let nbr1: i32 = input.trim().parse().expect("Please type a number!");

    input.clear();
    
    println!("Enter second number:");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let nbr2: i32 = input.trim().parse().expect("Please type a number!");

    if nbr1 < nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    }
    
    if nbr1 > nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    }

    if nbr1 == nbr2 {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}
```

Note: The above Rust code will panic (abort the program) if the user enters anything that can't be parsed into an integer. If you want to handle this more gracefully, you could use a `Result` instead of `expect`. Also note that Rust uses snake_case for variable names instead of camelCase like Java.
