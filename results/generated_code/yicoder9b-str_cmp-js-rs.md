In Rust:

```rust
fn main() {
    // Comparing two strings for exact equality and inequality
    let string1 = String::from("abcd");
    let string2 = String::from("abcd");
    let string3 = String::from("ABCD");
    println!("{}", string1 == string2); // true
    println!("{}", string1 != string2); // false

    // Comparing two strings for case insensitive equality and inequality
    let string4 = String::from("ABCD");
    println!("{}", string3.to_lowercase() == string4.to_lowercase());  // true (case insensitive)
    println!("{}", string1 != string2); // false (case insensitive)

    // Comparing two strings for lexically ordered before and after
    let string5 = String::from("abcd");
    let string6 = String::from("dcba");
    println!("{}", string5.cmp(&string6).is_less()); // true (lexical comparison)
    println!("{}", string5.cmp(&string6).is_greater());  // false (lexical comparison)
}
```
Rust's `String` type provides a method for case-insensitive comparison (`to_lowercase()` and `to_uppercase()`), and for lexical comparison via the `cmp()` function.

Keep in mind that Rust's String is UTF-8 by default which can cause issues when comparing strings with numbers (e.g. "10" > "2") because it will compare the Unicode values of each character rather than their numerical value. To avoid this you may need to convert numeric strings into numbers before comparison. 

If two string slices are equal, regardless of their underlying identities as distinct `String` objects, they can be compared using the `==` and `!=` operators directly on the string slices. This is because Rust's type system requires that these operations must respect the borrowing rules (i.e., if two distinct `String` instances are equal, then any borrowed views of those strings will also be equal).
