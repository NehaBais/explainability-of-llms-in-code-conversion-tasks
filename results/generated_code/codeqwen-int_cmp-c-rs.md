Here's the equivalent Rust code:

```rust
use std::io;

fn main() {
    println!("Enter two integers");

    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let numbers: Vec<i32> = input.split_whitespace()
                                   .map(|s| s.trim().parse().unwrap())
                                   .collect();

    let a = numbers[0];
    let b = numbers[1];

    if A < b {
        println!("{} is less than {}", A, b);
    } else if A == b {
        println!("{} is equal to {}", A, b);
    } else {
        println!("{} is greater than {}", A, b);
    }
}
```

In this code snippet, we first ask the user for two integers. Then we read these numbers and store them in variables `A` and `b`. After that, we print out a message based on the comparison between the two numbers using Rust's pattern matching feature. If `A` is less than `b`, it prints "A is less than B". If `A` is equal to `B`, it prints "A is equal to B", and if `A` is greater than `B`, it prints "A is greater than B".
