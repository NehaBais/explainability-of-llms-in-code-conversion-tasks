Here's the Rust code that accomplishes the same task as the Python code:
```
use std::fs;
fn create_file(path: &str) {
 let file = fs::File::create(path).expect("Failed to create file");
 drop(file);
}
fn create_directory(path: &str) {
 fs::create_dir(path).expect("Failed to create directory");
}
fn main() {
 let current_directory = ".";
 let root_directory = "/";
 create_file(&format!("{}/output.txt", current_directory));
 create_directory(&format!("{}/docs", current_directory));
 create_file(&format!("{}/output.txt", root_directory));
 create_directory(&format!("{}/docs", root_directory));
}
```
This code uses the Rust standard library to accomplish the task. The `create_file` function creates a new file at the given path, and the `create_directory` function creates a new directory at the given path. The `main` function calls these functions twice: once for the current directory and once for the root directory.

