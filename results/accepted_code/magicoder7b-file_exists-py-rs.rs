use std::fs;

fn main() {
    let file_exists = fs::metadata("input.txt").is_ok();
    let root_file_exists = fs::metadata("/input.txt").is_ok();
    println!("Does input.txt exist? {}", file_exists);
    println!("Does /input.txt exist? {}", root_file_exists);

    let dir_exists = fs::metadata("docs").is_ok();
    let root_dir_exists = fs::metadata("/docs").is_ok();
    println!("Does docs exist? {}", dir_exists);
    println!("Does /docs exist? {}", root_dir_exists);
}
