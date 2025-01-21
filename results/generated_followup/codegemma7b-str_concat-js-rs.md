The error occurs because `let` is used to declare variables with block scope, while global variables in Rust are typically declared with `const` or `static`. The fix is to use `const` or `static` instead of `let` for global variables.

```rs
const s = "hello";
println!("{s} there!");
```
