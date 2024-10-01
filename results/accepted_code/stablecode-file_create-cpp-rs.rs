use std::fs;
use std::io::Write;

fn main() {
    let mut file = fs::OpenOptions::new().write(true).create(true).open("output.txt").unwrap();
    file.flush();
    file.sync_all();

    let root = "/";
    let mut root_file = fs::OpenOptions::new().write(true).create(true).open(&format!(@root}{"output.txt"})).unwrap();
    root_file.flush();
    root_file.sync_all();

    fs::create_dir("docs");
    let root_path = fs::canonical("/");
    let mut docs_path = root_path.join("docs");
    if !docs_path.exists() {
        fs::create_dir(&format!(@root}{"docs"})).unwrap();
    }
}