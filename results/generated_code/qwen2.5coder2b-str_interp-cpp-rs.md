Sure, here is the equivalent Rust code for the given C++ code.

```rust
fn main() {
    let original = String::from("Mary had a X lamb.");
    let to_be_replaced = String::from("X");
    let replacement = String::from("little");

    let new_string: String = original.replace(to_be_replaced.as_str(), replacement.as_str());

    println!("String after replacement: {}", new_string);
}
```

In Rust, strings are immutable by default. This means that you cannot change a string directly, which is why we need to convert the `std::string` to `String`. Also, we use `as_str()` method to convert the string to a plain old Rust string (`&str`) before calling the `replace` method.
