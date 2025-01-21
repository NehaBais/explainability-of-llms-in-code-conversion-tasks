The error is due to an unclosed delimiter `}`. The immediate problem can be fixed by adding the open bracket `(` after the print statement `println!("Size of file {} is {} bytes.", filename, meta.len()));`. 

Here's the corrected code in a single code block:

```rs
use std::fs;
use std::io;
use std::path::Path;

fn print_file_size(filename: &str) {
    let path = Path::new(filename);

    match fs::metadata(path) {
        Ok(meta) => {
            println!(
                "Size of file {} is {} bytes.",
                filename, meta.len()
            );
        }
        Err(e) => {
            eprintln!("Error accessing file: {}", e));
        }
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```
