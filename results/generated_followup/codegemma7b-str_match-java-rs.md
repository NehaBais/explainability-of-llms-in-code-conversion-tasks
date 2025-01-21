The error occurs because `let` is used to declare variables inside functions, but it cannot be used for global variables in Rust. To fix this, change `let` to `const` or `static`.

```rs
const str1: &str = "abcd";
```
