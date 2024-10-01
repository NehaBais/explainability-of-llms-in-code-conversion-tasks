Sure, here's the equivalent Rust code:
```
use std::fs::{create_dir, remove_file};

fn main() {
    create_dir("docs").unwrap();
    remove_file("output.txt").unwrap();

    std::fs::File::create("output.txt").expect("Unable to create file");

    println!("The 'here' output directory has been created.");
    println!("The filesystem root has also been created.");
}
```
In this Rust code, we use `std::fs` module for creating directories and files. We also make use of the `create_dir` function to create a new directory called "docs". For file creation and deletion operations, we use the `File` struct and its methods. Additionally, since Rust is a statically-typed language, we have to specify that we're creating an instance of `std::fs::File` to obtain the correct method calls on it.
This Rust code does exactly what the original C code does: create files and directories in both the current working directory and the filesystem root. However, Rust doesn't support opening and closing files directly; instead, we use methods like `create_dir` and `remove_file`. The same thing applies to creating directories.
Note that this is a simplified version of the original C code. In the real code, error handling would be necessary and it should also include permissions checks for different users to ensure correct file creation.
