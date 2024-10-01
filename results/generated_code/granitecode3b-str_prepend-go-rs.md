Sure! Here's the equivalent Rust code:
```rust
let mut s = String::from("world!");
s = "Hello, ".to_string() + &s;
```
In this code, we first create a `String` variable `s` and initialize it with the text value `"world!"`. We then prepend the string variable `s` with another string literal `"Hello,"` using the `+` operator. 
To do this, we convert the string literal to a `String` object using the `String::from()` function. We then concatenate the two strings using the `+` operator and store the result in `s`. Finally, we use the `&s` syntax to borrow the value of `s` from the stack and append it to the existing string.

