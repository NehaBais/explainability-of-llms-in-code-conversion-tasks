In Rust, you can use the `format!` macro to achieve similar functionality as in Golang. Here is how you can convert the provided Go code into Rust:

```rust
fn main() {
    let txt = "little";
    let out = format!(
        "Mary had a {} lamb", 
        txt
    );
    println!("{}", out);
}
```

This Rust version does exactly the same thing as your Golang code. It takes a string, replaces some of its placeholders with provided values, and prints the resulting string to the console.
