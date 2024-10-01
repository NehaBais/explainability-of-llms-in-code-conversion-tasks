```rust
use std::fs;
use std::path::Path;

fn mkdir_p(path: &str) {
    let mut components = path.split("/").peekable();
    let mut current_path = Path::new("");

    while let Some(component) = components.next() {
        current_path = current_path.join(component);
        if !current_path.exists() {
            fs::create_dir_all(&current_path).unwrap();
        }
    }
}
```

**Usage:**

mkdir_p("./path/to/dir");

**Explanation:**

* The `mkdir_p()` function takes a path string as input.
* It splits the path into components using the `/` delimiter.
* It iterates over the components and creates the directory hierarchy.
* If the directory already exists, it does nothing.
* If any component is missing, it creates it using `fs::create_dir_all()`.

**Cross-platform Support:**

The code is cross-platform because it uses the standard library functions and methods, which are available on all supported platforms.
