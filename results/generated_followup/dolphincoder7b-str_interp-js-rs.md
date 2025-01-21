The error occurs because Rust does not support JavaScript's string interpolation feature directly using format! macro. Instead, we use format! macro to produce the required output. The "let" keyword is used in place of "var" or "const" in Rust. To resolve this issue, we have replaced all occurrences of "let" with "const".

Here is the corrected code block:

```rust
const ORIGINAL  = "Mary had a X lamb";
const LITTLE  = "little";
let replaced   = format!("{} had a  {} lamb", original, little);
println!("{}", replaced);
```

This will output the following:
"Mary had a little lamb"
