Here's how you can convert that GoLang code into Rust:

```rust
let mut s = String::from("world!");
s.push_str(", Hello");
println!("{}", s);
```

In Rust, `String` is a growable, heap-allocated data structure. The `push_str` method appends another string to the end of this string.
