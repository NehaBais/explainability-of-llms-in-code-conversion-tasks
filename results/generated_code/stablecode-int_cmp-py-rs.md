In Rust, we use the `std::io` module to get user input. Here's how you can write equivalent code in Rust for your requirement.

```rust
use std::io;

fn main() {
    let mut a = String::new();
    println!("Enter value of a: ");
    io::stdin().read_line(&mut a)).expect("Failed to read line");

    let mut b = String::new();
    println!("Enter value of b: ");
    io::stdin().read_line(&mut b))).expect("Failed to read line");

    if let Ok(a) = a.trim().parse::<i32>() {
        if let Ok(b) = b.trim().parse::<i32>() {
            if a < b {
                println!("a is less than b")
            } else if a > b {
                println!("a is greater than b")
            } else {
                println!("a is equal to b")
            }
        }
    }
}
```
The above Rust code prompts the user for two inputs, converts them into integers and then performs three comparison operations - less than, equal to or greater than. The appropriate message is printed based on the outcome of these comparisons.
