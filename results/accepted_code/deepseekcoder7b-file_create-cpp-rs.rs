use dirs;
use std::fs;

fn main() {
    // Create an empty file in the current directory
    let _ = fs::File::create("output.txt");

    // Get root path and create a new empty file at filesystem root
    if let Some(root) = dirs::home_dir() {
        let path = root.join("output.txt");
        let _ = fs::File::create(&path);

        // Create an empty directory in the current directory
        let _ = fs::DirBuilder::new()
            .recursive(true)
            .write(true)
            .create("docs");

        // Get root path and create a new directory at filesystem root
        if let Some(root) = dirs::home_dir() {
            let path = root.join("docs");
            let _ = fs::DirBuilder::new()
                .recursive(true)
                .write(true)
                .create(&path);
        }
    }
}
