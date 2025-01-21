**Error Explanation:** The error occurs because Rust's crate name must not include special characters like `.`.

**Fix Explanation:** Remove the `.rs` extension from the filename when compiling with `rustc`.

```rust
fn main() {
    let extra = "little";
    println!("Mary had a {} lamb.", extra);
}
```

This code will compile and run without errors.
