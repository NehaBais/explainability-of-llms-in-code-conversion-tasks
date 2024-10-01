Here's the Rust code that fulfills the given requirements:
```
fn main() {
 let mut greeting = String::from("Hello");
 greeting.push_str(", world!");
 println!("{}", greeting);
}
```
In Rust, we use `String` type to create and manipulate strings. We first create a mutable `greeting` variable of type `String` with the value `"Hello"`. Then, we use the `push_str` method to append the string literal ", world!" to the end of the `greeting` variable. Finally, we print the contents of the `greeting` variable using `println!`.

