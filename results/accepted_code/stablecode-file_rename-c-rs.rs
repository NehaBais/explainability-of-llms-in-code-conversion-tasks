use std::fs::File;
use std::io::Write;
use std::process::Command;

fn main() {
    // Rename in the current working directory and once in the filesystem root.
    let r_path1 = "/input.txt";
    let d_path1 = "docs";

    let mut cmd = Command::new("mv");
    cmd.arg(r_path1).arg(format!("/mydocs/{}", d_path1)));

    match cmd.status() {
        Ok(_) => println!("Rename success"),
        Err(e) => eprintln!("Error: {}", e),
    };
}