 Here's the equivalent Rust code for the provided Go program:

```rust
use std::fs;
use std::io;

fn create_file(filename: &str) -> io::Result<()> {
    fs::write(filename, b"")?;
    println!("file {} created!", filename);
    Ok(())
}

fn create_dir(dirname: &str) -> io::Result<()> {
    fs::create_dir(dirname)?;
    println!("directory {} created!", dirname);
    Ok(())
}

fn main() -> io::Result<()> {
    // Create file in the current working directory
    create_file("input.txt")?;
    
    // Create file in the filesystem root (requires superuser privileges)
    if let Err(_) = create_file("/input.txt") {
        eprintln!("Failed to create file in root directory");
    } else {
        println!("file /input.txt created!");
    }
    
    // Create directory in the current working directory
    create_dir("docs")?;
    
    // Create directory in the filesystem root (requires superuser privileges)
    if let Err(_) = create_dir("/docs") {
        eprintln!("Failed to create directory in root directory");
    } else {
        println!("directory /docs created!");
    }
    
    Ok(())
}
```

### Explanation:
1. **File Creation**: In Rust, we use `fs::write` to create a file with an empty byte slice (`b""`), which effectively creates an empty file. The function returns `io::Result<()>` and handles errors with the `?` operator.
2. **Directory Creation**: We use `fs::create_dir` for creating directories, also returning `io::Result<()>`.
3. **Error Handling**: Errors are handled using the `?` operator and by checking if the operations fail. If an operation fails (e.g., trying to create a file in the root directory without superuser privileges), it prints an error message.
4. **Main Function**: The main function returns `io::Result<()>` to handle potential errors from the functions called within it.
