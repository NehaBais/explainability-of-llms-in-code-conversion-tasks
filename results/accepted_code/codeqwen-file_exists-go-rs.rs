use std::fs;
use std::path::PathBuf;

fn print_stat(p: &str) {
    match fs::metadata(p) {
        Ok(i) => {
            if i.is_dir() {
                println!("{} is a directory", p);
            } else {
                println!("{} Is a file", p);
            }
        }
        Err(err) => println!("Error: {}", err),
    }
}

fn main() {
    print_stat("input.txt");
    print_stat("/input.txt"); // this will not work in Rust as it's an absolute path but can be tested with relative paths if needed
    print_stat("docs");
    print_stat("/docs");
}
