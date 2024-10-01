use std::fs;

fn rename_file(oldname: &str, newname: &str) -> Result<(), std::io::Error> {
    fs::rename(oldname, newname)?;
    Ok(())
}

fn test(typ: &str, oldname: &str, newname: &str) {
    match rename_file(oldname, newname) {
        Ok(_) => println!("The file called {} was renamed as {}", oldname, newname),
        Err(e) => eprintln!(
            "The file called {} could not be renamed into {}: {:?}",
            oldname, newname, e
        ),
    }
}

fn main() {
    test("file", "input.txt", "output.txt");
    test("file", "/input.txt", "/output.txt");
    test("directory", "docs", "mydocs");
    test("directory", "/docs/", "/mydocs/");
}
