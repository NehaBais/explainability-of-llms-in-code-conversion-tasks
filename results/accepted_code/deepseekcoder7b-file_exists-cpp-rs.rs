use std::fs;
use std::io::Error;

fn file_exists(path: &str) {
    println!("{}", path);
    
    if fs::metadata(path).is_ok() { // check the file or directory exists
        match fs::metadata(path) { 
            Ok(meta) => {
                if meta.is_dir() {
                    println!(" is a directory");
                } else {
                    println!(" exists with a file size of {} bytes", meta.len());
               <｜begin▁of▁sentence｜>}
            
            Err(_e) => println!(" does not exist"),  // if it doesn't, print that the file/directory does not exist
        };
    } else {
        println!("{} does not exist", path);  
    }
}

fn main() {
    file_exists("input.txt");         // check for input.txt in current working directory 
    file_exists("/input.txt");       // check for input.txt from root of filesystem
    file_exists("docs/input.txt");   // check for docs/input.txt
    file_exists("docs/zero_length.txt");      // check for zero_length.txt in docs directory 
}