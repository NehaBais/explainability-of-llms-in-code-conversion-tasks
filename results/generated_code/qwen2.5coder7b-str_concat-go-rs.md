Here is the equivalent code in Rust:

```rust
fn main() {
    // text assigned to a string variable
    let s = String::from("hello");

    // output string variable
    println!("{}", s);

    // concatenate variable and literal, assign result to another string variable
    let s2 = format!("{} literal", s);

    // output second string variable
    println!("{}", s2);
}
```

In Rust, the `String` type is used for mutable, heap-allocated strings. The `format!` macro is used for formatting and concatenating strings.
