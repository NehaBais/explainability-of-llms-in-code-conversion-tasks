```rust
fn main() {
    let extra = String::from("little");
    let new_str = format!("Mary had a {} lamb.", extra);
    println!("{}", new_str);
}
```

Please note that in Rust, string interpolation is achieved using the `format!` macro rather than an f-string (which Python uses). Also, unlike Python, Rust doesn't support non-ASCII characters directly in string literals. You would need to put the string literal inside a Unicode character set or a byte string set if you want to include such characters.

Rust also requires explicit type definitions for variables unless the compiler can infer them from context.
