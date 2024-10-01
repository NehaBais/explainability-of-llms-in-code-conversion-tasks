Here's the converted code from Golang to Rust:
```
fn main() {
 let mut s = String::from("foo");
 s.push_str("bar");
 println!("{}", s);
}
```
In this code, we create a mutable string variable `s` and initialize it with the value "foo". We then append the string literal "bar" to the end of `s` using the `push_str` method. Finally, we print the contents of `s` using the `println!` macro.

