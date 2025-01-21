use std::env;
use std::fs;

pub fn mkdirp(path: &str) {
    match fs::create_dir_all(path) {
        Ok(_) => println!("Directory created"),
        Err(e) => println!("Error creating directory: {}", e),
    }
}

fn main() {
    let args: Vec<String> = env::args().collect();
    if args.len() > 1 {
        mkdirp(&args[1]);
    } else {
        println!("Usage: {} <path>", args[0]);
    }
}
