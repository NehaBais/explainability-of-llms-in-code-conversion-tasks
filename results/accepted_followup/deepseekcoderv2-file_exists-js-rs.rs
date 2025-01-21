use std::fs;
use std::path::Path;

fn main() {
    check_file_and_directory("input.txt", "docs");
    check_file_and_directory("c:/input.txt", "c:/docs");
}

fn check_file_and_directory<P: AsRef<Path> + Copy>(file_path: P, dir_path: P) {
    let file_exists = fs::metadata(file_path).is_ok();
    let dir_exists = fs::metadata(dir_path)
        .map(|meta| meta.is_dir())
        .unwrap_or(false);

    println!(
        "File {} exists: {}",
        file_path.as_ref().display(),
        file_exists
    );
    println!(
        "Directory {} exists: {}",
        dir_path.as_ref().display(),
        dir_exists
    );
}
