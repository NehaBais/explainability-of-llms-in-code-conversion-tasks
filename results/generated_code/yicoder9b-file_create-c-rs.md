In Rust there is no direct equivalent to the C's `open()` and `creat()` functions. However, you can use the std::fs module in combination with its File and DirBuilder methods to create files and directories as shown below:

```rust
use std::fs::{File, OpenOptions, metadata};
use std::io::Write;
use std::process::Command;

fn main() {
  create_empty_file("output.txt");
  create_directory("docs");

  let mut path = String::from("/");
  path.push('/'); // Add a trailing slash to the path
  let old_dir = std::env::current_dir().unwrap();

  // Change directory to root and repeat the operations
  std::env::set_current_dir(&path).expect("Failed to change directory");

  create_empty_file("output.txt");
  create_directory("docs");

  // Switch back to original working directory
  std::env::set_current_dir(&old_dir).unwrap();
}

fn create_empty_file(name: &str){
    let mut file = OpenOptions::new().create(true).open(name).expect("Failed to create a new file.");
    write!(file, "").expect("Failed to write in the file.");
}

fn create_directory(name: &str){
  std::fs::create_dir(&name).expect("Failed to create directory"); 
}
```
Please note that this code snippet will fail if the user does not have enough permissions for the operations being performed. Also, error handling is kept simple here but in a real-world application more robust error handling should be applied.

Also note that Rust's `chmod()` isn't as straightforward as C's `umask()`. In Rust you can use the `file::metadata` function to get file permissions and then change them using the `Command::new` method.
