To convert this Java code to Rust, you can use the format! macro. Here's how you can do it:

```rust
let adjective: &str = "little";
let lyric: String = format!("Mary had a {} lamb", adjective);

println!("{}", lyric);
```

In the Rust version, `String::format` is used for string interpolation. The curly braces `{}` are placeholders in the string that will be replaced by the values specified within the parentheses.
