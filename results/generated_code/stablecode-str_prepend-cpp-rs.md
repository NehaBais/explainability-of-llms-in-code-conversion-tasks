In Rust, the equivalent code would look like this:

```rust
fn main() {
    let mut my_strings = vec!["my string".to_string()];
    my_strings.push("prepended to".to_string());

    let prepended: String = my_strings.iter().fold(String::new(), |a, b| a + &b));
    println!("{}", prepended);
}
```
In this Rust code, we first declare a mutable vector `my_strings` and populate it with the strings "my string" and "prepended to". 

Next, we use the `iter()` method to create an iterator over the elements of `my_strings`. We then use the `fold()` method to concatenate all the strings in `my_strings` into a single string.

Finally, we print out the resulting string using the `println!()` macro.
