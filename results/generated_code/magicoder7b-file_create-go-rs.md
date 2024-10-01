 Rust doesn't have built-in support for creating empty files or directories, but we can use the std::fs module to create them with similar functionality as Golang. Here is how you would write this code in Rust:

```rust
use std::fs;

fn main() {
    fs::File::create("input.txt").expect("Failed to create file");
    fs::File::create("/input.txt").expect("Failed to create root file");
    fs::create_dir("docs").expect("Failed to create directory");
    fs::create_dir("/docs").expect("Failed to create root directory");
}
```

Here, fs::File::create() is used to create a new empty file. You can call this function with the desired filename as an argument. If there are any errors in creating the file, it will print an error message. 

Similarly, fs::create_dir() is used to create a new directory. fs::create_dir_all() can be used to create all the parent directories of a path. You can call this function with the desired directory name as an argument. If there are any errors in creating the directory, it will print an error message.
