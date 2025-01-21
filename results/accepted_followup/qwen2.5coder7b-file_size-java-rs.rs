use std::fs;
use std::io;

fn main() -> io::Result<()> {
    let file_a = fs::metadata("file.txt")?;
    let size_a = file_a.len();
    println!("{}, B", size_a);

    let file_b = fs::metadata("/file.txt")?;
    let size_b = file_b.len();
    println!("{}, B", size_b);

    Ok(())
}
