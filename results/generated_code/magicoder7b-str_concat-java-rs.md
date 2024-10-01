 In Rust, the code would look like this:

```rust
fn main() {
    let mut s = String::from("hello");
    println!("{} literal", s);
    let s2 = format!("{}{}", s, " literal");
    println!("{}",s2);
}
```

In Rust, strings are not primitive data types like in Java. Instead, they're more like objects that can be created with the `String::from` function or the `format!` macro. The `println!` macro is used for printing to the console.
