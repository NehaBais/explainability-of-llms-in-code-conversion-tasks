 Here is the equivalent Rust code for your C++ program. Note that Rust does not have an operator overload for exponentiation on integers. We'll create a separate function for it. Also, Rust uses `println!` macro instead of `cout` and `<<`. And it uses `int` type instead of `std::cin`.

```rust
use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    io::stdin().read_line(&mut a).expect("Failed to read line");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let a: i32 = a.trim().parse().expect("Please type a number!");
    let b: i32 = b.trim().parse().expect("Please type a number!");

    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    println!("quotient: {}, remainder: {}", a / b, a % b);
}
```
In this code, we are reading the inputs from the user and then converting it to integers. Then we print their sum, difference, product, quotient and the remainder of division. Note that Rust doesn't have operator overloading for exponentiation on integer types like C++. Therefore, a separate function is created for calculating the power of two numbers.
