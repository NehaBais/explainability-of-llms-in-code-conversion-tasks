*/
```rust
use std::fs;

fn main() -> std::io::Result<()> {
    let path = "C:/parent/test";
    fs::create_dir(path)?;
    println!("Directory created");
    Ok(())
}
```