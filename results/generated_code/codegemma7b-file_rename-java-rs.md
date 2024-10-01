```rust
use std::fs;

fn rename_file(oldname: &str, newname: &str) -> Result<(), std::io::Error> {
    fs::rename(oldname, newname)?;
    Ok(())
}

fn test(file_type: &str, oldname: &str, newname: &str) {
    match rename_file(oldname, newname) {
        Ok(()) => {
            println!("The following {} called {} was renamed as {}", file_type, oldname, newname);
        }
        Err(e) => {
            println!("The following {} called {} could not be renamed into {}", file_type, oldname, newname);
            println!("Error: {}", e);
        }
    }
}

fn main() {
    test("file", "input.txt", "output.txt");
    test("file", &format!("/{}", "input.txt"), &format!("/{}", "output.txt"));
    test("directory", "docs", "mydocs");
    test("directory", &format!("/{}", "docs"), &format!("/{}", "mydocs"));
}
```

