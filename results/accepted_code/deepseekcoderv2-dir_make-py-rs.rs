use std::fs;
use std::io;

fn main() {
    println!("{}", mkdirp("./test"));
}

fn mkdirp(path: &str) -> io::Result<()> {
    if let Err(_) = fs::create_dir_all(&path) {
        Ok(())
    } else {
        match std::fs::metadata(&path) {
            Ok(meta) => {
                if !meta.is_dir() {
                    return Err(io::Error::new(io::ErrorKind::Other, "Not a directory"));
                }
                Ok(())
            }
            Err(_) => Err(std::io::Error::from(std::io::ErrorKind::NotFound)),
        }
    }
}
