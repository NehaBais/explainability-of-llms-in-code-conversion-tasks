In Rust, you can use f-strings for string interpolation:

```rust
let adjective = "little";
let lyrics = format!("Mary had a {} lamb", adjective);
println!("{}", lyrics);
```

Here's what this code does:
1. We define the variable `adjective` and assign it the value `"little"`.
2. The `format!` macro is used to create a new string by interpolating variables into the given format string.
3. In this case, we're using double curly braces (`{{}}`) in the format string to indicate where the variable should be inserted.
4. The result of string interpolation in Rust is returned as an `String` type.
5. Finally, we print the interpolated string by using the `println!` macro and passing in the `lyrics` variable.

This results in printing "Mary had a little lamb" to the console.
