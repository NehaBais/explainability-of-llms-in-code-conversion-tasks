In Rust, you can use the `push_str()` function to append a string literal to another String variable in an idiomatic way like so:

```rust
fn main() {
    let mut string = String::from("abc");
    println!("{}", string);  // prints "abc"
    
    string.push_str("def");  
    println!("{}", string);  // prints "abcdef"
}
```

