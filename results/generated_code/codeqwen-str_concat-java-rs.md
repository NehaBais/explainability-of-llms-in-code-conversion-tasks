Here is the equivalent code in Rust:

```rust
fn main() {
    let mut s = String::from("hello");
    s.push_str(" literal");
    println!("{}", s);

    let s2 = format!("{}{}", s, " literal");
    println!("{}", s2);
}
```

In Rust, we use the `String::from()` function to create a new `String`. The `push_str` method is used to append a string slice (`&str`) to an existing `String`. The `format!` macro is used to concatenate two strings. The output of each println statement will be:

hello literal
hello literal literal
