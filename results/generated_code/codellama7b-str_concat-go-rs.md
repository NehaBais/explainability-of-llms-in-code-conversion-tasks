In Rust, you can create a string variable by assigning it a text value like this:

fn main() {
  let mut s = String::from("hello");
}

You can then concatenate the original variable with another string literal and assign the result to a new string variable. Here's an example of how you could do this in Rust:
```rust
fn main() {
  let mut s = String::from("hello");
  let s2 = format!("{}{}", s, "literal");
}
```
This code will output the following:

"hello"
"helloliteral"

You can see that the first string variable `s` is equal to `"hello"` and the second string variable `s2` is equal to `"helloliteral"`.
