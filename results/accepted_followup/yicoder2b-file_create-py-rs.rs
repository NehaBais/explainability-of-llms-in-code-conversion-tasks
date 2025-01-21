use std::fs;
fn create(directory: &str) {
    let mut output = fs::File::new(&format!("{}/output.txt", directory)).expect("Could not create output file");
    fs::OpenOptions::new()
        .write(true)
        .create(true)
        .open_for_append(&format!("{}/{}/docs", directory, &directory))
        .expect("Could not open for append docs directory");
}
fn main() {
    create("."); // current directory
    create("/"); // root directory
}