 Here's the equivalent Rust code for the given C++ code, which handles the specified substring operations on a UTF-8 string:

```rust
fn main() {
    let s = String::from("0123456789");

    let n = 3;
    let m = 4;
    let c = '2';
    let sub = "456";

    // Starting from n characters in and of m length
    println!("{}", &s[n..n + m]);

    // Starting from n characters in, up to the end of the string
    println!("{}", &s[n..]);

    // Whole string minus the last character
    println!("{}", &s[..s.len() - 1]);

    // Starting from a known character within the string and of m length
    if let Some(pos) = s.find(c) {
        println!("{}", &s[pos..pos + m]);
    }

    // Starting from a known substring within the string and of m length
    if let Some(pos) = s.find(sub) {
        println!("{}", &s[pos..pos + m]);
    }
}
```

This Rust code performs the same operations as the C++ code:
1. Displays a substring starting from `n` characters in and of `m` length.
2. Displays a substring starting from `n` characters in, up to the end of the string.
3. Displays the whole string minus the last character.
4. Displays a substring starting from a known character within the string and of `m` length.
5. Displays a substring starting from a known substring within the string and of `m` length.

Note that Rust's `String` type is used, which can handle UTF-8 encoded strings as required. The indexing operation for substrings (`&s[n..n + m]`, etc.) ensures that logical characters (code points) are referenced correctly.
