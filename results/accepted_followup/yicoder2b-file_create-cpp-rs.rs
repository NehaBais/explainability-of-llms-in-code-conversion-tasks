fn main() {
    // Create a new empty file named "output.txt" in current directory
    fs::write_to(&[0x00], "output.txt").expect("Failed to write to file");

    // Create a new directory named "docs" in current directory 
    fs::create_dir_in_current_dir("docs").expect("Failed to create dir");
}