Sure, here's the equivalent Rust code:
```rust
fn main() {
 let mut string = String::from("abc");
 println!("{}", string);
 string.push_str("def");
 println!("{}", string);
}
```
The `String` type in Rust is a mutable sequence of Unicode code points, similar to the `String` type in Java. To create a new `String`, you can use the `String::from()` method, which takes a reference to a slice of bytes or a character. In this case, we're using the string literal `"abc"`.
To append a string literal to an existing `String`, you can use the `push_str()` method on the `String` instance. This method takes a reference to a slice of bytes or a character and appends it to the end of the string. In this case, we're using the string literal `"def"`.
The `println!` macro is used to print out the contents of the `string` variable before and after the append operation. The `{}` syntax is used to insert the value of the `string` variable into the output message. After running the code, you should see the following output:
abc
abcdef

