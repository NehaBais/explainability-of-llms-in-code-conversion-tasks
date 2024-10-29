The equivalent Rust code would be as follows:

```rust
fn main() {
    let s = "hello"; // String variable equal to any text value.
    
    // Concatenate with another string literal.
    let s2 = format!("{}{}", s, " literal"); 

    println!("{}", s);  // Show the content of the variables.
    println!("{}", s2);
}
```

This Rust program does essentially what your C code did: it declares a string variable `s` and then creates another string that is the concatenation of `s` with " literal".  It also prints out both strings using `println!()`. The format specifier `{}` in `println!()` tells Rust to substitute its argument for each occurrence in the statement.

Note: We have used Rust's `format!` macro for string concatenation which behaves similar to C's `sprintf` or `strcat` functions, making it simpler and more readable. It also handles memory allocation & deallocation automatically without needing to call the `malloc()`, `free()` etc.

