The Rust code below converts the given C program:

- It will get two integers from command line arguments, and perform arithmetic operations with them.
- The operation results are printed to standard output.
- Note that unlike C, there is no built-in exponentiation operator in Rust (there's an `pow` function in the num-traits crate but it doesn't take two separate values as input). Therefore, you should handle this operation separately according to your needs.
- In terms of quotient and remainder, they are following the same behavior as C, where division rounds towards zero (for both quotient and remainder) and the sign is that of the first operand (`a`) in case `b` is not zero.
```rust
use std::env;

fn main() {
    let args: Vec<String> = env::args().skip(1).collect(); 

    if args.len() < 2 {
        panic!("Not enough arguments. Please provide two integers.");
    }

    match (args[0].parse::<i32>(), args[1].parse::<i32>()) {
        (Ok(a), Ok(b)) => {
            if b == 0 {
                panic!("Division by zero error.");
            } else {
                println!("{} + {} = {}", a, b, a+b);
                println!("{} - {} = {}", a, b, a-b);
                println!("{} * {} = {}", a, b, a*b);
                println!("{} / {} = {}", a, b, a/b);  // rounds towards 0 (in C99)
                println!("{} % {} = {}", a, b, a%b);  // same sign as first operand (in C99)
            }
        },
        _ => panic!("Failed to parse one or more integers."),
    };
}
```
