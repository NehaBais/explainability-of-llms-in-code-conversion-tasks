 Sure, here's how you can convert the given Java code to Rust:

```rust
fn main() {
    let mut string = String::from("def"); // Create a mutable string variable equal to "def"
    string.insert_str(0, "abc"); // Prepend the string with "abc"
    println!("{}", string); // Print the modified string
}
```

In this Rust code:
- We create a mutable `String` variable named `string` and initialize it with the value `"def"`.
- We use the `insert_str` method to prepend the string literal `"abc"` to the existing string. The first argument to `insert_str` is the index at which to insert the new string, in this case 0 (the beginning of the string).
