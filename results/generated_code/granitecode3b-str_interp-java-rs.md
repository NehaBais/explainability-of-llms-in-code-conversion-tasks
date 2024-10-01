Sure! Here's the equivalent Rust code:
```
let mut adjective = String::from("little");
let lyric = format!("Mary had a {} lamb", adjective);
```
In Rust, string interpolation is done using the `format!` macro. The curly braces `{}` are placeholders for values that will be inserted into the string when it's formatted. In this case, we're using one placeholder (`{}`) to represent the value of the `adjective` variable.

