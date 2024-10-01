Here is a Rust version of the code you provided:

```rust
use std::fs;
use std::path::Path;

fn main() {
    let current_dir = Path::new(".");
    move_file(&current_dir, "input.txt", "output.txt");
    move_folder(&current_dir, "docs", "mydocs");

    let root_dir = Path::new("/");
    move_file(&root_dir, "/input.txt", "/output.txt");
    move_folder(&root_dir, "/docs", "/mydocs");
}

fn move_file(parent: &Path, from: &str, to: &str) {
    let full_from = parent.join(from);
    let full_to = parent.join(to);
    match fs::rename(&full_from, &full_to) {
        Ok(_) => println!("{} moved to {}", from, to),
        Err(e) => eprintln!("Failed to move {}: {}", from, e),
    }
}

fn move_folder(parent: &Path, from: &str, to: &str) {
    let full_from = parent.join(from);
    let full_to = parent.join(to);
    match fs::rename(&full_from, &full_to) {
        Ok(_) => println!("{} moved to {}", from, to),
        Err(e) => eprintln!("Failed to move {}: {}", from, e),
    }
}
```

This code first imports the necessary modules and then defines two functions `move_file` and `move_folder`. These functions take a parent directory path (`Path`) and the names of the source file/directory (`from`) and the destination file/directory (`to`). Inside each function, the program constructs the full paths for both the source and destination using `parent.join(from)` and `parent.join(to)`. It then attempts to move the source item to the destination using `fs::rename`, which returns a Result indicating success or failure. If it fails, it prints an error message; otherwise, it prints a success message.

The main function first moves the files "input.txt" and "docs" into their new locations in the current working directory, then does the same for the root directory.
