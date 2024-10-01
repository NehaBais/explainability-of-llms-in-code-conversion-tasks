use std::fs;
use std::io;

fn main() -> io::Result<()> {
    create_empty_file("output.txt")?;
    create_empty_file("/output.txt")?;

    fs::create_dir("docs")?;
    fs::create_dir("/docs")?;

    Ok(())
}

fn create_empty_file(path: &str) -> io::Result<()> {
    let file = fs::File::create(path)?;
    io::Write::write_all(&file, &[])?;
    Ok(())
}
