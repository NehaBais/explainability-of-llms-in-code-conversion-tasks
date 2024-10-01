Here is the equivalent Rust code for your Golang program: 

```rust
use std::path::Path;

fn print_stat(p: &str) {
    match Path::new(p).metadata() {
        Err(e) => eprintln!("{}", e),
        Ok(m) => match m.is_dir() {
            true => println!("{} is a directory", p),
            false => println!("{} is a file", p),
        },
    }
}

fn main() {
    print_stat("input.txt");
    print_stat("/input.txt");
    print_stat("docs");
    print_stat("/docs");
}
```
Note: This program won't compile if run as is because it doesn’t check whether the path represents a file or directory - it just prints out whatever information the `metadata()` function returns. Also, you need to be aware that Rust uses a different filesystem abstraction than Go for its io and os packages which can lead to some differences in behavior between the two languages when working with files and directories.
