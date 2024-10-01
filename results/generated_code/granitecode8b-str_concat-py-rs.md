Here's the Rust code that fulfills the requirements:
```
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
In this code, we first create a `String` variable `s1` and assign it the value `"hello"`. We then concatenate `s1` with the string literal `" world"` using the `+` operator and store the result in `s2`. Finally, we print both `s1` and `s2` to the console.
To achieve the same functionality in Rust, we can use the `String::from()` method to create a new `String` from a string literal, and the `format!()` macro to format a string with variables. We also use the `vec!` macro to create a vector of `String` values, and the `join()` method to concatenate them with a comma separator.

