In Rust, you can accomplish this task using the format! macro or .push_str() method of the String type:
```rust
let mut string = String::from("def");
string.insert_str(0, "abc");
```
