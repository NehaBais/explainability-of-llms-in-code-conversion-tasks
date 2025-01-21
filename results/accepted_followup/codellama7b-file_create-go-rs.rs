use std::{
    fs,
    io::Write,
};

fn main() {
    create_file("input.txt");
    create_file("/input.txt");
    create_dir("docs");
    create_dir("/docs");
}

fn create_file(fn: &str) {
    match fs::File::create(fn) {
        Ok(f) => println!("file {} created!", fn),
        Err(e) => println!("error: {}", e),
    }
}

fn create_dir(dn: &str) {
    match fs::Dir::new(dn, 0666) {
        Ok(_) => println!("directory {} created!", dn),
        Err(e) => println!("error: {}", e),
    }
}