The error is occurring because the `let` keyword is being used for variable declaration, but it is recommended to use `const` or `static` for global variables in Rust. The fix is to replace `let` with `const`. Here's the corrected code:
```rs
const adjective = "big";
let lyric = format!("Mary had a {} lamb", adjective);
```
In this revised code, we have replaced `let` with `const` for the variable declaration of `adjective`. This ensures that the variable is treated as a constant and can be used throughout the program. The rest of the code remains unchanged.

