use std::fs;
use std::path::Path;

fn create_file<P: AsRef<Path>>(filename: P) {
    match fs::File::create(filename.as_ref()) {
        Ok(_) => println!("file {} created!", filename.as_ref().to_string_lossy()),
        Err(e) => eprintln!("{}", e),
    }
}

fn create_dir<P: AsRef<Path>>(dir_name: P) {
    match fs::DirBuilder::new().create(dir_name.as_ref()) {
        Ok(_) => println!("directory {} created!", dir_name.as_ref().to_string_lossy()),
        Err(e) => eprintln!("{}", e),
    }
}

fn main() {
    create_file("input.txt");
    create_file("/input.txt");
    create_dir("docs");
    create_dir("/docs");
}