fn main() {
    match create_dir_all("C:/parent/test") {
        Ok(_) => println!("path successfully created"),
        Err(e) => eprintln!("{}", e),
    }
}

fn create_dir_all(path: &str) -> std::io::Result<()> {
    use std::fs;
    fs::create_dir_all(path)
}
