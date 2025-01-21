use std::fs;
use std::io;

fn rename_file(oldname: &str, newname: &str) -> io::Result<()> {
    fs::rename(oldname, newname)
}

fn test(type_: &str, oldname: &str, newname: &str) {
    match rename_file(oldname, newname) {
        Ok(_) => println!("The following {} called {} was renamed as {}.", type_, oldname, newname),
        Err(e) => println!("The following {} called {} could not be renamed into {}: {}", type_, oldname, newname, e),
    }
}

fn main() {
    test("file", "input.txt", "output.txt");
    test("file", format!("{}/input.txt", std::env::current_dir().unwrap().display()), format!("{}/output.txt", std::env::current_dir().unwrap().display()));
    test("directory", "docs", "mydocs");
    test("directory", format!("{}/docs/", std::env::current_dir().unwrap().display()), format!("{}/mydocs/", std::env::current_dir().unwrap().display()));
}