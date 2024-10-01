 In Rust, you can achieve the same result with the following code:

```rust
fn main() {
    let mut s = String::new();
    s.push_str("foo");
    s.push_str("bar");
    println!("{}", s);
}
```

In this Rust version, we start by defining a `String` variable `s`. We then use the function `push_str()` to append two string literals "foo" and "bar". Finally, we print out the contents of the `String` variable.
