use std::fs;

fn main() {
    let input_file = "input.txt";
    let input_dir = "/input.txt";
    let docs_file = "docs";
    let docs_dir = "/docs";

    if let Err(e) = fs::stat(&input_file) {
        println!("Error stat'ing {}: {}", input_file, e);
    } else if fs::File::new(&input_file).map(|f| f.readable()).is_err() {
        println!("Unable to open {}", input_file);
    } else {
        println!("{} exists and is a file", input_file);
    }

    if let Err(e) = fs::stat(&input_dir) {
        println!("Error stat'ing {}: {}", input_dir, e);
    } else if fs::read_dir(&input_dir).is_err() {
        println!("Unable to read directory {}", input_dir);
    } else {
        println!("{} exists and is a directory", input_dir);
    }

    if let Err(e) = fs::stat(&docs_file) {
        println!("Error stat'ing {}: {}", docs_file, e);
    } else if fs::File::new(&docs_file).map(|f| f.readable()).is_err() {
        println!("Unable to open {}", docs_file);
    } else {
        println!("{} exists and is a file", docs_file);
    }

    if let Err(e) = fs::stat(&docs_dir) {
        println!("Error stat'ing {}: {}", docs_dir, e);
    } else if fs::read_dir(&docs_dir).is_err() {
        println!("Unable to read directory {}", docs_dir);
    } else {
        println!("{} exists and is a directory", docs_dir);
    }
}
