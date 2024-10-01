use std::fs;

fn create(directory: &str) {
    let _file = fs::File::create(format!("{}/output.txt", directory));
    fs::create_dir_all(format!("{}/docs", directory)).unwrap();
}

fn main() {
    create("."); // current directory
    create("/"); // root directory
}
