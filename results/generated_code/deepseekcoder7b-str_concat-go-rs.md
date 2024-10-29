The equivalent Rust code would be as follows:

```rust
fn main() {
    // Create a String variable equal to any text value
    let mut s = String::from("hello");
    
    // Output the original string
    println!("{}", s);
 
    // Concatenate with another string literal and assign back to same variable
    s.push_str(", world!");
  
    // Output concatenated string
    println!("{}", s);
}
```

The `String::from` function is used to create a new String from a string slice, while the `push_str` method appends another string slice to the end of the original one. The `println!` macro outputs the content of a variable or an expression. In this case, we are passing in our strings (variables) and Rust will output their values at runtime.

