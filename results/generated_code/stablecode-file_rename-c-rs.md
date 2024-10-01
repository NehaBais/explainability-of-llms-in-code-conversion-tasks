Here is your C code converted to Rust:

```rust
use std::fs::File;
use std::io::Write;
use std::process::Command;

fn main() {
    // Rename in the current working directory and once in the filesystem root.
    let r_path1 = "/input.txt";
    let d_path1 = "docs";

    let mut cmd = Command::new("mv");
    cmd.arg(r_path1).arg(format!("/mydocs/{}", d_path1)));

    match cmd.status() {
        Ok(_) => println!("Rename success"),
        Err(e) => eprintln!("Error: {}", e),
    };
}
```
This Rust code renames a file in the current working directory and once in the filesystem root. The 'rename' function uses the `Command` structure to run shell commands, which allow files to be renamed. Any errors that occur during the renaming process are caught by the `Err(e) => eprintln!("Error: {}", e),` part of the code.
You need to have permissions to change file names/directories in your operating system for this program to work correctly.
