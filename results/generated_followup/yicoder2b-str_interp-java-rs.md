The error `expected item, found keyword `let`` indicates that when using `format!()` macro to concatenate strings with variables {}, you are trying to define a variable inside the string itself which is not allowed in Rust. The fix for this would be declaring your variable outside of the parentheses like so:

```rs
let adjective = "little";  // declare here instead of inside string
format!("Mary had a {} lamb", adjective);
```

This code will correctly produce the desired output: `Mary had a little lamb`.
