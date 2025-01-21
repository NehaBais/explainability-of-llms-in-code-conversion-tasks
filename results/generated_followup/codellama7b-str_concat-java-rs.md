The error is caused by the fact that `format!` macro returns a `String`, while we are trying to assign it to a reference `&str`. To fix this, we can use the `to_string()` method of the `String` struct to convert the string into an owned `String`. Here's the corrected code:
```rs
fn main() {
    let s = "hello";
    println!("{} literal", s);
    let s2 = format!("{}{} literal", s, s).to_string();
    println!("{}", s2);
}
```
This code will print the original string and its concatenation with another string literal. The `to_string()` method is used to convert the `String` returned by the `format!` macro into an owned `String`, which can then be assigned to a reference `&str`.
