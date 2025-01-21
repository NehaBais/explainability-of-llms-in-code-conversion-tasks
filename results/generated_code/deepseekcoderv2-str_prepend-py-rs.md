 Certainly! Below is the equivalent Rust code for the provided Python script:

```rust
fn main() {
    let mut s = String::from("12345678");
    s.insert(0, '0'); // by insertion at index 0
    println!("{}", s);
}
```

This Rust code does the following:
1. Creates a mutable string `s` and initializes it with the value `"12345678"`.
2. Uses the `insert` method to prepend the character `'0'` to the string at index 0.
