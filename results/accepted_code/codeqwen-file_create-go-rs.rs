use std::fs;
use std::io;

fn create_file(fnm: &str) {
    if let Err(err) = fs::File::create(fnm) {
        println!("couldn't create file {}: {}", fnm, err);
        return;
    }
    println!("File {} created!", fnm);
}

fn create_dir(dn: &str) {
    if let Err(err) = fs::create_dir(dn) {
        println!("couldn't create directory {}: {}", dn, err);
        return;
    }
    println!("Directory {} created!", dn);
}

fn main() {
    create_file("input.txt");
    create_file("/input.txt");
    create_dir("docs");
    create_dir("/docs");
}
