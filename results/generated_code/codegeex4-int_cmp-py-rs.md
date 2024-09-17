```rust
use std::io;

fn main() {
    let mut a = String::new();
    io::stdin().read_line(&mut a).expect("Failed to read line");
    let a: i32 = a.trim().parse().expect("Please type a number!");

    let mut b = String::new();
    io::stdin().read_line(&mut b).expect("Failed to read line");
    let b: i32 = b.trim().parse().expect("Please type a number!");

    if a < b {
        println!("a is less than b");
    } else if a > b {
        println!("a is greater than b");
    } else {
        println!("a is equal to b");
    }
}
```
This Rust code does the same thing as your Python script. It gets two integers from user input, then tests each comparison operator separately.
