In Rust, you can use the `String` type along with formatting and cloning capabilities. Here's how you could re-write your C code to be in Rust:

```rust
fn main() {
    let mut str = String::from("my String");
    let prefix = "Changed ";
    
    // Clone the string so that original doesn't get deallocated while we have a reference to it.
    let dup = str.clone(); 
      
    // Prepend the clone with the new string.
    str.push_str(prefix);
    str.push_str(&dup);
    
    println!("{}", str);
}
```

This program does exactly what your C code does: it prepends a text value to another text value, storing the result in its own variable as well as cloning the original string for later concatenation. Please note that Rust frees memory automatically when destructors are called (like with variables `dup` and `str`).

