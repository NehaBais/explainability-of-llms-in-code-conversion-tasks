The equivalent Rust code for the given JavaScript code would be as follows: 

```rust
use std::fs::{self, File};

fn main() {
    let file1 = match fs::File::open("input.txt") {
        Err(_) => println!("Failed to open input.txt"),
        Ok(mut f) => f,
    };

    match file1.read_dir() {
        Err(e) => match e {
            fs::Error::ReadDir(e) => println!("Error reading directory: {}", e),
            _ => panic!(), 
        },
        Ok(mut dirs) {
           let _ = dirs.into_iter()
                      .filter(|f| f.file().map(|&x)| {
                          println!("Size of input.txt in current working directory is: {}", x);
                      }).collect::<Vec<_>>();
           }
    };

    let file2 = match fs::File::open("C:/input.txt") {
        Err(_) => println!("Failed to open C:/input.txt"),
        Ok(mut f) => f,
    };

    match file2.read_dir() {
        Err(e) => match e {
            fs::Error::ReadDir(e) => println!("Error reading directory: {}", e),
            _ => panic!() ,
        },
        Ok(mut dirs) {
           let _ = dirs.into_iter()
                      .filter(|f| f.file().map(|&x)| {
                          println!("Size of C:/input.txt is: {}", x);
                      }).collect::<Vec<_>>();
           }
    };
}
``` 

This Rust program first tries to open the files "input.txt" and "C:/input.txt" in the current working directory and filesystem root, respectively. If the files cannot be opened, it prints error messages. Otherwise, for each file, it reads its directory entries and filters out those that represent regular files (i.e., they are directories). For each of these filtered regular files, it prints the size in bytes.
