Here is the equivalent code in Rust:

```rust
fn main() {
    let mut string = String::from("abc");
    println!("{}", &string);
    string.push_str("def");
    println!("{}", &string);
}
```

In this code, we first create a mutable variable `string`, which is initialized with the value "abc". Then we print its contents using the `println!` macro. Next, we append "def" to the end of `string` using the `push_str` method. Finally, we print the updated contents of `string`.
