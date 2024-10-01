 In Rust, the code would look like this:

```rust
fn main() {
    let mut s1 = String::from("hello");
    println!("{} world", s1);

    let s2 = format!("{}, world", s1.clone());
    println!("{}", s2);

    let s3: Vec<String> = vec![s1, "world".to_string(), "mom".to_string()];
    let s4: String = s3.join(", ");
    println!("{}", s4);
}
```
In this Rust code, we use the `String::from()` function to create a string from a literal, and then we use the `format!` macro with `{}, world`, which is similar to Python's `"{}" .format()`. The `.clone()` function is used when we want to make a copy of `s1`. For joining multiple strings into one using a separator, we just use the `join()` method directly on the vector of strings. Finally, println! macro is used for printing out the string content, similar to print in python.
