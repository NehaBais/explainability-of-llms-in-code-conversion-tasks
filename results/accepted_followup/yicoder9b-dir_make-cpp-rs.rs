use std::{error::Error, fs};

fn main() -> Result<(), Box<dyn Error>> {
    let args: Vec<String> =  std::env::args().collect();
    if args.len() != 2 {
        println!("usage: mkdir <path>");
        return Err("Invalid arguments count".into());
    }

    let path_to_create = &args[1];

    if fs::metadata(path_to_create)?.is_dir() {
        Ok(())
    } else {
        fs::create_dir_all(path_to_create)?;
        Ok(())
    }
}