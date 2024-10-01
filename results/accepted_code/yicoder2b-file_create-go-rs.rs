use std::fs;
use std::os::Write;

fn main() {
    // Create "input.txt" file
    let input_txt = "input.txt";
    if !fs::exists(&input_txt) {
        match fs::File::create(input_txt) {
            Ok(_) => println!("{} created!", input_txt),
            Err(e) => println!("Error creating {}: {}", input_txt, e),
        }
    } else {
        println!("{} already exists.", input_txt);
    }

    // Create "/input.txt" file at root of filesystem
    let input_txt = "/input.txt";
    if !fs::exists(&input_txt) {
        match fs::File::create(input_txt) {
            Ok(_) => println!("{} created!", input_txt),
            Err(e) => println!("Error creating {}: {}", input_txt, e),
        }
    } else {
        println!("{} already exists.", input_txt);
    }

    // Create "docs" directory
    let docs = "docs";
    if !fs::exists(&format!("{}/{}", &std::env::HOME(), docs)) {
        match fs::Dir::new(docs) {
            Ok(_) => println!("{} created!", format!("{}/{}", &std::env::HOME(), docs)),
            Err(e) => println!("Error creating directory: {}", e),
        }
    } else {
        println!("Directory {} already exists.", docs);
    }

    // Create "/docs" directory at root of filesystem
    let docs = "docs";
    if !fs::exists(&format!("{}/{}", &std::env::HOME(), docs)) {
        match fs::Dir::new(docs) {
            Ok(_) => println!("{} created!", format!("{}/{}", &std::env::HOME(), docs)),
            Err(e) => println!("Error creating directory: {}", e),
        }
    } else {
        println!("Directory {} already exists.", docs);
    }
}
