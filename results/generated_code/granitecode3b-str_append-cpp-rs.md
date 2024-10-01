Here's the Rust code that accomplishes the same task as the given C++ code:
```
fn main() {
 let mut greeting = String::from("Hello");
 greeting.push_str(", world!");
 println!("{}", greeting);
}
```
The Rust `String` type is similar to the C++ `std::string` type, but it also provides additional methods for manipulating strings. In this code, we create a new `String` variable named `greeting` and initialize it with the value "Hello". We then use the `push_str()` method to append the string ", world!" to the end of the `greeting` variable. Finally, we print out the contents of the `greeting` variable using the `println!` macro.

