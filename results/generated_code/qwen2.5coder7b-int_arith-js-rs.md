Here's how you can convert your JavaScript code to Rust:

```rust
use std::io;

fn main() {
    let mut input = String::new();
    println!("Enter the first integer:");
    io::stdin().read_line(&mut input).unwrap();
    let a: i32 = input.trim().parse().unwrap();

    input.clear();
    println!("Enter the second integer:");
    io::stdin().read_line(&mut input).unwrap();
    let b: i32 = input.trim().parse().unwrap();

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
In this Rust code:
1. We use `read_line` from the `io::stdin()` to read user input. The string is stored in a variable called `input`.
2. We then use `trim` and `parse` to convert the string into an integer. If parsing fails, `unwrap` will panic with an error message.
3. After that, we calculate the sum, difference, product, division (quotient), and remainder using basic arithmetic operators.

Note: Rust doesn't have a modulo operator for floating point numbers like JavaScript does. The `%` operator in Rust is defined for integers only. For floating point numbers, you would need to implement your own modulo function or use an existing one.
