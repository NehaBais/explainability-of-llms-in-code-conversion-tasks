use std::fs;

fn main() -> std::io::Result<()> {
    let fileA = fs::File::open("file.txt")?;
    let metadataA = fileA.metadata()?;
    println!("{}, A", metadataA.len());

    let fileB = fs::File::open("/file.txt")?;
    let metadataB = fileB.metadata()?;
    println!("{}, B", metadataB.len());

    Ok(())
}
