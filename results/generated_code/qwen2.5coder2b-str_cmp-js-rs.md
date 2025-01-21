Sure, here is the equivalent Rust code for the given JavaScript comparison logic using Rust's standard library.

```rust
fn main() {
    println!("{}", 123 == 123); // true
    println!("{}", "abcd".eq("abcd")); // true
    println!("{}", 123 > 123); // false
    println!("{}", 123 <= 123); // true
    println!("{}", 123 < 123); // false
    println!("{}", 123 >= 123); // true
    println!("{}", "ABCD".eq("abcd")); // false
    println!("{}", "ABCD".ne("abcd")); // true
    println!("{}", "abcd".lt("dcba")); // true
    println!("{}", "abcd".gt("dcba")); // false
    println!("{}", "ABCD".to_lowercase() == "abcd".to_lowercase()); // true (case insensitive)
}
```
The `eq` function and `ne` function used in Rust are equivalent to JavaScript's `==` and `!=` operators, respectively. The `<`, `<=`, `>`, and `>=` operators are used for less than, less than or equal to, greater than, and greater than or equal to comparisons, respectively.

The `to_lowercase()` method is used to convert strings to lowercase, which is equivalent to JavaScript's `.toLowerCase()` method. Note that if you need case sensitive comparison, you will have to manually handle it by converting both strings to the same case before comparing them.

The type system in Rust is statically typed, so all comparisons are type-safe and must match the types being compared (for example, integer with integer or string with string).
