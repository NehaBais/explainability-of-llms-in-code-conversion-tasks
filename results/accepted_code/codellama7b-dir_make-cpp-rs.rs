use std::fs::{self, File};

fn main() -> io::Result<()> {
    let path_to_create = &std::env::args().nth(1).unwrap(); // Path to create

    if fs::exists(&path_to_create) {
        return Ok(());
    } else if fs::create_directories(&path_to_create) {
        return Ok(());
    } else {
        eprintln!("couldn't create directory: {}", path_to_create);
        return Err(io::Error::new(
            io::ErrorKind::Other,
            "Could not create directory",
        ));
    }
}
