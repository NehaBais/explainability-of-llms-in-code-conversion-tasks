Here is the equivalent code in Rust:

```rust
use std::io;

fn main() {
    println!("Enter two integers: ");

    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let numbers: Vec<i32> = input.trim()
                              .split_whitespace()
                              .map(|s| s.parse::<i32>().unwrap())
                              .collect();

    let a = numbers[0];
    let b = numbers[1];

    println!("{} + {} = {}", a, b, a+b);
    println!("{} - {} = {}", a, b, a-b);
    println!("{} * {} = {}", a, b, a*b);
    println!("{} / {} = {}", a, b, a/b);  // truncates towards 0
    println!("{} % {} = {}", a, b, a%b) // same sign as first operand
}
```
In Rust, there are no built-in functions to print formatted strings like in Golang. So, we use the `println!` macro for this purpose. Also, input reading and parsing is done using the standard library's I/O modules.

For the calculation of quotient and remainder, Rust uses truncation towards zero (like in Golang), and the sign of the remainder matches the sign of the first operand (like in Golang).
