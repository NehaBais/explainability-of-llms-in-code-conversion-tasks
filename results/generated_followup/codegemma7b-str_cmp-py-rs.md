The error occurs because the `compare` function is not defined. The fix is to add the `fn` keyword before the function name.

```rust
fn compare(a: &str, b: &str) {
    // ...
}
```
