use std::path::Path;

fn check_file_and_directory() {
    let current_working_dir = Path::new("docs/input.txt");
    let filesystem_root_dir = Path::new("/docs/input.txt");

    // Check if the file and directory exist in the current working directory
    println!(
        "Does 'docs/input.txt' exist in the current working directory? {}",
        current_working_dir.exists()
    );

    // Check if the file and directory exist in the filesystem root
    println!(
        "Does '/docs/input.txt' exist in the filesystem root? {}",
        filesystem_root_dir.exists()
    );
}

fn main() {
    check_file_and_directory();
}
