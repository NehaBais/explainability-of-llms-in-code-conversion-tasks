 Sure, here is the equivalent code in Rust:

```rust
fn main() {
    let mut string = String::from("abc");
    println!("{}", string);
    string.push_str("def");
    println!("{}", string);
}
```

In this Rust code:
- We create a mutable `String` variable called `string` and initialize it with the value "abc".
- We print the contents of the variable.
- We use the `push_str` method to append the string literal "def" to the existing string.
- We print the updated contents of the variable after the append operation.
