Rust does not have built-in support for string interpolation, which is provided by the `format!` macro in std::fmt module. You can achieve the same functionality in Rust using the format! macro as shown below:
```rust
let adjective = "little";
let lyric = format!("Mary had a {} lamb", adjective);
```
You need to replace `%s` with `{}` and pass it a string or variable. This will result in string interpolation, which is the replacement of defined character sequences in the string by values or variable values.
