Here's the Rust code that fulfills the given requirements:
```rust
fn main() {
 let mut s = String::from("hello"); // text assigned to a string variable
 println!("{}", s); // output string variable
 println!("{} literal", s); // this output is requested in the task description
 let s2 = format!("{} literal", s); // concatenate variable and literal, assign result to another string variable
 println!("{}", s2); // output second string variable
}
```
In Rust, we declare a mutable string variable `s` using the `mut` keyword, and then assign it the value `"hello"` using the `from` method of the `String` struct. We print the value of `s` using the `println!` macro, which prints the value of the expression inside the curly braces.
We also print a string that includes the value of `s` by concatenating it with the literal string `" literal"`. The backslash character is used to start an escape sequence that indicates a newline and a tab.
Finally, we concatenate `s` with the literal string using the `format!` macro, which is similar to `println!` but returns a string instead of printing it. We assign the result to another string variable `s2` and print its value using `println!`.

