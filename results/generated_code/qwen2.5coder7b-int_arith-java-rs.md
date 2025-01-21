Here is the equivalent code in Rust:

```rust
use std::io;

fn main() {
    let mut input = String::new();

    print!("Enter first number: ");
    io::stdin().read_line(&mut input).unwrap();
    let a = input.trim().parse::<i32>().unwrap();

    input.clear();

    print!("Enter second number: ");
    io::stdin().read_line(&mut input).unwrap();
    let b = input.trim().parse::<i32>().unwrap();

    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let division = a / b;
    let remainder = a % b;

    println!("a + b = {}", sum);
    println!("a - b = {}", difference);
    println!("a * b = {}", product);
    println!("quotient of a / b = {}", division);   // rounds towards 0
    println!("remainder of a / b = {}", remainder);  // same sign as first operand
}
```

Note that Rust doesn't have built-in error handling in the way Java does with `Scanner`. Therefore, in this code, we simply unwrap the result from `parse()` and `read_line()`. This will panic if an error occurs, which is not ideal for production code. In a real-world scenario, you would want to handle these errors appropriately.
