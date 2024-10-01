use std::fs::File;
use std::path::Path;

fn main() {
    let path = Path::new("input.txt");
    if !path.exists() {
        panic!("{} does not exist", path.display());
    }

    let path = Path::new("/c/input.txt");
    if !path.exists() {
        panic!("{} does not exist", path.display());
    }

    let path = Path::new("docs");
    if !path.exists() {
        panic!("{} does not exist", path.display());
    }

    let path = Path::new("/c/docs");
    if !path.exists() {
        panic!("{} does not exist", path.display());
    }
}
