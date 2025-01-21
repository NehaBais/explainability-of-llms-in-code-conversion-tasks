use std::fs::File;
use std::io::{self, Read};
use std::path::Path;

fn main() -> io::Result<()> {
    let path1 = Path::new("input.txt");
    let mut file1 = File::open(path1)?;
    let metadata1 = file1.metadata()?;
    println!(
        "Size of file at {}: {} bytes",
        path1.display(),
        metadata1.len()
    );

    let path2 = Path::new("/input.txt");
    let mut file2 = File::open(path2)?;
    let metadata2 = file2.metadata()?;
    println!(
        "Size of file at {}: {} bytes",
        path2.display(),
        metadata2.len()
    );

    Ok(())
}
