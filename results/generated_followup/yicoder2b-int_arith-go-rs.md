Sure, I can help with that. Here is how to rewrite the previous Go code into Rust:

```rust
use std::io;

fn main() {
    let mut a = io::stdin().read_line(&mut a).expect("Failed to read line from standard input"); // Get two integers from user
    let mut b = io::stdin().read_line(&mut b).expect("Failed to read line from standard input");

    println!("{} + {} = {}", &a, &b, a as i32 + b as i32); // display their sum
    println!("{} - {} = {}", &a, &b, a as i32 - b as i32); // display their difference
    println!("{} * {} = {}", &a, &b, a as i32 * b as i32); // display their product
    println!("{} / {} = {}", &a, &b, a as i32 / b as i32); // truncates towards 0 (same as C++)
    println!("{} % {} = {:+}", &a, &b, a as i32 % b as i32); // same sign as first operand
}
```
This code reads two lines from standard input for integers `a` and `b`. It calculates the sum, difference, product, quotient (towards zero), and remainder of these values. The results are printed to the console in a formatted manner. Note that the conversion to integer before performing operations is done implicitly in Rust, hence the typecasting.
