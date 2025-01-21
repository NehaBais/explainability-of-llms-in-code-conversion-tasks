 Certainly! Below is the equivalent Rust code for the provided C++ code. This Rust code creates a string variable equal to any text value, concatenates it with another string literal, and then prints out the contents of both variables.

```rust
fn main() {
    let s = String::from("hello");
    println!("{} literal", s);
    
    let s2 = format!("{}{}", s, " literal");
    println!("{}", s2);
}
```

In this Rust code:
- `String::from("hello")` is used to create a string variable `s`.
- The `println!` macro is used to print the content of `s` concatenated with " literal".
- The `format!` macro is used to concatenate `s` and " literal" into a new string `s2`, which is then printed.
