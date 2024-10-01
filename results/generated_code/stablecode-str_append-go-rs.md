Sure, here's the equivalent Rust code:

```rust
fn main() {
    let mut s = String::from("foo");
    s.push_str("bar");

    println!("{}", s);
}
```
This Rust code does essentially the same thing as the Golang code you provided. 

1. It declares a variable `s` of type `String`, and initializes it to the string "foo".
2. It then appends the string "bar" to `s`. 
3. Finally, it prints out the final value of `s`.

Please note that in Rust, strings are not just sequences of characters like they are in Golang. Instead, Rust's String type is a more complex data structure that is optimized for various operations on strings. For most purposes, though, you can treat a `String` as a simple sequence of characters just like you would with a string literal or concatenation operation in Golang.
