The error occurred because the `let` keyword is not allowed in Rust for global variables. To fix this, we can use either `const` or `static` to declare the variable as a constant, which cannot be reassigned once initialized. Here's the corrected code:
```rs
const S1: String = String::from("hello");
println!("{} world", S1);
const S2: String = format!("{} world", S1);
println!("{}", S2);
let mut S3 = String::from("hello");
S3.push_str(", mom");
const S4: String = format!("{}, {}, {}", S3, "world", "mom");
println!("{}", S4);
```
In this corrected code, we declare `S1`, `S2`, and `S4` as constants using the `const` keyword. This ensures that their values cannot be changed after they are initialized. The rest of the code remains the same as in the original Python code.

