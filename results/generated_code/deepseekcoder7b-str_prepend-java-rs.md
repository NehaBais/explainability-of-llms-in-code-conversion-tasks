In Rust, you can use the `push_str()` and `prepend()` methods to achieve this. However, keep in mind that Rust doesn't support direct concatenation of Strings like Java (using '+'). The idiomatic way is using format! So let's convert the above code:

```rust
let mut string = String::from("def");
string.prepend_str("abc");
```

