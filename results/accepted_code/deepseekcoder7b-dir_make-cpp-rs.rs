use std::env;
use std::fs;
use std::process;

fn main() {
    let args: Vec<String> = env::args().collect();
    
    if args.len() != 2 {
        eprintln!("usage: mkdir <path>");
        process::exit(1);
    }

    let path_to_create = &args[1];
    
    match fs::metadata(path_to_create) {
        Ok(info) => {
            if info.is_dir() {
                println!("Directory already exists: {}", path_to_create);
            } else {
                eprintln!("Path exists but is not a directory: {}", path_to_create);
                process::exit(1);
           <｜begin▁of▁sentence｜>}
        }
        Err(_info) => {
            match fs::create_dir(&args[1]) {
                Ok(_info) => println!("Directory created at: {}", path_to_create),
                Err(error) => eprintln!("Could not create directory: {}. Reason: {}", path_to_create, error),
            }
        }
    };
}