use std::fs;
use std::path::Path;

fn rename_file(old_name: &str, new_name: &str) -> bool {
    let old_path = Path::new(old_name);
    let new_path = Path::new(new_name);

    fs::rename(&old_path, &new_path).is_ok()
}

fn test(type_str: &str, old_name: &str, new_name: &str) {
    println!(
        "The following {} called {} {}.",
        type_str,
        old_name,
        if rename_file(old_name, new_name) {
            format!("was renamed as {}", new_name)
        } else {
            format!("could not be renamed into {}", new_name)
        }
    );
}

fn main() {
    test("file", "input.txt", "output.txt");
    test("file", "/", "/output.txt");
    test("directory", "docs", "mydocs");
    test("directory", "/", "/mydocs");
}