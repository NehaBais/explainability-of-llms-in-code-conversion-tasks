 Certainly! Below is the Rust equivalent of the provided C++ code. In Rust, you can use the `std::fmt` module for formatted output and logical operators for boolean operations.

```rust
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}

fn main() {
    let a = true;
    let b = false;
    print_logic(a, b);
}
```

This Rust code defines a function `print_logic` that takes two boolean arguments and prints the results of "and" (`&&`), "or" (`||`), and "not" (`!`) operations on these arguments. The `main` function demonstrates how to call this function with specific boolean values.
