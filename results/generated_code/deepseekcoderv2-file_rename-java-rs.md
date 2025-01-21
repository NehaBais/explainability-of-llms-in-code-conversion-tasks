 Here's the equivalent Rust code for the provided Java code:

```rust
use std::fs;
use std::io;

fn rename_file(oldname: &str, newname: &str) -> io::Result<()> {
    fs::rename(oldname, newname)
}

fn test(type_: &str, oldname: &str, newname: &str) {
    match rename_file(oldname, newname) {
        Ok(_) => println!("The following {} called {} was renamed as {}.", type_, oldname, newname),
        Err(e) => println!("The following {} called {} could not be renamed into {}: {}", type_, oldname, newname, e),
    }
}

fn main() {
    test("file", "input.txt", "output.txt");
    test("file", format!("{}/input.txt", std::env::current_dir().unwrap().display()), format!("{}/output.txt", std::env::current_dir().unwrap().display()));
    test("directory", "docs", "mydocs");
    test("directory", format!("{}/docs/", std::env::current_dir().unwrap().display()), format!("{}/mydocs/", std::env::current_dir().unwrap().display()));
}
```

This Rust code performs the same operations as the provided Java code: it renames a file and a directory twice, once in the current working directory and once at the root of the filesystem. The `rename_file` function handles the actual renaming using the `fs::rename` function from the standard library, and the `test` function prints the result of each rename operation.
