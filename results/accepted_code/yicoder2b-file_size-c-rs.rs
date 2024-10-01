use std::fs::File;
use std::io::{self, Parser, Result};
use std::process;
use std::path::PathBuf;

fn main() {
    let args: Vec<String> = process_args();
    if args.len() != 2 {
        println!("Usage: {} [file]", args[0]);
        return;
    }
    let file = &args[1];

    match File::open(file) {
        Ok(mut f) => {
            let mut line = String::new();
            while let read = f.read_line(&mut line) {
                if let Err(_e) = read { break; }
                println!("{}", line);
                // Do something with the line (you can also add other actions like filtering or indexing lines)
            }
        }
        Err(io::Error _e) => { println!("Failed to open file: {}", file); },
    };

    let root = "/input.txt";
    match File::open(&root) {
        Ok(mut f) => {
            let mut line = String::new();
            while let read = f.read_line(&mut line) {
                if let Err(_e) = read { break; }
                println!("{}", line);
                // Do something with the root file (you can also add other actions like filtering or indexing lines)
            }
        }
        Err(io::Error _e) => { println!("Failed to open root file: {}", root); },
    };
}