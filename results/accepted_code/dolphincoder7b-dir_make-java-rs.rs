use std::fs;

fn main() {
    match fs::create_dir_all("C:/parent/test") {
        Ok(_) => println!("path successfully created"),
        Err(e) => eprintln!("{}", e),
    }
}
