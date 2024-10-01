use std::fs::File;
use std::path::PathBuf;

fn main() {
    let mut fso = std::process::env(); // equivalent to new ActiveXObject in JS

    let path = PathBuf::from("input.txt");
    if fso.try_get_absolute_path(&path).is_some() {
        println!("File exists");
    } else {
        println!("File does not exist");
    }

    let path = PathBuf::from("c:/input.txt");
    if fso.try_get_absolute_path(&path).is_some() {
        println!("File exists");
    } else {
        println!("File does not exist");
    }

    let path = PathBuf::from("docs");
    if fso.try_get_absolute_path(&path).is_some() {
        println!("Folder exists");
    } else {
        println!("Folder does not exist");
    }

    let path = PathBuf::from("c:/docs");
    if fso.try_get_absolute_path(&path).is_some() {
        println!("Folder exists");
    } else {
        println!("Folder does not exist");
    }
}
