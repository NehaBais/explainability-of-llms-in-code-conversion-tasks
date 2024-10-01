Here's the converted code in Rust:
```
use std::env;
use std::fs;
 
fn main() {
 let cwd = env::current_dir().unwrap();
 let root = fs::read_dir("/").unwrap();
 
 // Check if input.txt exists in the current working directory
 assert!(cwd.join("input.txt").exists());
 // Check if c:/input.txt exists in the filesystem root
 assert!(root.any(|e| e.unwrap().path().ends_with("c:/input.txt")));
 
 // Check if docs folder exists in the current working directory
 assert!(cwd.join("docs").is_dir());
 // Check if c:/docs folder exists in the filesystem root
 assert!(root.any(|e| e.unwrap().path().ends_with("c:/docs")));
}
```
This code first gets the current working directory using `env::current_dir()` and then gets the root directory of the filesystem using `fs::read_dir("/")`. It then checks if `input.txt` and `docs` folder exist in the current working directory and in the filesystem root respectively. The `assert!()` macro is used to check if a file or folder exists, and it panics if it doesn't.

