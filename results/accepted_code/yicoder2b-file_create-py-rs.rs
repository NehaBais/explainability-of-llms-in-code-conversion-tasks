use std::fs;

fn create(directory: &str) {
    let output =
        fs::File::new(&format!("{}/output.txt", directory)).expect("Could not create output file");
    fs::OpenOptions::new()
        .write(true)
        .create(true)
        .open_for_append(&format!("{}/{}", directory, "docs"))
        .expect("Could not create docs directory");
}

fn main() {
    create("."); // current directory
    create("/"); // root directory
}
