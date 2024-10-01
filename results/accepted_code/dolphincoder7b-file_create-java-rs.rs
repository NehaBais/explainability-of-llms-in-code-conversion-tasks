use std::fs;

fn main() {
    let current_dir = fs::canonicalize(".").unwrap();

    // Create output.txt file in current working directory
    if let Ok(output_file) = fs::File::create("output.txt") {
        println!("{:?}", output_file);
    } else {
        panic!("Error creating output.txt");
    }

    // Create output.txt file in the filesystem root
    if let Ok(output_root_file) = fs::File::create(&current_dir.join("output.txt")) {
        println!("{:?}", output_root_file);
    } else {
        panic!("Error creating output.txt at root");
    }

    // Create empty directory docs in current working directory
    if let Ok(_) = fs::DirBuilder::new().create("docs") {
        println!("Created empty directory docs.");
    } else {
        panic!("Error creating directory docs.");
    }

    // Create empty directory docs in the filesystem root
    if let Ok(_) = fs::DirBuilder::new().create(&current_dir.join("docs")) {
        println!("Created empty directory docs at root.");
    } else {
        panic!("Error creating directory docs at root.");
    }
}
