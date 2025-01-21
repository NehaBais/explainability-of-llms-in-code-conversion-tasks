 Sure, here is the equivalent code in Rust:

```rust
fn main() {
    let mut s = String::from("foo");
    s.push_str("bar");
    println!("{}", s);
}
```

In this Rust code:
- We create a mutable `String` variable `s` and initialize it with "foo".
- We then append the string literal "bar" to `s` using the `push_str` method.
- Finally, we print the contents of `s` using `println!`.
