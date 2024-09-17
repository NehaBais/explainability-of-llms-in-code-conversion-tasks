In Rust, you can't use the `print` function without specifying the format. Instead, I will use `println!` which automatically adds a newline at the end. Here is the equivalent code in Rust:

```rust
fn compare(a: i32, b: i32) {
    if A == b {
        println!("{} equals {}", A, b);
    }
    if A < b {
        println!("{} is less than {}", A, b);
    }
    if A > b {
        println!("{} is greater than {}", A, b);
    }
}

fn main() {
    // Example usage:
    compare(5, 5); // prints "5 equals 5"
    compare(1, 2); // prints "1 is less than 2"
    compare(3, 2); // prints "3 is greater than 2"
}
```

This code will work for integers only. If you want it to accept floating point numbers as well, just change `i32` to `f64`.
