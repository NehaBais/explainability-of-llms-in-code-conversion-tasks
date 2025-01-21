Sure, here is the equivalent Rust code:

```rust
fn main() {
    let s: String = String::from("hello");
    println!("{}", s);
    
    let s2: String = format!("{} literal", s);
    println!("{}", s2);
}
```

In Rust, string concatenation and creation are done using `String` type. The `String::new()` creates an empty string, while the `format!()` function allows for easy formatting of strings.

The `from()` method is used to convert a borrowed &str to a String.
