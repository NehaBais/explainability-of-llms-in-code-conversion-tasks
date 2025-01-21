Sure, here's the equivalent Rust code for your Java program. This is a straightforward translation of the Java code, with the necessary adjustments.

```rust
use std::io::{self, BufRead, BufReader};

fn main() {
    let mut input = BufReader::new(io::stdin());
    
    print!("Enter first integer: ");
    io::stdout().flush().expect("Failed to flush stdout");
    let mut nbr1_str = String::new();
    input.read_line(&mut nbr1_str).expect("Failed to read line");
    let nbr1: i32 = nbr1_str.trim_end().parse::<i32>().expect("Invalid integer");

    print!("Enter second integer: ");
    io::stdout().flush().expect("Failed to flush stdout");
    let mut nbr2_str = String::new();
    input.read_line(&mut nbr2_str).expect("Failed to read line");
    let nbr2: i32 = nbr2_str.trim_end().parse::<i32>().expect("Invalid integer");

    if nbr1 < nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    } else if nbr1 > nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    } else {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}
```

### Explanation:
- `std::io::{self, BufRead, BufReader}`: These imports are necessary for reading from the standard input.
- `main()`: This function is the entry point of the program.
- `let mut input = BufReader::new(io::stdin());`: Creates a buffer to read from the console.
- `print!("Enter first integer: ");` and `println!("Enter second integer: ");`: Prompts the user to enter two integers.
- `input.read_line(&mut nbr1_str).expect("Failed to read line");`: Reads a line of input from the user as a string and trims any trailing newline characters.
- `let nbr1 = nbr1_str.trim_end().parse::<i32>().expect("Invalid integer");`: Converts the string into an integer and handles potential parsing errors.
- The same process is repeated for `nbr2`.
- Finally, the conditions for comparison are checked, and appropriate messages are printed.
