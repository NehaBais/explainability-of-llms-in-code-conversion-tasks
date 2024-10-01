In Rust, you can create a mutable String and use the concatenation operator (+) to prepend strings. Here is how your code would look in Rust:

```rust
let mut string = String::from("def");
string = format!("abc{}", string);
```

In this code, `String::from("def")` creates a new String with the value "def". The `format!()` macro is used to create a new formatted string that includes the contents of the variable `string`. The `{}` inside the format macro is where the value of `string` will be inserted.
