use std::fs;
use std::io;

fn main() -> io::Result<()> {
    fs::OpenOptions::new()
        .write(true)
        .create_new(true)
        .open("output.txt")?;
    fs::create_dir_all("docs")?;

    let mut path = std::env::current_dir()?;
    path.push("output.txt");
    fs::OpenOptions::new()
        .write(true)
        .create_new(true)
        .open(&path)?;

    path.pop(); // remove "output.txt" from path
    path.push("docs");
    fs::create_dir_all(&path)?;

    Ok(())
}
