use std::fs;
use std::path;

fn main() {
    let path = "./example";
    let resolved_path = fs::canonicalize(path).unwrap();
    println!("{}", resolved_path.display());
}
