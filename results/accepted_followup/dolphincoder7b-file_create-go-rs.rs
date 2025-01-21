use std::fs;
use std::path::Path;

fn main() {
    create_file("input.txt");
    create_file("/input.txt");
    create_dir("docs");
    create_dir("/docs");
}

fn create_file(r#fn: &str) {
    match fs::File::create(&Path::new(r#fn)) {
        Ok(_) => println!("file {} created!", r#fn),
        Err(e) => eprintln!("{}", e),
    }
}

fn create_dir(dn: &str) {
    match fs::create_dir(&Path::new(dn)) {
        Ok(_) => println!("directory {} created!", dn),
        Err(e) => eprintln!("{}", e),
    }
}
