use std::{fs, io};

fn main() -> io::Result<()> {
    let path = "./output.txt";
    if fs::metadata(path)?.len() == 0 {
        fs::OpenOptions::new().create(true).write(true).open(path)?;
    }
    let path = "/output.txt";
    if fs::metadata(path)?.len() == 0 {
        fs::OpenOptions::new().create(true).write(true).open(path)?;
    }
    fs::create_dir("docs")?;
    fs::create_dir("/")?;
    Ok(())
}
