use std::fs;
use std::path::{Path, PathBuf};

fn rename_file(oldname: &str, newname: &str) -> bool {
    let oldpath = Path::new(oldname);
    let newpath = Path::new(newname);

    // Rename file
    match fs::rename(oldpath, newpath) {
        Ok(_) => true,
        Err(_) => false,
        }
    } else {
        false
    }
}

fn test(type: &str, oldname: &str, newname: &str) {
    let success = rename_file(oldname, newname));
    println!("The following {} called {} was renamed as {}.",
                type,
                oldname,
                newname
            );
}

fn main() {
    test("file", "input.txt", "output.txt");
    test(
        "file",
        &format!("{}docs{}{}", std::env::var("HOMEDRIVE").unwrap(), Path::new("docs"), Path::new("mydocs"))),
        &format!(
            "{}docs{}{}",
            std::env::var("HOMEDRIVE").unwrap(),
            Path::new("docs"),
            Path::new("mydocs")
        )
    );
    test("directory", "docs", "mydocs");
    test(
        "directory",
        &format!("{}docs{}{}", std::env::var("HOMEDRIVE").unwrap(), Path::new("docs"), Path::new("mydocs"))),
        &format!(
            "{}docs{}{}",
            std::env::var("HOMEDRIVE").unwrap(),
            Path::new("docs"),
            Path::new("mydocs")
        )
    );
}