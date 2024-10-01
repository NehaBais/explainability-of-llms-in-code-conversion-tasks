In Rust, the standard input and output are slightly different than C++. There's no direct equivalent for the `std::cin` and `std::cout` in Rust. However, you can use the `read()` function from the `io::stdin()` method to get input, and println! macro to display output.

Here is a similar code written in Rust:
```rust
use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    println!("Enter first number:");
    io::stdin().read_line(&mut a)
        .expect("Failed to read line");

    println!("Enter second number:");
    io::stdin().read_line(&mut b)
        .expect("Failed to read line");

    let a: i32 = a.trim().parse().unwrap();
    let b: i32 = b.trim().parse().unwrap();

    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    let q = a / b;
    let r = a % b;
    println!("a/b = {}, remainder = {}", q, r);
}
```
This Rust code does the same thing as the C++ one: it reads two integers from user input and calculates their sum, difference, product, quotient (rounds towards zero), and remainder. The division operator `/` in Rust also rounds towards zero, similar to C++ when dealing with integers. 

The remainder is always positive if both operands are positive or negative, but its sign is the same as the dividend's in the C++ standard; thus it follows the second rule mentioned in your question.
