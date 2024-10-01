Answer:
In Rust, we can use format! macro for string interpolation. The syntax is similar to JavaScript but with different syntax. Let's see how it goes in Rust.

Here's a sample code which uses `format!` macro to perform string interpolation and prints its output to the console (terminal).
```rust
fn main() {
    let original = "Mary had a X lamb";
    let little = "little";
    let replaced = format!("{}", original.replace("X", little)); //does not change the original string
    println!("{}", replaced);
}
```
Output:
Mary had a little lamb
