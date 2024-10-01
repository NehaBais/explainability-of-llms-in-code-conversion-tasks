Here's the Rust code that meets the requirements:
```
fn main() {
 let s = "hello".to_string();
 println!("{} literal", s);
 let s2 = format!("{} literal", s);
 println!("{}", s2);
}
```
In this code, we first create a string variable `s` and assign it the value `"hello"`. We then concatenate this with the string literal `" literal"` using the `+` operator, resulting in a new string `"hello literal"`. Finally, we print both strings to the console.
Note that in Rust, we use the `to_string()` method on the string literal `"hello"` to create an owned copy of it as a `String`, since string literals are immutable in Rust. We also use the `format!()` macro to concatenate the two strings together.

