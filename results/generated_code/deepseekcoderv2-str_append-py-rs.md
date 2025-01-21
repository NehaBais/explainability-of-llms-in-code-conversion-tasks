 Certainly! Below is the Rust code that performs the same operations as your Python script:

```rust
fn main() {
    let mut str = String::from("12345678");
    str.push_str("9!");
    println!("{}", str);
}
```

Explanation:
1. We declare a mutable string variable `str` and initialize it with the value "12345678".
2. We use the `push_str` method to append the string literal "9!" to the existing string.
3. Finally, we print the contents of the string using `println!`.
