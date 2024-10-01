use std::fs;
fn create_file(path: &str) {
    let file = fs::File::create(path).expect("Failed to create file");
    drop(file);
}
fn create_directory(path: &str) {
    fs::create_dir(path).expect("Failed to create directory");
}
fn main() {
    let current_directory = ".";
    let root_directory = "/";
    create_file(&format!("{}/output.txt", current_directory));
    create_directory(&format!("{}/docs", current_directory));
    create_file(&format!("{}/output.txt", root_directory));
    create_directory(&format!("{}/docs", root_directory));
}
