use std::fs;
use std::io;
use std::path::Path;

fn main() -> io::Result<()> {
    fs::File::create("output.txt")?;
    fs::File::create(&Path::new("/").join("output.txt"))?;
    fs::create_dir("docs")?;
    fs::create_dir(&Path::new("/").join("docs"))?;
    Ok(())
}
