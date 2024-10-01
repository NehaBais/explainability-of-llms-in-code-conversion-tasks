The equivalent Rust code for the given Python code would be as follows:

```rust
use std::fs;
fn create(directory: &str) {
    let file_path = format!("{}/output.txt", directory);
    let _file = fs::File::create(&file_path).expect("Failed to create file");

    let docs_dir_path = format!("{}/docs", directory);
    fs::create_dir(docs_dir_path).expect("Failed to create directory");
}

fn main() {
    create("."); // current directory
    create("/"); // root directory
}
```

Note: The `.` and `/` are used as directory paths where `.` represents the current working directory and `/` represents the root directory. The `expect()` function is used for error handling to notify us if there was a failure during file creation or directory creation.
