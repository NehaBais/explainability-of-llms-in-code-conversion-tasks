Sure, here's the equivalent Rust code for your Python code. This uses `std::io` for input-output operations and `std::cmp` for comparison.

```rust
use std::io;

fn main() {
    println!("Enter value of a: ");
    let mut a = String::new();
    io::stdin().read_line(&mut a).expect("Failed to read line");

    println!("Enter value of b: ");
    let mut b = String::new();
    io::stdin().read_line(&mut b).expect("Failed to read line");

    // Remove the newline character from the input
    let a = a.trim_end();
    let b = b.trim_end();

    if a.cmp(b) == std::cmp::Ordering::Less {
        println!("a is less than b");
    } else if a.cmp(b) == std::cmp::Ordering::Equal {
        println!("a is equal to b");
    } else {
        println!("a is greater than b");
    }
}
```

This Rust code first prompts the user to enter two integers using `io::stdin().read_line()`. It then removes the newline character from each input string using `trim_end()` and compares them using `std::cmp::Ordering`. Depending on the result, it prints a message indicating whether `a` is less than, equal to, or greater than `b`.

Note that Rust uses `if-let` expressions for pattern matching, which may not be as intuitive as Python's `if` statements but can be more concise and idiomatic.
