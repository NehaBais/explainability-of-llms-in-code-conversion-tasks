The error occurs because `let` is used to declare local variables, while the variables in the code are intended to be global. The fix is to use `const` or `static` instead of `let`.

```rs
const original = "Mary had a X lamb";
let little = "little";
let replaced = original.replace("X", little);

println!("Original: {}", original);
println!("Replaced: {}", replaced);
```
