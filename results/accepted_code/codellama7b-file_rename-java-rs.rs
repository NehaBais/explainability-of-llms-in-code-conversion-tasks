use std::fs;

fn rename_file(oldname: &str, newname: &str) -> bool {
    let oldpath = Path::new(&oldname);
    let newpath = Path::new(&newname);
    fs::rename(oldpath, newpath).is_ok()
}

fn test(type: &str, oldname: &str, newname: &str) {
    println!("The following {} called {} {} {}", type, oldname,
        rename_file(oldname, newname) ? "was renamed as" : "could not be renamed into", newname);
}

fn main() {
    test("file", "input.txt", "output.txt");
    test("directory", File::separator + "docs", "mydocs");
}