use std::fs;

fn main() {
    let size = match fs::File::read_dir("input.txt") {
        Ok(_) => return,
        Err(e) if e.kind() == std::io::ErrorKind::NotFound => {
            println!("The file does not exist: {}", e)
        }
        Err(e) => println!("Error reading the file: {}", e),
    };
}
