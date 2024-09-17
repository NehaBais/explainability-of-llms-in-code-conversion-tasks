```rust
use std::env;

fn main() {
    let args: Vec<String> = env::args().collect();
    if args.len() < 3 {
        eprintln!("Please provide two integers.");
        std::process::exit(1);
    }

    let b = match args[args.len() - 1].parse::<i32>() {
        Ok(num) => num,
        Err(_) => {
            eprintln!("Please enter a valid integer for the second number.");
            std::process::exit(2)
        }
    };

    if b == 0 {
        eprintln!("The second number cannot be zero.");
        std::process::exit(3);
    }

    let a = match args[args.len() - 2].parse::<i32>() {
        Ok(num) => num,
        Err(_) => {
            eprintln!("Please enter a valid integer for the first number.");
            std::process::exit(4)
        }
    };

    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    println!("a/b = {}", a / b); /* truncates towards zero */
    println!("a%%b = {}", a % b); /* same sign as first operand */
}
```

Please note that in Rust, the division of two integers will truncate towards zero rather than round to nearest. Also, if the dividend and divisor have different signs, the result for the remainder operation is the same sign as the first (dividend) operand, just like C99.

This Rust code also does not handle all cases as perfectly as your original C code. If a non-integer value is provided on the command line, this code will panic with a message instead of exiting gracefully. You may want to add additional error handling depending on how you want your program to behave in these situations.
