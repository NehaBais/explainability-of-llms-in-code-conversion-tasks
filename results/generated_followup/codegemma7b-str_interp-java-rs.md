The error occurs because `let` is used to declare local variables, while the variables need to be declared globally for string interpolation. The fix is to use `const` or `static` instead of `let`.

```rs
const adjective: &str = "little";
let lyric = format!("Mary had a {} lamb", adjective);
```
