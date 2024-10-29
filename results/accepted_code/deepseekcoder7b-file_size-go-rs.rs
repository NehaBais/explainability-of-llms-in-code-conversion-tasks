extern crate rust;
use std::fs;
use std::io::Error;

fn print_file_size(f: &str) {
    let stat = match fs::metadata(f) {
        Ok(stat) => stat,
        Err(error) => {
            eprintln!("{}", error);
            return;
        }
    };

    println!("{}", stat.len());
}

fn main() {
    print_file_size("input.txt");
    // Use your root directory here as an example, it will likely be different for each operating system
    print_file_size("/path/to/your/root/directory/input.txt");
}
