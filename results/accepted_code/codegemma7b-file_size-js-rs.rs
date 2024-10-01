use std::fs;

fn main() {
    // Get the size of the file input.txt in the current working directory
    let current_dir_size = fs::metadata("input.txt").unwrap().len();

    // Get the size of the file input.txt in the file system root
    let root_dir_size = fs::metadata("c:/input.txt").unwrap().len();

    println!("Current working directory size: {}", current_dir_size);
    println!("File system root size: {}", root_dir_size);
}
