use std::fs;

fn mkdir_p(path: &str) {
    match fs::create_dir_all(path) {
        Ok(_) => println!("Path successfully created"),
        Err(e) => eprintln!("Error creating directory: {}", e),
    }
}

fn main() {
    mkdir_p("C:/parent/test");
}
