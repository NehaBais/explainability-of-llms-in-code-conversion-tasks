The error occurs because `let` is used to declare a mutable variable in Rust, but `size` is defined as a constant. The fix is to use `const` instead of `let`.

```rs
const size: u64 = fs::metadata("input.txt").unwrap().len();
const size: u64 = fs::metadata("/input.txt").unwrap().len();
```
