Here's the converted code in Rust:
```
use std::env;
use std::fs;
use std::path::Path;
fn main() {
 let cwd = env::current_dir().unwrap();
 println!("Current working directory");
 print_stat(cwd.join("input.txt"));
 print_stat(Path::new("/input.txt"));
 
 let docs_dir = env::var("HOME").unwrap().into();
 docs_dir.push("docs");
 println!("User's home directory");
 print_stat(docs_dir);
 
 fn print_stat<P: AsRef<Path>>(path: P) {
 match fs::metadata(path) {
 Ok(meta) => {
 if meta.is_dir() {
 println!("{} is a directory", path.as_ref().display());
 } else {
 println!("{} is a file", path.as_ref().display());
 }
 }
 Err(e) => eprintln!("Error: {}", e),
 }
 }
}
```
The code first gets the current working directory using `env::current_dir()` and prints it using `println!()`. It then calls the `print_stat` function with the path to the input.txt file in the current working directory and a path to a file called input.txt in the root directory of the filesystem.
Next, it gets the user's home directory using `env::var("HOME")` and appends "docs" to it using `Path::new("/input.txt").push("docs")`. This creates a `PathBuf` that represents the path to the "docs" directory in the user's home directory.
Finally, the code defines a function called `print_stat` that takes a `Path` trait object as an argument. It uses `fs::metadata()` to get information about the file or directory at the given path and prints a message indicating whether it is a file or a directory. The `unwrap()` method is used to handle any errors that may occur while getting the metadata.

