use std::fs::rename;
use std::path::Path;

fn main() {
    let source = Path::new("input.txt");
    let dest = Path::new("output.txt");
    if source.exists() {
        rename(source, dest).unwrap();
    }

    let source_dir = Path::new("docs");
    let dest_dir = Path::new("mydocs");
    if source_dir.exists() {
        rename(source_dir, dest_dir).unwrap();
    }

    // For renaming files and directories in the filesystem root, you would
    // need to specify their absolute paths, for instance:
    let source = Path::new("/root/input.txt");
    let dest = Path::new("/root/output.txt");
    if source.exists() {
        rename(source, dest).unwrap();
    }

    let source_dir = Path::new("/root/docs");
    let dest_dir = Path::new("/root/mydocs");
    if source_dir.exists() {
        rename(source_dir, dest_dir).unwrap();
    }
}
