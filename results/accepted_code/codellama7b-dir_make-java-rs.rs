use std::fs;

fn main() {
    let path = "C:/parent/test";
    match fs::create_dir_all(path) {
        Ok(_) => println!("Directory created successfully"),
        Err(e) => eprintln!("Error creating directory: {}", e),
    }
}
