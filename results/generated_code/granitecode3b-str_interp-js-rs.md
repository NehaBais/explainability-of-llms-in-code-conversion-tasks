Here's the equivalent Rust code for the given JavaScript code:
```rust
let original = "Mary had a X lamb";
let little = "little";
let replaced = original.replace("X", little); // Does not change the original string
println!("{}", replaced); // Output: Mary had a little lamb
```
In Rust, we can use the `replace()` method on strings to replace defined character sequences in the string with values or variable values. The code above demonstrates how to replace the value "X" in the original string with the value of the "little" variable. The result is stored in the "replaced" variable, and then printed to the console using `println!()`.

