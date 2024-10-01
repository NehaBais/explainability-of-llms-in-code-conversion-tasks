In Rust, you can use the `std::fs` module to work with files and directories. Here is a conversion of your Python script into equivalent Rust code:

```rust
use std::path::Path;

fn main() {
    let cwd = std::env::current_dir();
    match cwd {
        Ok(path) => {
            let input_txt = path.join("input.txt");
            println!("Does input.txt exist in current directory? {}", Path::exists(&input_txt));

            let docs_dir = path.join("docs");
            println!("Does 'docs' directory exist in current directory? {}", Path::exists(&docs_dir));
        },
        Err(_) => println!("Failed to get the current working directory"),
    }

    let root = match std::env::consts::DOCS().strip_prefix('/').map(|p| p.split_once(':')) {
        Some((root, _)) => Some(format!("/{}/docs", root)),
        None => None,
    };
    match root {
        Some(path) => {
            let input_txt = Path::new(&path).join("input.txt");
            println!("Does /input.txt exist in filesystem root? {}", Path::exists(&input_txt));

            let docs_dir = Path::new(&path).join("docs");
            println!("Does '/docs' directory exist in filesystem root? {}", Path::exists(&docs_dir));
        },
        None => println!("Failed to get the filesystem root path"),
    }
}
```
This Rust code accomplishes the same task as your Python script. It checks for a file and a directory in both the current working directory and a specified directory (in this case, the filesystem root).
Please note that the `DOCS()` function is used to get the documentation path which might not be equivalent to filesystem root on all systems or operating systems. You may need to change it according your requirements or use an environment variable if available.
