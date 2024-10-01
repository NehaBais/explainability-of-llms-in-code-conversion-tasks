In Rust, you can achieve this by using the `+` operator (which performs string concatenation) and using the `to_string()` method on your string literals. Here is how you would write the equivalent code in Rust:

```rust
fn main() {
    let mut s = String::from("world!");
    s = "Hello, ".to_string() + &s;
}
```
This will create a mutable string variable `s` and assign it the value of `"world!"`. Then it will prepend `"Hello, "` to this string by concatenating them. The result is stored back into `s`.

Note: In Rust, we use `String::from()` to convert a string literal to an owned `String`, and we use `&` before `s` to get the reference to `s` when performing the addition because Rust does not implicitly take references.

Please make sure you are using Rust 1.45.0 or later version where String concatenation via '+' is officially supported.
