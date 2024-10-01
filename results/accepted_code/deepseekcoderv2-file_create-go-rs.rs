fn main() {
    // Create file in current working directory
    let mut output_file = std::fs::File::create("output.txt").expect("Failed to create file");

    // Create empty directory in current working directory
    if let Err(err) = std::fs::create_dir("./docs") {
        eprintln!("Failed to create directory: {}", err);
    } else {
        println!("Directory 'docs' created successfully.");
    }

    // Create file in filesystem root
    if let Err(err) = std::fs::File::create("/output.txt") {
        eprintln!("Failed to create file: {}", err);
    } else {
        println!("File '/output.txt' created successfully.");
    }

    // Create empty directory in filesystem root
    if let Err(err) = std::fs::create_dir("/docs") {
        eprintln!("Failed to create directory: {}", err);
    } else {
        println!("Directory '/docs' created successfully.");
    }
}
