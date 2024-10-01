Here's the Rust code that accomplishes the same task as the JavaScript code you provided:
```rust
let mut s1 = String::from("Hello");
s1.push_str(", World!");
println!("{}", s1);
```
In this Rust code, we first create a mutable string variable called `s1` and initialize it with the value `"Hello"`. We then use the `push_str` method to append the string literal ", World!" to the end of `s1`. Finally, we print the contents of `s1` using the `println!` macro. The output of this code will be:

Hello, World!

