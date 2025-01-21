The error message is indicating that `let` is not expected at this point, it's expecting an item but found a keyword `let` instead. In Rust variables are defined using `let`, `const` or `static` keywords depending upon the context. Global variables in Rust have to be declared with the `pub static` or `const` keywords.

The corrected code should be:
```rs
const ADJECTIVE : &str = "little";
let lyric = format!("Mary had a {} lamb", ADJECTIVE);
```
