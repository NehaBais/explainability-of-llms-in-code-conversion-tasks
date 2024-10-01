use std::fs::{exists, read_dir, File};

fn main() {
    let input_txt = "input.txt".to_string();
    let docs = "/docs".to_string();

    // Check for regular file in current working directory
    let check_reg_current = if let Ok(stat) = stat(&input_txt) {
        if stat.is_file() {
            true
        } else {
            false
        }
    };
    println!("input.txt is a regular file? {:?}", check_reg_current);

    // Check for directory in current working directory
    let check_dir_current = if let Ok(stat) = stat(&docs) {
        if stat.is_directory() {
            true
        } else {
            false
        }
    };
    println!("/docs is a directory? {:?}", check_dir_current);

    // Check for regular file in root filesystem
    let check_reg_root = if let Ok(stat) = stat(&input_txt) {
        if stat.is_file() {
            true
        } else {
            false
        }
    };
    println!("/input.txt is a regular file? {:?}", check_reg_root);

    // Check for directory in root filesystem
    let check_dir_root = if let Ok(stat) = stat(&docs) {
        if stat.is_directory() {
            true
        } else {
            false
        }
    };
    println!("/docs is a directory? {:?}", check_dir_root);
}
