use std::fs;
use std::io;
fn main() {
    let args: Vec<_> = std::env::args().collect();
    if args.len() != 2 {
        println!("usage: mkdir <path>");
        return;
    }

    let path_to_create = &args[1];

    match fs::create_dir_all(path_to_create) {
        Ok(()) => {}
        Err(e) => {
            println!("couldn't create directory: {}", e);
            return;
        }
    }
}
