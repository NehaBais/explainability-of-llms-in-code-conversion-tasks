Rust code:
```
use std::fs::Metadata;
use std::path::Path;

fn main() {
    // Check for regular file in current working directory.
    let input_txt = Path::new("input.txt");
    if metadata(input_txt).is_ok() && metadata(input_txt).file_type().is_file() {
        println!("input.txt is a regular file.");
    } else {
        println!("input.txt is not a regular file.");
    }
    
    // Check for directory in current working directory.
    let docs = Path::new("docs");
    if metadata(docs).is_ok() && metadata(docs).file_type().is_dir() {
        println!("docs is a directory.");
    } else {
        println!("docs is not a directory.");
    }
    
    // Check for regular file in filesystem root.
    let input_txt_root = Path::new("/input.txt");
    if metadata(input_txt_root).is_ok() && metadata(input_txt_root).file_type().is_file() {
        println!("/input.txt is a regular file.");
    } else {
        println!("/input.txt is not a regular file.");
    }
    
    // Check for directory in filesystem root.
    let docs_root = Path::new("/docs");
    if metadata(docs_root).is_ok() && metadata(docs_root).file_type().is_dir() {
        println!("/docs is a directory.");
    } else {
        println!("/docs is not a directory.");
    }
}
```
Note: This code uses the `std::fs::metadata` function to retrieve metadata about a file or directory, and the `std::fs::FileType` enum to check if it's a regular file or a directory.
