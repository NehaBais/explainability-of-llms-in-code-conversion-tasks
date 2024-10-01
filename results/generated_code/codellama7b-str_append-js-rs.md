To convert this code from JavaScript to Rust, you can use the `+=` operator to concatenate two string literals. Here is an example of how you can do this:
```rust
let s1 = "Hello".to_string();
s1 += ", World!".to_string();
println!("{}", s1);
```
This will output `Hello, World!`.

Alternatively, you can use the `format!` macro to concatenate string literals in a more idiomatic way. Here is an example of how you can do this:

let s1 = "Hello".to_string();
s1 = format!("{}, World!", s1);
println!("{}", s1);

This will also output `Hello, World!`.
