Sure, here is the equivalent code in Rust:

```rust
fn main() {
    let mut greeting = String::from( "Hello" );
    greeting.push_str( ", world!" );
    println!( "{}", &greeting );
}
```
This Rust program does the same thing as the original C++ one: it creates a string variable and appends to it. The `push_str` method of the String type is used instead of the `append()` function for strings in C++ because Rust doesn't have string literals like C++.
