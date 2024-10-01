Sure! Here's the equivalent Rust code for the given Python code:
```
let extra = "little";
let new_str = format!("Mary had a {} lamb.", extra);
println!("{}", new_str);
```
In Rust, string interpolation is achieved using the `format!` macro. The curly braces `{}` are placeholders that will be replaced by the values inside the parentheses `()`. In this case, we're replacing the placeholder with the value of the `extra` variable.

