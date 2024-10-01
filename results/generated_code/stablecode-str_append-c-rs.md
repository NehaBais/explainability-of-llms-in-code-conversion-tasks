In Rust, the equivalent code would look like this:

```rust
fn main() {
    let mut str = String::from("Good Morning");
    let cstr = " to all";
    let cstr2 = " !!";

    // Appending strings using format! macro
    str = format!("{}{}{}", str, cstr, cstr2);

    println!("{}", str);
}
```

This Rust code does the same thing as your C code. It creates a string variable and appends another string literal to it in an idiomatic way using the `format!` macro. Finally, it prints out the contents of the variable after the append operation.
