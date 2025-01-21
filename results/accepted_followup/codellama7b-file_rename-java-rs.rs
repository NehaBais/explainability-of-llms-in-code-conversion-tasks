use std::fs;
use std::path::{Path, PathBuf};

fn rename_file(oldname: &str, newname: &str) -> bool {
    let oldpath = Path::new(&oldname);
    let newpath = Path::new(&newname);
    fs::rename(oldpath, newpath).is_ok()
}

fn test(file_type: &str, oldname: &str, newname: &str) {
    println!("The following {} called {} {} {}", file_type, oldname,
        rename_file(oldname, newname) ? "was renamed as" : "could not be renamed into", newname);
}

fn main() {
    let input = PathBuf::from("input.txt");
    let output = PathBuf::from("output.txt");
    test("file", &input, &output);
    let docs = PathBuf::from("docs");
    let mydocs = PathBuf::from("mydocs");
    test("directory", &docs, &mydocs);
}
