Below is the Rust equivalent of your JavaScript code:

```Rust
use std::env;

fn main() {
    let args: Vec<String> = env::args().collect();
    
    // convert string to i32, note that index 0 and 1 are taken by the executable name.
    let a: i32 = args[1].parse().unwrap();
    let b: i32 = args[2].parse().unwrap();
  
    let sum  = a + b;
    let difference = a - b;
    let product = a * b;
    // Rust does integer division, but you can use f32::floor() to round towards zero. This will make it behave like JavaScript if needed. 
    let quotient = a / b;  
    let remainder = a % b; 
    
    println!("{} + {} = {}", a, b, sum);
    println!("{} - {} = {}", a, b, difference);
    println!("{} * {} = {}", a, b, product);
    // If you want to behave exactly like JavaScript, use f32::floor() instead of just division. 
    println!("{} / {} = {}", a, b, quotient);  
    println!("{} % {} = {}", a, b, remainder);
}
```
The code reads the command-line arguments (which are strings), converts them to integers and computes the requested operations. It then prints the results in a nice format. The integer division will give an exact quotient rounded towards zero as expected by most programmers. If you want it to behave like JavaScript, replace `/` with f32::floor().

