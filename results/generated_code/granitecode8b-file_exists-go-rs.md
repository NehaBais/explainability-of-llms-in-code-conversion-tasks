Here is the converted code from Golang to Rust:
```
fn print_stat(path: &str) {
    match std::fs::metadata(path) {
        Ok(metadata) => {
            if metadata.is_dir() {
                println!("{} is a directory", path);
            } else {
                println!("{} is a file", path);
            }
        },
        Err(err) => {
            println!("{}", err);
        }
    }
}
fn main() {
    print_stat("input.txt");
    print_stat("/input.txt");
    print_stat("docs");
    print_stat("/docs");
}
```
This code uses the Rust standard library's `std::fs` module to get information about files and directories on the filesystem. The `print_stat` function takes a path string as input, gets metadata for that path using `std::fs::metadata`, and then prints whether the path is a file or directory based on the metadata returned by the function. The main function calls `print_stat` four times to check if the files and directories exist in the current working directory and in the filesystem root.

