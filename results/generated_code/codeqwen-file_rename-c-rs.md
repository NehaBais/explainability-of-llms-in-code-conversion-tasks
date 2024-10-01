Rust has a different approach to file and directory manipulation than C, primarily due to its safety features. Here is how you would perform those actions in Rust:

```rust
use std::fs;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    // rename current working directory files
    fs::rename("input.txt", "output.txt")?;
    fs::rename("docs", "mydocs")?;

    // get the root path of the system
    let root = "/";
    // rename root files
    fs::rename(format!("{}/input.txt", root), format!("{}/output.txt", root))?;
    fs::rename(format!("{}/docs", root), format!("{}/mydocs", root))?;

    Ok(())
}
```

Please note, in the code above `/input.txt`, `/docs`, etc., are not valid directory names as they do not contain any slashes which would separate the path components (like it is done in C and other languages). To rename files at root level you should replace `"/"` with an empty string:

let root = "";
// rename root files
fs::rename(format!("{}/input.txt", root), format!("{}/output.txt", root))?;
fs::rename(format!("{}/docs", root), format!("{}/mydocs", root))?;

Also, make sure to handle possible errors with the `Result<(), Box<dyn std::error::Error>>`. If an error occurs during the renaming process, it will be returned from the function, and you can print the error message.

Note: You must have write permissions in the directories where your files are to perform a rename operation.
