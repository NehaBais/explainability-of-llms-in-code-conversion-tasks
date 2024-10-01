Here is the equivalent code in Rust:

```rust
fn main() {
    let mut s1 = String::from("Hello");
    s1.push_str(", World!");
    println!("{}", s1);
}
```

In this conversion, we use the `String::from()` function to create a string variable, which is similar to how it's done in JavaScript with the `var` keyword. Then, the `push_str()` method is used to append another string literal to the end of our string variable. Lastly, we print out the contents of the string using the `println!()` macro, which is a more idiomatic way to print output in Rust compared to the `print()` function in JavaScript.
