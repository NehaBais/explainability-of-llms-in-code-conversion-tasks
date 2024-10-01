Rust does not support JavaScript's string interpolation feature directly, but we can work around this by using format! macro instead of replace function. Below is how we can convert JavaScript code to Rust:
```rust
let original = "Mary had a X lamb";
let little = "little";
let replaced  = format!("{} had a {} lamb", original, little);  //changed from original string
```
This will produce the following Rust output:

"Mary had a little lamb"

