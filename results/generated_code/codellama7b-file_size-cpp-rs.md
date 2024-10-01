 Here is the Rust equivalent of the given C++ code:
```rust
 use std::fs;
 
 fn print_file_size(filename: &str) {
     match fs::metadata(filename).map(|meta| meta.len()).ok() {
         Some(size) => println!("Size of file {} is {} bytes.", filename, size),
         None => eprintln!("Failed to get metadata for {}.", filename),
     }
 }
 
 fn main() {
     print_file_size("input.txt");
     print_file_size("/input.txt");
 }
```
Explanation:

* The Rust standard library provides a `std::fs` module for working with the file system. We can use this module to get the metadata of a file using the `metadata()` method.
* We pass in the filename as an argument to the `print_file_size()` function, which is then used as the argument to the `metadata()` method.
* The `metadata()` method returns an optional value that contains the metadata for the file. We can use the `map()` method to extract the length of the file from the metadata using the `len()` method.
* If the length of the file is successfully extracted, we print it to the console along with the filename. Otherwise, we print a message indicating that the metadata could not be obtained for the file.
* In the `main()` function, we call the `print_file_size()` function twice, once for each of the two files we want to check the size of. The first argument passed to the `print_file_size()` function is a filename relative to the current working directory, and the second argument is a filename relative to the file system root.
