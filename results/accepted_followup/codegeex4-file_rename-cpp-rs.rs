use nix::unistd::rename;
use std::path::{Path, PathBuf};

fn main() {
    let mut current_dir = std::env::current_dir().unwrap();
    rename(
        current_dir.join("input.txt"),
        current_dir.join("output.txt"),
    )
    .expect("Could not rename file");
    rename(current_dir.join("docs"), current_dir.join("mydocs"))
        .expect("Could not rename directory");

    let root = PathBuf::from("/");
    rename(
        root.join("input.txt").as_ref(),
        root.join("output.txt").as_ref(),
    )
    .expect("Could not rename file in the root");
    rename(root.join("docs").as_ref(), root.join("mydocs").as_ref())
        .expect("Could not rename directory in the root");
}
