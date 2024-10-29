use std::env;
use std::fs;
use std::io::Error;

fn rename_file(old_path: &str, new_path: &str) -> Result<(), Error> {
    fs::rename(old_path, new_path)?;
    Ok(())
}

fn test(type_: &str, old_name: &str, new_name: &str) {
    match rename_file(old_name, new_name) {
        Ok(_) => println!(
            "The following {} called {} was renamed as {}.",
            type_, old_name, new_name
        ),
        Err(e) => println!(
            "{} could not be renamed into {} because of: {}",
            old_name, new_name, e
        ),
    };
}

fn main() {
    let current_dir = env::current_dir().unwrap();
    let root_path = "/"; // on Unix-based systems. Change it accordingly for other platforms

    test("file", "input.txt", "output.txt");
    test("file", format!("{}/input.txt", current_dir), "output.txt");
    test("directory", "docs", "mydocs");
    test("directory", format!("{}/docs", root_path), "mydocs");
}
