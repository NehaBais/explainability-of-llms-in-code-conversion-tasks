Here's how you can do it in Rust:
```
let adjective = "big";
let lyric = format!("Mary had a {} lamb", adjective);
```
In Rust, we use the `format!` macro to perform string interpolation. The macro takes a format string as its first argument and any number of additional arguments that will be interpolated into the format string. In this case, we pass in the `adjective` variable as an additional argument after the format string. The result is stored in the `lyric` variable.

