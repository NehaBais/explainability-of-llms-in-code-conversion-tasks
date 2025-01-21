use std::fs::File;
use std::io::{self, BufReader};

fn main() {
    let input = "input.txt".to_string();
    print_file_size(&input);

    let root_input = "/input.txt".to_string();
    print_file_size(&root_input);
}

fn print_file_size(filename: &str) {
    match File::open(filename) {
        Ok(mut file) => {
            let mut reader = BufReader::new(file);
            reader.read((b' ', 1024)) // 1kb buffer
                  .expect("Expected to read a line of text");
            println!("{} bytes", b' ');
        }
        Err(e) => {
            eprintln!(
                "Error occurred while trying to read file '{}': {}",
                filename, e
            );
            std::process::exit(-1); // or better use process::abort() for program aborting
        }
    };
}