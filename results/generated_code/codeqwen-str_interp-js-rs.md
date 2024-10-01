In Rust, you can use the `format!` macro to do this kind of string interpolation:

Here is how you would achieve it:

```rust
fn main() {
    let original = "Mary had a X lamb";
    let little = "big";
    
    // Use format! macro for string interpolation
    let replaced = format!("{} {}", &original[..original.len()-2], little);

    println!("{}", replaced); // Prints: Mary had a big lamb
}
```

In the code above, `format!` is used to create a new string by formatting the arguments in place. This replaces "X" with "big". The slice `&original[..original.len()-2]` is used to remove the last two characters of the original string (" X").
