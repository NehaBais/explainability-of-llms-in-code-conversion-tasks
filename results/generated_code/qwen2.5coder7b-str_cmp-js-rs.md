In Rust, string comparison is done using the `==` and `<=>` operators. The `==` operator checks for equality of content, while the `<=>` operator does a lexical comparison. 

The `to_lowercase()` method can be used to convert strings into lowercase before comparison.

Rust does not support triple equals (`===`) or inequality (`!=`, `!==`). It is more strict in terms of type checking compared to JavaScript. Therefore there is no need for separate methods for value and type equality.

Numeric strings are treated lexically, so `123 == "123"` will be true, but `123 === "123"` will be false because Rust doesn't allow such comparison since the types don't match.

Here's how you can write a similar function in Rust:

```rust
fn main() {
    println!("{}", "abcd" == "abcd"); // true
    println!("{}", 123 == "123"); // false (since they are different types)
    
    let lower_abcd = "ABCD".to_lowercase();
    let lower_abcd_expected = "abcd".to_lowercase();

    println!("{}", lower_abcd == lower_abcd_expected); // true
    println!("{}", "abcd" < "dcba"); // true
    println!("{}", "abcd" > "dcba"); // false
}
```

As for the case insensitive comparison, the Rust's `to_lowercase()` method does that, as it converts all characters in a string to their lowercase equivalents.
