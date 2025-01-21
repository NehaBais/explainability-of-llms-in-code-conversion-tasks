**Error:** `let` is used for variable declaration, which is not allowed in global scope.

**Fix:** Use `const` or `static` for global variables.

```rs
const s = ", World";
let mut greeting = "Hello".to_string();
greeting.push_str(s);
println!("{}", greeting);
```
