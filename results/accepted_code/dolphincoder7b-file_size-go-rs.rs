use std::fs;
use std::path;

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}

fn print_file_size(f: &str) {
    let path = path::Path::new(&f);
    match fs::metadata(path) {
        Ok(meta) => println!("{}", meta.len()),
        Err(err) => eprintln!("Error: {}", err),
    }
}
