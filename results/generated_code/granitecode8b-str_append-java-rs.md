Here's the equivalent Rust code that meets the requirements you've specified:
```
fn main() {
 let mut string = String::from("abc");
 println!("{}", string);
 string.push_str("def");
 println!("{}", string);
}
```
In Rust, we use `mut` to indicate that a variable can be modified, and we initialize the `string` variable with a `String` created from the `"abc"` literal using the `from()` method. We then print the contents of the `string` variable using `println!()`. 
To append the string variable with another string literal, we use the `push_str()` method to add the `"def"` literal to the end of the `string` variable. Finally, we print the contents of the `string` variable again using `println!()` to verify that the append operation was successful.

