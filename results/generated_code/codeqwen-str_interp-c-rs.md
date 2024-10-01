In Rust, you can use the format! macro for string interpolation similar to C's printf function. The following code accomplishes what your original C code does in Rust:

```rust
fn main() {
    let extra = "big";
    println!("Mary had a {} lamb.", extra);
}
```

This will print: 
"Mary had a big lamb."
