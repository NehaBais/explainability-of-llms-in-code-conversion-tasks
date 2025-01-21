The error message is indicating that `let` keyword is not expected here when defining global variables (constants or static items). For Rust, constants are defined using the `const` keyword, and static variables are defined with the `static` keyword.

So we can fix it by changing the `let` keywords to their corresponding `const` or `static`. 
Here's the corrected code:
```rs
const ORIGINAL: &str = "Mary had a X lamb";
static LITTLE: &str = "little";
let replaced : String = format!("{}", ORIGINAL.replace("X", LITTLE));
println!("{}", replaced);  // prints: Mary had a little lamb
```
