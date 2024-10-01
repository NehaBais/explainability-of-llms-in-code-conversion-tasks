 In Rust, you can use the format! macro to do this as follows:

```rust
let mut s = String::from("world!");
s = format!("Hello, {}", s);
```

In the above code, `format!` is a built-in macro in Rust that allows for string formatting. The `{}` within the double quotes acts as a placeholder for any variables or expressions passed to this function after the comma. The variable `s`, which holds our original string "world!" gets inserted at this place.
