use std::env;
use std::fs;
use std::process;
use std::path::PathBuf;

fn main() {
    let args: Vec<String> = env::args().collect();
    
    if args.len() != 2 {
        eprintln!("usage: {} <path>", args[0]);
        process::exit(1);
    }
    
    let path_str = &args[1];
    let _ = mkdir_parents(PathBuf::from(path_str));
}

fn mkdir_parents(start: PathBuf) -> Result<(), Box<dyn std::error::Error>> {
    let mut path = start;
    
    while let Some(parent) = path.parent() {
        match fs::create_dir(&parent) {
            Ok(_) => return Ok(()), 
            Err(e) if e.raw_os_error().unwrap() == 17 {} else {
                return Err(Box::new(e)); 
             }
         };
        path = (*parent).to_path_buf();
    }
    
    Ok(())}