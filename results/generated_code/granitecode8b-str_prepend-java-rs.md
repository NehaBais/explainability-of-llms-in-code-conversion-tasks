Here's the converted code in Rust:
```
let mut string = String::from("def");
string = format!("abc{}", string);
```
Explanation:
- In Rust, we use `String` instead of `java.lang.String`.
- We create a mutable reference to a `String` using the `mut` keyword.
- The `format!` macro is used to concatenate two strings.

