The equivalent Rust code would be as follows using the `std::fs::create_dir_all` method which creates a directory if it doesn't exist already and also creates any missing parent directories in one go.

```rust
use std::env;
use std::io::Error;
use std::path::PathBuf;

fn main() {
    match create_dir("C:/parent/test") {
        Ok(_) => println!("path successfully created"),
        Err(e) => eprintln!("error creating path: {}", e),
    }
}

fn create_dir(s: &str) -> Result<PathBuf, Error> {
    let mut path = PathBuf::from(env::current_dir()?);
    path.push(s);
    std::fs::create_dir_all(&path)?;
    Ok(path)
}
```
This program works similarly to the Java one, it tries to create a directory and any missing parent directories in case they do not exist already. The `create_dir_all` function returns an `Err` if unable to create the path for some reason. The error message can be printed out by using `eprintln!` instead of `println!`. 

Please note that Rust requires more explicit handling of errors and doesn't have built-in exception mechanism like Java. Also, you must run this program with write permissions in the directory where you are trying to create a new directory or it will fail.

