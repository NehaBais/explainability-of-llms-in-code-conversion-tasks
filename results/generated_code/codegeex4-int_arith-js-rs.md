```rust
use std::env;

fn main() {
    let args: Vec<String> = env::args().collect();
    let a = args[1].parse::<i32>().unwrap();
    let b = args[2].parse::<i32>().unwrap();

    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let division = a / b;
    let remainder = a % b;

    println!("a + b = {}", sum);
    println!("a - b = {}", difference);
    println!("a * b = {}", product);
    println!("a / b = {}", division);
    println!("a % b = {}", remainder);
}
```
This Rust code does the same as your JavaScript code. It receives two arguments from the command line and performs basic arithmetic operations on them: addition, subtraction, multiplication, integer division, and finding the remainder when 'b' is divided by 'a'. It then prints these results to the console.
Please note that in rust, we don't need error handling for parsing because unwrap() will terminate the program if it can't parse the argument. In a more complex application you might want to handle this better.
