This error arises because the `if` expression is missing a block after this condition, which causes the compiler to crash. The correct way would be to put a block around it like so: 

```rust
if let error = PathBuf::read_dir(&path) { return println!("Error reading directory '{}'", path.as_str()); }
```
This ensures that if there is an `error`, the program will return and print an error message, instead of crashing. This code also prints the error message if it occurs while trying to read the directory at the given path.
