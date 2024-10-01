Here is the equivalent Rust code:

```rust
fn main() {
    let mut string = "abc".to_owned();
    println!("{}", string);
    string.push_str("def");
    println!("{}", string);
}
```

Note that in Rust, strings are not just arrays of characters but are a separate type (`String` or `&str` depending on if it's owned or borrowed). Therefore, the way to create a string variable is by declaring a mutable variable and assigning it a value. In this case, we're using the `to_owned()` method to create an owned `String` from the literal "abc". 

The append operation in Rust is done through the `push_str()` method of the `String` type. This method takes a string literal as its argument and appends it to the end of the `String` variable.

Finally, the contents of the `string` variable are printed using the `println!` macro. The `{}` inside the `println!` macro acts as a placeholder for the value that will be inserted at this point in the code.
