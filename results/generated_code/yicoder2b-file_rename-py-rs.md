The equivalent Rust code for the given Python script would be:

In Rust, there is no direct equivalent of Python's `import` functionality, so we use the `std::process::exit` function to exit the program. We also can't change directory as we do with os-specific paths; instead, we use the `Path::new()` and `File::rename()` functions from the `std::path::Path` for Windows/Linux/MacOS and `std::fs::rename()` for a Unix system.
```rust
use std::process::exit;

fn main() {
    let src = "input.txt".to_string();
    let dest = "output.txt".to_string();
    if let err = File::rename(&src, &dest, None) {
        eprintln!("Error renaming files: {:?}", err);
        exit(1);
    }

    // Now for the root directory as well
    let src_root = format!("{}/{}/docs", std::process::env().get("HOME").unwrap(), app_name());
    let dest_root = format!("{}/{}/mydocs", std::process::env().get("HOME").unwrap(), app_name());
    if let err = File::rename(&src_root, &dest_root, None) {
        eprintln!("Error renaming files: {:?}", err);
        exit(1);
    }
}
```
Please replace `app_name()` with your actual app name. This will differ if you're using different apps on the same system.
