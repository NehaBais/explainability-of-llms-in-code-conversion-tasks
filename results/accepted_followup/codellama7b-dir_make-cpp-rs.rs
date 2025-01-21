use std::fs;
use std::io::{Error, ErrorKind};

fn main() -> Result<(), Error> {
    let path_to_create = std::env::args().nth(1).unwrap(); // Path to create

    if fs::exists(&path_to_create).expect("couldn't check for directory existence") {
        return Ok(());
    } else if fs::create_directories(&path_to_create) {
        return Ok(());
    } else {
        eprintln!("couldn't create directory: {}", path_to_create);
        return Err(Error::new(ErrorKind::Other, "Could not create directory"));
    }
}
