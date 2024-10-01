In Rust, you can achieve the same functionality using the standard libraries. The code in C is performing string manipulation, memory allocation and deallocation.

Here is the equivalent Rust code:

```rust
fn main() {
    let mut str = String::from("my String"));
    let cstr = "Changed ";

    // Prepend the string with another string literal
    str = format!("{}{}", cstr, str));

    println!("{}", str));
}
```

In this Rust code:
- A mutable `String` variable is created and initialized with the value "my String".
- Another string literal "Changed " is assigned to the `cstr` variable.
- The `format!()` macro is used to concatenate the string literal "Changed " with the original `String` variable, effectively prepending the string variable with another string literal.
- Finally, the resulting modified `String` variable is printed using the `println!()` macro.

Please note that this Rust code assumes that you have a basic understanding of programming concepts and the Rust language syntax.
