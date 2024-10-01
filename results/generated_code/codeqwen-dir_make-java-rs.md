The equivalent code in Rust would be:

```rust
use std::fs;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let path = "C:/parent/test";
    fs::create_dir_all(path)?;
    println!("Path successfully created");
    Ok(())
}
```

In Rust, we use Result instead of throwing exceptions. This is because Rust doesn't have exceptions. Instead it uses a Result enum which can either be Ok containing the value or Err containing an error. The ? operator is used to propagate errors up the call stack. In this case if create_dir_all returns an error, it will be propagated and returned back to the caller of main function.
