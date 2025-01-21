use std::fs::{self, File};
use std::io::{self, Write};

fn create_file(fn_path: &str) -> io::Result<()> {
    let mut f = File::create(fn_path)?;
    writeln!(f, "")?; // Creating an empty file of size 0 bytes
    println!("file {} created!", fn_path);
    Ok(())
}

fn create_dir(dn_path: &str) -> io::Result<()> {
    fs::create_dir(dn_path)?;
    println!("directory {} created!", dn_path);
    Ok(())
}

fn main() {
    let current_dir = "./";
    let root_dir = "/";

    create_file("output.txt").unwrap();
    create_file("/output.txt").unwrap();

    create_dir("docs").unwrap();
    create_dir("/docs").unwrap();

    // Create in current directory
    create_file(&(current_dir.to_string() + "output.txt")).unwrap();
    create_dir(&(current_dir.to_string() + "docs")).unwrap();

    // Create in root directory
    create_file(&(root_dir.to_string() + "output.txt")).unwrap();
    create_dir(&(root_dir.to_string() + "docs")).unwrap();
}
