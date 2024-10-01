Here is the Rust version of your Java code:

```rust
fn main() {
    let str1 = "abcd";

    println!("{} starts with \"ab\": {}", str1, str1.starts_with("ab"));

    println!("{} ends with \"zn\": {}", str1, str1.ends_with("zn")));

    println!("{} contains \"bb\": {}", str1, str1.contains("bb")));
}
```

In the above Rust code:
- We are using `starts_with`, `ends_with` and `contains` functions of Rust's String class to perform these string operations.
- For finding multiple occurrences of a substring in Rust, you can use the `find` method which returns an index where the occurrence starts. The subsequent calls to `find` continue the search from where last found, until it finds another occurrence or the end of the string is reached. You can also pass the end position as second argument to the `find` method to limit the search within a specific range.
```
Note: In Rust 1.21.1 you might encounter an compilation error if you try to use the `loc` variable that was assigned in your Java code, because Rust is a statically-typed language and it does not support variables with generic types or multiple types like in your Java code example.
