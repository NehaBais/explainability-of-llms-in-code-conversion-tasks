In Rust, you can use the `format!` macro for string concatenation. Here is how you could implement this:

```rust
fn main() {
    let mut str = String::from("my String");
    let cstr = "Changed ";
    
    str = format!("{}{}", cstr, &str);
    
    println!("{}", str);
}
```

This code works similarly to your C code. It first creates a mutable `String` with the value `"my String"`. Then it defines another string literal `"Changed "`.

Afterwards, it uses the `format!` macro to create a new string that is the concatenation of `cstr` and `str`, and assigns this new string back to `str`.

Finally, it prints out the resulting string. The `format!` macro is used here because Rust's `String` type is not directly mutable like C's `char[]`. Using `format!` ensures that a new `String` is created, and we don't need any additional memory management like in the C code.
