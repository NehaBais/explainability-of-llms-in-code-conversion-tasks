use std::fs;
use std::path::Path;

fn rename_file(old_name: &str, new_name: &str) -> bool {
    let file = Path::new(old_name);
    let file2 = Path::new(new_name);
    fs::rename(&file, &file2).is_ok()
}

fn test(type_: &str, oldname: &str, newname: &str) {
    let action = if rename_file(oldname, newname) {
        "was renamed as"
    } else {
        "could not be renamed into"
    };
    println!(
        "The following {} called {} {} {}",
        type_, oldname, action, newname
    );
}

fn main() {
    test("file", "input.txt", "output.txt");
    test("file", "/input.txt", "/output.txt");
    test("directory", "docs", "mydocs");
    test("directory", "/docs/", "/mydocs/");
}
