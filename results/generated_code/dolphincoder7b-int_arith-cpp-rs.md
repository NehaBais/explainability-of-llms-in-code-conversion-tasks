This is how you can convert the given C++ code to Rust:
```rust
use std::io::{self, Write}; // Import I/O functions.

fn main() {
    let mut a = String::new();
    let mut b = String::new();
    print!("Enter two numbers: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut a).expect("Failed to read line");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let a: i32 = a.trim().parse().expect("Not a number");
    let b: i32 = b.trim().parse().expect("Not a number");

    println!("a+b  = {}", a + b);
    println!("a-b  = {}", a - b);
    println!("a*b  = {}", a * b);
    println!("a/b  = {}, remainder {}", a / b, a % b);
}
```
In Rust, the `main` function is used for the main logic of your program. It uses `std::io::{self, Write};` to import functions related to I/O operations.
Then, it reads two numbers from the user using `read_line`. After parsing them into integers, it performs all the required arithmetic operations and displays their results on the console.
