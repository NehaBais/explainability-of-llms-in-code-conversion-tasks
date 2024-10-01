 In Rust, you can use the format! macro to combine strings with placeholders and the print! macro to display values on a console:

```rust
fn main() {
    let mut s = String::from("hello");
    s.push_str(" there!");
    print!("{}", s);
}
```
In this code, `String::from` is used to convert the string literal `"hello"` into a `String`. The `push_str` method is then used to append the string literal `" there!"` to our `s` variable. Finally, the `print!` macro is used to print out the value of `s`, which results in `"hello there!"` being printed on the console.
