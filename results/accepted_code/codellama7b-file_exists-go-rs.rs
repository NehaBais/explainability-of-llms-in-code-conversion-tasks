use std::fs;

fn main() {
    check_file("input.txt");
    check_file("/input.txt");
    check_dir("docs");
    check_dir("/docs");
}

fn check_file(path: &str) -> bool {
    match fs::metadata(path) {
        Ok(meta) => meta.is_file(),
        Err(e) => {
            println!("{}", e);
            false
        }
    }
}

fn check_dir(path: &str) -> bool {
    match fs::metadata(path) {
        Ok(meta) => meta.is_dir(),
        Err(e) => {
            println!("{}", e);
            false
        }
    }
}
