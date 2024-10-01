Here's the Rust code that does the same thing as the Python code:
```rust
fn main() {
 let extra = "little";
 let new_str = format!("Mary had a {} lamb.", extra);
 println!("{}", new_str);
}
```
This code defines a variable `extra` with the value `"little"`, and then uses the `format!` function to interpolate it into a string. The result is assigned to the variable `new_str`, which is then printed to the console using `println!`. The output of this program will be:

Mary had a little lamb.

Note that in Rust, we use curly braces `{}` instead of parentheses `()` for string interpolation. We also use the `format!` function instead of f-strings (which are not supported in stable Rust yet).

