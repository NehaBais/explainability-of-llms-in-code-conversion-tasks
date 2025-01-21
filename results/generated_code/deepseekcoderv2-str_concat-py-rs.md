 Sure! Here is the equivalent code in Rust:

```rust
fn main() {
    let s1 = String::from("hello");
    println!("{} world", s1);

    let mut s2 = s1.clone();
    s2.push_str(" world");
    println!("{}", s2);

    let s1 = String::from("hello");
    let parts = vec![s1, "world".to_string(), "mom".to_string()];
    let s2: String = parts.join(", ");
    println!("{}", s2);
}
```

In this Rust code:
- We create a `String` variable `s1` and initialize it with the value "hello".
- We then concatenate " world" to `s1` using the `push_str` method.
- We also clone `s1` to create another string `s2`, which is then concatenated with " world".
- Finally, we create a vector of strings containing `s1`, "world", and "mom", and join them into a single string separated by ", ".
