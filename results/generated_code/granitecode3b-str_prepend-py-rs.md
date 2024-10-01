Sure, here's the equivalent Rust code for the given Python code snippet:
```
fn main() {
 let mut s = String::from("12345678");
 s.insert(0, "0");
 println!("{}", s);
}
```
This code first creates a mutable string variable `s` and assigns it the value "12345678". It then uses the `insert()` method to prepend the string literal "0" to the beginning of `s`. Finally, it prints the resulting string. 
Note that in Rust, strings are represented using the `String` type, which provides methods for manipulating and formatting them. In this example, we use the `from()` method to create a `String` from the literal value "12345678", and then we use the `insert()` method to insert the string literal "0" at the beginning of `s`.

