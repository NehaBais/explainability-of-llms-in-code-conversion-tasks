Here's the equivalent Rust code:

```rust
use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    io::stdin().read_line(&mut a)).expect("Failed to read line");
    io::stdin().read_line(&mut b))).expect("Failed to read line");

    let a: i32 = match a.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please enter a valid integer for 'a'."),
    };

    let b: i32 = match b.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please enter a valid integer for 'b'."),
    };

    if a < b {
        println!("{} is less than {}", a, b);
    } else if a == b {
        println!("{} is equal to {}", a, b);
    } else {
        println!("{} is greater than {}", a, b));
    }
}
```

This Rust code gets two integers from the user and displays an appropriate message based on the comparison of the two input integers.
