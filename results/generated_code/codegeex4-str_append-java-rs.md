In Rust, strings are immutable by default. To achieve the desired functionality we will need to use a mutable string variable and then update it by appending a new string literal using the `push_str` method. 

Here is how you can convert your Java code into idiomatic Rust:

```rust
fn main() {
    let mut string = String::from("abc");
    println!("{}",string);
    string.push_str("def");
    println!("{}",string);
}
```

In this Rust code, we're using `String::from` to create a mutable `String`. The `push_str` method is used to append a string slice (`&str`) to the end of the `String`.

Please note that the idiomatic way of handling strings in Rust often involves using the `format!` macro or an appropriate builder. However, this was done to maintain close similarity with the original Java code and not necessarily as best practice for typical Rust code usage.

In many cases, it is also possible to create an immutable string literal by adding `"def"` directly to your initial string, but this approach only works if you're working with `&str` types (i.e., string slices), not proper `String`s. The above solution covers all scenarios.
