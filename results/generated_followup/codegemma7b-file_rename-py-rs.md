The error occurs because the `expect` method expects a string literal, but the code provides a tuple. The fix is to provide a single string literal as the argument to `expect`.

```rs
fs::rename("input.txt", "output.txt").expect("Failed to rename file");
fs::rename("docs", "mydocs").expect("Failed to rename directory");
```
