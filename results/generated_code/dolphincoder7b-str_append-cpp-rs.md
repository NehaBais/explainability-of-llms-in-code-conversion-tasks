Sure, here's the equivalent Rust code:
```
use std::string::String;

fn main() {
    let mut greeting = String::from("Hello");
    greeting.push_str(", world!");
    println!("{}", greeting);
}
```
Explanation:
- To create a string variable in Rust, we use the `String` struct from the standard library.
- We can initialize the string variable using the `from` function or by directly assigning it a string literal.
- After that, we use the `push_str` method to append another string literal to the end of our `greeting` string.
- Finally, we print the value of the `greeting` string using `println!`.
