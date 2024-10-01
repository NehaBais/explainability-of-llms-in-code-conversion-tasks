use std::fs;
fn create(path: &str) {
    let file_path = format!("{}/output.txt", path);
    fs::File::create(file_path).unwrap();
    let dir_path = format!("{}/docs", path);
    fs::create_dir(dir_path).unwrap();
}
fn main() {
    create("."); // current directory
    create("/"); // root directory
}
