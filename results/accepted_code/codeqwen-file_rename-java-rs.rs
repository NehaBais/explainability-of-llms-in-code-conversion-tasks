use std::fs;

fn rename_file(oldname: &str, newname: &str) -> Result<(), std::io::Error> {
    fs::rename(oldname, newname)
}

fn test(type_of_item: &str, oldname: &str, newname: &str) {
    match rename_file(oldname, newname) {
        Ok(_) => println!(
            "The following {} called {} was renamed as {}.",
            type_of_item, oldname, newname
        ),
        Err(_) => println!(
            "The following {} called {} could not be renamed into {}.",
            type_of_item, oldname, newname
        ),
    }
}

fn main() {
    test("file", "input.txt", "output.txt");
    test("file", "/input.txt", "/output.txt");
    test("directory", "docs", "mydocs");
    test("directory", "/docs/", "/mydocs/");
}
