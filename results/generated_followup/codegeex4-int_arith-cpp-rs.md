The error occurs because the `flush` method is not available by default in Rust, but it is provided by the `std::io::Write` trait. To fix this, we need to import the `Write` trait before using the `flush` method.

To correct the code, include the following line at the top of your file:

use std::io::prelude::*;

This imports all traits from the `std::io::prelude` module, including the `Write` trait which provides the `flush` method. Here is the corrected code:

```rs
use std::io;

fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();

    print!("Enter first integer: ");
    io::stdout().write_all(b"\n").unwrap();
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input1).unwrap();

    print!("Enter second integer: ");
    io::stdout().write_all(b"\n").unwrap();
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input2).unwrap();

    let a: i32 = input1.trim().parse().unwrap();
    let b: i32 = input2.trim().parse().unwrap();

    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    println!("a/b = {}, remainder {}", a / b, a % b);
}
```
