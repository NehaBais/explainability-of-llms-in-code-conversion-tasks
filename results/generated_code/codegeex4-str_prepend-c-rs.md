The equivalent code in Rust would be:

```rust
fn main() {
    let mut str = String::from("my String");
    let cstr = "Changed ";
    str.push_str(cstr);

    println!("{}", str);
}
```

Here's a step-by-step explanation of this Rust code:

1. We declare a mutable string variable `str` and initialize it with the value "my String".
2. We declare an immutable string literal `cstr` and assign it the value "Changed ".
3. We use the method `push_str()` to append the contents of `cstr` to `str`.
4. Finally, we print out the concatenated string using the `println!()` macro.

There's no need for dynamic memory allocation in Rust as compared to C because it has built-in garbage collection and a much simpler way to handle strings.
