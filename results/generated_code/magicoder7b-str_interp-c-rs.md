 In Rust, you can use the `format!` macro to accomplish this. Here's how you can do it:

```rust
fn main() {
    let extra = "little";
    println!("Mary had a {} lamb.", extra);
}
```
The `{}` in the string is a placeholder for values passed into `println!()`. The value of `extra` replaces this placeholder, giving you the desired output.
