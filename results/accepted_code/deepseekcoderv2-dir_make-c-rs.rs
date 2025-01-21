use std::env;
use std::fs;
use std::path::Path;

fn main() {
    let args: Vec<String> = env::args().collect();
    if args.len() != 2 {
        eprintln!("usage: {} <path>", args[0]);
        return;
    }

    let path_str = &args[1];
    let path = Path::new(path_str);

    // Ensure all parent directories are created
    if !path.exists() {
        match fs::create_dir_all(path) {
            Ok(_) => (),
            Err(e) => {
                eprintln!("Failed to create directory: {}", e);
                return;
            }
        }
    } else {
        let metadata = match fs::metadata(path) {
            Ok(meta) => meta,
            Err(e) => {
                eprintln!("Failed to get metadata: {}", e);
                return;
            }
        };
        if !metadata.is_dir() {
            eprintln!("The specified path is not a directory.");
            return;
        }
    }
}