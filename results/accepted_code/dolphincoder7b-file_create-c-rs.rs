use std::fs::{create_dir, remove_file};

fn main() {
    create_dir("docs").unwrap();
    remove_file("output.txt").unwrap();

    std::fs::File::create("output.txt").expect("Unable to create file");

    println!("The 'here' output directory has been created.");
    println!("The filesystem root has also been created.");
}
