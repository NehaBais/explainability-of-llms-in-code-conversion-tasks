The error occurs because Rust does not support string interpolation, but `format!()` is used to format strings. It replaces placeholders `{}` with values passed to the `format!` macro. The problem arises when trying to insert a single character into the placeholder, resulting in an error message related to codepoints. This issue can be fixed by using double quotes instead of single quotes for defining the variable 'extra'.

To fix this error and convert the Python code to Rust, we need to:

1. Import the `std::fmt` module which provides the `format!` macro.
2. Replace the single-quote character with a double-quote character in the definition of the 'extra' variable to match Rust's string literal syntax.
3. Use the `println!` macro to print the formatted string instead of using `print!`.
4. Remove the unused import for `std::fmt` warning since it has now been resolved.

The corrected code in a single fenced code block would look like this:

```rust
use std::fmt;

fn main() {
    let extra  = "little";
    let new_str  = format!("Mary had a {} lamb.", extra);
    println!("{}", new_str);
}
```
