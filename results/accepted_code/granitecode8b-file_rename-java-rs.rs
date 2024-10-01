use std::fs;
use std::io;
fn rename_file(old_name: &str, new_name: &str) -> io::Result<()> {
    fs::rename(old_name, new_name)?;
    Ok(())
}
fn main() {
    let old_name = "input.txt";
    let new_name = "output.txt";
    match rename_file(&old_name, &new_name) {
        Ok(_) => println!("{} was renamed as {}", old_name, new_name),
        Err(e) => eprintln!("Error renaming {}: {}", old_name, e),
    }
    let old_name = "docs";
    let new_name = "mydocs";
    match rename_file(&old_name, &new_name) {
        Ok(_) => println!("{} was renamed as {}", old_name, new_name),
        Err(e) => eprintln!("Error renaming {}: {}", old_name, e),
    }
}
