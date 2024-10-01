use std::fs;

fn main() {
    file_exists("input.txt", ".");
    file_exists("zero_length.txt", ".");
    file_exists("input.txt", "/docs");
    file_exists("zero_length.txt", "/docs");
}

fn file_exists(path: &str, root: &str) {
    let input_file = format!("{}/{}", root, path);
    if fs::metadata(&input_file).is_ok() {
        let metadata = fs::metadata(&input_file).unwrap();
        if metadata.is_dir() {
            println!("{} is a directory", &input_file);
        } else {
            println!(
                "{} exists with a file size of {} bytes.",
                &input_file,
                &metadata.len()
            );
        }
    } else {
        println!("{} does not exist", &input_file);
    }
}
