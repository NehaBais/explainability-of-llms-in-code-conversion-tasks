use std::fs;
use std::io::Write;

fn main() {
    // Create an empty "output.txt" here
    let mut file = match fs::File::create("output.txt") {
        Err(error) => panic!("Unable to create output.txt: {:?}", error),
        Ok(file) => file,
    };
    match file.flush() {
        Err(error) => eprintln!("Unable to flush file: {:?}", error),
        _ => (),
    }

    // Create an empty "output.txt" in the filesystem root (requires admin rights)
    let mut root_file = match fs::File::create("/output.txt") {
        Err(error) => panic!("Unable to create /output.txt: {:?}", error),
        Ok(file) => file,
    };
    match root_file.flush() {
        Err(error) => eprintln!("Unable to flush file in root: {:?}", error),
        _ => (),
    }

    // Create an empty "docs" directory here
    match fs::create_dir("docs") {
        Err(error) => panic!("Unable to create docs directory: {:?}", error),
        _ => (),
    }

    // Create an empty "docs" directory in the filesystem root (requires admin rights)
    match fs::create_dir("/docs") {
        Err(error) => panic!("Unable to create /docs directory: {:?}", error),
        _ => (),
    }
}
