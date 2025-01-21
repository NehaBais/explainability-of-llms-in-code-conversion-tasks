The error in a single line is: `error: expected item, found keyword `let``

The fix for this error involves using `const` or `static` instead of `let` for global variables.

Here's the corrected code in a single code block:

```rs
const original: String = "Mary had a X lamb".to_string();
const little: String = "little";

original.replace("X".to_string(), little.to_string()));
println!("{}",original); 
```
