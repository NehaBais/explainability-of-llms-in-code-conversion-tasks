The equivalent code in Rust would be:

```rust
use std::fs::StatResult;
use std::process;

fn main() {
    let input = "input.txt".to_string();
    print_file_size(&input);

    let root_input = "/input.txt".to_string();
    print_file_size(&root_input);
}

fn print_file_size(filename: &str) {
    match stat(filename) {
        Ok(stat) => {
            println!("{}", stat.st_size);
        },
        Err(e) => {
            eprintln!("Error occurred while trying to read file '{}': {}", filename, e);
            process::exit(-1);
        }
    };
}
```
In this Rust code, the `stat` function is equivalent to the Go `os.Stat()` which returns a stat result. The size of the file is available in `st_size`. If any error occurs while trying to open or access the file then it will be handled by the `Err(e)` case, and the program will exit with an error code.
