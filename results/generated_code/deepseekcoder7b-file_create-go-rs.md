In Rust, the equivalent code would be:

Firstly to note that in Rust there is no concept of filesystem root directories like we have `/` in Linux or MacOS. So we will use current directory path which can be got by using standard library function std::env::current_dir(). However, if you want the program to run from anywhere, you may need an absolute path instead.

```rust
use std::fs;
use std::io::Result;

fn create_file(filename: &str) -> Result<()> {
    let _ = fs::File::create(filename)?;
    println!("File {} created!", filename);
    Ok(())
}

fn create_dir(dirname: &str) -> Result<()> {
    if !std::path::Path::new(dirname).exists() {
        fs::create_dir(dirname)?;
        println!("Directory {} created!", dirname);
    } else {
        println!("Directory {} already exists.", dirname);
    }
    
    Ok(())
}

fn main() -> Result<()> {
    let cwd = std::env::current_dir()?;
    let root = "/"; // This won't work in all systems, and it wouldn't be portable.
    create_file("output.txt")?;
    create_file(cwd.join("output.txt"))?;
    create_dir("docs")?;
    create_dir(root.to_str().unwrap().into_owned() + "docs")?;  // This won't work on Windows due to backslashes in path names. It is not portable.
    
    Ok(())
}
```

Please note that the way Rust deals with paths can be a bit more complex, so this translation isn’t perfect. Also take into consideration Rust does not have equivalent of Go's panic mechanism to handle errors at compile time. Error handling is done through Result enum which we must unwrap or explicitly handle in our main function for now.

