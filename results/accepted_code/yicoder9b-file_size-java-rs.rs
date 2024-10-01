use std::fs::metadata;

fn main() -> std::io::Result<()> {
    let file_a = metadata("file.txt")?;
    println!("{} B", file_a.len());

    // In Rust, you can't just directly use the root directory path like "/file.txt"
    // because it depends on the operating system and might not be universally valid.
    // It is always safer to get the current working directory and then join with the filename.
    let cwd = std::env::current_dir()?;
    let file_b = metadata(cwd.join("/file.txt"))?;
    println!("{} B", file_b.len());

    Ok(())
}
