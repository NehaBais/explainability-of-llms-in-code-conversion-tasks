Sure, here is the equivalent Rust code:

```rust
use std::io;

fn main() {
    let mut a: i32;
    let mut b: i32;

    println!("Enter two integers: ");
    io::stdin().read_line(&mut a.to_string())
        .expect("Failed to read line");
    io::stdin().read_line(&mut b.to_string())
        .expect("Failed to read line");

    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    println!("a/b = {}, remainder {}", a / b, a % b);

    if a >= 0 && b >= 0 {
        println!("Exponentiation (if operator exists) = {}", a.pow(b));
    } else {
        println!("Exponentiation (if operator exists) is undefined");
    }
}
```
This code will ask the user for two integers, and then it prints their sum, difference, product, quotient, remainder, and exponentiation (if possible). Note that Rust's `pow` method doesn't exist for negative numbers.

Also note that the rounding of quotient and modulus operation depends on the type of division being used. In this case, we are using integer division (`/`) which will always round towards zero. If you need to handle floating point division, it's best to use `f64` for both variables and operations.
