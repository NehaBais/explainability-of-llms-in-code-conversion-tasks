Here is the equivalent Rust code for your Python snippet. However, unlike Python, in Rust format strings are done using method `format!` and you have to use placeholders `{}` instead of variable names like `{extra}`. This means that if you have a string "Mary had a {} lamb.", it will be replaced by the content inside extra string.
```rust
fn main() {
    let extra = String::from("little");
    // Using format! macro to interpolate our variables into a new_str string
    let new_str = format!("Mary had a {} lamb.", &extra); 
    println!("{}", new_str);
}
```

