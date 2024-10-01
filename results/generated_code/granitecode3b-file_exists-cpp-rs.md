Here's the code in Rust that accomplishes the same task as the provided C++ code:
```
extern crate std;
use std::fs;
fn main() {
 let current_directory = fs::metadata(".").unwrap();
 if current_directory.is_file() {
 println!("Current directory is a file");
 } else {
 println!("Current directory exists as a directory with {} bytes", current_directory.len());
 }
 
 let root_directory = fs::metadata("/").unwrap();
 if root_directory.is_file() {
 println!("Root directory is a file");
 } else {
 println!("Root directory exists as a directory with {} bytes", root_directory.len());
 }
 
 let input_txt_path = "/input.txt";
 let zero_length_txt_path = "/zero_length.txt";
 
 if fs::metadata(input_txt_path).is_err() {
 println!("Input.txt does not exist");
 } else {
 let input_txt_metadata = fs::metadata(input_txt_path).unwrap();
 if input_txt_metadata.is_dir() {
 println!("Input.txt is a directory");
 } else {
 println!("Input.txt exists with {} bytes", input_txt_metadata.len());
 }
 }
 
 let zero_length_txt_metadata = fs::metadata(zero_length_txt_path).unwrap();
 if zero_length_txt_metadata.is_dir() {
 println!("Zero length.txt is a directory");
 } else {
 println!("Zero length.txt exists with {} bytes", zero_length_txt_metadata.len());
 }
 
 let docs_directory = "/docs";
 let input_txt_path = format!("{}/input.txt", docs_directory);
 let zero_length_txt_path = format!("{}/zero_length.txt", docs_directory);
 
 if fs::metadata(input_txt_path).is_err() {
 println!("Input.txt does not exist in docs directory");
 } else {
 let input_txt_metadata = fs::metadata(input_txt_path).unwrap();
 if input_txt_metadata.is_dir() {
 println!("Input.txt is a directory in docs directory");
 } else {
 println!("Input.txt exists with {} bytes in docs directory", input_txt_metadata.len());
 }
 }
 
 let zero_length_txt_metadata = fs::metadata(zero_length_txt_path).unwrap();
 if zero_length_txt_metadata.is_dir() {
 println!("Zero length.txt is a directory in docs directory");
 } else {
 println!("Zero length.txt exists with {} bytes in docs directory", zero_length_txt_metadata.len());
 }
}
```
This Rust code uses the `fs` module to check if a file or directory exists at a given path. It first checks the current working directory, then the root directory, and finally the `docs` directory in the filesystem root. For each path, it checks if it's a file or directory and displays information about it. If the path does not exist, an error is printed instead of displaying information about it.

