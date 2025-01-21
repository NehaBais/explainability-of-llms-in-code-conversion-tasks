Here is how you can convert the given Python code to Rust:
```rust
fn main() {
    let s1 = String::from("hello");
    println!("{}", s1 + " world");

    let s2 = format!("{} world", s1);
    println!("{}", s2);

    let s1 = String::from("hello");
    let s3 = format!("{}, {}, {}", s1, "world", "mom");
    println!("{}", s3);
}
```
In Rust, you need to use the `format!` macro instead of the `+` operator to concatenate strings. The `String::from()` function is used to create a new string from a string literal. Also, note that in Rust, variables are immutable by default, so we need to re-declare and re-assign `s1` when we want to change its value.
