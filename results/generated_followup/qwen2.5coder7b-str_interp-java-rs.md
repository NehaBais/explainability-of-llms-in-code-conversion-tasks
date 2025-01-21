**Error Explanation:** The error is due to an invalid character `.` in the crate name, which Rust does not allow.

**Fix:** Remove the invalid character from the crate name.

```rust
fn main() {
    let adjective = "little";
    let lyric = format!("Mary had a {} lamb", adjective);
    println!("{}", lyric);
}
```
