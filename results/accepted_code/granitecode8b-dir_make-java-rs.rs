use std::fs;
fn main() {
    let path = "C:/parent/test";
    match fs::create_dir_all(path) {
        Ok(()) => println!("Path successfully created"),
        Err(e) => eprintln!("Error creating path: {}", e),
    }
}
