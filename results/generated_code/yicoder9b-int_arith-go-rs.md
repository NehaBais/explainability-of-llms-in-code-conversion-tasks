The Rust equivalent of the given Golang code would be:

Please note that in Rust there is an "exponentiation" (power) function available via `num::pow`.
Also, division and modulo operations behave differently in Rust than Go due to their different rounding behaviour.

```rust
use num::pow;
use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    println!("enter two integers: ");

    io::stdin().read_line(&mut a).expect("Failed to read line");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let a: i32 = a.trim().parse().expect("Please type a number!");
    let b: i32 = b.trim().parse().expect("Please type a number!");

    println!("{} + {} = {}", a, b, a+b);
    println!("{} - {} = {}", a, b, a-b);
    println!("{} * {} = {}", a, b, a*b);
    // in Rust division truncates towards zero, same as Go
    println!("{} / {} = {}", a, b, a/b); 
    // In Rust the modulo operation gives the remainder with the sign of the dividend.
    println!("{} % {} = {}", a, b, a%b); 

    let p: i32 = pow(a, b);
    println!("{} to the power of {} is {}", a, b, p);
}
```
