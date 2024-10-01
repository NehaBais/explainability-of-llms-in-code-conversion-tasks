use std::fmt;
use std::os;

fn print_file_size(f: &str) {
    if let Ok(stat) = os::metadata(f) {
        println!("{}", stat.len());
    } else {
        println!("{}", fmt::error::Error::new(os::ErrorKind::NotFound));
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
