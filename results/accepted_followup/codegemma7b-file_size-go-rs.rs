use std::fmt;
use std::fs;

fn print_file_size(f: &str) {
    if let Ok(stat) = fs::metadata(f) {
        println!("{}", stat.len());
    } else {
        println!("{}", fmt::Error::new(fs::ErrorKind::NotFound));
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
