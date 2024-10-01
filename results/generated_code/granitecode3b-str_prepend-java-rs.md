Sure, here's the equivalent Rust code:
```
let mut string = String::from("def");
string = format!("{}{}", "abc", string);
```
This code creates a mutable string variable `string` and assigns it the value `"def"`. It then uses the `format!` macro to concatenate the string literal `"abc"` with the value of `string`, storing the result back in `string`.

