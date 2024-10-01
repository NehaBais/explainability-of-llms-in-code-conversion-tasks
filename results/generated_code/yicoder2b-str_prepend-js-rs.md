Sure, here is how you can convert this JavaScript code to Rust:

```rust
fn main() {
    let mut s = "Hello".to_string(); // Create a string variable equal to any text value
    s.insert(0, ','); 
    println!("{}", &s); // Prepend the string variable with another string literal
}
```
In this Rust code snippet:
- We first create a mutable variable `s` and assign it the text "Hello" to it.
- The method `insert()` is used to insert a character at the specified position in the string. Here, we are inserting ',' just before 'H' of "Hello".
- Finally, we print out our modified string using `println!` macro.
