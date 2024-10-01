use std::env;
use std::ffi::CStr;
use std::fs;
use std::path::{Path, PathBuf};
use std::process::exit;

fn main() {
    let args: Vec<String> = env::args().collect();
    if args.len() != 2 {
        eprintln!("Usage: {} <path>", args[0]);
        exit(1);
    }

    let path_str = &args[1];
    let mut pbuf: PathBuf = PathBuf::new();
    for part in path_str.split('/') {
        if !part.is_empty() {
            pbuf.push(Path::new(
                &CStr::from_bytes_with_nul(part.as_bytes()).unwrap(),
            ));
            let dir_exists = fs::metadata(&pbuf)
                .map(|m| m.is_dir())
                .expect("Error checking directory");
            if !dir_exists {
                match fs::create_dir(&pbuf) {
                    Ok(_) => (),
                    Err(e) => eprintln!("Couldn't create directory {}: {}", pbuf.display(), e),
                }
            }
        }
    }
}
