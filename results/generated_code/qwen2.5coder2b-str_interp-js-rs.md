To convert this JavaScript code to Rust, you can use the `format!` macro for string interpolation. Here is how you would do it:

```rust
fn main() {
    let original = "Mary had a X lamb";
    let little = "little";

    // Using format! for string interpolation
    let replaced = format!("{} had a {} lamb", original, little);

    println!("{}", replaced);
}
```

In this Rust code, the `format!` macro is used to insert the values of `original` and `little` into the string. The result is stored in the `replaced` variable, which is then printed to the console. This approach is similar to JavaScript's string replacement method (`replace`).
