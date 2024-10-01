The equivalent code in Rust would be:

```rust
use std::fs;
use std::env;

fn main() {
    let file_name = "output.txt";
    let root_dir = env::var("HOME").unwrap();
    
    // create a new empty file called "output.txt" of size 0 bytes in the current working directory
    fs::File::create(file_name).expect("Unable to create file");

    // create a new empty file called "output.txt" of size 0 bytes in the filesystem root
    let output_root = format!("{}/{}", root_dir, file_name);
    fs::File::create(output_root).expect("Unable to create file");
    
    // create an empty directory called "docs" in the current working directory
    fs::create_dir("docs").expect("Unable to create directory");

    // create an empty directory called "docs" in the filesystem root
    let docs_root = format!("{}/{}", root_dir, "docs");
    fs::create_dir(docs_root).expect("Unable to create directory");
}
```

Please note that creating files and directories in the root directory generally requires admin privileges. The code above first tries to find the path of the home directory using `env::var("HOME")`. If it is not set, you can replace this with a hard-coded value for your user's home directory.

If you are running on Windows, it is also recommended to use the `%USERPROFILE%` environment variable instead of `%HOME%`.
