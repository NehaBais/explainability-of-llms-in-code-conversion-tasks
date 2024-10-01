use std::fs;
fn create(directory: &str) {
    let file_path = format!("{}/output.txt", directory);
    let _file = fs::File::create(&file_path).expect("Failed to create file");

    let docs_dir_path = format!("{}/docs", directory);
    fs::create_dir(docs_dir_path).expect("Failed to create directory");
}

fn main() {
    create("."); // current directory
    create("/"); // root directory
}
