The errors occurred because the `resolve`, `mkdir`, `dirname` functions are not defined in the `path` and `fs` modules, respectively. The compiler is unable to find these functions and displays an error message indicating that they do not exist.
To fix this issue, you need to replace the references to these functions with their correct counterparts. For example, instead of using `path::resolve`, you can use `std::fs::canonicalize` to resolve a path. Similarly, instead of using `fs::mkdir`, you can use `std::fs::create_dir` to create a directory.
Here is the corrected code:
```rs
use std::path;
use std::fs;

fn main() {
    let path = "./example";
    let resolved_path = fs::canonicalize(path).unwrap();
    println!("{}", resolved_path.display());
}
```
This code uses the `canonicalize` function from the `fs` module to resolve a path, and then displays it using the `display` method of the `PathBuf` struct.
