use std::path::{Path, PathBuf};
fn main() {
    let current_dir = Path::new(".");
    let root_dir = Path::new("/");

    println!(
        "Is input.txt in {}?: {}",
        current_dir.display(),
        Path::new("input.txt").exists()
    );
    println!(
        "Is input.txt in /?: {}",
        root_dir.display(),
        Path::new("/input.txt").exists()
    );
    println!(
        "Is docs in {}?: {}",
        current_dir.display(),
        Path::new("docs").exists()
    );
    println!(
        "Is docs in /?: {}",
        root_dir.display(),
        Path::new("/docs").exists()
    );
}
