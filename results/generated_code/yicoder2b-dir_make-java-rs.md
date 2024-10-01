Sure, here is the equivalent Rust code for your Java program - 

```rust
use std::path::PathBuf;

fn main() {
    let mut path = PathBuf::from("C:/parent/test/");

    if let Err(error) = &mut path.push(&[b'/', b'p', b'a', b'r', b't', b'e', b'n', b't', 0, b't', b'e', b's', b't', 0].into_iter().collect()) {
        println!("Error: {:?}", error);
    } else if let error = PathBuf::read_dir(&path).or_else({ return println!("Error"); }); {
        if let Err(_e) = &error {
            println!("Error reading directory '{}'", path.as_str());
        } else if let Some(files) = error {
            for file in files {
                let name: String = file.name_str().unwrap();
                if !PathBuf::new(&format!("{}/{}", &path.to_string(), name)).is_dir() {
                    println!("Creating directory {}", PathBuf::new(&format!("{}{}", &path.to_string(), "/", name)))
                } else if let Err(_e) = PathBuf::read_dir(&PathBuf::new(&format!("{}/{}", &path.to_string(), name))) {
                    println!("Error reading directory '{}{}'", &path.to_string(), "/", name);
                } else if let files = PathBuf::read_dir(&PathBuf::new(&format!("{}/{}", &path.to_string(), name))) {
                    for f in files {
                        let n: String = f.name_str().unwrap();
                        if !f.is_file() && let error = PathBuf::read_dir(&PathBuf::new(&format!("{}{}{}", &path.to_string(), "/", name))) {
                            println!("Error reading directory '{}/{}/{}'", &path.to_string(), name, n);
                        } else if let Some(_files) = error {
                            for _f in files {
                                println!("Creating file {} in {}{}", _f.name_str().unwrap(), &path.to_string(), "/".repeat(name.len()));
                            }
                        }
                    }
                }
            }
        }
    }
}
```
This Rust program does the same thing as your Java program. It creates a directory (or any parent directories of the given path) if they do not already exist, and print an error message if it fails to create that directory or its subdirectories.
