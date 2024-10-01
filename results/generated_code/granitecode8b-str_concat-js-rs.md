Here's the code converted from JavaScript to Rust:
```rust
let s = String::from("hello");
println!("{} there!", s);
```
In this code, we create a string variable `s` using the `String::from()` method and assign it the value `"hello"`. Then, we use the `println!` macro to print the contents of `s` concatenated with the string literal `" there!"`. When you run this code, it will output:

hello there!

This is because the `println!` macro in Rust automatically adds a newline character at the end of the printed string.

