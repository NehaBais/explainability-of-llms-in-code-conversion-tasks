 To convert the given JavaScript code to Rust, we need to follow these steps:

1. Read command-line arguments for two integers.
2. Perform arithmetic operations and store the results.
3. Print the results in a formatted manner similar to how it is done in JavaScript using `console.log`.

Here's the equivalent Rust code:

```rust
use std::env;
use std::process;

fn main() {
    // Read command-line arguments
    let args: Vec<String> = env::args().collect();
    if args.len() < 3 {
        eprintln!("Usage: {} <a> <b>", args[0]);
        process::exit(1);
    }

    // Parse the integers from command-line arguments
    let a: i32 = match args[1].parse() {
        Ok(num) => num,
        Err(_) => {
            eprintln!("Error parsing argument 'a' as integer.");
            process::exit(1);
        }
    };

    let b: i32 = match args[2].parse() {
        Ok(num) => num,
        Err(_) => {
            eprintln!("Error parsing argument 'b' as integer.");
            process::exit(1);
        }
    };

    // Perform arithmetic operations
    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let division = a / b;  // This will perform integer division, truncating towards zero
    let remainder = a % b;

    // Print the results
    println!("a + b = {}", sum);
    println!("a - b = {}", difference);
    println!("a * b = {}", product);
    println!("a / b = {}", division);
    println!("a % b = {}", remainder);
}
```

### Explanation:
1. **Reading Command-Line Arguments**: We use `std::env::args()` to collect command-line arguments into a vector of strings. The first argument is the program name, so we check if there are at least three arguments (including the program name).
2. **Parsing Integers**: We parse the first and second arguments as integers using `parse()`. If parsing fails, we print an error message and exit the program.
3. **Arithmetic Operations**: We perform addition, subtraction, multiplication, integer division (which truncates towards zero), and modulus operations directly on the parsed integers.
4. **Printing Results**: We use `println!` to format and display the results in a similar manner to JavaScript's `console.log`.

This Rust code should behave similarly to the provided JavaScript code when invoked with two integer arguments.
