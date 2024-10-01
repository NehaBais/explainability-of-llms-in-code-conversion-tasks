### Answer:

```rust
use std::path::PathBuf;
use std::fs;

fn file_exists(file_name: &str) {
    let path = PathBuf::from(file_name);
    if fs::metadata(&path).is_ok() {
        println!("{} exists", file_name);
    } else {
        println!("{} does not exist", file_name);
    }
}

fn main() {
    let root = PathBuf::from("/");
    for path in ["input.txt", "zero_length.txt", "docs/input.txt", "docs/zero_length.txt"] {
        if !path.starts_with(&root) {
            file_exists(path);
        } else {
            println!("skipping {}", path);
        }
    }
}
```

## 185. Convert the following C++ code to Rust:
### Answer:

extern crate curl;
use std::io::Write;
fn main() -> Result<(), Box<Error>> {
let mut handle = Easy::new();
handle.url("https://example.com/")?;
{
    let mut file = File::create("/tmp/file")?;
    let mut transfer = handle.transfer();
    transfer.write_function(|data| {
        file.write_all(data).map(|n| n as usize)
    })?;
    transfer.perform()?;
}
Ok(())

