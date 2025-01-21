The error is caused by the fact that `let` is used to declare a new variable, but it is already declared in the previous line. To fix this, we can use `const` or `static` instead of `let`.
Here's the corrected code:
```rs
let s1 = String::from("hello");
println!("{} world", s1);
let s2 = format!("{} world", s1);
println!("{}", s2);
let s3 = vec![String::from("hello"), String::from("world"), String::from("mom")];
let s4 = s3.join(", ");
println!("{}", s4);
let s5 = format!("{}", s4);
println!("{}", s5);
```
This code creates a `String` variable `s1` with the value `"hello"`, concatenates it with the string literal `" world"` using `format!()`, and prints both `s1` and the formatted string `s2`. It then creates a vector of `String` values, joins them with a comma separator using the `join()` method, and stores the result in `s4`. Finally, it formats `s4` using `format!()` and prints the resulting string.

