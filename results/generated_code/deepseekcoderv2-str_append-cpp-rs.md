 Sure! Below is the equivalent Rust code that performs the same operations as the provided C++ code:

```rust
fn main() {
    let mut greeting = String::from("Hello");
    greeting.push_str(", world!");
    println!("{}", greeting);
}
```

Explanation:
1. We create a mutable string variable `greeting` and initialize it with the value "Hello".
2. We use the `push_str` method to append ", world!" to the existing string.
3. Finally, we print the contents of the `greeting` variable using `println!`.
