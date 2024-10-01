Sure, here's how you can write this in Rust:

```rust
let mut s = "world!"; // Create a string variable and initialize it with the text "world!".
s = format!("Hello, {}", s); // Prepend the string with the text "Hello, " and assign the result to 's'.
println!("{}", s); // Prints "Hello, world!"
```
Please note that Rust does not have a "string variable equal to any text value" syntax. Instead, it creates an immutable string literal with the text you want to use and assigns it to a mutable variable. `let mut s = "world!";` is equivalent to `s := "world!";` in Go.
