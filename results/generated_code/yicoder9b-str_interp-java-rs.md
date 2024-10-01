In Rust, you can use the format! macro to achieve similar functionality. Here is how you would convert your given Java code:

String adjective = "little";
String lyric = String.format("Mary had a %s lamb", adjective);

to:

```rust
let adjective = "little".to_string();
let lyric = format!("Mary had a {} lamb", adjective);
```
