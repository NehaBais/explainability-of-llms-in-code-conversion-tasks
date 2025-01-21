Here is how you can convert the given C++ code to Rust:

```rust
fn main() {
    let original = String::from("Mary had a X lamb.");
    let to_be_replaced = "X";
    let replacement = "little";

    // The `replace` function of String type in rust does not require finding the index manually.
    let new_string = original.replace(to_be_replaced, replacement);

    println!("String after replacement: {}", new_string);
}
```

This Rust code is doing exactly what your C++ code was doing. It's replacing "X" with "little" in the string "Mary had a X lamb." and printing out the result.
