use std::path::{PathBuf};
use std::fs;

fn main() {
    let mut p = PathBuf::from("my_directory");
    // Now, p is a path with AbsolutePath representation
  
   if let Err(_) = fs::rename(&p, &PathBuf::from("new_directory")) {
       // Handle error here. For example: print it.
   }
}