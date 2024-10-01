The equivalent Rust code for the given Java code is as follows:

```rust
use std::fs;
use std::path::PathBuf;

fn main() {
    let output_file1 = PathBuf::from("output.txt");
    let docs_dir1 = PathBuf::from("docs");

    create_empty_file(output_file1);
    create_empty_file(PathBuf::from(std::env::consts().PATH_SEPARATOR + "output.txt")));
    create_directory(docs_dir1);
    create_directory(PathBuf::from(std::env::consts().PATH_SEPARATOR + "docs")));

    let output_file2 = PathBuf::from("output.txt");
    let docs_dir2 = PathBuf::from("docs");

    create_empty_file(output_file2);
    create_directory(docs_dir2);
}

fn create_empty_file(path: PathBuf) {
    match fs::File::create(&path) {
        Ok(_) => (),
        Err(e) => eprintln!("{}", e),
    }
}

fn create_directory(path: PathBuf) {
    match fs::create_dir(&path) {
        Ok(_) => (),
        Err(e) => eprintln!("{}", e)),
    }
}
```

The provided Java code creates a new empty file called "output.txt" in the current working directory and once in the filesystem root. The Rust code does the same, creating the specified files and directories as required.
