use std::fs::{exists, File};

fn main() {
    let input_txt = "input.txt".to_string();
    let docs = "/docs".to_string();

    // Check for regular file in current working directory
    if let Ok(stat) = stat(&input_txt) {
        println!("input.txt is a regular file? {:?}", if stat.is_file() { Some(true) } else { None });
    } 
    // Check for directory in current working directory
    if let Ok(stat) = stat(&docs) {
        println!("/docs is a directory? {:?}", if stat.is_directory() { Some(true) } else { None });
    }

    // Check for regular file in root filesystem
    if let Ok(stat) = stat(&input_txt) {
        println!("/input.txt is a regular file? {:?}", if stat.is_file() { Some(true) } else { None });
    } 
    // Check for directory in root filesystem
    if let Ok(stat) = stat(&docs) {
        println!("/docs is a directory? {:?}", if stat.is_directory() { Some(true) } else { None });
    }
}