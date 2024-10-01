use std::fs;

fn main() {
    match fs::metadata("input.txt") {
        Ok(metadata) => println!("{:?}", metadata),
        Err(error) => println!("{}", error),
    }

    match fs::metadata("/input.txt") {
        Ok(metadata) => println!("{:?}", metadata),
        Err(error) => println!("{}", error),
    }

    match fs::metadata("docs") {
        Ok(metadata) => println!("{:?}", metadata),
        Err(error) => println!("{}", error),
    }

    match fs::metadata("/docs") {
        Ok(metadata) => println!("{:?}", metadata),
        Err(error) => println!("{}", error),
    }
}
