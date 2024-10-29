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
