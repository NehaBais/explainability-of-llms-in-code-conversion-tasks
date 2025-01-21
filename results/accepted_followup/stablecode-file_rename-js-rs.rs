use std::fs;
use std::io;
use std::path::Path;

fn main() {
    let current_dir = std::env::current_dir().unwrap();

    rename_file(&current_dir, "input.txt", "output.txt"));
    rename_folder(
        &current_dir,
        "docs",
        "mydocs",
    ));
    rename_file(&std::env::home_dir().unwrap(), "input.txt", "c:/output.txt"));
    rename_folder(
        &std::env::home_dir().unwrap(),
        "docs",
        "mydocs",
    ));
}

fn rename_file(args: &[String]) {
    let source = args[0].clone();
    let dest = args[1].clone();

    if let Ok(_) = fs::rename(&source, &dest)) {
        println!("Renamed file from {} to {}", &source, &dest);
    } else {
        eprintln!("Failed to rename file");
    }
}

fn rename_folder(args: &[String]) {
    let source = args[0].clone();
    let dest = format!("{}/{}", &args[1], &args[2]));

    if let Ok(_) = fs::rename(&source, &dest)) {
        println!("Renamed folder from {} to {}", &source, &dest);
    } else {
        eprintln!("Failed to rename folder");
    }
}