use std::fs::metadata;

fn main() {
    if let Ok(md) = metadata("input.txt") {
        println!("{}", md.len());
    } else {
        println!("Failed to get metadata for input.txt");
    }

    if let Ok(md) = metadata("/input.txt") {
        println!("{}", md.len());
    } else {
        println!("Failed to get metadata for /input.txt");
    }
}
