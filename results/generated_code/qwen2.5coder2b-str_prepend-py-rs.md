Sure, here is the equivalent Rust code:

```rust
fn main() {
    let mut s = String::from("12345678");
    s.insert(0, '0');
    println!("{}", s);
}
```

In this program:
- We first convert the input string "12345678" into a `String` because Rust's string type is mutable and does not have built-in string concatenation.
- Then we use the `insert` method to prepend the character '0' at index 0 of the string.
- Finally, we print the modified string.
