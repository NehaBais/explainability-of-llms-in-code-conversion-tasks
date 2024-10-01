In Rust, the `&str` type represents a string slice. For example:

```rust
fn main() {
    let s = "0123456789";

    let n: usize = 3;
    let m: usize = 4;
    let c = '2';
    let sub = "456";

    println!("{}", &s[n..n+m]);
    println!("{}", &s[n..]);
    println!("{}", &s[0..s.len()-1]);
    println!("{}", &s[s.find(c).unwrap_or(0)..s.find(c).unwrap_or(0)+m]);
    println!("{}", &s[s.find(sub).unwrap_or(0)..s.find(sub).unwrap_or(0)+m]);
}
```

This code does the same as your original C++ program. However, there are a few important differences:

- Rust uses usize for array indexing because it is an integer type that depends on the system architecture (32 or 64 bit). You must cast integers to `usize` when they might not fit.
- The find method returns an Option<usize> which can be None if the substring is not found. So we need to call unwrap_or to provide a default value when find returns None.
- Rust uses println! instead of std::cout for printing output to the console.
