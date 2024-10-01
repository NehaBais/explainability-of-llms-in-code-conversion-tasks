In Rust, you can achieve the same result with the following code:

```rust
fn main() {
    let mut greeting = String::from("Hello");
    greeting.push_str(", world!");
    println!("{}", greeting);
}
```

Here's a brief explanation of how it works:
- In Rust, `String` is an owned, growable string type. We can use the `from()` method to create a new `String` from a literal.
- The `push_str()` method appends a string slice (`&str`) to a `String`.
- Finally, we print out the contents of `greeting` using `println!()`. Note that we need to dereference `greeting` with `*greeting` because `println!()` expects a reference to a string slice (i.e., `&str`).
