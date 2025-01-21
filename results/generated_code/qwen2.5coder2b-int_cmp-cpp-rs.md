Sure, here's the equivalent Rust code:

```rust
use std::io;

fn main() {
    println!("Enter two integers:");
    let mut a = io::stdin().read_line()
        .expect("Failed to read line");
    a.pop();  // remove the newline character at the end

    let mut b = io::stdin().read_line()
        .expect("Failed to read line");
    b.pop();  // remove the newline character at the end

    let a: i32 = a.trim()
        .parse()
        .expect("Invalid integer input for a");
    let b: i32 = b.trim()
        .parse()
        .expect("Invalid integer input for b");

    if a < b {
        println!("{} is less than {}", a, b);
    } else if a == b {
        println!("{} is equal to {}", a, b);
    } else {
        println!("{} is greater than {}", a, b);
    }
}
```
Explanation:
- We use the `io::stdin().read_line()` function to read two integers from the user.
- We remove the newline character at the end using `.pop()`.
- We parse the strings into integers using `.parse()`, expecting a valid integer input for each variable.
- Finally, we use an if-else statement with nested if-else statements to test the three conditions and display the appropriate message.
