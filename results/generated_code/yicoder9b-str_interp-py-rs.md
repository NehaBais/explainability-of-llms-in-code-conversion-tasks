Here is how you can convert this Python code to Rust: 

```rust
fn main() {
    let extra = String::from("little");
    let new_str = format!("Mary had a {} lamb.", extra);
    println!("{}", new_str);
}
```

In Rust there is no equivalent to Python's f-strings. Instead the `format!` macro is used which behaves similarly to it. The curly brackets are placeholders where variables will be inserted into the string literal. 
Also note that in Rust we use `println!` instead of `print` function for printing output.
