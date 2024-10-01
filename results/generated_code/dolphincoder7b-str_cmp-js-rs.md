This is the Rust equivalent of the JavaScript code. It includes multiple string comparison operators, as well as case-insensitive comparisons:

```rust
fn main() {
    println!("{:?}", "abcd" == "abcd"); // true
    println!("{:?}", "abcd" != "dcba"); // false
    println!("{:?}", 123 == "123"); // true
    println!("{:?}", 123f64 != "123"); // false
    println!("{:?}", "ABCD".to_lowercase() == "abcd".to_lowercase()); // true (case insensitive)
}
```

Note that Rust does not have the same comparison rules as JavaScript. In particular, Rust treats `==` and `!=` the same, so `"abcd" != "dcba"` is true instead of false in this example. Similarly, Rust handles numeric comparisons based on their representation rather than lexically ordering them like JavaScript does. Therefore, `123 == "123"` returns true because 123 and "123" are both represented as integers by the compiler. 

Finally, Rust has a difference between string comparison in terms of case sensitivity: `.to_lowercase()` is used to convert strings to lowercase before comparing them. If you want to compare two strings without considering their cases, use `.to_lowercase() == .to_lowercase()`.
