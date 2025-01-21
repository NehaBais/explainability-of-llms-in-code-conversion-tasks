The error occurs because `let` is used to declare variables inside functions, but it cannot be used for global variables. The fix is to use `const` or `static` instead of `let` for global variables.

```rs
const s1: &str = "abcd";
const s2: &str = "abab";
const s3: &str = "ab";
```
