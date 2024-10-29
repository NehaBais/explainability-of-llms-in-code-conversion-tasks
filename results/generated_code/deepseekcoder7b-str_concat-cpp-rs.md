In Rust, you can use the `String` type and its methods to concatenate strings. Here is the equivalent code in Rust:

```rust
fn main() {
    let s = String::from("hello");
    println!("{} literal", &s);
    
    let s2 = format!("{}{}", s, " literal");
    println!("{}", &s2);
}
```

In this code:
- `String::from()` is a way to create a string from a slice of bytes (in this case, the string "hello").
- The `println!()` macro in Rust functions similarly as `std::cout` in C++. It prints to standard output with newline at end by default.
- We use `format!()` instead of `+` for concatenating strings because string formatting (like the one in `println!("{}", &s2);`) is not possible as easily with addition operation like in C++. The `format!()` macro returns a new String type and it can be used inline just like normal variables or constants.

