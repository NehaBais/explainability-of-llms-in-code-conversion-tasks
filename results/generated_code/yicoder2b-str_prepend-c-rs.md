The equivalent code in Rust would be:

```rust
fn main() {
    let mut str = "my String".to_string();
    let cstr = "Changed ".to_string();
    str.insert(0, *cstr.chars().nth(0).unwrap());
    println!("{}", &*str);
}
```
This code does essentially the same thing as the original C program: it creates a string variable `str` with a text value of "my String", then prepend another string literal "Changed " to the front of the string. The `insert()` function is used to add characters to the specified position in the string (`0` being the first character), and it also appends the string that's already been converted into a `String`. The `println!("{}", &*str)` at the end prints the result of converting `&str` (the mutable reference to the string str) back into a `&str`, which is then printed on the screen.
