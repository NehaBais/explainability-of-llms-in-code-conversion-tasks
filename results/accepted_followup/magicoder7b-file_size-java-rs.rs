use std::fs;

fn main() {
    match fs::File::open("file.txt") {
        Ok(mut fileA) => println!("{} B", fs::metadata(&fileA).unwrap().len()),
        Err(_e) => println!("Could not open file"),
    }

    match fs::File::open("/file.txt") {
        Ok(mut fileB) => println!("{} B", fs::metadata(&fileB).unwrap().len()),
        Err(_e) => println!("Could not open root file"),
    }
}
