The error occurs because `let` is used to declare variables inside functions in Rust, but in this case, the variables need to be accessible globally. To fix this, use `const` or `static` instead of `let`.

```rs
const extra: &str = "little";
let new_str = format!("Mary had a {} lamb.", extra);
println!("{}", new_str);
```
