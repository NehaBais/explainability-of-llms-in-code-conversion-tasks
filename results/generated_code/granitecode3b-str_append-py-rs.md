Sure, here's the equivalent Rust code:
```rust
let mut str = String::from("12345678");
str.push_str("9!");
println!("{}", str);
```
This code creates a mutable string variable `str` with the initial value "12345678". It then appends the string literal "9!" to the end of `str` using the `+=` operator, which is the idiomatic way to append strings in Rust. Finally, it prints the contents of `str` using the `println!` macro.

