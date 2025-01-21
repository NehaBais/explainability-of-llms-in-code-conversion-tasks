The error occurs because `let` is used to declare a mutable variable within a function, but in this case, we need to declare a global constant. The fix is to use `const` instead of `let`.

```rs
const s: &str = "12345678";
const s: &str = "0" + s;  // by concatenation
println!("{}", s);
```
