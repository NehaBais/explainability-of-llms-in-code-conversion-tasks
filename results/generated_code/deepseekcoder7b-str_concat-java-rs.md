In Rust, you can achieve the same result with this code:

```rust
fn main() {
    let mut s = String::from("hello");
    println!("{}", s);
    
    // append a string literal to variable `s` 
    s.push_str(", literal");
    println!("{}", &s);
}
```

This Rust code does the same thing as your Java code: it creates a mutable String variable called "s" and assigns it the value of "hello". Then, it prints out this string. After that, it appends ", literal" to the end of `s` via the `push_str()` method, then prints out the new content of s.

