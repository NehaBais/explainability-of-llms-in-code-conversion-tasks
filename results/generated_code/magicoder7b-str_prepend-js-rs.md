 In Rust, you can use the format! macro to accomplish this, or concatenate strings using the + operator. Here is how both methods look:

Rust version of JavaScript code using format! macro:
```rust
let mut s = ", World".to_string(); // Convert string literal into a String type
s = format!("Hello {}", s);       // Use the format! macro to prepend "Hello" 
println!("{}", s);                // Print the resulting string
```
Rust version of JavaScript code using + operator:

let mut s = ", World".to_string(); // Convert string literal into a String type
s = "Hello ".to_string() + &s;    // Use the to_string function and + operator to prepend "Hello" 
println!("{}", s);                // Print the resulting string
