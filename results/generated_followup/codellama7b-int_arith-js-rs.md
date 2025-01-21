The error is caused by the fact that there is no `args` function defined in the `process` module of Rust. To fix this, we can use the `std::env::args()` function to get the command-line arguments instead.

Here's the corrected code:
```rust
use std::env::args;
use std::io::prelude::*;

fn main() {
    let args = args();
    if args.len() != 3 {
        println!("Usage: {} <a> <b>", args[0]);
        return;
    }

    let a = args[1].parse().unwrap();
    let b = args[2].parse().unwrap();

    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let division = a / b;
    let remainder = a % b;

    println!("{} + {} = {}", a, b, sum);
    println!("{} - {} = {}", a, b, difference);
    println!("{} * {} = {}", a, b, product);
    println!("{} / {} = {}", a, b, division);
    println!("{} % {} = {}", a, b, remainder);
}
```
