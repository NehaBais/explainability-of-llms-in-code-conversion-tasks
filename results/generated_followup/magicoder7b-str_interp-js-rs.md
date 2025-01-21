 The error occurred because Rust does not allow mutable global variables with `let` keyword. You need to use the `const` or `static` keywords instead of `let`. Here is the corrected code:

```rs
const original: &str = "Mary had a X lamb";
const little: &str = "little";

let replaced = format!("{}", original.replace("X", little));

println!("{}", replaced); // Outputs: Mary had a little lamb
```
The corrected code uses `const` keyword for global variables to make them constant and thus, cannot be reassigned or modified after initialization.
