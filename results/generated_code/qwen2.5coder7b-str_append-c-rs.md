In Rust, strings are UTF-8 encoded and growable, so appending is more straightforward. Here's how you can convert the given C code into a Rust program that accomplishes the same task:

```rust
fn main() {
    let mut str = String::from("Good Morning");
    let cstr1 = " to all";
    let cstr2 = " !!!";

    // Append the strings using the `push_str` method
    str.push_str(cstr1);
    str.push_str(cstr2);

    println!("{}", str);  // Show the contents of the variable after the append operation
}
```

### Explanation:
1. **String Initialization**: In Rust, strings are handled with `String` type which is growable and UTF-8 encoded.
   ```rust
   let mut str = String::from("Good Morning");
   ```

2. **Appending Strings**:
   - We use the `push_str` method to append slices of strings (since Rust's string literals are essentially borrowed slices).
   ```rust
   str.push_str(cstr1);
   str.push_str(cstr2);
   ```

3. **Printing the Result**:
   - The result is printed using standard output.
   ```rust
   println!("{}", str);
   ```

This code achieves the same functionality as your C code but in a more idiomatic and safer way, leveraging Rust's ownership system and its built-in string manipulation methods.
