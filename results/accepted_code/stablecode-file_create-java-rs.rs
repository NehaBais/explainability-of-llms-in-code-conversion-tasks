use std::fs;
use std::path::PathBuf;

fn main() {
    let output_file1 = PathBuf::from("output.txt");
    let docs_dir1 = PathBuf::from("docs");

    create_empty_file(output_file1);
    create_empty_file(PathBuf::from(std::env::consts().PATH_SEPARATOR + "output.txt")));
    create_directory(docs_dir1);
    create_directory(PathBuf::from(std::env::consts().PATH_SEPARATOR + "docs")));

    let output_file2 = PathBuf::from("output.txt");
    let docs_dir2 = PathBuf::from("docs");

    create_empty_file(output_file2);
    create_directory(docs_dir2);
}

fn create_empty_file(path: PathBuf) {
    match fs::File::create(&path) {
        Ok(_) => (),
        Err(e) => eprintln!("{}", e),
    }
}

fn create_directory(path: PathBuf) {
    match fs::create_dir(&path) {
        Ok(_) => (),
        Err(e) => eprintln!("{}", e)),
    }
}