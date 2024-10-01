Sure, here's the equivalent Rust code:
```rust
use std::fs;
use std::io;
use std::env;

fn create(directory: &str) -> io::Result<()> {
    fs::File::create(format!("{}/output.txt", directory))?;
    fs::create_dir_all(format!("{}/docs", directory))?;
    Ok(())
}

fn main() -> io::Result<()> {
    let current_directory = env::current_dir()?;

    create(&current_directory)?;  // current directory
    create("/")?  // root directory

    Ok(())
}
```
In this Rust code, we've used `fs` (file system) and `io` (input/output operations) from the standard library. Additionally, we use `env::current_dir` to get the current working directory and use `create_dir_all` to create the directories. This solution will also handle errors if the specified directories or files already exist.
