use std::io;
use std::process;

fn main() {
    let oldname = "input.txt".to_string();
    let newname = "output.txt".to_string();

    if rename_file(oldname, &newname) {
        println!("The file {} was renamed as {}", oldname, newname);
    } else {
        println!("The file {} could not be renamed into {}", oldname, newname);
    }

    let oldname = "docs".to_string();
    let newname = "mydocs".to_string();
    if rename_file(&oldname, &newname) {
        println!("The directory {} was renamed as {}", oldname, newname);
    } else {
        println!(
            "The directory {} could not be renamed into {}",
            oldname, newname
        );
    }
}

fn rename_file(oldname: &str, newname: &str) -> bool {
    let file = File::new(oldname);
    let file2 = File::new(newname);
    if let Err(e) = file.rename(&mut file2) {
        println!("The file could not be renamed into {}: {}", newname, e);
        return false;
    }
    true
}
