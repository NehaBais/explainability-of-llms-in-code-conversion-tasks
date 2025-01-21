In Rust, you can use `std::cmp` for this purpose.

Here is how you would write the same code in Rust:

```rust
fn main() {
    let a: i32;
    let b: i32;

    println!("Please enter two integers:");
    if std::io::stdin().read_line(&mut a.to_string()).is_err() {
        panic!("Failed to read line");
    }
    if std::io::stdin().read_line(&mut b.to_string()).is_err() {
        panic!("Failed to read line");
    }

    let a: i32 = a.trim().parse().expect("Invalid input for a");
    let b: i32 = b.trim().parse().expect("Invalid input for b");

    if a < b {
        println!("{} is less than {}", a, b);
    } else if a > b {
        println!("{} is greater than {}", a, b);
    } else {
        println!("{} equals {}", a, b);
    }
}
```

This code first prompts the user to enter two integers. The `std::io::stdin().read_line` function reads an entire line of input into a string, then it uses `trim()` to remove any whitespace from the end of the string. The `parse()` method is used to convert the string to an integer. Finally, it compares the two integers using Rust's built-in comparison operators and prints out a message depending on the result.
