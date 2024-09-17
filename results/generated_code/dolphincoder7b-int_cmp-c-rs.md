### Code
```rust
use std::io;

fn main() {
    println!("Enter two integers:");

    let mut a = String::new();
    io::stdin().read_line(&mut a).expect("Failed to read line");

    let mut b = String::new();
    io::stdin().read_line(&mut b).expect("Failed to read line");

    if a < b {
        println!("{} is less than {}", a, b);
    } else if a == b {
        println!("{} is equal to {}", a, b);
    } else {
        println!("{} is greater than {}", a, b);
    }
}
```

### Explanation
 1. We use the `std::io` module to handle user input and output.
 2. Prompt the user to enter two integers using `println!()` and `io::stdin().read_line()`.
 3. Convert the input string to an integer by using `parse::<i32>()`.
    - If the conversion fails, we display an error message and exit the program.
    - This is done using `expect()` which throws a panic if there's an error while parsing.
 4. Compare the integers using conditional statements and print the appropriate message using `println!()`.
    - We use `<`, `==` (equality), and `>` for comparisons.
