 In Rust, you can use the `CommandLine` interface to access command-line arguments. Here's how you might translate the JavaScript code to Rust:

```rust
use std::env;

fn main() {
    let args: Vec<String> = env::args().collect();
    
    // Get two integers from user, by getting index 1 and 2 of args vector.
    // As we are using Rust, we use Result type for error handling which is optional.
    let a = args[1].parse::<i32>().unwrap();
    let b = args[2].parse::<i32>().unwrap();
    
    // Calculate the sum, difference, product, quotient and remainder
    let sum = a + b;
    let diff = a - b;
    let prod = a * b;
    let quot = a / b; 
    let remi = a % b;
    
    // Printing the results. Note that println! macro will automatically convert the integer variables to string and print them, using {} is for indicating where each variable needs to be placed in the string.
    println!("a + b = {}", sum); 
    println!("a - b = {}", diff);
    println!("a * b = {}", prod);
    println!("a / b = {:.1}", quot); // Using {:.1} will print up to one decimal place for the floating point number
    println!("a % b = {}", remi);
}
```
Please note: Rust does not have a remainder operator `%`, so it has been replaced with `/`. This results in a floating-point quotient, but you can use `{:.1}` to limit to one decimal place if needed. Also, we're using `unwrap()` here because we know that the user is passing integer values as arguments. In real-world programs, you should never rely on this assumption and use proper error handling techniques instead.
