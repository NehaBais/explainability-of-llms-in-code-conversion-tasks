```rust
fn main() {
    let mut args: Vec<String> = std::env::args().skip(1).collect();

    // Parse the arguments and convert them to integers
    if args.len() < 2 {
        eprintln!("Usage: program_name a b");
        return;
    }
    let a: i32 = args[0].parse().expect("a must be an integer");
    let b: i32 = args[1].parse().expect("b must be an integer");

    // Calculate and print the results
    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    println!("a/b = {}", a / b); // truncate towards zero
    println!("a%%b = {}", a % b); // same sign as first operand if different from the second
}
```
The Rust code does not require error handling like the C code. It handles basic input parsing and arithmetic operations, but it doesn't support floating-point numbers or exponentiation in a way that matches the C version.

Note: Rust's integer division truncates towards zero (`a / b`). If you need to perform floating-point division (`a as f64 / b as f64`), you can use `f64::div()` method.
