Sure, here is the equivalent code in Rust.

```rust
fn main() {
    let original = "Mary had a X lamb."; // original string
    let to_replace = "X";                // character to replace
    let replacement = "big";             // string to replace with
    
    let new_string = original.replace(&to_replace, &replacement).unwrap();
    println!("String after replacement: {}", new_string);  // print the replaced string
}
```
This code will take the original string and replace all occurrences of "X" with "big". It uses `str::replace` for this operation. It also uses `unwrap()` to handle the possible error produced by the method if there is any issue (e.g. missing replacement), which Rust's strings are not aware of. It may return a reference to a slice, or the value `&str` can be used instead of `String`.

Please note that in Rust, you have to explicitly unwrap errors. This code assumes there won't be any problem and will directly replace the string without further validation.
