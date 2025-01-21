Here is the equivalent code in Rust:

```rust
fn main() {
    let mut string = String::from("abc");
    println!("{}", string);
    string.push_str("def");
    println!("{}", string);
}
```

In this code, we use `String::from` to create a mutable string variable named `string`. We then print the value of `string` using `{}` which is Rust's way of formatting strings. After that, we use `push_str` method to append "def" to `string`. Finally, we print `string` again to show its new value after appending.

Note: Unlike Java, Rust uses a mutable variable (`mut`) to allow modification of the variable later in code. Strings in Rust are UTF-8 encoded by default and can grow in size without allocating a new memory block every time.
