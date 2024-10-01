Sure! Here's the equivalent Rust code for the given Python code snippet:
```
let s1 = String::from("hello");
println!("{} world", s1);
let s2 = format!("{} world", s1);
println!("{}", s2);
let mut s3 = String::from("hello");
s3.push_str(", mom");
let s4 = format!("{}, {}, {}", s3, "world", "mom");
println!("{}", s4);
```
In this Rust code, we first create a `String` variable `s1` and assign it the value "hello". We then use string interpolation to concatenate " world" to `s1` and print the result.
Next, we create another `String` variable `s2` and use the `format!` macro to concatenate " world" to `s1`. This also prints the resulting `s2` variable.
We then use the same approach to create a `mut String` variable `s3` and push the string ", mom" to it. We then create another `String` variable `s4` using the `format!` macro and concatenate `s1`, "world", and "mom" into it. This also prints the resulting `s4` variable.
I hope this helps! Let me know if you have any further questions.

