### Solution
Here's the Rust code that converts the given C program to Rust:

```rust
use std::fs::File;
use std::io::{self, Read};
use std::path::Path;
use std::process::Command;
use std::env;

fn check_reg(path: &str) -> bool {
    match File::open(path) {
        Ok(_) => true,
        Err(_) => false,
    }
}

fn check_dir(path: &str) -> bool {
    Path::new(path).is_dir()
}

fn main() {
    // Check for regular file in current working directory.
    println!("input.txt is a regular file? {}", if check_reg("input.txt") { "yes" } else { "no" });

    // Check for directory in current working directory.
    println!("docs is a directory? {}", if check_dir("docs") { "yes" } else { "no" });

    // Check for regular file in the filesystem root.
    let mut cmd = Command::new("pwd");
    match cmd.output() {
        Ok(output) => {
            let pwd = String::from_utf8_lossy(&output.stdout);
            println!("/input.txt is a regular file? {}", if check_reg(&format!("{}/input.txt", &pwd)) { "yes" } else { "no" });
        },
        Err(_) => println!("Error executing pwd command."),
    }

    // Check for directory in the filesystem root.
    let mut cmd = Command::new("ls");
    match cmd.output() {
        Ok(output) => {
            let ls_output = String::from_utf8_lossy(&output.stdout);
            println!("/docs is a directory? {}", if check_dir(&format!("/{}", &ls_output)) { "yes" } else { "no" });
        },
        Err(_) => println!("Error executing ls command."),
    }
}
```
