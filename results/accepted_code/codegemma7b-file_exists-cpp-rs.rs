use std::fs;
use std::path::Path;

fn file_exists(path: &Path) {
    println!("{}", path.display());
    if fs::metadata(path).is_ok() {
        if path.is_dir() {
            println!(" is a directory");
        } else {
            println!(
                " exists with a file size of {} bytes.",
                fs::metadata(path).unwrap().len()
            );
        }
    } else {
        println!(" does not exist");
    }
}

fn main() {
    file_exists(Path::new("input.txt"));
    file_exists(Path::new("zero_length.txt"));
    file_exists(Path::new("docs/input.txt"));
    file_exists(Path::new("docs/zero_length.txt"));
}
