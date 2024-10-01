Here's how you would write this code in Rust:

```rust
let mut string = "def".to_string();
string = "abc".to_string() + string;
```
In the Rust version, we use the `.to_string()` method to convert a &str literal into a String object. Also note that in Rust strings are not mutable, but String objects which are owned and can be mutated like this example.
