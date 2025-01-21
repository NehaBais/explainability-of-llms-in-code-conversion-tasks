Sure! Below is the equivalent Rust code for the given JavaScript snippet:

```rust
fn main() {
    let s: String = String::from("hello");
    
    // Concatenate the original string with another string literal
    let result: String = s + " there!";
    
    // Print the results
    println!("Original string: {}", s);
    println!("Concatenated string: {}", result);
}
```

### Explanation:
- The `String::from` function is used to create a new `String` from the given text literal.
- The `+` operator is used to concatenate the original string with another string literal.
- Finally, the results are printed using `println!`.

When you run this Rust program, it will output:


Original string: hello
Concatenated string: hello there!

