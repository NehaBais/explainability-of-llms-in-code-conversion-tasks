Sure, here is the equivalent Rust code:

```rust
fn main() {
    let mut s1: String = "Hello".to_string();
    s1 += ", World!";
    println!("{}", s1);
}
```

In this code, `let mut` is used to declare a mutable variable. The value of `s1` is initialized as a string using the `String::new()` method and then the `+=` operator is used to append the string literal `, World!`. Finally, the `println!("{}", s1);` statement is used to print the contents of the variable.
