In Rust, the string type is `String` and you do not have to allocate memory for it like in C. You can directly add strings together using the `push_str` method.

Here's the Rust equivalent of your C code:

```rust
fn main() {
    let mut str: String = "Good Morning".to_string();
    let cstr: &str = " to all";
    let cstr2: &str = " !!!";

    // Append the string variable with another string literal in the most idiomatic way.
    str.push_str(cstr);
    str.push_str(cstr2);

    println!("{}", str);
}
```

In this Rust code, `push_str` method is used to add strings together. It's a more efficient and idiomatic way compared to appending two separate strings with `strcat`.
