use std::env;
use std::fs;

fn main() {
    let args: Vec<String> = env::args().collect();

    if args.len() != 2 {
        eprintln!("usage: mkdir <path>");
        std::process::exit(-1);
    }

    let path_to_create = &args[1];

    match fs::create_dir_all(path_to_create) {
        Ok(_) => (),
        Err(e) => {
            eprintln!("couldn't create directory: {}", e);
            std::process::exit(-1);
        }
    }
}
