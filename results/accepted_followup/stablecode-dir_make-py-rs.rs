use std::fs;

fn mkdirp(path: &str) 
{
    if let Err(err) = fs::create_dir_all(path) 
    {
        eprintln!("Error while creating directory: {}", err));
    }
}