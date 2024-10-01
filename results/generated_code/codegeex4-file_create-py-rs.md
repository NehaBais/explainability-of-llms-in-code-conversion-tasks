The equivalent code in Rust would be:

```rust
extern crate std::fs;

fn create(dir: &str) {
    let dir_path = format!("{}/output.txt", dir);
    fs::File::create(&dir_path).expect("Unable to create file");

    let docs_path = format!("{}/docs", dir);
    fs::create_dir_all(&docs_path).expect("Unable to create directory");
}

fn main() {
    // Current Directory
    create(".");
    
    // Filesystem Root
    if cfg!(target_os = "linux") || cfg!(target_os = "macos") {
        create("/");
    } else if cfg!(target_os = "windows") {
        let root: String;
        if std::env::consts::FILE_SEPARATOR == '\\' {
            root = "C:\\";
        } else {
            root = "/";
        }
        create(&root);
    } else {
        println!("Sorry! This operating system is not supported!");
    }
}
```
Please note that due to the different file systems available in different operating systems, the filesystem root varies. The above code does not include creating a directory or a file at the filesystem root of Windows as it would generally require administrative privileges, which are not typically granted to regular user applications.

Also, Rust's `std::fs` module doesn't have an equivalent for Python's `os.path.join()`. Therefore, we need to use format! macro to join paths together. It is important to handle the errors when working with file system operations as shown in the code above. The `expect()` function is used to print a custom error message and terminate the program if an operation fails.

Also note that Rust's standard library doesn't provide the functionality to get the filesystem root. This example uses some conditional compilation and assumes Windows has a root directory of "C:\", which might not be correct for all situations. For robust cross-platform support, consider using a third-party crate like `std::path` or `dirs`.
