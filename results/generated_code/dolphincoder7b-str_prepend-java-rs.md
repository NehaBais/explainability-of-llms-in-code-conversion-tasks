```rust
let mut string = "def".to_owned(); // convert String to owned type (String is not Copy)
string = "abc".to_owned() + &string;
```
In Rust, the `+` operator is used for concatenation. However, this requires that both strings are of the same type, which is why we use the `.to_owned()` method to convert a string slice into an owned `String`. The `&` before `string` tells Rust to treat it as a reference so that we can pass it by value without consuming ownership.
