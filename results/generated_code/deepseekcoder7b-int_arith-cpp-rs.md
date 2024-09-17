Rust has a different syntax and approach to programming, but here is your C++ code translated into Rust with minimal changes. This doesn't handle errors or specific rounding rules for division like the one you mentioned in your question. For that kind of functionality, more complex user input would be required (e.g., using libraries such as `readline`), and error handling is an essential part of robust software development:

```Rust
use std::io;

fn main() {
    let mut buffer = String::new();
    
    io::stdin().read_line(&mut buffer).expect("Failed to read line");
    let a: i32 = buffer.trim().parse().unwrap();
    
    buffer.clear();
    io::stdin().read_line(&mut buffer).expect("Failed to read line");
    let b: i32 = buffer.trim().parse().unwrap();

    println!("a+b  = {}", a + b);
    println!("a-b  = {}", a - b);
    println!("a*b  = {}", a * b);
    println!("a/b = {}, remainder {}", a / b, a % b);
}
```
This code first reads two lines from the standard input and tries to parse them as integers. It assumes that each line contains one integer. This might not be suitable for your use case if you need interactive user input. 

Also note that in Rust, division of signed numbers is well-defined and rounds towards zero (truncates toward negative infinity). The remainder operator always yields a number with the same sign as the divisor (or zero), regardless of whether it's positive or negative. If you want to mimic truncation towards negative infinity for negative dividend, you can use `a % b - if a % b < 0 && b > 0 {b} else {0}` in Rust.

