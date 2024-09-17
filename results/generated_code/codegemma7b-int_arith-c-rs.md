```rust
use std::io;

fn main() {
    let mut a: i32;
    let mut b: i32;

    io::stdin()
        .read_line(&mut a.to_string())
        .expect("Failed to read input");
    a = a.trim().parse().expect("Failed to parse integer");

    io::stdin()
        .read_line(&mut b.to_string())
        .expect("Failed to read input");
    b = b.trim().parse().expect("Failed to parse integer");

    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    println!("a/b = {}", a / b); // Truncates towards zero
    println!("a%b = {}", a % b); // Same sign as the first operand
}
```
