Here is the equivalent code in Rust:

```rust
fn main() {
    // text assigned to a string variable
    let mut s = String::from("hello");

    // output string variable
    println!("{}", &s);

    // concatenate variable and literal, assign result to another string variable
    s.push_str(" literal");

    // output second string variable
    println!("{}", &s);
}
```

In Rust, there's a difference between mutable and immutable strings. In this code, `s` is declared as a mutable String using the `mut` keyword. Strings are immutable by default in Rust, so we need to use the `push_str()` method to concatenate two strings. If you want to change the original string instead of creating a new one, it's required to declare it as mutable (`let mut s = "hello"`).
