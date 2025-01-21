Here is how you can convert the given JavaScript code to Rust:

```rust
fn main() {
    let mut s1 = String::from("Hello");
    s1.push_str(", World!");
    println!("{}", s1);
}
```

In Rust, strings are immutable by default. Hence we use `String::from` to create a mutable string and then use `push_str()` method for appending another string literal to the variable. The `println!` macro is used for printing the contents of the variable.
