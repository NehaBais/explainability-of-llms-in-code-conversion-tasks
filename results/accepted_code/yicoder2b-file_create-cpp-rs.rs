use std::{fs, io};

fn main() {
    // Create a new empty file named "output.txt" in the current directory
    let mut f = std::stdout();
    let _ = f.write_to(&[0x00]); 

    // Create a new empty file named "/output.txt" in filesystem root
    std::process::exit(fs::create_file(&[0x2f, 0x76, 0x6f, 0x75, 0x74, 0x3a, 0x2f, 0x2f, 0x6f, 0x75, 0x74, 0x65, 0x74]).expect(&"Failed to create file"))

    // Create a new directory named "docs" in the current directory
    let _ = fs::create_dir_in_root("docs").expect(&"Failed to create dir");

    // Create a new directory named "/docs" in filesystem root
    std::process::exit(fs::create_dir_in_root("/docs").expect(&"Failed to create dir"))
}