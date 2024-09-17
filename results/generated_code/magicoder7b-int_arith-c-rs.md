 In Rust, you can use the `CommandLineArguments::args()` function to get command line arguments. It returns an iterator over a vector of strings representing the arguments. Here is how you can rewrite this code in Rust:

```rust
use std::env;
use std::str::FromStr;

fn main() {
    let args: Vec<String> = env::args().collect();
    
    if args.len() < 3 {
        panic!("Please provide at least two integer arguments");
    }
    
    let a_arg = &args[args.len() - 2];
    let b_arg = &args[args.len() - 1];
    
    if let Ok(a) = i32::from_str(a_arg) {
        if let Ok(b) = i32::from_str(b_arg) {
            println!("Sum: {}", a + b);
            println!("Difference: {}", a - b);
            println!("Product: {}", a * b);
            println!("Integer Division (truncated): {}", a / b);
            println!("Remainder: {}", a % b);
        } else {
            panic!("Invalid second argument");
        }
    } else {
        panic!("Invalid first argument");
    }
}
```

This code does the same thing as your C code, but it handles errors and takes arguments from command line. It also uses Rust's `Result` type for error handling to provide more detailed messages in case of invalid arguments. The quotient will be truncated towards zero due to Rust's integer division behavior (it always rounds down).
