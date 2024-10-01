Sure, here's how you can convert the JavaScript code to Rust:
```rust
let mut s1 = "Hello".to_string();
s1.push_str(", World!"); // or use += for mutable strings
println!("{}", s1);
```
In this Rust solution, we initialize a string variable `s1` with the value of `"Hello"` using `to_string()`. Then, we append another string literal `", World!"` to it using the `.push_str()` method. Finally, we print out the contents of `s1` using `println!("{}", s1)`.
Note that in Rust, you can use either `&mut String` or `&String` (immutable or mutable) for a string variable, but `&mut String` is generally preferable for strings that will be mutated. Also, the `.to_string()` method has been replaced with the `toString()` function (it's more idiomatic and you can specify a formatting specifier).
By making these changes, we simplify the code and make it easier to read and understand.
