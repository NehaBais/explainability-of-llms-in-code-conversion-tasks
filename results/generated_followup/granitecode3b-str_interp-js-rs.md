The error occurs because the Rust `let` keyword is not valid outside of a function or other scope. In JavaScript, `let` can be used inside functions to define local variables, but in Rust, it must be used in a different way. 
To fix this error, we can simply replace all instances of `let` with `const`. This will declare the variable as constant and allow it to be used outside of any function or other scope.
Here's the corrected code:
```rust
const original = "Mary had a X lamb";
const little = "little";
const replaced = original.replace("X", little); // Does not change the original string
println!("{}", replaced); // Output: Mary had a little lamb
```
This code defines three constants `original`, `little`, and `replaced`. The `const` keyword makes these variables constant, which means they can be used anywhere in the program without needing to be declared as mutable or shared. 
The `replace()` method is then used to replace the value "X" in the original string with the value of the "little" variable. The result is stored in the `replaced` variable, and then printed to the console using `println!()`.

