Here is how you can convert this JavaScript code to Rust:

Rust Code:
```rust
fn main() {
    let text = "World";
    let new_text = format!("Hello{}", text);
    println!("{}", new_text);
}
```
In the above Rust code, we first declare a variable `text` and assign it the value "World". 

Then, we use the `format!` macro to construct a new string by concatenating the strings "Hello" and `text`. The resulting string is stored in the `new_text` variable.

Finally, we print the value of `new_text` using the `println!` macro.
