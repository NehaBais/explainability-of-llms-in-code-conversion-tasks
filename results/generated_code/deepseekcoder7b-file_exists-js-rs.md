Rust has built-in support for file system operations via its standard library. You can use the `std::fs` module to do these kinds of checks.

Here is how you could convert this JavaScript code into Rust:

Current working directory and filesystem root are different - it depends on where you run your program from. If you run it in the current working directory, you have to provide path to 'input.txt' as `./input.txt` and for 'docs', as `./docs`. However, if you want to check them relative to some other location (say root of filesystem), then you need to use absolute paths.

```rust
use std::fs;

fn main() {
    let current_dir = ".";  // The directory where the program is running from.
    let fs_root = "/";      // File system root in Unix and Linux systems. Adjust accordingly if on Windows.

    let file_checker = |path| println!("{} exists: {}", path, match fs::metadata(path) {
        Ok(_) => "Yes".to_string(), 
        Err(_) => "No".to_string()
    });
    
    let dir_checker = |path| println!("{} exists: {}", path, if fs::metadata(&path).is_ok() {
            if let Some(meta)=fs::read_dir(&path).next(){
                match meta{
                    Ok(meta)=>match meta.file_type().unwrap().is_dir(){
                        true=>"Yes".to_string(), 
                        false=>"No".to_string()
                    }
                },
            }else{"No".to_string()},
        } else {"No".to_string()});
    
    file_checker(current_dir.join(".//input.txt")); // Use join to append paths in the case that they are relative and might not start with `./`. 
    dir_checker(current_dir.join("docs"));           // Same here for directory path.
    
    file_checker(fs_root.to_string() + "input.txt");
    dir_checker(fs_root.to_string() + "docs");
}
``` 
This will print Yes if the file/directory exists and No otherwise, for both current working directory and root of filesystem respectively. 

Please note that Rust requires you to handle errors explicitly (the `Err(_)` case in each function). You could choose what to do with these error cases based on your requirements or simply ignore them as they are not expected in this context. Also, the script assumes that 'input.txt' and 'docs' exist at root of file system. If they don't, you will have to create it manually (or write a script for creating).

