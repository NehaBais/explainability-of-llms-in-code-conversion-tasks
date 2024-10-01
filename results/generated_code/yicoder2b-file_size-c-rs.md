The equivalent code in Rust would be:

```rust
use std::fs::File;
use std::io::{self, Parser, Result};
use std::process;
use std::path::PathBuf;

fn main() {
    let args: Vec<String> = process_args();
    if args.len() != 2 {
        println!("Usage: {} [file]", args[0]);
        return;
    }
    let file = &args[1];

    match File::open(file) {
        Ok(mut f) => {
            let mut line = String::new();
            while let read = f.read_line(&mut line) {
                if let Err(_e) = read { break; }
                println!("{}", line);
                // Do something with the line (you can also add other actions like filtering or indexing lines)
            }
        }
        Err(io::Error _e) => { println!("Failed to open file: {}", file); },
    };

    let root = "/input.txt";
    match File::open(&root) {
        Ok(mut f) => {
            let mut line = String::new();
            while let read = f.read_line(&mut line) {
                if let Err(_e) = read { break; }
                println!("{}", line);
                // Do something with the root file (you can also add other actions like filtering or indexing lines)
            }
        }
        Err(io::Error _e) => { println!("Failed to open root file: {}", root); },
    };
}
```
Please note that you need to have the `std` and `fs` modules in your Rust environment. Also, this version doesn't support filters or indexes, as that would involve parsing a stream of lines instead of reading them all at once. 

The error handling here is pretty basic, but it does check if there are two arguments (the file to check size and the root filesystem path) before proceeding with the operations on those files. You should adjust this part according to your needs.
