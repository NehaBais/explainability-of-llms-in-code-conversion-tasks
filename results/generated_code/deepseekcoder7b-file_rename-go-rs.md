In Rust, you can use the `std::fs` module for file and directory operations like rename which is similar to Golang's os package in this case. Here is your Go code converted into Rust:

```rust
use std::fs;
use std::io::Error;

fn main() {
    match fs::rename("input.txt", "output.txt") {
        Ok(_) => println!("File successfully renamed from input.txt to output.txt"),
        Err(error) => println!("Failed to rename file: {}", error),
    };
    
    match fs::rename("docs", "mydocs") {
        Ok(_) => println!("Directory successfully renamed from docs to mydocs"),
        Err(error) => println!("Failed to rename directory: {}", error),
    };
  
    // If you want the path to be absolute, You can use std::path::PathBuf.
    let mut current_dir = std::env::current_dir().unwrap();
    current_dir.push("input.txt");
    let full_path = current_dir;
  
    match fs::rename(full_path, "output.txt") {
        Ok(_) => println!("File successfully renamed from /input.txt to /output.txt"),
        Err(error) => println!("Failed to rename file: {}", error),<｜begin▁of▁sentence｜><｜end▁of▁sentence｜><｜begin▁of▁sentence｜>﻿</programming>

